/*
 * XREFs of NVMeDirectiveStreamsReturnParameters @ 0x1C0018C68
 * Callers:
 *     NVMeInitStreams @ 0x1C000EE88 (NVMeInitStreams.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C00137A4 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C0013958 (IoctlStorageStreamsGetParameters.c)
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

__int64 __fastcall NVMeDirectiveStreamsReturnParameters(__int64 a1)
{
  NVMeAllocateDmaBuffer(a1, 0x20u);
  return 3238002691LL;
}
