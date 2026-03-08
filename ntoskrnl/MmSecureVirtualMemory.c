/*
 * XREFs of MmSecureVirtualMemory @ 0x140769000
 * Callers:
 *     RtlFileMapMapView @ 0x1403ABF40 (RtlFileMapMapView.c)
 *     DifMmSecureVirtualMemoryWrapper @ 0x1405E5590 (DifMmSecureVirtualMemoryWrapper.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     MmSecureVirtualMemoryEx @ 0x140769030 (MmSecureVirtualMemoryEx.c)
 */

HANDLE __stdcall MmSecureVirtualMemory(PVOID Address, SIZE_T Size, ULONG ProbeMode)
{
  __int64 v4; // r8

  v4 = 4LL;
  if ( ProbeMode == 2 )
    v4 = 2LL;
  return (HANDLE)MmSecureVirtualMemoryEx(Address, Size, v4);
}
