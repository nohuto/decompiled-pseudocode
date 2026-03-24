/*
 * XREFs of NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0006C40
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005AAC (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0005B00 (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeNamespaceEnumerationContext @ 0x1C000695C (NVMeFreeNamespaceEnumerationContext.c)
 *     NVMeReenumerateNameSpaceCancelMerge @ 0x1C0006AA8 (NVMeReenumerateNameSpaceCancelMerge.c)
 *     NVMeReenumerateNameSpaceCompare @ 0x1C0006AFC (NVMeReenumerateNameSpaceCompare.c)
 *     NVMeReenumerateNameSpaceMerge @ 0x1C0007138 (NVMeReenumerateNameSpaceMerge.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x1C0007388 (NVMeReenumerateNameSpaceRescan.c)
 *     NVMeReenumerateNameSpaceWaitForAllIOComplete @ 0x1C000762C (NVMeReenumerateNameSpaceWaitForAllIOComplete.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C000778C (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     NVMeVersionCheck @ 0x1C001C288 (NVMeVersionCheck.c)
 *     WaitForCommandComplete @ 0x1C001CC00 (WaitForCommandComplete.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceIdentifyWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  void *v7; // [rsp+70h] [rbp+7h]
  __int64 v8; // [rsp+78h] [rbp+Fh]
  __int64 v9; // [rsp+E0h] [rbp+77h]

  v9 = a3;
  v7 = 0LL;
  v8 = 0LL;
  NVMeAllocateDmaBuffer(a1, 0x1000u);
  NVMeFreeNamespaceEnumerationContext(a1, a2, 1, v5);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3812), 1u);
  ++*(_DWORD *)(a1 + 4024);
  return StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
}
