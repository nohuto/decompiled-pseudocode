__int64 HalpInterruptRegisterDynamicProcessor()
{
  unsigned int v0; // r8d
  int v1; // r11d
  int v3; // r9d
  unsigned int v4; // edx
  ULONG_PTR i; // r8

  if ( (unsigned int)HalpInterruptModel() != 1 )
    return 3221225473LL;
  if ( !HalpInterruptPhysicalModeOnly
    && !HalpInterruptClusterModeEnabled
    && (unsigned int)HalpInterruptProcessorCount > HalpInterruptLogicalFlatLimit )
  {
    return 3221225496LL;
  }
  if ( HalpInterruptPackagesStarted > v0 )
    return 3221225473LL;
  if ( HalpInterruptPackagesStarted >= v0 )
  {
    v3 = 0;
    v4 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
    if ( (_DWORD)HalpInterruptProcessorCount )
    {
      for ( i = HalpInterruptProcessorState + 8; !*(_BYTE *)(i + 5) || (*(_DWORD *)i & v4) != (v1 & v4); i += 64LL )
      {
        if ( ++v3 >= (unsigned int)HalpInterruptProcessorCount )
          return 3221225473LL;
      }
      return 0LL;
    }
    return 3221225473LL;
  }
  return 0LL;
}
