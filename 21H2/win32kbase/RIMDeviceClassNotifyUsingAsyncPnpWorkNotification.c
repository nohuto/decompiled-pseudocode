/*
 * XREFs of RIMDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C00456F8
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C0047E70 (RIMDeviceClassNotify.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B500 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??0CTempW32TlsForThread@@QEAA@XZ @ 0x1C0029CE8 (--0CTempW32TlsForThread@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C00454B0 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     ?RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C00459F4 (-RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C0046ABC (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     ??1CTempW32TlsForThread@@QEAA@XZ @ 0x1C0047598 (--1CTempW32TlsForThread@@QEAA@XZ.c)
 *     ApiSetIsRemoteConnection @ 0x1C0047B78 (ApiSetIsRemoteConnection.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     RIMQueueDeviceClassNotifyAsyncWorkItem @ 0x1C01AA71C (RIMQueueDeviceClassNotifyAsyncWorkItem.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeviceClassNotifyUsingAsyncPnpWorkNotification(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r12
  __int64 v8; // rdi
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  char v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r9
  int v17; // edx
  int v18; // r8d
  __int128 v19; // xmm0
  __int128 *v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // r8
  int v26; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v27[24]; // [rsp+58h] [rbp-71h] BYREF
  _OWORD v28[8]; // [rsp+70h] [rbp-59h] BYREF

  CTempW32TlsForThread::CTempW32TlsForThread((CTempW32TlsForThread *)v27);
  v7 = *((unsigned int *)a2 + 2);
  v8 = *a2;
  if ( (unsigned int)v7 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  v9 = *(_QWORD **)(32 * (v7 + 4) + v8);
  v10 = *(_QWORD *)(a1 + 20) - *v9;
  if ( !v10 )
    v10 = *(_QWORD *)(a1 + 28) - v9[1];
  if ( v10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v6);
  v11 = 1;
  LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_S(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v9,
      v6,
      (_DWORD)gRimLog,
      4,
      1,
      15,
      (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL));
  }
  InputTraceLogging::RIM::RimDeviceClassNotification(
    (const struct _GUID *)(a1 + 4),
    *(const struct _UNICODE_STRING **)(a1 + 40));
  v14 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( *(_QWORD *)(a1 + 4) == *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 )
    v14 = *(_QWORD *)(a1 + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v14 )
  {
    if ( *(struct _KTHREAD **)(v8 + 40) == KeGetCurrentThread() )
    {
      ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v26);
      if ( !(unsigned int)ApiSetIsRemoteConnection() )
      {
        RIMLockExclusive(v8 + 104);
        if ( !*(_BYTE *)(v8 + 80) && !*(_BYTE *)(v8 + 81) )
        {
          LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v17,
              v18,
              (_DWORD)gRimLog,
              4,
              1,
              17,
              (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids);
          }
          memset(v28, 0, 0x78uLL);
          v19 = *(_OWORD *)(a1 + 20);
          v20 = *(__int128 **)(a1 + 40);
          v21 = *(_OWORD *)(a1 + 4);
          *((_QWORD *)&v28[1] + 1) = v8;
          v28[4] = v19;
          LODWORD(v28[2]) = v7;
          v28[5] = v21;
          v22 = *v20;
          LODWORD(v28[1]) = 0;
          *(_OWORD *)((char *)&v28[2] + 8) = v22;
          v11 = RIMDeviceClassNotifyAsyncWorkItem((__int64)v28, v23, v24);
        }
        *(_QWORD *)(v8 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(v8 + 104, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( !v26 )
        UserSessionSwitchLeaveCrit(v15, v12, v13, v16);
    }
    else
    {
      LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v13,
          (_DWORD)gRimLog,
          4,
          1,
          16,
          (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids);
      }
      v11 = RIMQueueDeviceClassNotifyAsyncWorkItem((struct RawInputManagerObject *)v8);
    }
  }
  LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v13,
      (_DWORD)gRimLog,
      4,
      1,
      18,
      (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
      v11);
  }
  CTempW32TlsForThread::~CTempW32TlsForThread((CTempW32TlsForThread *)v27);
  return 0LL;
}
