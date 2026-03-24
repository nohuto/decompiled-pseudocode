/*
 * XREFs of RIMIDEInjectDeviceInput @ 0x1C0168B48
 * Callers:
 *     NtUserInjectDeviceInput @ 0x1C01306F0 (NtUserInjectDeviceInput.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C0168EBC (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013705C (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C015A86C (WPP_RECORDER_SF_dDD.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C0166A18 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     ?RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z @ 0x1C0166CBC (-RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z.c)
 *     RIMIDESetLinkCollectionUsageValues @ 0x1C0169D0C (RIMIDESetLinkCollectionUsageValues.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0175130 (rimProcessDeviceBufferAndStartRead.c)
 */

__int64 __fastcall RIMIDEInjectDeviceInput(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r12
  __int64 v4; // rdi
  __int64 v6; // rax
  int v8; // r14d
  int v9; // edx
  int v10; // eax
  unsigned int v11; // r13d
  int v12; // ecx
  _WORD *v13; // rsi
  int v14; // edx
  int v15; // eax
  int v16; // eax
  struct RawInputManagerObject *v17; // rsi
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  unsigned int v22; // eax
  char *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // [rsp+28h] [rbp-70h]
  __int64 v26; // [rsp+30h] [rbp-68h]
  int v27; // [rsp+40h] [rbp-58h]
  int v28; // [rsp+44h] [rbp-54h] BYREF
  int v29; // [rsp+48h] [rbp-50h]
  struct RawInputManagerObject *v30; // [rsp+50h] [rbp-48h]
  int *v31; // [rsp+58h] [rbp-40h]
  unsigned __int16 v32; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v33; // [rsp+B0h] [rbp+18h]

  v33 = a3;
  v3 = *(_QWORD *)(a1 + 424);
  v4 = a1 + 88;
  v30 = (struct RawInputManagerObject *)v3;
  v32 = 0;
  v28 = 0;
  v6 = *(_QWORD *)(a1 + 472);
  v31 = 0LL;
  v8 = 0;
  v27 = 1;
  v29 = 1;
  if ( !*(_DWORD *)(v6 + 16) )
    *(_DWORD *)(v6 + 16) = 1;
  RIMLockExclusive(v3 + 104);
  InputTraceLogging::RIM::InjectInput(v4);
  if ( *(_BYTE *)(v3 + 81) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 51, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
    }
    v8 = -1073741637;
    v17 = (struct RawInputManagerObject *)v3;
  }
  else
  {
    v10 = *(_DWORD *)(v4 + 200);
    if ( (v10 & 0x10) != 0 || (v10 & 8) != 0 )
      v31 = &v28;
    memset(*(void **)(*(_QWORD *)(v4 + 464) + 24LL), 0, *(unsigned __int16 *)(*(_QWORD *)(v4 + 464) + 44LL));
    v11 = 0;
    if ( a3 )
    {
      v12 = 1;
      v13 = (_WORD *)(a2 + 8);
      while ( (unsigned int)RIMIDEInjectionIndexToLinkIndex((struct RIMDEV *)v4, (unsigned __int16)*v13, &v32, v12) )
      {
        v15 = *(_DWORD *)(v4 + 200);
        if ( ((v15 & 0x10) != 0 || (v15 & 8) != 0) && *(v13 - 4) == 13 && *(v13 - 3) == 84 )
          v29 = *((_DWORD *)v13 - 1);
        v16 = RIMIDESetLinkCollectionUsageValues(v4, v14, (unsigned int)a2 + 12 * v11, v32, (__int64)v31);
        v12 = 0;
        if ( !v16 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dDD(
              *(unsigned __int16 *)(a2 + 12LL * v11),
              2u,
              *(unsigned __int16 *)(a2 + 12LL * v11 + 8),
              0x30u,
              (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
              *(unsigned __int16 *)(a2 + 12LL * v11 + 8),
              *(unsigned __int16 *)(a2 + 12LL * v11 + 2),
              *(unsigned __int16 *)(a2 + 12LL * v11));
          goto LABEL_23;
        }
        if ( *v13 )
          v27 = 0;
        else
          v12 = v27;
        ++v11;
        v13 += 6;
        if ( v11 >= v33 )
          goto LABEL_29;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dDD(
          3LL * v11,
          2u,
          *(unsigned __int16 *)(a2 + 12LL * v11 + 8),
          0x31u,
          (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
          *(unsigned __int16 *)(a2 + 12LL * v11 + 8),
          *(unsigned __int16 *)(a2 + 12LL * v11 + 2),
          *(unsigned __int16 *)(a2 + 12LL * v11));
      v16 = 0;
LABEL_29:
      if ( !v16 )
        goto LABEL_23;
      v19 = *(_DWORD *)(v4 + 200);
      if ( (v19 & 8) == 0 && (v19 & 0x10) == 0 )
        goto LABEL_37;
      v20 = v28;
      v21 = v29;
      if ( v29 == v28 )
      {
        v22 = v19 & 0xFFFFFFF7;
      }
      else
      {
        v22 = v19 | 8;
        v8 = -1073741436;
        *(_DWORD *)(v4 + 200) = v22;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v26) = v20;
          LODWORD(v25) = v21;
          WPP_RECORDER_SF_Dd(
            (__int64)gRimLog,
            2u,
            1u,
            0x32u,
            (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
            v25,
            v26);
          v22 = *(_DWORD *)(v4 + 200);
        }
      }
      *(_DWORD *)(v4 + 200) = v22 & 0xFFFFFFEF;
      if ( v8 >= 0 )
      {
LABEL_37:
        v17 = v30;
        v23 = (char *)v30 + 568;
        RIMLockExclusive((__int64)v30 + 568);
        v24 = *(_QWORD *)(v4 + 464);
        *(_DWORD *)(v4 + 256) = 0;
        *(_QWORD *)(v4 + 264) = *(unsigned __int16 *)(v24 + 44);
        rimProcessDeviceBufferAndStartRead(v17, (struct RIMDEV *)v4);
        *((_QWORD *)v23 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v23, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_25;
      }
    }
    else
    {
LABEL_23:
      v8 = -1073741668;
    }
    v17 = v30;
  }
LABEL_25:
  *((_QWORD *)v17 + 14) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v17 + 104, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
