/*
 * XREFs of ?GetBeginRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z @ 0x180043BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::GetBeginRect(struct tagRECT *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = this[53];
  return result;
}
