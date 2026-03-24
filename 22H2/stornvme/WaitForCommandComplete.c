/*
 * XREFs of WaitForCommandComplete @ 0x1C001CC00
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0006C40 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall WaitForCommandComplete(int a1)
{
  return WaitForCommandCompleteWithCustomTimeout(a1);
}
