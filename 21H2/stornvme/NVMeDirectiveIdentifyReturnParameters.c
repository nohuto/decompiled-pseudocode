/*
 * XREFs of NVMeDirectiveIdentifyReturnParameters @ 0x1C0018714
 * Callers:
 *     NVMeInitStreams @ 0x1C000EE88 (NVMeInitStreams.c)
 * Callees:
 *     SetPrpFromBuffer @ 0x1C0002BA8 (SetPrpFromBuffer.c)
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0005900 (SrbAssignQueueId.c)
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005AAC (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0005B00 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeDirectiveIdentifyReturnParameters(__int64 a1)
{
  NVMeAllocateDmaBuffer(a1, 0x40u);
  return 3238002691LL;
}
