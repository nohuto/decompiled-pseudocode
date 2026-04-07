/*
 * XREFs of ?GetEndClip@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z @ 0x180043C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::GetEndClip(struct tagRECT *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = this[56];
  return result;
}
