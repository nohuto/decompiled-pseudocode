/*
 * XREFs of HalpInterruptUnmaskLevelTriggeredLines @ 0x14051EB00
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptRestoreAllControllerState @ 0x140A92630 (HalpInterruptRestoreAllControllerState.c)
 */

__int64 HalpInterruptUnmaskLevelTriggeredLines()
{
  HalpInterruptRestoreAllControllerState();
  return 0LL;
}
