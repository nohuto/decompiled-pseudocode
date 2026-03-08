/*
 * XREFs of PpmHvSnapPerformanceAccumulation @ 0x14059DC74
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x140234BB0 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmResetPerfTimes @ 0x1403A1BA0 (PpmResetPerfTimes.c)
 * Callees:
 *     HvlGetReferenceTime @ 0x1403C30D8 (HvlGetReferenceTime.c)
 *     HvlpGetLpcbByLpIndex @ 0x1403C8E08 (HvlpGetLpcbByLpIndex.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HvlGetStatsUpdateCounter @ 0x1405443E4 (HvlGetStatsUpdateCounter.c)
 */

char __fastcall PpmHvSnapPerformanceAccumulation(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 *v5; // r15
  char v6; // bl
  __int64 v8; // r13
  unsigned int v9; // esi
  int *LpcbByLpIndex; // rax
  __int64 v11; // rcx
  char *v12; // rsi
  __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // r15
  _QWORD *v16; // r11
  char *v17; // r9
  __int64 v18; // r10
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int v24; // [rsp+34h] [rbp-5Dh]
  __int64 v25; // [rsp+40h] [rbp-51h]
  __int64 v26; // [rsp+50h] [rbp-41h]
  char v29; // [rsp+80h] [rbp-11h] BYREF
  char v30; // [rsp+88h] [rbp-9h] BYREF

  v5 = a1 + 12;
  v6 = 0;
  v8 = 2LL;
  v9 = *(_DWORD *)(a1[1] + 20LL);
  v24 = v9;
  do
  {
    while ( HvlGetStatsUpdateCounter(v9) )
      ;
    HvlGetReferenceTime();
    LpcbByLpIndex = HvlpGetLpcbByLpIndex(v9);
    if ( LpcbByLpIndex )
    {
      v11 = *((_QWORD *)LpcbByLpIndex + 4);
      v25 = *(_QWORD *)(v11 + 8LL * (unsigned int)qword_140D176B0);
      v26 = *(_QWORD *)(v11 + 8LL * HIDWORD(qword_140D176B0));
    }
    else
    {
      v25 = 0LL;
      v26 = 0LL;
    }
    v12 = &v29;
    do
    {
      v13 = *v5;
      if ( *v5 )
      {
        *((_DWORD *)v12 + 2) = *(_DWORD *)(v13 + 24);
        *((_QWORD *)v12 - 1) = *(_QWORD *)(v13 + 16);
        *(_QWORD *)v12 = *(_QWORD *)(v13 + 8);
      }
      ++v5;
      v12 += 24;
      --v8;
    }
    while ( v8 );
    v9 = v24;
    v8 = 2LL;
    v5 = a1 + 12;
  }
  while ( HvlGetStatsUpdateCounter(v24) );
  if ( !a3 )
  {
    a1[10] = 0LL;
    v15 = -v25 - a1[11];
    v14 = -v25 == a1[11];
    a1[11] = -v25;
    if ( !v14 )
    {
      v16 = a1 + 15;
      v17 = &v30;
      do
      {
        v18 = *(v16 - 3);
        if ( v18 )
        {
          if ( *(_BYTE *)(v18 + 33) )
          {
            v19 = *((_QWORD *)v17 - 2);
            v20 = *(_QWORD *)(v18 + 16);
            if ( v19 != v20 )
            {
              v21 = *((_QWORD *)v17 - 1) - *(_QWORD *)(v18 + 8);
              *(_QWORD *)(v18 + 16) = v19;
              *(_QWORD *)(v18 + 8) = *((_QWORD *)v17 - 1);
              *(_DWORD *)(v18 + 24) = v21 * (unsigned __int64)*(unsigned int *)(v18 + 36) / (v19 - v20);
            }
            *(_DWORD *)v17 = *(_DWORD *)(v18 + 24);
          }
          *v16 += v15 * *(unsigned int *)v17;
        }
        ++v16;
        v17 += 24;
        --v8;
      }
      while ( v8 );
    }
    if ( a1[12] )
    {
      v22 = a1[15];
    }
    else if ( a1[13] )
    {
      v22 = a1[16];
    }
    else
    {
      v22 = 100LL * a1[14];
    }
    a4[3] = v22;
    if ( a1[13] )
      v22 = a1[16];
    v6 = 1;
    a4[4] = v22;
    *a4 = 0LL;
    a4[1] = -v25;
    *a5 = v26;
  }
  return v6;
}
