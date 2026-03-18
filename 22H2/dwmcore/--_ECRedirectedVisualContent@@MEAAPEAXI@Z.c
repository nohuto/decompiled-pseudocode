/*
 * XREFs of ??_ECRedirectedVisualContent@@MEAAPEAXI@Z @ 0x180018FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRedirectedVisualContent@@MEAA@XZ @ 0x1800191A8 (--1CRedirectedVisualContent@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CRedirectedVisualContent *__fastcall CRedirectedVisualContent::`vector deleting destructor'(
        CRedirectedVisualContent *this,
        char a2)
{
  CRedirectedVisualContent::~CRedirectedVisualContent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x98uLL);
    else
      operator delete(this);
  }
  return this;
}
