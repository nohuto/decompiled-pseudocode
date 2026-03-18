/*
 * XREFs of RIMStartPointerDeviceFrame @ 0x1C01A6AF4
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0187718 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C0191610 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01958A0 (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01AE834 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01AEB68 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01AF120 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C01A3FC4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?StartFrame@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x1C01A57F8 (-StartFrame@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z.c)
 *     rimFindOrCreateHoldingFrame @ 0x1C01A6E08 (rimFindOrCreateHoldingFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMStartPointerDeviceFrame(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  unsigned int v6; // edi
  void *v7; // r9
  __int64 HoldingFrame; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // edx
  int v17; // r8d
  int v19; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20; // [rsp+58h] [rbp-30h] BYREF
  __int64 v21; // [rsp+60h] [rbp-28h] BYREF
  int v22; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 0;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v7 = &WPP_8675e8122247356a5f11107ee91523c0_Traceguids;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      48,
      (__int64)&WPP_8675e8122247356a5f11107ee91523c0_Traceguids);
  HoldingFrame = rimFindOrCreateHoldingFrame(a1, v4, a3, v7);
  v12 = HoldingFrame;
  if ( HoldingFrame )
  {
    if ( *(_DWORD *)(HoldingFrame + 16) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    if ( *(_DWORD *)(v12 + 44) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    if ( *(_DWORD *)(v12 + 48) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    if ( *(_DWORD *)(v12 + 40) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    if ( *(_QWORD *)(v12 + 72) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    if ( *(_QWORD *)(v12 + 80) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    if ( *(_QWORD *)(v12 + 32) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    if ( *(_QWORD *)(v12 + 56) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    if ( *(_QWORD *)(v12 + 64) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    if ( v3 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    *(_DWORD *)(v12 + 16) = 1;
    v6 = 1;
    *(_QWORD *)(v12 + 32) = v3;
  }
  if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 256LL) )
  {
    v15 = *(_QWORD *)(v4 + 464);
    v22 = *(unsigned __int16 *)(v15 + 18);
    v19 = *(unsigned __int16 *)(v15 + 16);
    v20 = *(_QWORD *)(v12 + 32);
    v21 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C028EE70,
      byte_1C025E6B6,
      v13,
      v14,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v22);
  }
  InputTraceLogging::TelemetryDebug::RIM::StartFrame();
  LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v16,
      v17,
      (_DWORD)gRimLog,
      4,
      1,
      49,
      (__int64)&WPP_8675e8122247356a5f11107ee91523c0_Traceguids,
      v6);
  }
  return v6;
}
