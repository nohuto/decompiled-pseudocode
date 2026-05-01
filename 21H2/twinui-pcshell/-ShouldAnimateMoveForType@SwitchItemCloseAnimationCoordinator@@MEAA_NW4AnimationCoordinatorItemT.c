/*
 * XREFs of ?ShouldAnimateMoveForType@SwitchItemCloseAnimationCoordinator@@MEAA_NW4AnimationCoordinatorItemType@@PEA_N@Z @ 0x180429930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall SwitchItemCloseAnimationCoordinator::ShouldAnimateMoveForType(__int64 a1, int a2, bool *a3)
{
  char v3; // cl

  v3 = 1;
  *a3 = a2 == 1;
  if ( ((a2 - 1) & 0xFFFFFFFC) != 0 || a2 == 2 )
    return 0;
  return v3;
}
