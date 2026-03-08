/*
 * XREFs of NVMeDirectiveIdentifyReturnParameters @ 0x1C001CCC0
 * Callers:
 *     NVMeInitStreams @ 0x1C000F660 (NVMeInitStreams.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     LocalCommandReuse @ 0x1C000C15C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C1C0 (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EE04 (NVMeFreeDmaBuffer.c)
 *     SetPrpFromBuffer @ 0x1C001B45C (SetPrpFromBuffer.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeDirectiveIdentifyReturnParameters(__int64 a1)
{
  NVMeAllocateDmaBuffer(a1, 0x40u);
  return 3238002691LL;
}
