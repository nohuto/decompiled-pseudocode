/*
 * XREFs of WaitForCommandComplete @ 0x1C0025578
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C000EC00 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall WaitForCommandComplete(__int64 a1, __int64 a2, char a3)
{
  return WaitForCommandCompleteWithCustomTimeout(a1, a2, a3, 10000000);
}
