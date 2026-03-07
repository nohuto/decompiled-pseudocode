__int64 DefaultInitializeProfiling()
{
  unsigned int Number; // edx

  Number = KeGetPcr()->Prcb.Number;
  if ( !Number )
  {
    HalpProfileSourceDescriptorListLock = 0LL;
    HalpNumberOfGpCounters = 0;
    HalpProfileIntervalLimits = (__int64)DefaultProfileIntervalLimits;
    qword_140C08C88 = (__int64)&HalpProfileSourceDescriptorListHead;
    qword_140C08C90 = (__int64)&HalpProfileSourceDescriptorListHead;
    HalpProfileSourceDescriptorListHead = (__int64)&qword_140C08C88;
    qword_140C62DA8 = (__int64)&qword_140C08C88;
    DefaultCounterStatusPtr = (__int64)&DefaultCounterStatus;
    HalpCounterStatus = (__int64)&DefaultCounterStatusPtr;
    HalpProfileSourceDescriptorCount = 1;
    HalpNumberOfFixedCounters = 1;
    HalpNumberOfCounters = 1;
    dword_140C61E58 = 3;
  }
  return KeAddProcessorAffinityEx(word_140C08CA0, Number);
}
