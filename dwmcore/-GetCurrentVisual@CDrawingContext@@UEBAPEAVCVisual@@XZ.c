/*
 * XREFs of ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800D3EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CDrawingContext::GetCurrentVisual(CDrawingContext *this)
{
  if ( !*((_BYTE *)this + 8024) )
    return 0LL;
  if ( *((_BYTE *)this + 8025) )
    return (struct CVisual *)*((_QWORD *)this + 412);
  return (struct CVisual *)*((_QWORD *)this + 1005);
}
