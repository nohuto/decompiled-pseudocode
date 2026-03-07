__int64 __fastcall HalpTimerInitializeProfiling(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // edi
  int v4; // r8d
  int v5; // r9d
  __int64 InternalData; // rax
  __int64 v8; // rax
  int v9; // [rsp+40h] [rbp-28h] BYREF
  __int128 v10; // [rsp+48h] [rbp-20h] BYREF

  v2 = HalpProfileTimer;
  v3 = 0;
  v10 = 0LL;
  if ( HalpProfileData || (HalpProfileData = (__int64)HalpMmAllocatePerProcessorMemory(32LL, a2)) != 0 )
  {
    v9 = 10000;
    ((void (__fastcall *)(_QWORD, int *))HalpProfileInterface[3])(0LL, &v9);
    if ( KeGetPcr()->Prcb.Number )
    {
      if ( v2 )
      {
        LOBYTE(v4) = 15;
        HalpInterruptSetIdtEntry(253, (unsigned int)HalpTimerProfileInterrupt, v4, v5, -3LL);
        if ( (*(_DWORD *)(v2 + 224) & 1) != 0 )
        {
          InternalData = HalpTimerGetInternalData(v2);
          v3 = (*(__int64 (__fastcall **)(__int64))(v2 + 104))(InternalData);
          if ( v3 >= 0 )
          {
            v8 = HalpTimerGetInternalData(v2);
            (*(void (__fastcall **)(__int64))(v2 + 136))(v8);
          }
        }
      }
    }
    else if ( v2 )
    {
      LOBYTE(v4) = 15;
      *((_QWORD *)&v10 + 1) = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
      *(_QWORD *)&v10 = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
      return (unsigned int)HalpTimerConfigureInterrupt(
                             v2,
                             253,
                             v4,
                             v5,
                             -3LL,
                             1,
                             (__int64)&v10,
                             (__int64)HalpTimerProfileInterrupt);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
