/*
 * XREFs of ?GetAnimationParameters@MultitaskingViewDismissalAnimationCoordinator@@MEAA?AUMultitaskingViewAnimationParameters@MultitaskingViewAnimationCoordinatorBase@@XZ @ 0x18008E2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OWORD *__fastcall MultitaskingViewDismissalAnimationCoordinator::GetAnimationParameters(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax

  result = a2;
  *a2 = MultitaskingViewDismissalAnimationCoordinator::animationParameters;
  a2[1] = xmmword_18056C3C0;
  a2[2] = xmmword_18056C3D0;
  a2[3] = xmmword_18056C3E0;
  return result;
}
