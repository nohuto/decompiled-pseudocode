/*
 * XREFs of ?IsWinstaLessSession@@YA_NXZ @ 0x1C0082864
 * Callers:
 *     _GetKeyboardLayout @ 0x1C00827AC (_GetKeyboardLayout.c)
 *     VKFromVSC @ 0x1C021B5D0 (VKFromVSC.c)
 * Callees:
 *     ApiSetEditionGetProcessWindowStation @ 0x1C0082880 (ApiSetEditionGetProcessWindowStation.c)
 */

bool IsWinstaLessSession(void)
{
  return ApiSetEditionGetProcessWindowStation() == 0;
}
