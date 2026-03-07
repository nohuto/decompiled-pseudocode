__int64 __fastcall HalpIrtAllocateIndex(
        unsigned int *a1,
        ULONG a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        int *a7)
{
  ULONG v7; // ebp
  unsigned int DeviceAperture; // ebx
  int v11; // r12d
  unsigned int v12; // r15d
  RTL_BITMAP *v13; // r14
  ULONG ClearBitsAndSet; // esi
  unsigned int v15; // ecx
  ULONG v17; // edx
  ULONG v18; // ebx
  ULONG NextForwardRunClear; // edx
  int RemappingTableEntry; // eax
  char v21; // [rsp+40h] [rbp-48h]
  ULONG StartingRunIndex; // [rsp+44h] [rbp-44h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-40h]

  v7 = 0;
  v21 = 0;
  StartingRunIndex = 0;
  DeviceAperture = 0;
  if ( a7 )
    v11 = *a7;
  else
    v11 = 0;
  if ( !HalpIrtTotalEntries )
  {
    *a1 = 0;
    return DeviceAperture;
  }
  if ( (HalpIrtAllocationFlags & 4) != 0 )
  {
    DeviceAperture = HalpIrtAllocateDeviceAperture(a3, a4, a2, v11, (__int64)&StartingRunIndex);
    if ( (DeviceAperture & 0x80000000) != 0 )
      return DeviceAperture;
    v7 = StartingRunIndex;
    v21 = 1;
  }
  v12 = v7 / HalpIrtAperturesPerRange;
  ExAcquireFastMutex(&HalpIrtLock);
  if ( !*((_QWORD *)&HalpIrtRanges.Buffer + 2 * v12) )
  {
    ExReleaseFastMutex(&HalpIrtLock);
    DeviceAperture = HalpIrtExtendRemappingRange(v12);
    if ( (DeviceAperture & 0x80000000) != 0 )
      goto LABEL_32;
    ExAcquireFastMutex(&HalpIrtLock);
  }
  v13 = &HalpIrtRanges + v12;
  if ( (HalpIrtAllocationFlags & 1) != 0 )
  {
    v17 = HalpIrtEntriesPerDeviceAperture * v7 % HalpIrtEntriesPerRange;
    v23 = v17 + HalpIrtEntriesPerDeviceAperture - 1;
    ClearBitsAndSet = -1;
    while ( 1 )
    {
      StartingRunIndex = v17;
      NextForwardRunClear = RtlFindNextForwardRunClear(v13, v17, &StartingRunIndex);
      if ( !NextForwardRunClear )
        break;
      if ( NextForwardRunClear >= a2 )
      {
        v18 = -a2 & (a2 + StartingRunIndex - 1);
        if ( v18 - StartingRunIndex < NextForwardRunClear && NextForwardRunClear + StartingRunIndex - v18 >= a2 )
        {
          if ( v18 + a2 - 1 <= v23 )
          {
            RtlSetBits(v13, v18, a2);
            ClearBitsAndSet = v18;
          }
          break;
        }
        v17 = StartingRunIndex + NextForwardRunClear;
      }
      else
      {
        v17 = StartingRunIndex + NextForwardRunClear;
      }
    }
  }
  else
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(v13, a2, 0);
  }
  ExReleaseFastMutex(&HalpIrtLock);
  if ( ClearBitsAndSet == -1 )
  {
    DeviceAperture = -1073741670;
  }
  else
  {
    DeviceAperture = 0;
    v15 = HalpIrtEntriesPerRange * v12 + ClearBitsAndSet;
    *a1 = v15;
    if ( v11 != 3 )
      return DeviceAperture;
    if ( (HalpIrtAllocationFlags & 2) == 0 )
      return DeviceAperture;
    RemappingTableEntry = HalpIommuAllocateRemappingTableEntry(v15, a2, a3, a4, a7[14], a5, a6);
    DeviceAperture = RemappingTableEntry;
    if ( RemappingTableEntry >= 0 )
      return DeviceAperture;
    ExAcquireFastMutex(&HalpIrtLock);
    RtlClearBits(v13, ClearBitsAndSet, a2);
    ExReleaseFastMutex(&HalpIrtLock);
    *a1 = -1;
  }
LABEL_32:
  if ( v21 )
    HalpIrtReleaseDeviceAperture(v7, a2);
  return DeviceAperture;
}
