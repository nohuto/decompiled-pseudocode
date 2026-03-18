/*
 * XREFs of rimFindOrCreateActiveContact @ 0x1C01AA5A8
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C01ABBB4 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimHidP_GetUsageValue @ 0x1C00E0DCA (rimHidP_GetUsageValue.c)
 *     RIMCmActivateContact @ 0x1C01AFC70 (RIMCmActivateContact.c)
 */

__int64 __fastcall rimFindOrCreateActiveContact(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int16 a5,
        _DWORD *a6)
{
  _DWORD *v6; // rdi
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // r8d
  _QWORD **v11; // rcx
  _QWORD *i; // rdx
  __int64 v13; // rbx
  int v14; // edx
  unsigned int v15; // r10d
  int v16; // ecx
  unsigned int v17; // r9d
  unsigned int v18; // r10d
  char v19; // dl
  int v20; // edx
  int v21; // r8d

  v6 = a6;
  LODWORD(a6) = 0;
  if ( (int)rimHidP_GetUsageValue(0LL, 13LL, a5, 81LL, (__int64)&a6, a2, a3, a4) < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v8) = 0;
    }
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
        (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
    }
  }
  v10 = (unsigned int)a6;
  v11 = (_QWORD **)(*(_QWORD *)(a1 + 992) + 16LL * ((unsigned int)a6 % *(_DWORD *)(a1 + 1000)));
  for ( i = *v11; ; i = (_QWORD *)*i )
  {
    if ( i == v11 )
    {
      v13 = 0LL;
      goto LABEL_15;
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
LABEL_15:
  v14 = *(_DWORD *)(a1 + 24);
  v15 = *(_DWORD *)(a1 + 1008);
  *v6 = 1;
  if ( v14 == 7 )
    v16 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)(a1 + 968) + 32LL), 2);
  else
    v16 = 0;
  v17 = v15 - 1;
  if ( !v16 )
    v17 = v15;
  v18 = *(_DWORD *)(a1 + 768) - 1;
  if ( v14 != 7 )
    v18 = *(_DWORD *)(a1 + 768);
  if ( v17 > v18 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 924);
LABEL_35:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 933);
    v10 = (unsigned int)a6;
LABEL_36:
    v13 = RIMCmActivateContact(a1, v10);
    if ( !v13 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v20) = 0;
      }
      if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v20,
          v21,
          (_DWORD)gRimLog,
          2,
          1,
          39,
          (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
      }
    }
    return v13;
  }
  if ( v17 != v18 )
  {
    if ( v17 < v18 )
      goto LABEL_36;
    goto LABEL_35;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    v19 = 0;
  }
  if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v19,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      2u,
      1u,
      0x26u,
      (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids,
      v17 + 1,
      v18);
  return v13;
}
