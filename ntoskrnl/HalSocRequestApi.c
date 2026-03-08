/*
 * XREFs of HalSocRequestApi @ 0x1403737EC
 * Callers:
 *     HalpApicSetupRegisterAccess @ 0x14037301C (HalpApicSetupRegisterAccess.c)
 *     HalpArtAvailable @ 0x1403733F0 (HalpArtAvailable.c)
 *     HalpTscGetAttributes @ 0x1403736C4 (HalpTscGetAttributes.c)
 *     HalpRtcDiscover @ 0x140374398 (HalpRtcDiscover.c)
 *     HalpApicTimerDiscover @ 0x14037614C (HalpApicTimerDiscover.c)
 *     HalpIvtProcessDrhdEntry @ 0x14037B514 (HalpIvtProcessDrhdEntry.c)
 *     HalpHvDiscover @ 0x1403A09D8 (HalpHvDiscover.c)
 *     HalpTscDiscover @ 0x1403A0B58 (HalpTscDiscover.c)
 *     HalpApicGetCpuInfo @ 0x1403A84A4 (HalpApicGetCpuInfo.c)
 *     HalpApicTimerIsInvariant @ 0x1403AE858 (HalpApicTimerIsInvariant.c)
 *     HalpHvTimerInitialize @ 0x1403C8870 (HalpHvTimerInitialize.c)
 *     HalpVpptTimerRegister @ 0x140507BF4 (HalpVpptTimerRegister.c)
 *     HalpHvCounterUpdateCallback @ 0x14051C770 (HalpHvCounterUpdateCallback.c)
 *     IvtInitializeIommu @ 0x140A87060 (IvtInitializeIommu.c)
 *     HsaInitializeIommu @ 0x140A961E0 (HsaInitializeIommu.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14037333C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpHvIsFrequencyAvailable @ 0x140374AFC (HalpHvIsFrequencyAvailable.c)
 *     HalpMmAllocateMemoryInternal @ 0x14037A7A8 (HalpMmAllocateMemoryInternal.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall HalSocRequestApi(__int64 a1, __int64 a2, int a3, __int64 a4, void *a5)
{
  unsigned int v5; // edi
  unsigned int v6; // r11d
  __int64 *v8; // r14
  char v9; // r10
  int v10; // r8d
  int v11; // r8d
  __int64 (__fastcall **v12)(); // rsi
  unsigned int v13; // ebx
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  _QWORD *i; // rax
  __int64 v19; // r8
  __int64 *MemoryInternal; // rax
  __int64 (__fastcall *v26)(); // [rsp+20h] [rbp-40h] BYREF
  __int128 v27; // [rsp+28h] [rbp-38h] BYREF
  __int128 v28; // [rsp+38h] [rbp-28h] BYREF
  __int128 v29; // [rsp+48h] [rbp-18h]

  v5 = 0;
  v26 = 0LL;
  v6 = a4;
  v8 = 0LL;
  v9 = 0;
  v28 = 0LL;
  v27 = 0LL;
  v10 = a3 - 1;
  if ( !v10 )
  {
    v12 = HalpTimerCmosApi;
    goto LABEL_4;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v15 = v11 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        v13 = 8;
        v26 = HalpSocApiAllocatePhysicalMemory;
        v12 = &v26;
        goto LABEL_5;
      }
      v17 = v16 - 1;
      if ( !v17 )
      {
        v12 = (__int64 (__fastcall **)())&v28;
        v28 = xmmword_140C62108;
        v8 = &HalpTimerHvApicCallbackList;
        v9 = 1;
        goto LABEL_4;
      }
      v19 = (unsigned int)(v17 - 1);
      if ( (_DWORD)v19 )
      {
        if ( (_DWORD)v19 != 1 )
        {
          HalpTimerLastProblem = 27;
          return (unsigned int)-1073741811;
        }
        v12 = HalpTimerSkipApi;
        goto LABEL_4;
      }
      if ( (unsigned __int8)HalpHvIsFrequencyAvailable(a1, a2, v19, a4, v26) )
      {
        *(_QWORD *)&v27 = HalpHvGetTscFrequency;
        v12 = (__int64 (__fastcall **)())&v27;
        *((_QWORD *)&v27 + 1) = HalpHvGetApicFrequency;
        goto LABEL_4;
      }
    }
    else if ( HalpIsMicrosoftCompatibleHvLoaded(a1, a2) )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      v29 = 0LL;
      LODWORD(v29) = _RAX;
      if ( (_RAX & 2) != 0 )
      {
        v12 = (__int64 (__fastcall **)())&HalpTimerHypervisorReferenceTime;
        HalpTimerHypervisorReferenceTime = qword_140C62128;
        v8 = (__int64 *)&HalpTimerHvReferenceCallbackList;
        v13 = 8;
        v9 = 1;
        goto LABEL_5;
      }
    }
    return (unsigned int)-1073741637;
  }
  v12 = &HalpTimerPcCpuApi;
LABEL_4:
  v13 = 16;
LABEL_5:
  if ( !a5 || v6 > v13 )
  {
    HalpTimerLastProblem = 28;
    return (unsigned int)-1073741811;
  }
  if ( v6 < v13 )
  {
    v5 = -1073741789;
    HalpTimerLastProblem = 28;
    return v5;
  }
  if ( !v9 )
    goto LABEL_9;
  if ( !a2 )
    return (unsigned int)-1073741811;
  for ( i = (_QWORD *)*v8; i; i = (_QWORD *)*i )
  {
    if ( i[1] == a2 )
      goto LABEL_9;
  }
  MemoryInternal = (__int64 *)HalpMmAllocateMemoryInternal(16LL, 1LL);
  if ( !MemoryInternal )
    return (unsigned int)-1073741801;
  MemoryInternal[1] = a2;
  *MemoryInternal = *v8;
  *v8 = (__int64)MemoryInternal;
LABEL_9:
  memmove(a5, v12, v13);
  return v5;
}
