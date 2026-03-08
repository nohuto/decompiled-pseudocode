/*
 * XREFs of ??_ECBlurRenderingGraph@@EEAAPEAXI@Z @ 0x1800D1320
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBlurRenderingGraph@@EEAA@XZ @ 0x1800D135C (--1CBlurRenderingGraph@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CBlurRenderingGraph *__fastcall CBlurRenderingGraph::`vector deleting destructor'(CBlurRenderingGraph *this, char a2)
{
  CBlurRenderingGraph::~CBlurRenderingGraph(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x640uLL);
  return this;
}
