/*
 * XREFs of ??_GCWindowNode@@MEAAPEAXI@Z @ 0x180035450
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWindowNode@@MEAA@XZ @ 0x180035494 (--1CWindowNode@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CWindowNode *__fastcall CWindowNode::`scalar deleting destructor'(CWindowNode *this, char a2)
{
  unsigned int v4; // r8d

  CWindowNode::~CWindowNode(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x3A8, v4);
    else
      operator delete(this);
  }
  return this;
}
