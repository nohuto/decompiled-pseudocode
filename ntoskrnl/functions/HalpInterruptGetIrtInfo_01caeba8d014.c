__int64 __fastcall HalpInterruptGetIrtInfo(int *a1)
{
  int v1; // eax
  int MaximumProcessorCount; // eax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v1 = HalpPciMcfgTableSegments;
  if ( !HalpPciMcfgTableSegments )
    v1 = 1;
  *a1 = v1;
  v7 = 0LL;
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  a1[2] = 0;
  v4 = (unsigned int)(150 * MaximumProcessorCount);
  a1[1] = v4;
  if ( HalpIsMicrosoftCompatibleHvLoaded(v4, v5) )
  {
    HalpHvCpuid(0x40000000u, &v7);
    if ( (unsigned int)v7 >= 0x40000006 )
    {
      HalpHvCpuid(0x40000006u, &v7);
      if ( (v7 & 0x20) != 0 )
      {
        HalpHvCpuid(0x40000005u, &v7);
        if ( DWORD2(v7) < a1[1] / (unsigned int)HalQueryMaximumProcessorCount() * HalpInterruptProcessorsStarted )
          a1[1] = DWORD2(v7) / HalpInterruptProcessorsStarted * HalQueryMaximumProcessorCount();
        a1[2] = DWORD2(v7) - a1[1] / (unsigned int)HalQueryMaximumProcessorCount() * HalpInterruptProcessorsStarted;
      }
    }
  }
  return 0LL;
}
