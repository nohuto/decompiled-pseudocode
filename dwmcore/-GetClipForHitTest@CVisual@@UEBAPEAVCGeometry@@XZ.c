/*
 * XREFs of ?GetClipForHitTest@CVisual@@UEBAPEAVCGeometry@@XZ @ 0x1800E7A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CGeometry *__fastcall CVisual::GetClipForHitTest(CVisual *this)
{
  if ( (*((_BYTE *)this + 102) & 1) != 0 )
    return 0LL;
  else
    return (struct CGeometry *)*((_QWORD *)this + 31);
}
