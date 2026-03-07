CBlurRenderingGraph *__fastcall CBlurRenderingGraph::`vector deleting destructor'(CBlurRenderingGraph *this, char a2)
{
  CBlurRenderingGraph::~CBlurRenderingGraph(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x640uLL);
  return this;
}
