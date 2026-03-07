void __fastcall VidSchiLogAggregatedTelemetry(struct _VIDSCH_GLOBAL *a1)
{
  __int64 v2; // rbx
  unsigned int v3; // r15d
  _DWORD *i; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // esi
  __int64 *v9; // rax
  DXGADAPTER *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r9
  int v21; // r8d
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int16 v27[2]; // [rsp+D0h] [rbp-80h] BYREF
  unsigned int VSyncStatsNumMonitorPowerTransitions; // [rsp+D4h] [rbp-7Ch] BYREF
  unsigned int v29; // [rsp+D8h] [rbp-78h]
  __int64 v30; // [rsp+E0h] [rbp-70h]
  unsigned int v31; // [rsp+E8h] [rbp-68h] BYREF
  unsigned int v32; // [rsp+ECh] [rbp-64h] BYREF
  int v33; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v34; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v35; // [rsp+100h] [rbp-50h]
  __int64 v36; // [rsp+108h] [rbp-48h]
  __int64 v37; // [rsp+110h] [rbp-40h] BYREF
  __int64 v38; // [rsp+118h] [rbp-38h]
  __int64 v39; // [rsp+120h] [rbp-30h]
  __int64 v40; // [rsp+128h] [rbp-28h]
  __int64 v41; // [rsp+130h] [rbp-20h]
  char *v42; // [rsp+138h] [rbp-18h]
  char *v43; // [rsp+140h] [rbp-10h] BYREF
  __int64 v44; // [rsp+148h] [rbp-8h] BYREF
  __int64 v45; // [rsp+150h] [rbp+0h] BYREF
  __int64 v46; // [rsp+158h] [rbp+8h] BYREF
  __int64 v47; // [rsp+160h] [rbp+10h] BYREF
  __int64 v48; // [rsp+168h] [rbp+18h] BYREF
  __int64 v49; // [rsp+170h] [rbp+20h] BYREF
  __int64 v50; // [rsp+178h] [rbp+28h] BYREF
  __int64 v51; // [rsp+180h] [rbp+30h] BYREF
  __int64 v52; // [rsp+188h] [rbp+38h] BYREF
  __int64 v53; // [rsp+190h] [rbp+40h] BYREF
  __int64 v54; // [rsp+198h] [rbp+48h] BYREF
  __int64 v55; // [rsp+1A0h] [rbp+50h] BYREF
  __int64 v56; // [rsp+1A8h] [rbp+58h] BYREF
  __int64 v57; // [rsp+1B0h] [rbp+60h] BYREF
  __int64 v58; // [rsp+1B8h] [rbp+68h] BYREF
  char v59[272]; // [rsp+1C0h] [rbp+70h] BYREF

  v2 = MEMORY[0xFFFFF78000000320];
  if ( (unsigned __int64)KeQueryTimeIncrement() * (v2 - *((_QWORD *)a1 + 301)) >= 0x19254D3800LL )
  {
    v3 = 0;
    *((_QWORD *)a1 + 301) = v2;
    memset(v59, 0, 0x104uLL);
    for ( i = (_DWORD *)*((_QWORD *)a1 + 37); i != (_DWORD *)((char *)a1 + 296); i = *(_DWORD **)i )
    {
      if ( !i[398] )
      {
        v5 = *((_QWORD *)i - 8);
        v6 = *(_QWORD *)(v5 + 2816);
        v7 = *(_QWORD *)(v5 + 2824);
        if ( v6 - v7 > (unsigned __int64)v3 )
        {
          v3 = v6 - v7;
          strcpy_s(v59, 0x104uLL, *(const char **)(v5 + 2648));
        }
        *(_QWORD *)(v5 + 2824) = *(_QWORD *)(v5 + 2816);
      }
    }
    v8 = 0;
    if ( *((_BYTE *)a1 + 2212) )
    {
      v29 = *((_DWORD *)a1 + 10);
      if ( !v29 )
        return;
    }
    else
    {
      v29 = 1;
    }
    v9 = (__int64 *)((char *)a1 + 3200);
    v42 = (char *)a1 + 3200;
    do
    {
      v10 = (DXGADAPTER *)*((_QWORD *)a1 + 2);
      v11 = *v9;
      v34 = 0LL;
      v35 = 0LL;
      v36 = 0LL;
      v37 = 0LL;
      v38 = 0LL;
      v39 = 0LL;
      VSyncStatsNumMonitorPowerTransitions = DXGADAPTER::GetVSyncStatsNumMonitorPowerTransitions(v10, v8);
      if ( VSyncStatsNumMonitorPowerTransitions || *(_QWORD *)(v11 + 44192) )
      {
        DXGADAPTER::GetVSyncTimeCounters(*((_QWORD *)a1 + 2), v8, 1LL, &v34);
        DXGADAPTER::GetVSyncTimeCounters(*((_QWORD *)a1 + 2), v8, 2LL, &v37);
        v13 = v34;
        if ( !v34 )
        {
          DXGADAPTER::GetVSyncTimeCounters(*((_QWORD *)a1 + 2), v8, 0LL, &v34);
          v13 = v34;
        }
        v14 = v35;
        v15 = v36;
        v16 = v37;
        v17 = v38;
        v18 = v39;
        if ( *((_BYTE *)a1 + 59) )
        {
          v13 += *(_QWORD *)(v11 + 78536);
          v14 = *(_QWORD *)(v11 + 78544) + v35;
          v15 = *(_QWORD *)(v11 + 78552) + v36;
          v16 = *(_QWORD *)(v11 + 78560) + v37;
          v17 = *(_QWORD *)(v11 + 78568) + v38;
          v18 = *(_QWORD *)(v11 + 78576) + v39;
        }
        v19 = *(_QWORD *)(v11 + 78752);
        v40 = v16;
        v41 = v17;
        v30 = v18;
        if ( v19 )
          v20 = v19 - *(_QWORD *)(v11 + 78688);
        else
          v20 = (*(_QWORD *)(v11 + 78720) - *(_QWORD *)(v11 + 78656)) * (unsigned int)(10000 * *(_DWORD *)(v11 + 82944));
        if ( (unsigned int)dword_1C0076048 > 5 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0076048, 0x400000000010LL, v12, v20) )
          {
            v23 = *(_QWORD *)(v11 + 78776) - *(_QWORD *)(v11 + 78712);
            v43 = v59;
            v51 = v30 - *(_QWORD *)(v11 + 78648);
            v52 = v17 - *(_QWORD *)(v11 + 78640);
            v53 = v16 - *(_QWORD *)(v11 + 78632);
            v54 = v15 - *(_QWORD *)(v11 + 78624);
            v55 = v14 - *(_QWORD *)(v11 + 78616);
            v44 = v23;
            v45 = *(_QWORD *)(v11 + 78760) - *(_QWORD *)(v11 + 78696);
            v47 = *(_QWORD *)(v11 + 78744) - *(_QWORD *)(v11 + 78680);
            v48 = *(_QWORD *)(v11 + 78728) - *(_QWORD *)(v11 + 78664);
            v49 = *(_QWORD *)(v11 + 78720) - *(_QWORD *)(v11 + 78656);
            v24 = *(_QWORD *)(v11 + 78736) - *(_QWORD *)(v11 + 78672);
            v56 = v13 - *(_QWORD *)(v11 + 78608);
            v33 = *((unsigned __int8 *)a1 + 2212);
            v25 = *((_QWORD *)a1 + 2);
            v31 = v3;
            v46 = v22;
            v50 = v24;
            v32 = v8;
            v26 = *(_QWORD *)(v25 + 404);
            v27[0] = 4;
            v57 = v26;
            v58 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
              v26,
              (unsigned int)&unk_1C0056D01,
              v21,
              v22,
              (__int64)&v58,
              (__int64)v27,
              (__int64)&v57,
              (__int64)&v33,
              (__int64)&v32,
              (__int64)&VSyncStatsNumMonitorPowerTransitions,
              (__int64)&v56,
              (__int64)&v55,
              (__int64)&v54,
              (__int64)&v53,
              (__int64)&v52,
              (__int64)&v51,
              (__int64)&v50,
              (__int64)&v49,
              (__int64)&v48,
              (__int64)&v47,
              (__int64)&v46,
              (__int64)&v45,
              (__int64)&v44,
              (__int64)&v43,
              (__int64)&v31);
            v16 = v40;
            v17 = v41;
          }
          v18 = v30;
        }
        *(_QWORD *)(v11 + 78616) = v14;
        *(_QWORD *)(v11 + 78608) = v13;
        *(_QWORD *)(v11 + 78624) = v15;
        *(_QWORD *)(v11 + 78632) = v16;
        *(_QWORD *)(v11 + 78640) = v17;
        *(_QWORD *)(v11 + 78648) = v18;
        *(_OWORD *)(v11 + 78656) = *(_OWORD *)(v11 + 78720);
        *(_OWORD *)(v11 + 78672) = *(_OWORD *)(v11 + 78736);
        *(_OWORD *)(v11 + 78688) = *(_OWORD *)(v11 + 78752);
        *(_OWORD *)(v11 + 78704) = *(_OWORD *)(v11 + 78768);
      }
      ++v8;
      v9 = (__int64 *)(v42 + 8);
      v42 += 8;
    }
    while ( v8 < v29 );
  }
}
