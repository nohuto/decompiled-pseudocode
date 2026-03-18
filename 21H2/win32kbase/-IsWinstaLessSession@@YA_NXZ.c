/*
 * XREFs of ?IsWinstaLessSession@@YA_NXZ @ 0x1C004FF00
 * Callers:
 *     _GetKeyboardLayout @ 0x1C004FE60 (_GetKeyboardLayout.c)
 *     VKFromVSC @ 0x1C00CD590 (VKFromVSC.c)
 * Callees:
 *     ApiSetEditionGetProcessWindowStation @ 0x1C004FF1C (ApiSetEditionGetProcessWindowStation.c)
 */

bool IsWinstaLessSession(void)
{
  return ApiSetEditionGetProcessWindowStation() == 0;
}
