/*
 * XREFs of rimFindOrCreateActiveContact @ 0x1C01B0D78
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C01B2140 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     rimHidP_GetUsageValue @ 0x1C00E63A2 (rimHidP_GetUsageValue.c)
 *     RIMCmActivateContact @ 0x1C01B5F68 (RIMCmActivateContact.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindOrCreateActiveContact(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        char *a3,
        unsigned int a4,
        unsigned __int16 a5,
        _DWORD *a6)
{
  _DWORD *v6; // rsi
  int v8; // edx
  int v9; // r8d
  __int64 v10; // r8
  _QWORD **v11; // rcx
  _QWORD *i; // rdx
  __int64 v13; // rbx
  __int64 v14; // rdx
  unsigned int v15; // r10d
  __int64 v16; // rcx
  unsigned int v17; // r9d
  unsigned int v18; // r10d
  int v19; // edx
  int v20; // r8d

  v6 = a6;
  LODWORD(a6) = 0;
  if ( rimHidP_GetUsageValue(HidP_Input, 0xDu, a5, 0x51u, (unsigned int *)&a6, a2, a3, a4) < 0 )
  {
    LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        (_DWORD)gRimLog,
        3,
        1,
        37,
        (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
    }
  }
  v10 = (unsigned int)a6;
  v11 = (_QWORD **)(*(_QWORD *)(a1 + 992) + 16LL * ((unsigned int)a6 % *(_DWORD *)(a1 + 1000)));
  for ( i = *v11; ; i = (_QWORD *)*i )
  {
    if ( i == v11 )
    {
      v13 = 0LL;
      goto LABEL_16;
    }
    v13 = (__int64)(i - 2);
    if ( *((_DWORD *)i - 4) == (_DWORD)a6 && (*(_DWORD *)(v13 + 32) & 4) == 0 )
      break;
  }
  if ( i != (_QWORD *)16 )
  {
    *v6 = 0;
    return v13;
  }
LABEL_16:
  v14 = *(unsigned int *)(a1 + 24);
  v15 = *(_DWORD *)(a1 + 1008);
  *v6 = 1;
  if ( (_DWORD)v14 == 7 )
    v16 = (unsigned int)-__CFSHR__(*(_DWORD *)(*(_QWORD *)(a1 + 968) + 32LL), 2);
  else
    v16 = 0LL;
  v17 = v15 - 1;
  if ( !(_DWORD)v16 )
    v17 = v15;
  v18 = *(_DWORD *)(a1 + 768) - 1;
  if ( (_DWORD)v14 != 7 )
    v18 = *(_DWORD *)(a1 + 768);
  if ( v17 > v18 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v14, v10);
LABEL_37:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v14, v10);
    LODWORD(v10) = (_DWORD)a6;
LABEL_38:
    v13 = RIMCmActivateContact(a1, (unsigned int)v10);
    if ( !v13 )
    {
      LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v19,
          v20,
          (_DWORD)gRimLog,
          2,
          1,
          39,
          (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
      }
    }
    return v13;
  }
  if ( v17 != v18 )
  {
    if ( v17 < v18 )
      goto LABEL_38;
    goto LABEL_37;
  }
  LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v14,
      v10,
      (_DWORD)gRimLog,
      2,
      1,
      38,
      (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids,
      v17 + 1,
      v18);
  }
  return v13;
}
