#ifndef BOX2DEDGE_HPP
#define BOX2DEDGE_HPP

#include "QBox2D/QFixture.hpp"

class Box2DEdge : public QFixture {
 private:
  b2EdgeShape m_edgeShape;

 protected:
  std::unique_ptr<b2Shape> createShape() const;
  std::unique_ptr<SceneGraph::Node> synchronize(
      std::unique_ptr<SceneGraph::Node>);

 public:
  explicit Box2DEdge(SceneGraph::Item* parent = nullptr);

  inline b2EdgeShape& edgeShape() { return m_edgeShape; }
  std::vector<QPointF> vertices() const;
};

#endif  // BOX2DEDGE_HPP
