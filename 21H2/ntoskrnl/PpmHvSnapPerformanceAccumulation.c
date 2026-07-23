/*
 * XREFs of PpmHvSnapPerformanceAccumulation @ 0x14057C720
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x1402C5110 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1402C54D0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmResetPerfTimes @ 0x1403C2720 (PpmResetPerfTimes.c)
 * Callees:
 *     HvlGetReferenceTime @ 0x14038E0FC (HvlGetReferenceTime.c)
 *     HvlpGetLpcbByLpIndex @ 0x140390E48 (HvlpGetLpcbByLpIndex.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HvlGetStatsUpdateCounter @ 0x1404F7D10 (HvlGetStatsUpdateCounter.c)
 */

char __fastcall PpmHvSnapPerformanceAccumulation(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  char v4; // bl
  unsigned int v6; // esi
  int *LpcbByLpIndex; // rax
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // r15
  _QWORD *v12; // r11
  __int64 v13; // r12
  char *v14; // r9
  __int64 v15; // r10
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v22; // [rsp+34h] [rbp-55h]
  __int64 v23; // [rsp+48h] [rbp-41h]
  __int64 v24; // [rsp+50h] [rbp-39h]
  char v27; // [rsp+80h] [rbp-9h] BYREF

  v4 = 0;
  v6 = *(_DWORD *)(a1[1] + 20LL);
  v22 = v6;
  v23 = 2LL;
  while ( 1 )
  {
    while ( HvlGetStatsUpdateCounter(v6) )
      ;
    HvlGetReferenceTime();
    LpcbByLpIndex = HvlpGetLpcbByLpIndex(v6);
    if ( LpcbByLpIndex )
    {
      v9 = *((_QWORD *)LpcbByLpIndex + 4);
      v8 = *(_QWORD *)(v9 + 8LL * (unsigned int)qword_140CED5C0);
      v24 = *(_QWORD *)(v9 + 8LL * HIDWORD(qword_140CED5C0));
    }
    else
    {
      v8 = 0LL;
      v24 = 0LL;
    }
    if ( !HvlGetStatsUpdateCounter(v22) )
      break;
    v6 = v22;
  }
  if ( !a3 )
  {
    a1[9] = 0LL;
    v10 = -v8;
    v11 = -v8 - a1[10];
    a1[10] = v10;
    if ( v11 )
    {
      v12 = a1 + 14;
      v13 = 2LL;
      v14 = &v27;
      do
      {
        v15 = *(v12 - 3);
        if ( v15 )
        {
          if ( *(_BYTE *)(v15 + 33) )
          {
            v16 = *((_QWORD *)v14 - 2);
            v17 = *(_QWORD *)(v15 + 16);
            if ( v16 == v17 )
            {
              LODWORD(v19) = *(_DWORD *)(v15 + 24);
            }
            else
            {
              v18 = *((_QWORD *)v14 - 1) - *(_QWORD *)(v15 + 8);
              *(_QWORD *)(v15 + 16) = v16;
              *(_QWORD *)(v15 + 8) = *((_QWORD *)v14 - 1);
              v19 = v18 * (unsigned __int64)*(unsigned __int8 *)(v15 + 35) / (v16 - v17);
              *(_DWORD *)(v15 + 24) = v19;
            }
            *(_DWORD *)v14 = v19;
          }
          else
          {
            LODWORD(v19) = *(_DWORD *)v14;
          }
          v13 = v23;
          *v12 += v11 * (unsigned int)v19;
        }
        ++v12;
        v14 += 24;
        v23 = --v13;
      }
      while ( v13 );
    }
    if ( a1[11] )
    {
      v20 = a1[14];
    }
    else if ( a1[12] )
    {
      v20 = a1[15];
    }
    else
    {
      v20 = 100LL * a1[13];
    }
    a4[3] = v20;
    if ( a1[12] )
      v20 = a1[15];
    a4[4] = v20;
    v4 = 1;
    a4[6] = v24;
    *a4 = 0LL;
    a4[1] = v10;
  }
  return v4;
}
