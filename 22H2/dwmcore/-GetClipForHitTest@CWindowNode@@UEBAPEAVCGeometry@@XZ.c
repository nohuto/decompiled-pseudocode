/*
 * XREFs of ?GetClipForHitTest@CWindowNode@@UEBAPEAVCGeometry@@XZ @ 0x1801078A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CGeometry *__fastcall CWindowNode::GetClipForHitTest(CWindowNode *this)
{
  return (struct CGeometry *)*((_QWORD *)this + 99);
}
