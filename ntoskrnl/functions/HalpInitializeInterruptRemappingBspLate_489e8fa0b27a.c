__int64 HalpInitializeInterruptRemappingBspLate()
{
  unsigned int v0; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  char v2; // r8
  unsigned int v3; // r8d
  unsigned int v4; // r9d
  int v5; // ebx

  HalpIrtLock.Owner = 0LL;
  HalpIrtLock.Contention = 0;
  v0 = 1;
  HalpIrtLock.Count = 1;
  KeInitializeEvent(&HalpIrtLock.Event, SynchronizationEvent, 0);
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  HalpIrtAllocationFlags = 0;
  HalpIrtTotalRanges = 1;
  if ( CurrentPrcb->CpuVendor == 1 )
  {
    v2 = 15;
    HalpIrtAllocationFlags = 15;
    v0 = 32;
    HalpIrtTotalRanges = 32;
  }
  HalpIrtEntriesPerRange = HalpIrtTotalEntries / v0;
  if ( (v2 & 4) != 0 )
  {
    v3 = 512;
    HalpIrtEntriesPerDeviceAperture = 512;
    v4 = 512;
  }
  else
  {
    HalpIrtEntriesPerDeviceAperture = HalpIrtTotalEntries;
    v3 = HalpIrtTotalEntries;
    v4 = HalpIrtTotalEntries;
  }
  HalpIrtAperturesPerRange = HalpIrtTotalEntries / v0 / v3;
  HalpIrtTotalApertures = HalpIrtTotalEntries / v4;
  v5 = HalpIrtExtendRemappingRange(0LL);
  if ( v5 < 0
    || (RtlSetBits(&HalpIrtRanges, 0, 8u), (HalpIrtAllocationFlags & 4) != 0)
    && (v5 = HalpIrtInitializeDeviceApertures(), v5 < 0) )
  {
    if ( HalpIrtRanges.Buffer )
    {
      ExFreePoolWithTag(HalpIrtRanges.Buffer, 0);
      HalpIrtRanges.Buffer = 0LL;
    }
  }
  return (unsigned int)v5;
}
