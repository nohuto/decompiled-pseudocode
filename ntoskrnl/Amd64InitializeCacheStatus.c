/*
 * XREFs of Amd64InitializeCacheStatus @ 0x140527134
 * Callers:
 *     Amd64InitializeUncoreProfiling @ 0x140527450 (Amd64InitializeUncoreProfiling.c)
 * Callees:
 *     HalpInterruptGetIdentifiers @ 0x140379900 (HalpInterruptGetIdentifiers.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     Amd64FreeCounter @ 0x140526ED0 (Amd64FreeCounter.c)
 *     Amd64InitializeUncoreStatus @ 0x140527558 (Amd64InitializeUncoreStatus.c)
 */

__int64 (__fastcall **Amd64InitializeCacheStatus())()
{
  unsigned int Number; // edi
  __int64 v6; // r8
  int v7; // r8d
  char v18; // bl
  unsigned int v19; // ecx
  __int64 (__fastcall **result)(); // rax
  __int64 (__fastcall **v21)(); // r11
  __int64 v22; // rsi
  __int64 v23; // rdi
  int v24; // r8d
  unsigned int v25; // edx
  __int64 v26; // rbx
  unsigned int v27; // r9d
  __int64 v28; // r10
  __int64 v29; // rax
  int v30; // eax
  unsigned int v31; // ecx
  __int64 v32; // rax
  _DWORD v33[6]; // [rsp+20h] [rbp-20h] BYREF

  Number = KeGetPcr()->Prcb.Number;
  v33[0] = 0;
  if ( KeGetCurrentPrcb()->CpuType == 22 )
  {
    _RAX = 2147483678LL;
    __asm { cpuid }
    v6 = (unsigned __int8)_RCX;
  }
  else
  {
    v7 = 0;
    do
    {
      _RAX = 2147483677LL;
      ++v7;
      __asm { cpuid }
    }
    while ( (_RAX & 0xF) != 0 );
    _RAX = 2147483677LL;
    __asm { cpuid }
    v18 = 0;
    _BitScanReverse((unsigned int *)&_RCX, 2 * (((unsigned int)_RAX >> 14) & 0xFFF) + 1);
    v19 = (unsigned __int8)(1 << _RCX);
    while ( 1 )
    {
      v19 >>= 1;
      if ( !v19 )
        break;
      ++v18;
    }
    result = (__int64 (__fastcall **)())HalpInterruptGetIdentifiers(Number, v33, 0LL);
    if ( (int)result < 0 )
      return result;
    v6 = (unsigned int)(v33[0] >> v18);
  }
  result = (__int64 (__fastcall **)())Amd64InitializeUncoreStatus(
                                        2LL,
                                        &Amd64CacheStatusHead,
                                        v6,
                                        (unsigned int)Amd64NumberCacheCounters);
  v21 = result;
  if ( result )
  {
    result = &DefaultProfileInterface;
    v22 = Amd64CounterStatus + 24LL * Amd64NumberCounters * Number;
    if ( HalpProfileInterface == &DefaultProfileInterface )
    {
      v23 = HalpCounterStatus;
    }
    else
    {
      result = (__int64 (__fastcall **)())HalpCounterStatus;
      v23 = HalpCounterStatus + 8LL * HalpNumberOfCounters * Number;
    }
    v24 = Amd64NumberDataFabricCounters;
    v25 = Amd64NumberCoreCounters;
    v26 = (unsigned int)(Amd64NumberDataFabricCounters + Amd64NumberCoreCounters);
    if ( (unsigned int)v26 < (int)v26 + Amd64NumberCacheCounters )
    {
      v27 = Amd64NumberDataFabricCounters + Amd64NumberCoreCounters;
      while ( 1 )
      {
        v28 = v22 + 24 * v26;
        v29 = (unsigned int)v26;
        *(_QWORD *)(v28 + 8) = v21;
        if ( (unsigned int)v26 >= v27 )
          break;
        if ( (unsigned int)v26 >= v25 )
        {
          v30 = v26;
          goto LABEL_20;
        }
LABEL_21:
        v31 = *((_DWORD *)&Amd64EventSelectRegisters + v26);
        v32 = (__int64)v21[3] + 40 * v29;
        *(_QWORD *)(v23 + 8 * v26) = v32;
        *(_QWORD *)(v32 + 16) = v28;
        __writemsr(v31, 0LL);
        result = (__int64 (__fastcall **)())Amd64FreeCounter(v26);
        v24 = Amd64NumberDataFabricCounters;
        v26 = (unsigned int)(v26 + 1);
        v25 = Amd64NumberCoreCounters;
        v27 = Amd64NumberDataFabricCounters + Amd64NumberCoreCounters;
        if ( (unsigned int)v26 >= Amd64NumberDataFabricCounters + Amd64NumberCoreCounters + Amd64NumberCacheCounters )
          return result;
      }
      v30 = v26 - v24;
LABEL_20:
      v29 = v30 - v25;
      goto LABEL_21;
    }
  }
  return result;
}
