/*
 * XREFs of PpmCheckSnapAllDeliveredPerformance @ 0x1402C54D0
 * Callers:
 *     PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x14037E150 (PpmCheckUpdateDeliveredPerformanceIfTracingEnabled.c)
 * Callees:
 *     PpmPerfCheckForIllegalProcessorThrottle @ 0x140225EE4 (PpmPerfCheckForIllegalProcessorThrottle.c)
 *     PpmConvertTime @ 0x14026A1CC (PpmConvertTime.c)
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     KiInsertQueueDpc @ 0x1402C4660 (KiInsertQueueDpc.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x1402C5110 (PpmPerfSnapDeliveredPerformance.c)
 *     EtwpLevelKeywordEnabled @ 0x1402C5480 (EtwpLevelKeywordEnabled.c)
 *     PpmSnapPerformanceAccumulation @ 0x1402C5A90 (PpmSnapPerformanceAccumulation.c)
 *     KeCopyAffinityEx @ 0x1403461A0 (KeCopyAffinityEx.c)
 *     HvlGetReferenceTime @ 0x14038E0FC (HvlGetReferenceTime.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x1403902C0 (HvlUpdatePerformanceStateCountersForLp.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x14057C720 (PpmHvSnapPerformanceAccumulation.c)
 */

char PpmCheckSnapAllDeliveredPerformance()
{
  __int64 v0; // r14
  __int64 ReferenceTime; // r13
  unsigned int v2; // ebx
  __int64 v3; // rsi
  int v4; // r9d
  unsigned __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rbx
  _QWORD *v10; // rsi
  __int64 v11; // r14
  bool v12; // r12
  char v13; // al
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r11
  __int64 v18; // rcx
  char v19; // al
  const EVENT_DESCRIPTOR *v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  ULONGLONG v23; // r10
  unsigned __int8 v24; // r11
  unsigned int v25; // r8d
  __int64 v26; // rcx
  int v27; // r8d
  unsigned __int64 *v28; // r9
  __int64 v29; // r10
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v36; // rdi
  char v37; // al
  __int64 v38; // rax
  int *v39; // rax
  __int64 v40; // rbx
  __int64 v41; // r13
  unsigned int j; // edi
  __int64 v43; // rcx
  char v44; // [rsp+48h] [rbp-C0h]
  int v45; // [rsp+4Ch] [rbp-BCh] BYREF
  _QWORD *v46; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v47; // [rsp+58h] [rbp-B0h]
  _WORD v48[4]; // [rsp+60h] [rbp-A8h]
  int v49; // [rsp+68h] [rbp-A0h] BYREF
  int v50; // [rsp+70h] [rbp-98h] BYREF
  int v51; // [rsp+78h] [rbp-90h] BYREF
  int v52; // [rsp+80h] [rbp-88h]
  unsigned __int64 v53; // [rsp+88h] [rbp-80h]
  ULONGLONG v54; // [rsp+90h] [rbp-78h] BYREF
  __int64 i; // [rsp+98h] [rbp-70h]
  _QWORD v56[22]; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+158h] [rbp+50h] BYREF
  int *v58; // [rsp+168h] [rbp+60h]
  __int64 v59; // [rsp+170h] [rbp+68h]
  ULONGLONG *v60; // [rsp+178h] [rbp+70h]
  __int64 v61; // [rsp+180h] [rbp+78h]
  int *v62; // [rsp+188h] [rbp+80h]
  __int64 v63; // [rsp+190h] [rbp+88h]

  memset(v56, 0, 0xA8uLL);
  v0 = PpmPerfDomainHead;
  *(_DWORD *)&v48[1] = 0;
  ReferenceTime = 0LL;
  v48[3] = 0;
  v44 = 0;
  for ( i = 0LL; (__int64 *)v0 != &PpmPerfDomainHead; v0 = *(_QWORD *)v0 )
  {
    v2 = 0;
    if ( *(_DWORD *)(v0 + 200) )
    {
      do
      {
        v3 = *(_QWORD *)(v0 + 216) + 136LL * v2;
        if ( *(_DWORD *)(v3 + 16) == 1 )
        {
          if ( !ReferenceTime )
            ReferenceTime = HvlGetReferenceTime();
          v36 = *(_QWORD *)v3;
          v37 = PpmPerfSnapDeliveredPerformance(*(_QWORD *)v3, 0, ReferenceTime - 50000);
          *(_BYTE *)(v36 + 64) = v37 == 0;
          if ( !v37 )
          {
            HvlUpdatePerformanceStateCountersForLp(*(unsigned int *)(v3 + 20));
            v44 = 1;
          }
        }
        ++v2;
      }
      while ( v2 < *(_DWORD *)(v0 + 200) );
      i = ReferenceTime;
    }
  }
  KeCopyAffinityEx(v56, &PpmCheckRegistered);
  v4 = 0;
  v47 = v56[1];
  v46 = v56;
  v48[0] = 0;
  while ( 1 )
  {
    LODWORD(v53) = 0;
    if ( !v47 )
      break;
LABEL_9:
    _BitScanForward64(&v5, v47);
    v47 &= ~(1LL << v5);
    v6 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v48[0] + (unsigned __int8)v5];
    if ( (unsigned int)v6 >= (unsigned int)KeNumberProcessors_0 )
    {
      v7 = 0LL;
    }
    else
    {
      _mm_lfence();
      v7 = KiProcessorBlock[v6];
    }
    v8 = v7 + 33128;
    v9 = *(_QWORD *)(v8 + 16);
    if ( v9 )
    {
      v10 = (_QWORD *)(v9 + 128);
      if ( *(_BYTE *)(v8 + 60) )
      {
        v11 = v8 - 33128;
        LOBYTE(v4) = 1;
        v12 = v8 - 33128 != (_QWORD)KeGetCurrentPrcb();
        v13 = PpmSnapPerformanceAccumulation((int)v8 - 33128, 0, v12, v4, (void *)(v9 + 128));
      }
      else
      {
        v11 = 0LL;
        v12 = 0;
        v13 = PpmHvSnapPerformanceAccumulation(v8, 0LL, 0LL, v9 + 128);
      }
      v4 = 0;
      if ( v13 )
      {
        v14 = *(_QWORD *)(v9 + 224);
        if ( *v10 > v14 )
        {
          v15 = *(_QWORD *)(v9 + 136) - *(_QWORD *)(v9 + 232);
          v53 = *v10 - v14;
          if ( v15 <= v53 || !v12 )
          {
            if ( v11 && !v12 )
              PpmPerfCheckForIllegalProcessorThrottle(v11);
            if ( !v15
              || ((v16 = (*(_QWORD *)(v9 + 160) - *(_QWORD *)(v9 + 256)) / v15,
                   v17 = (*(_QWORD *)(v9 + 152) - *(_QWORD *)(v9 + 248)) / v15,
                   !*(_QWORD *)v8)
                ? (v18 = *(unsigned int *)(v11 + 68))
                : (v18 = *(unsigned int *)(*(_QWORD *)v8 + 316LL)),
                  __PAIR64__(v17, v16) == *(_QWORD *)(v9 + 320)) )
            {
LABEL_30:
              v4 = 0;
            }
            else
            {
              v4 = 0;
              v51 = (*(_QWORD *)(v9 + 152) - *(_QWORD *)(v9 + 248)) * v18 / 0x64uLL / v15;
              v50 = v17;
              v49 = v16;
              v54 = 0LL;
              v45 = 0;
              if ( *(_BYTE *)(v8 + 60) )
              {
                LOWORD(v45) = *(unsigned __int8 *)(v8 - 32920);
                v19 = *(_BYTE *)(v8 - 32919);
                v20 = &PPM_ETW_DELIVERED_PERF_CHANGE;
                BYTE2(v45) = v19;
                *(_QWORD *)&UserData.Size = 3LL;
              }
              else
              {
                v38 = *(_QWORD *)(v8 + 8);
                v20 = (const EVENT_DESCRIPTOR *)PPM_ETW_DELIVERED_PERF_CHANGE_HV;
                v45 = *(_DWORD *)(v38 + 20);
                *(_QWORD *)&UserData.Size = 4LL;
              }
              UserData.Ptr = (ULONGLONG)&v45;
              if ( PpmEtwRegistered )
              {
                if ( PpmEtwHandle
                  && (EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 96LL, v20->Level, v20->Keyword)
                   || *(_BYTE *)(v22 + 101) && EtwpLevelKeywordEnabled(*(_QWORD *)(v22 + 40) + 96LL, v24, v21)) )
                {
                  v54 = PpmConvertTime(v23, PopQpcFrequency, 0xF4240uLL);
                  v59 = 4LL;
                  v58 = &v49;
                  v60 = &v54;
                  v39 = &v50;
                  v61 = 8LL;
                  v63 = 4LL;
                  if ( v20 != &PPM_ETW_DELIVERED_PERF_CHANGE )
                    v39 = &v51;
                  v62 = v39;
                  EtwWriteEx(PpmEtwHandle, v20, 0LL, 0, 0LL, 0LL, 4u, &UserData);
                }
                goto LABEL_30;
              }
            }
            *(_OWORD *)(v9 + 224) = *(_OWORD *)v10;
            *(_OWORD *)(v9 + 240) = *(_OWORD *)(v9 + 144);
            *(_OWORD *)(v9 + 256) = *(_OWORD *)(v9 + 160);
            *(_OWORD *)(v9 + 272) = *(_OWORD *)(v9 + 176);
            *(_OWORD *)(v9 + 288) = *(_OWORD *)(v9 + 192);
            *(_OWORD *)(v9 + 304) = *(_OWORD *)(v9 + 208);
            goto LABEL_32;
          }
        }
      }
    }
    else
    {
LABEL_32:
      v25 = KiProcessorIndexToNumberMappingTable[v6];
      v26 = v25 >> 6;
      if ( LOWORD(v56[0]) > (unsigned int)v26 )
        v56[v26 + 1] &= ~(1LL << (v25 & 0x3F));
    }
  }
  while ( ++v48[0] < (unsigned int)LOWORD(v56[0]) )
  {
    v47 = v56[v48[0] + 1];
    if ( v47 )
      goto LABEL_9;
  }
  if ( v44 )
  {
    v40 = PpmPerfDomainHead;
    if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
    {
      v41 = i;
      do
      {
        for ( j = 0; j < *(_DWORD *)(v40 + 200); ++j )
        {
          v43 = *(_QWORD *)(v40 + 216) + 136LL * j;
          if ( *(_DWORD *)(v43 + 16) == 1 && *(_BYTE *)(*(_QWORD *)v43 + 64LL) )
          {
            *(_BYTE *)(*(_QWORD *)v43 + 64LL) = 0;
            PpmPerfSnapDeliveredPerformance(*(_QWORD *)v43, 1, v41);
          }
        }
        v40 = *(_QWORD *)v40;
      }
      while ( (__int64 *)v40 != &PpmPerfDomainHead );
    }
  }
  v27 = 0;
  if ( LOWORD(v56[0]) )
  {
    v28 = &v56[1];
    v29 = LOWORD(v56[0]);
    do
    {
      v30 = *v28++;
      v27 += (unsigned int)((0x101010101010101LL
                           * ((((v30 - ((v30 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v30 - ((v30 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                             + ((((v30 - ((v30 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v30 - ((v30 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v29;
    }
    while ( v29 );
  }
  PpmCheckCount = v27;
  if ( !v27 )
    return 1;
  v31 = v56[1];
  v48[0] = 0;
  while ( 1 )
  {
    v52 = 0;
    if ( !v31 )
      break;
LABEL_42:
    _BitScanForward64(&v32, v31);
    v52 = v32;
    v47 = v31 & ~(1LL << v32);
    v33 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v48[0] + (unsigned __int8)v32];
    if ( (unsigned int)v33 >= (unsigned int)KeNumberProcessors_0 )
      v34 = 0LL;
    else
      v34 = KiProcessorBlock[v33];
    _m_prefetchw((const void *)(v34 + 33104));
    if ( !_InterlockedOr((volatile signed __int32 *)(v34 + 33104), 1u) )
      KiInsertQueueDpc(v34 + 33040, 0LL, 0LL, 0LL, 0);
    v31 = v47;
  }
  while ( 1 )
  {
    if ( ++v48[0] >= (unsigned int)LOWORD(v56[0]) )
      return 0;
    v31 = v56[v48[0] + 1];
    v47 = v31;
    if ( v31 )
      goto LABEL_42;
  }
}
