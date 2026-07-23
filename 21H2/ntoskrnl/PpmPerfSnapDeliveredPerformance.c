/*
 * XREFs of PpmPerfSnapDeliveredPerformance @ 0x1402C5110
 * Callers:
 *     PpmPerfAction @ 0x1402C5070 (PpmPerfAction.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1402C54D0 (PpmCheckSnapAllDeliveredPerformance.c)
 * Callees:
 *     PpmConvertTime @ 0x14026A1CC (PpmConvertTime.c)
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402C5480 (EtwpLevelKeywordEnabled.c)
 *     PpmSnapPerformanceAccumulation @ 0x1402C5A90 (PpmSnapPerformanceAccumulation.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x140572E14 (PopDiagTraceIllegalProcessorThrottle.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x14057C720 (PpmHvSnapPerformanceAccumulation.c)
 */

char __fastcall PpmPerfSnapDeliveredPerformance(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 *v7; // rsi
  __int64 v8; // rdi
  bool v9; // r12
  char result; // al
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // r12
  void (__fastcall *v15)(__int64 *); // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r11
  __int64 v18; // rcx
  const EVENT_DESCRIPTOR *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  ULONGLONG v22; // r10
  unsigned __int8 v23; // r11
  __int64 v24; // rcx
  int *v25; // rax
  int v26; // [rsp+48h] [rbp-59h] BYREF
  __int64 v27; // [rsp+50h] [rbp-51h] BYREF
  int v28; // [rsp+58h] [rbp-49h] BYREF
  int v29; // [rsp+60h] [rbp-41h] BYREF
  int v30; // [rsp+68h] [rbp-39h] BYREF
  unsigned __int64 v31; // [rsp+70h] [rbp-31h]
  ULONGLONG v32; // [rsp+78h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-19h] BYREF
  int *v34; // [rsp+98h] [rbp-9h]
  __int64 v35; // [rsp+A0h] [rbp-1h]
  ULONGLONG *v36; // [rsp+A8h] [rbp+7h]
  __int64 v37; // [rsp+B0h] [rbp+Fh]
  int *v38; // [rsp+B8h] [rbp+17h]
  __int64 v39; // [rsp+C0h] [rbp+1Fh]

  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
    return 1;
  v7 = (unsigned __int64 *)(v3 + 128);
  if ( *(_BYTE *)(a1 + 60) )
  {
    v8 = a1 - 33128;
    v9 = a1 - 33128 != (_QWORD)KeGetCurrentPrcb();
    result = PpmSnapPerformanceAccumulation((int)a1 - 33128, 0, v9, 1, (void *)(v3 + 128));
  }
  else
  {
    v8 = 0LL;
    v9 = 0;
    while ( 1 )
    {
      result = PpmHvSnapPerformanceAccumulation(a1, 0LL, a3, v3 + 128);
      if ( !a2 )
        break;
      if ( result )
        goto LABEL_5;
    }
  }
  if ( result )
  {
LABEL_5:
    v11 = *(_QWORD *)(v3 + 224);
    if ( *v7 <= v11 )
      return 0;
    v12 = *(_QWORD *)(v3 + 136) - *(_QWORD *)(v3 + 232);
    v31 = *v7 - v11;
    if ( v12 > v31 && v9 )
    {
      return 0;
    }
    else
    {
      if ( v8 )
      {
        if ( !v9 )
        {
          v13 = *(_QWORD *)(v8 + 33128);
          v14 = *(_QWORD *)(v8 + 33136);
          v27 = 0LL;
          if ( PopProcessorThrottleLogInterval )
          {
            if ( v13 )
            {
              if ( v14 )
              {
                v15 = *(void (__fastcall **)(__int64 *))(v13 + 224);
                if ( v15 )
                {
                  if ( *(_BYTE *)(v8 + 33008) )
                  {
                    v15(&v27);
                    if ( *(_DWORD *)(v14 + 72) < *(_DWORD *)(v13 + 324) )
                    {
                      *(_BYTE *)(v8 + 33016) = 0;
                    }
                    else if ( *(_BYTE *)(v8 + 33016) )
                    {
                      if ( *(_QWORD *)(v8 + 33024) != v27 )
                      {
                        v24 = (unsigned int)(*(_DWORD *)(v8 + 33012) + 1);
                        *(_DWORD *)(v8 + 33012) = v24;
                        if ( !((unsigned int)v24 % PopProcessorThrottleLogInterval) || (_DWORD)v24 == 1 )
                        {
                          LODWORD(v24) = KeGetPcr()->Prcb.Number;
                          PopDiagTraceIllegalProcessorThrottle(v24, v27, v8 + 33032);
                        }
                      }
                    }
                    else
                    {
                      *(_BYTE *)(v8 + 33016) = 1;
                    }
                    *(_QWORD *)(v8 + 33024) = v27;
                  }
                }
              }
            }
          }
        }
      }
      if ( v12 )
      {
        v16 = (*(_QWORD *)(v3 + 160) - *(_QWORD *)(v3 + 256)) / v12;
        v17 = (*(_QWORD *)(v3 + 152) - *(_QWORD *)(v3 + 248)) / v12;
        v18 = *(_QWORD *)a1 ? *(unsigned int *)(*(_QWORD *)a1 + 316LL) : *(unsigned int *)(v8 + 68);
        if ( __PAIR64__(v17, v16) != *(_QWORD *)(v3 + 320) )
        {
          v30 = (*(_QWORD *)(v3 + 152) - *(_QWORD *)(v3 + 248)) * v18 / 0x64uLL / v12;
          v29 = v17;
          v28 = v16;
          v26 = 0;
          if ( *(_BYTE *)(a1 + 60) )
          {
            v19 = &PPM_ETW_DELIVERED_PERF_CHANGE;
            LOWORD(v26) = *(unsigned __int8 *)(a1 - 32920);
            BYTE2(v26) = *(_BYTE *)(a1 - 32919);
            *(_QWORD *)&UserData.Size = 3LL;
          }
          else
          {
            v19 = (const EVENT_DESCRIPTOR *)PPM_ETW_DELIVERED_PERF_CHANGE_HV;
            v26 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
            *(_QWORD *)&UserData.Size = 4LL;
          }
          UserData.Ptr = (ULONGLONG)&v26;
          if ( PpmEtwRegistered )
          {
            if ( PpmEtwHandle
              && ((unsigned __int8)EtwpLevelKeywordEnabled(
                                     *(_QWORD *)(PpmEtwHandle + 32) + 96LL,
                                     v19->Level,
                                     v19->Keyword)
               || *(_BYTE *)(v21 + 101)
               && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v21 + 40) + 96LL, v23, v20)) )
            {
              v32 = PpmConvertTime(v22, PopQpcFrequency, 0xF4240uLL);
              v34 = &v28;
              v36 = &v32;
              v25 = &v29;
              v35 = 4LL;
              v37 = 8LL;
              v39 = 4LL;
              if ( v19 != &PPM_ETW_DELIVERED_PERF_CHANGE )
                v25 = &v30;
              v38 = v25;
              EtwWriteEx(PpmEtwHandle, v19, 0LL, 0, 0LL, 0LL, 4u, &UserData);
            }
          }
        }
      }
      result = 1;
      *(_OWORD *)(v3 + 224) = *(_OWORD *)v7;
      *(_OWORD *)(v3 + 240) = *(_OWORD *)(v3 + 144);
      *(_OWORD *)(v3 + 256) = *(_OWORD *)(v3 + 160);
      *(_OWORD *)(v3 + 272) = *(_OWORD *)(v3 + 176);
      *(_OWORD *)(v3 + 288) = *(_OWORD *)(v3 + 192);
      *(_OWORD *)(v3 + 304) = *(_OWORD *)(v3 + 208);
    }
  }
  return result;
}
