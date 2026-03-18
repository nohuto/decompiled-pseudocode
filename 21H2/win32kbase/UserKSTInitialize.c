/*
 * XREFs of UserKSTInitialize @ 0x1C0054360
 * Callers:
 *     NtKSTInitialize @ 0x1C0054130 (NtKSTInitialize.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C00528F0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?DestroyEventHandles@CKernelSensorThread@@QEAAXXZ @ 0x1C00540A4 (-DestroyEventHandles@CKernelSensorThread@@QEAAXXZ.c)
 *     ?RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher@@QEAAXPEAXP6AX0@Z0@Z @ 0x1C00545B0 (-RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher@@QEAAXPEAXP6AX0@Z0@Z.c)
 *     ?RegisterThreadDispatcherObject@IOCPDispatcher@@QEAAXPEAX@Z @ 0x1C0054640 (-RegisterThreadDispatcherObject@IOCPDispatcher@@QEAAXPEAX@Z.c)
 *     ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x1C00547BC (-DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ.c)
 *     ?ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ @ 0x1C0054934 (-ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ.c)
 *     ActivateKSTInputProcessingHelper @ 0x1C0054AB4 (ActivateKSTInputProcessingHelper.c)
 *     ?InitializeEventHandles@CKernelSensorThread@@QEAAJPEAX0@Z @ 0x1C0054E28 (-InitializeEventHandles@CKernelSensorThread@@QEAAJPEAX0@Z.c)
 *     KSTIOCPDispatcher_Destroy @ 0x1C005A820 (KSTIOCPDispatcher_Destroy.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C005CC08 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C005DB20 (-Read@CBaseInput@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserKSTInitialize(void *a1, void *a2)
{
  void *v2; // rsi
  char v4; // bl
  char v5; // r8
  __int64 v6; // rdx
  CKernelSensorThread *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // edx
  unsigned __int8 v13; // di
  unsigned int v15; // r8d
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+40h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+60h] [rbp-58h] BYREF

  v2 = a2;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v5 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v5 = 0;
  }
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      v5,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      26,
      10,
      (__int64)&WPP_bb145955459d30c8cddbacb454bf0148_Traceguids);
  if ( (unsigned int)dword_1C028EE70 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C028EE70, 2LL) )
    {
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C0263385,
        0LL,
        0LL,
        2u,
        &v17);
      v15 = dword_1C028EE70;
    }
    if ( v15 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 2LL) )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C02631AF,
        0LL,
        0LL,
        2u,
        &v16);
  }
  if ( CInputThreadBase::DeclareThreadAsInput(gpKernelSensorThread) )
  {
    if ( gpKSTIOCPDispatcher )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
    if ( (int)CKernelSensorThread::InitializeEventHandles(v7, a1, v2) >= 0
      && (int)IOCPDispatcher::CreateInstance(&gpKSTIOCPDispatcher) >= 0
      && (unsigned int)ActivateKSTInputProcessingHelper() )
    {
      if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 2LL) )
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C026315A,
          0LL,
          0LL,
          2u,
          &v16);
      CInputThreadBase::ActivateInputProcessing(gpKernelSensorThread);
      IOCPDispatcher::RegisterThreadDispatcherObject(gpKSTIOCPDispatcher, *((void **)gpKernelSensorThread + 7));
      IOCPDispatcher::RegisterThreadDispatcherObject(gpKSTIOCPDispatcher, *((void **)gpKernelSensorThread + 8));
      IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
        gpKSTIOCPDispatcher,
        *((void **)gpKernelSensorThread + 9),
        lambda_41d3d8e444f2107bdec37176a1b6496a_::_lambda_invoker_cdecl_,
        0LL);
      IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
        gpKSTIOCPDispatcher,
        *((void **)gpKernelSensorThread + 10),
        lambda_8c448fb33d037e95b4f6f526a46cb96d_::_lambda_invoker_cdecl_,
        0LL);
      if ( qword_1C029CC70 && (unsigned int)qword_1C029CC70(v10, v9, v11) )
        CBaseInput::HandleTSRequest(gpMouseSensor, 0);
      CBaseInput::Read(qword_1C0288018);
      v13 = 1;
    }
    else
    {
      KSTIOCPDispatcher_Destroy();
      CKernelSensorThread::DestroyEventHandles(gpKernelSensorThread);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          3,
          13,
          (__int64)&WPP_bb145955459d30c8cddbacb454bf0148_Traceguids);
      v13 = 0;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v4 = 0;
    if ( (_BYTE)v12 || v4 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v4,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        26,
        14,
        (__int64)&WPP_bb145955459d30c8cddbacb454bf0148_Traceguids);
    return v13;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        3,
        11,
        (__int64)&WPP_bb145955459d30c8cddbacb454bf0148_Traceguids);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v4 = 0;
    if ( (_BYTE)v6 || v4 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v4,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        26,
        12,
        (__int64)&WPP_bb145955459d30c8cddbacb454bf0148_Traceguids);
    return 0LL;
  }
}
