/*
 * XREFs of KiVerifyXcpt15 @ 0x140B14320
 * Callers:
 *     <none>
 * Callees:
 *     MmGetMinWsPagePriority @ 0x140242D60 (MmGetMinWsPagePriority.c)
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 *     RtlCaptureImageExceptionValues @ 0x1402B274C (RtlCaptureImageExceptionValues.c)
 *     RtlSectionTableFromVirtualAddress @ 0x14035D7C0 (RtlSectionTableFromVirtualAddress.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     KeExpandKernelStackAndCallout @ 0x1403D0D60 (KeExpandKernelStackAndCallout.c)
 *     _local_unwind @ 0x1403D3990 (_local_unwind.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KdDisableDebugger @ 0x140565110 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x140565340 (KdEnableDebugger.c)
 *     KiVerifyXcpt2 @ 0x140B5D000 (KiVerifyXcpt2.c)
 *     KiSwInterruptPresent @ 0x140B65038 (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140B72910 (MmStrongCodeGuaranteesEnforced.c)
 */

__int64 KiVerifyXcpt15()
{
  _QWORD v1[42]; // [rsp+0h] [rbp-198h] BYREF

  v1[21] = v1;
  KiVerifyXcpt2();
  return local_unwind((ULONG_PTR)v1, (__int64)&loc_140B14345);
}
