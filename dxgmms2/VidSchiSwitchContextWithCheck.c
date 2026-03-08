/*
 * XREFs of VidSchiSwitchContextWithCheck @ 0x1C0007A60
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0006850 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0003540 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0006E50 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C0008230 (VidSchiUpdateContextStatus.c)
 *     VidSchiCheckPreemptionPolicy @ 0x1C00095E0 (VidSchiCheckPreemptionPolicy.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0011A3C (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiDecrementDeviceReference @ 0x1C0012D90 (VidSchiDecrementDeviceReference.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiSwitchContextWithCheck(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v3; // r12d
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  int v9; // eax
  int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  void (__fastcall *v14)(_QWORD); // rax
  __int64 v15; // rsi
  __int64 v16; // rbx
  int v18; // r10d
  unsigned int *v19; // r9
  unsigned int v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r8
  _QWORD *v29; // rdx
  __int64 v30; // r8
  _QWORD *v31; // rdx
  KSPIN_LOCK *v32; // rdi
  _QWORD *v33; // rax
  LARGE_INTEGER v34; // r9
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rdx
  __int64 v37; // r8
  void (__fastcall *v38)(_QWORD); // rax
  LARGE_INTEGER v39; // r9
  unsigned __int128 v40; // rax
  unsigned __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // r8
  void *v44; // rcx
  __int64 v45; // rax
  unsigned __int64 *v46; // rcx
  __int64 *v47; // rdx
  __int64 v48; // rcx
  __int64 **v49; // rax
  _QWORD *v50; // rax
  union _LARGE_INTEGER v51; // [rsp+B0h] [rbp+8h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v53; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v54; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 96);
  v3 = 1;
  v4 = *(_QWORD *)(v1 + 24);
  if ( *(_DWORD *)(v4 + 3012) || (*(_BYTE *)(v4 + 3036) & 1) != 0 )
    goto LABEL_27;
  v5 = *(_QWORD *)(a1 + 648);
  v6 = *(_QWORD *)(v5 + 88);
  v7 = *(_QWORD *)(v6 + 104);
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 96) + 24LL);
  if ( !*(_BYTE *)(v7 + 204)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 200), 0, 0)
    && !*(_DWORD *)(v8 + 3012)
    && !*(_DWORD *)(v5 + 48)
    && (*(_DWORD *)(v5 + 64) & 8) == 0 )
  {
    v18 = *(_DWORD *)(v7 + 1576);
    v19 = (unsigned int *)(v5 + 472);
    v20 = *(_DWORD *)(v5 + 472);
    if ( v20 > 0x10 )
    {
      if ( *(_DWORD *)(v8 + 804) )
      {
LABEL_85:
        if ( !*(_QWORD *)(a1 + 48) )
        {
          v47 = (__int64 *)(a1 + 40);
          v48 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 3520LL;
          v49 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 3528LL);
          if ( *v49 != (__int64 *)v48 )
            goto LABEL_97;
          *v47 = v48;
          *(_QWORD *)(a1 + 48) = v49;
          *v49 = v47;
          *(_QWORD *)(v48 + 8) = v47;
        }
        VidSchiUpdateContextStatus(a1, 3LL, 16301LL);
        return 3LL;
      }
    }
    else
    {
      v21 = 0;
      if ( v20 )
      {
        do
        {
          v22 = *(_QWORD *)(*(_QWORD *)&v19[2 * v21 + 2] + 96LL);
          if ( v18
            || (v23 = *(_DWORD *)v22, (*(_DWORD *)v22 & 0x20000000) != 0) && v23 < 0
            || (v23 & 0x80000) != 0
            || (v23 & 0x100) != 0 )
          {
            v24 = *(_QWORD *)(v22 + 24);
            if ( v24 )
            {
              v45 = *(_QWORD *)(v24 + 8);
              v8 = *(_QWORD *)(v24 + 24);
              if ( !*(_BYTE *)(v45 + 28) )
              {
                v46 = *(unsigned __int64 **)(v45 + 64);
                if ( *(_BYTE *)(v45 + 29) )
                {
                  if ( *v46 < v8 )
                    goto LABEL_85;
                }
                else if ( *(_DWORD *)v46 - (int)v8 < 0 )
                {
                  goto LABEL_85;
                }
              }
            }
            else
            {
              v25 = *(_QWORD *)(v22 + 16);
              if ( v25 && *(int *)(v25 + 8) > 0 )
                goto LABEL_85;
            }
          }
          ++v21;
        }
        while ( v21 < *v19 );
      }
    }
  }
  v9 = *(_DWORD *)(a1 + 644);
  v10 = *(_DWORD *)(v1 + 11272);
  v53 = 0LL;
  if ( (v9 & 0xF) != 0
    || (*(_DWORD *)(a1 + 112) & 0x10) == 0
    || (v11 = *(_QWORD *)(a1 + 104), *(_BYTE *)(v11 + 204))
    || _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 200), 0, 0) )
  {
LABEL_27:
    v15 = *(_QWORD *)(a1 + 96);
    v16 = *(_QWORD *)(v15 + 216);
    if ( v16 == a1 )
      return v3;
    VidSchiProfilePerformanceTick(3LL, *(_QWORD *)(v15 + 24), v15, 0LL, a1, 0LL, 0LL, *(_QWORD *)(v15 + 216));
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 72)) == 1 )
    {
      if ( !*(_BYTE *)(a1 + 908) )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 3840LL, a1, 0LL, 0LL);
        __debugbreak();
      }
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 104) + 24LL));
    }
    *(_QWORD *)(v15 + 216) = a1;
    if ( !v16 )
      return v3;
    v26 = *(_QWORD *)(*(_QWORD *)(v16 + 96) + 24LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 72), 0xFFFFFFFF) != 1 )
      return v3;
    v27 = *(_QWORD *)(v16 + 96);
    if ( *(_QWORD *)(v27 + 224) == v16 )
      *(_QWORD *)(v27 + 224) = 0LL;
    v28 = *(_QWORD *)(v16 + 8);
    if ( *(_QWORD *)(v28 + 8) == v16 + 8 )
    {
      v29 = *(_QWORD **)(v16 + 16);
      if ( *v29 == v16 + 8 )
      {
        *v29 = v28;
        *(_QWORD *)(v28 + 8) = v29;
        v30 = *(_QWORD *)(v16 + 24);
        if ( *(_QWORD *)(v30 + 8) == v16 + 24 )
        {
          v31 = *(_QWORD **)(v16 + 32);
          if ( *v31 == v16 + 24 )
          {
            *v31 = v30;
            v32 = (KSPIN_LOCK *)(v26 + 1736);
            *(_QWORD *)(v30 + 8) = v31;
            while ( 1 )
            {
              v33 = VidSchiInterlockedRemoveHeadListIfExist(v32, (_QWORD **)(v16 + 712), (_DWORD *)(v16 + 728));
              if ( !v33 )
                break;
              ExFreePoolWithTag(v33 - 1, 0);
            }
            if ( (*(_DWORD *)(v16 + 112) & 0x100) != 0 )
            {
              while ( 1 )
              {
                v50 = VidSchiInterlockedRemoveHeadListIfExist(v32, (_QWORD **)(v16 + 736), (_DWORD *)(v16 + 752));
                if ( !v50 )
                  break;
                ExFreePoolWithTag(v50 - 1, 0);
              }
            }
            if ( bTracingEnabled )
              VidSchiFlushGpuWorkEntries((struct _VIDSCH_CONTEXT *)v16);
            v44 = *(void **)(v16 + 992);
            if ( v44 )
              ExFreePoolWithTag(v44, 0);
            VidSchiDecrementDeviceReference(*(PVOID *)(v16 + 104));
            ExFreePoolWithTag((PVOID)v16, 0);
            return v3;
          }
        }
      }
    }
LABEL_97:
    __fastfail(3u);
  }
  if ( !(unsigned int)VidSchiCheckPreemptionPolicy(a1, &v53, v8) )
  {
    v12 = v53;
    if ( v53 != -1 )
    {
      v51.QuadPart = 0LL;
      v39 = KeQueryPerformanceCounter(&v51);
      v40 = (unsigned __int64)v39.QuadPart * (unsigned __int128)0x989680uLL;
      v54 = *((_QWORD *)&v40 + 1);
      if ( is_mul_ok(v39.QuadPart, 0x989680uLL) )
        v41 = v40 / (unsigned __int64)v51.QuadPart;
      else
        v41 = 10000000 * (v39.QuadPart / (unsigned __int64)v51.QuadPart)
            + 10000000 * (v39.QuadPart % (unsigned __int64)v51.QuadPart) / v51.QuadPart;
      v42 = v41 + v12;
      v43 = *(_QWORD *)(v1 + 96);
      *(_QWORD *)(v1 + 136) = v43;
      *(_QWORD *)(v1 + 128) = v42;
      WdLogSingleEntry2(4LL, *(unsigned __int16 *)(v1 + 4), v43);
    }
    v13 = *(_QWORD *)(v1 + 8LL * *(unsigned int *)(v1 + 1560) + 1568);
    if ( v12 == -1 && !*(_DWORD *)(v1 + 2896) && (*(_DWORD *)(v1 + 2876) > 1u || v13 && a1 != v13) )
    {
      PerformanceFrequency.QuadPart = 0LL;
      v34 = KeQueryPerformanceCounter(&PerformanceFrequency);
      if ( is_mul_ok(v34.QuadPart, 0x989680uLL) )
        v35 = (unsigned __int64)v34.QuadPart
            * (unsigned __int128)0x989680uLL
            / (unsigned __int64)PerformanceFrequency.QuadPart;
      else
        v35 = 10000000 * (v34.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
            + 10000000
            * (v34.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
            / PerformanceFrequency.QuadPart;
      v36 = v35 + *(_QWORD *)(a1 + 480);
      v37 = *(_QWORD *)(v1 + 96);
      *(_QWORD *)(v1 + 144) = v37;
      *(_QWORD *)(v1 + 128) = v36;
      WdLogSingleEntry2(4LL, *(unsigned __int16 *)(v1 + 4), v37);
    }
    if ( *(int *)(v1 + 2872) > 0 && *(_DWORD *)(v1 + 2888) < *(_DWORD *)(v4 + 228) && !*(_DWORD *)(v1 + 2896) )
      goto LABEL_20;
    RtlClearBitEx(v4 + 488, *(unsigned __int16 *)(v1 + 4));
    RtlCopyBitMapEx(v4 + 440, v4 + 536, 0LL);
    RtlIntersectBitMapsEx(v4 + 536, v4 + 488);
    if ( (unsigned __int8)RtlAreBitsClearEx(v4 + 536, 0LL, *(_QWORD *)(v4 + 536)) )
    {
      if ( v10 != -1 && (*(_DWORD *)(*(_QWORD *)(a1 + 648) + 80LL) & 0x10) == 0 )
      {
        if ( *(_DWORD *)(v1 + 11272) != -1 )
        {
          v38 = *(void (__fastcall **)(_QWORD))(v4 + 3080);
          if ( v38 )
            v38(*(_QWORD *)(v4 + 3120));
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 648) + 80LL) |= 0x10u;
      }
      return 2LL;
    }
    return 3LL;
  }
  v3 = 4;
LABEL_20:
  if ( v10 == -1 )
    goto LABEL_27;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 648) + 80LL) & 0x10) == 0 )
  {
    if ( *(_DWORD *)(v1 + 11272) != -1 )
    {
      v14 = *(void (__fastcall **)(_QWORD))(v4 + 3080);
      if ( v14 )
        v14(*(_QWORD *)(v4 + 3120));
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 648) + 80LL) |= 0x10u;
  }
  if ( *(_BYTE *)(v1 + 11276) )
    goto LABEL_27;
  VidSchiUpdateContextStatus(a1, 8LL, 16468LL);
  return 3LL;
}
