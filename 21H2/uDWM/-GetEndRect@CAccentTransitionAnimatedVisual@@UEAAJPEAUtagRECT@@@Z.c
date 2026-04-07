/*
 * XREFs of ?GetEndRect@CAccentTransitionAnimatedVisual@@UEAAJPEAUtagRECT@@@Z @ 0x180044080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAccentTransitionAnimatedVisual::GetEndRect(
        CAccentTransitionAnimatedVisual *this,
        struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(struct tagRECT *)((char *)this + 56);
  return result;
}
