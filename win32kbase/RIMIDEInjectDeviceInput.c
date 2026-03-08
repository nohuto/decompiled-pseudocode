/*
 * XREFs of RIMIDEInjectDeviceInput @ 0x1C01C39C8
 * Callers:
 *     NtUserInjectDeviceInput @ 0x1C0172A60 (NtUserInjectDeviceInput.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C01C3E48 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003AE4 (rimProcessDeviceBufferAndStartRead.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C0004188 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00052A0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x1C01AB010 (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     ?RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z @ 0x1C01C0E24 (-RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z.c)
 *     RIMIDESetLinkCollectionUsageValues @ 0x1C01C5080 (RIMIDESetLinkCollectionUsageValues.c)
 */

__int64 __fastcall RIMIDEInjectDeviceInput(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned int v4; // r15d
  __int64 v5; // rax
  char v6; // di
  __int64 v7; // rsi
  int v10; // ebp
  int v11; // edx
  int v12; // r8d
  int v13; // eax
  _WORD *v14; // rbx
  int v15; // eax
  int v16; // edx
  int v17; // r8d
  int v18; // eax
  __int64 v19; // r14
  int v20; // eax
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  char v24; // r9
  char v25; // r11
  unsigned int v26; // ecx
  __int64 v27; // rax
  int v28; // edx
  int v29; // edx
  int v31; // [rsp+60h] [rbp-58h]
  int v32; // [rsp+64h] [rbp-54h] BYREF
  int v33; // [rsp+68h] [rbp-50h]
  int *v34; // [rsp+70h] [rbp-48h]
  unsigned __int16 v35; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v36; // [rsp+D0h] [rbp+18h]

  v36 = a3;
  v3 = *(_QWORD *)(a1 + 408);
  v4 = 0;
  v35 = 0;
  v5 = *(_QWORD *)(a1 + 456);
  v32 = 0;
  v6 = 1;
  v34 = 0LL;
  v7 = (a1 + 72) & -(__int64)(a1 != 0);
  v31 = 1;
  v10 = 0;
  v33 = 1;
  if ( !*(_DWORD *)(v5 + 16) )
    *(_DWORD *)(v5 + 16) = 1;
  RIMLockExclusive(v3 + 104);
  InputTraceLogging::RIM::InjectInput(v7);
  if ( *(_BYTE *)(v3 + 81) )
  {
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v12,
        (_DWORD)gRimLog,
        2,
        1,
        51,
        (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
    }
    v10 = -1073741637;
  }
  else
  {
    v13 = *(_DWORD *)(v7 + 200);
    if ( (v13 & 0x10) != 0 || (v13 & 8) != 0 )
      v34 = &v32;
    memset(*(void **)(*(_QWORD *)(v7 + 456) + 24LL), 0, *(unsigned __int16 *)(*(_QWORD *)(v7 + 456) + 44LL));
    if ( a3 )
    {
      v14 = (_WORD *)(a2 + 8);
      v15 = 1;
      while ( (unsigned int)RIMIDEInjectionIndexToLinkIndex((struct RIMDEV *)v7, (unsigned __int16)*v14, &v35, v15) )
      {
        v18 = *(_DWORD *)(v7 + 200);
        if ( ((v18 & 0x10) != 0 || (v18 & 8) != 0) && *(v14 - 4) == 13 && *(v14 - 3) == 84 )
          v33 = *((_DWORD *)v14 - 1);
        v19 = a2 + 12LL * v4;
        v20 = RIMIDESetLinkCollectionUsageValues(v7, v16, (unsigned int)a2 + 12 * v4, v35, (__int64)v34);
        v22 = 0;
        if ( !v20 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v6 = 0;
          }
          if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v28 = *(unsigned __int16 *)(v19 + 2);
            LOBYTE(v28) = v6;
            LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_dDD(
              WPP_GLOBAL_Control->AttachedDevice,
              v28,
              v21,
              *(unsigned __int16 *)(v19 + 8),
              2);
          }
          goto LABEL_40;
        }
        if ( *v14 )
        {
          v15 = 0;
          v31 = 0;
        }
        else
        {
          v15 = v31;
        }
        ++v4;
        v14 += 6;
        if ( v4 >= v36 )
        {
          v23 = *(_DWORD *)(v7 + 200);
          if ( (v23 & 8) == 0 && (v23 & 0x10) == 0 )
            goto LABEL_32;
          v24 = v32;
          v25 = v33;
          if ( v33 == v32 )
          {
            v26 = v23 & 0xFFFFFFF7;
          }
          else
          {
            v26 = v23 | 8;
            v10 = -1073741436;
            *(_DWORD *)(v7 + 200) = v26;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            {
              LOBYTE(v22) = 1;
            }
            if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_dd(
                WPP_GLOBAL_Control->AttachedDevice,
                v22,
                v21,
                (_DWORD)gRimLog,
                2,
                1,
                50,
                (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
                v25,
                v24);
              v26 = *(_DWORD *)(v7 + 200);
            }
          }
          *(_DWORD *)(v7 + 200) = v26 & 0xFFFFFFEF;
          if ( v10 >= 0 )
          {
LABEL_32:
            RIMLockExclusive(v3 + 760);
            v27 = *(_QWORD *)(v7 + 456);
            *(_DWORD *)(v7 + 256) = 0;
            *(_QWORD *)(v7 + 264) = *(unsigned __int16 *)(v27 + 44);
            rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v3, (struct RIMDEV *)v7, 1);
            *(_QWORD *)(v3 + 768) = 0LL;
            ExReleasePushLockExclusiveEx(v3 + 760, 0LL);
            KeLeaveCriticalRegion();
          }
          goto LABEL_57;
        }
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v6 = 0;
      }
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = *(unsigned __int16 *)(a2 + 12LL * v4 + 2);
        LOBYTE(v29) = v6;
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dDD(
          WPP_GLOBAL_Control->AttachedDevice,
          v29,
          v17,
          *(unsigned __int16 *)(a2 + 12LL * v4 + 8),
          2);
      }
    }
LABEL_40:
    v10 = -1073741668;
  }
LABEL_57:
  *(_QWORD *)(v3 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
