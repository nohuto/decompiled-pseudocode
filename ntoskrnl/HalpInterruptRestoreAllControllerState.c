/*
 * XREFs of HalpInterruptRestoreAllControllerState @ 0x140A92630
 * Callers:
 *     HalpInterruptMaskLevelTriggeredLines @ 0x14051E900 (HalpInterruptMaskLevelTriggeredLines.c)
 *     HalpInterruptUnmaskLevelTriggeredLines @ 0x14051EB00 (HalpInterruptUnmaskLevelTriggeredLines.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140A94CE0 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HalpInterruptRestoreController @ 0x140518478 (HalpInterruptRestoreController.c)
 */

void HalpInterruptRestoreAllControllerState()
{
  ULONG_PTR *v0; // rbx
  __int64 v1; // rcx
  int v2; // eax

  v0 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  while ( v0 != &HalpRegisteredInterruptControllers )
  {
    v1 = (__int64)v0;
    v0 = (ULONG_PTR *)*v0;
    v2 = HalpInterruptRestoreController(v1, 0);
    if ( v2 < 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 3uLL, v2);
  }
  HalpInterruptPicStateIntact = 1;
}
