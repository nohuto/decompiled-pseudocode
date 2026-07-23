/*
 * XREFs of KiVerifyXcpt15 @ 0x140A1B320
 * Callers:
 *     <none>
 * Callees:
 *     MiCreateSystemWsles @ 0x140299B00 (MiCreateSystemWsles.c)
 *     RtlImageNtHeader @ 0x14029CFE0 (RtlImageNtHeader.c)
 *     MmMapIoSpaceEx @ 0x1402E7FA0 (MmMapIoSpaceEx.c)
 *     RtlSectionTableFromVirtualAddress @ 0x140301830 (RtlSectionTableFromVirtualAddress.c)
 *     KeExpandKernelStackAndCallout @ 0x14032C5C0 (KeExpandKernelStackAndCallout.c)
 *     RtlCaptureImageExceptionValues @ 0x140372D8C (RtlCaptureImageExceptionValues.c)
 *     KdDisableDebugger @ 0x1403CF320 (KdDisableDebugger.c)
 *     _local_unwind @ 0x1403D1490 (_local_unwind.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     KdEnableDebugger @ 0x140510C80 (KdEnableDebugger.c)
 *     KiSwInterruptPresent @ 0x140A41820 (KiSwInterruptPresent.c)
 *     KiVerifyXcpt2 @ 0x140A661DC (KiVerifyXcpt2.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140A739D8 (MmStrongCodeGuaranteesEnforced.c)
 */

void KiVerifyXcpt15()
{
  _QWORD v0[42]; // [rsp+0h] [rbp-198h] BYREF

  v0[21] = v0;
  KiVerifyXcpt2();
  local_unwind(v0, &loc_140A1B345);
}
