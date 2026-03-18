/*
 * XREFs of RIMIDEInjectDeviceInput @ 0x1C0195C98
 * Callers:
 *     NtUserInjectDeviceInput @ 0x1C0147250 (NtUserInjectDeviceInput.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C0196118 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0004A38 (rimProcessDeviceBufferAndStartRead.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C00055C0 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x1C017E0B0 (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     ?RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z @ 0x1C01930F4 (-RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z.c)
 *     RIMIDESetLinkCollectionUsageValues @ 0x1C0197350 (RIMIDESetLinkCollectionUsageValues.c)
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
  int v17; // eax
  int v18; // eax
  char v19; // dl
  int v20; // ecx
  int v21; // r9d
  int v22; // r11d
  unsigned int v23; // ecx
  __int64 v24; // rax
  int v26; // [rsp+28h] [rbp-90h]
  int v27; // [rsp+60h] [rbp-58h]
  int v28; // [rsp+64h] [rbp-54h] BYREF
  int v29; // [rsp+68h] [rbp-50h]
  int *v30; // [rsp+70h] [rbp-48h]
  unsigned __int16 v31; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v32; // [rsp+D0h] [rbp+18h]

  v32 = a3;
  v3 = *(_QWORD *)(a1 + 408);
  v4 = 0;
  v31 = 0;
  v5 = *(_QWORD *)(a1 + 456);
  v28 = 0;
  v6 = 1;
  v30 = 0LL;
  v7 = (a1 + 72) & -(__int64)(a1 != 0);
  v27 = 1;
  v10 = 0;
  v29 = 1;
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
      v30 = &v28;
    memset(*(void **)(*(_QWORD *)(v7 + 456) + 24LL), 0, *(unsigned __int16 *)(*(_QWORD *)(v7 + 456) + 44LL));
    if ( a3 )
    {
      v14 = (_WORD *)(a2 + 8);
      v15 = 1;
      while ( (unsigned int)RIMIDEInjectionIndexToLinkIndex((struct RIMDEV *)v7, (unsigned __int16)*v14, &v31, v15) )
      {
        v17 = *(_DWORD *)(v7 + 200);
        if ( ((v17 & 0x10) != 0 || (v17 & 8) != 0) && *(v14 - 4) == 13 && *(v14 - 3) == 84 )
          v29 = *((_DWORD *)v14 - 1);
        v18 = RIMIDESetLinkCollectionUsageValues(v7, v16, (unsigned int)a2 + 12 * v4, v31, (__int64)v30);
        v19 = 0;
        if ( !v18 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v6 = 0;
          }
          if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_dDD(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v6,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              *(unsigned __int16 *)(a2 + 12LL * v4 + 8),
              2u,
              v26,
              0x30u,
              (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
          goto LABEL_40;
        }
        if ( *v14 )
        {
          v15 = 0;
          v27 = 0;
        }
        else
        {
          v15 = v27;
        }
        ++v4;
        v14 += 6;
        if ( v4 >= v32 )
        {
          v20 = *(_DWORD *)(v7 + 200);
          if ( (v20 & 8) == 0 && (v20 & 0x10) == 0 )
            goto LABEL_32;
          v21 = v28;
          v22 = v29;
          if ( v29 == v28 )
          {
            v23 = v20 & 0xFFFFFFF7;
          }
          else
          {
            v23 = v20 | 8;
            v10 = -1073741436;
            *(_DWORD *)(v7 + 200) = v23;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            {
              v19 = 1;
            }
            if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_AND_TRACE_SF_dd(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v19,
                WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                (__int64)gRimLog,
                2u,
                1u,
                0x32u,
                (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
                v22,
                v21);
              v23 = *(_DWORD *)(v7 + 200);
            }
          }
          *(_DWORD *)(v7 + 200) = v23 & 0xFFFFFFEF;
          if ( v10 >= 0 )
          {
LABEL_32:
            RIMLockExclusive(v3 + 760);
            v24 = *(_QWORD *)(v7 + 456);
            *(_DWORD *)(v7 + 256) = 0;
            *(_QWORD *)(v7 + 264) = *(unsigned __int16 *)(v24 + 44);
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
        WPP_RECORDER_AND_TRACE_SF_dDD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v6,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          *(unsigned __int16 *)(a2 + 12LL * v4 + 8),
          2u,
          v26,
          0x31u,
          (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
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
