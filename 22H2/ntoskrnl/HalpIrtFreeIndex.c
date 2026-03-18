/*
 * XREFs of HalpIrtFreeIndex @ 0x1409349C4
 * Callers:
 *     HalpInterruptRemap @ 0x14037C728 (HalpInterruptRemap.c)
 *     HalpInterruptUnmap @ 0x1409334A8 (HalpInterruptUnmap.c)
 * Callees:
 *     RtlClearBits @ 0x14022DA20 (RtlClearBits.c)
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     HalpIommuFreeRemappingTableEntry @ 0x14050DBD4 (HalpIommuFreeRemappingTableEntry.c)
 *     HalpIrtReleaseDeviceAperture @ 0x140934B00 (HalpIrtReleaseDeviceAperture.c)
 */

__int64 __fastcall HalpIrtFreeIndex(unsigned int a1, ULONG a2, int a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  ULONG v8; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( HalpIrtTotalEntries )
  {
    v7 = a1 / HalpIrtEntriesPerRange;
    v8 = a1 % HalpIrtEntriesPerRange;
    ExAcquireFastMutex(&HalpIrtLock);
    RtlClearBits(&HalpIrtRanges + v7, v8, a2);
    ExReleaseFastMutex(&HalpIrtLock);
    if ( a3 == 3 && (HalpIrtAllocationFlags & 2) != 0 )
      HalpIommuFreeRemappingTableEntry(a1, a2);
    result = (unsigned int)HalpIrtAllocationFlags;
    if ( (HalpIrtAllocationFlags & 4) != 0 )
      return HalpIrtReleaseDeviceAperture(a1 / HalpIrtEntriesPerDeviceAperture, a2);
  }
  return result;
}
