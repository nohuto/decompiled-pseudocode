/*
 * XREFs of ?GetAnimationParameters@MultitaskingViewInvocationAnimationCoordinator@@MEAA?AUMultitaskingViewAnimationParameters@MultitaskingViewAnimationCoordinatorBase@@XZ @ 0x18008E2B0
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
  a2[1] = xmmword_18056C380;
  a2[2] = xmmword_18056C390;
  a2[3] = xmmword_18056C3A0;
  return result;
}
