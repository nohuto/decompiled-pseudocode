/*
 * XREFs of ?GetAnimationParameters@MultitaskingViewInvocationAnimationCoordinator@@MEAA?AUMultitaskingViewAnimationParameters@MultitaskingViewAnimationCoordinatorBase@@XZ @ 0x18008E290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OWORD *__fastcall MultitaskingViewInvocationAnimationCoordinator::GetAnimationParameters(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax

  result = a2;
  *a2 = MultitaskingViewInvocationAnimationCoordinator::animationParameters;
  a2[1] = xmmword_18056C2F0;
  a2[2] = xmmword_18056C300;
  a2[3] = xmmword_18056C310;
  return result;
}
