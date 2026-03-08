/*
 * XREFs of RIMStartPointerDeviceFrame @ 0x1C01CDC44
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01A93A0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01B9F94 (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x1C01BC12C (rimEndAllActiveContactsWorker.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01D5FD0 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01D6420 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01D6A24 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C00F0068 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?StartFrame@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x1C00F0312 (-StartFrame@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z.c)
 *     rimFindOrCreateHoldingFrame @ 0x1C01CE0A0 (rimFindOrCreateHoldingFrame.c)
 */

__int64 __fastcall RIMStartPointerDeviceFrame(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // edi
  __int64 v5; // r14
  void *v7; // r9
  __int64 HoldingFrame; // rax
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // edx
  int v14; // r8d
  int v16; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h] BYREF
  int v19; // [rsp+B8h] [rbp+48h] BYREF

  v3 = a3;
  v4 = 0;
  v5 = a2;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  v7 = &WPP_9395a828eeb43e0402bb2d1378077ce1_Traceguids;
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
      (__int64)&WPP_9395a828eeb43e0402bb2d1378077ce1_Traceguids);
  HoldingFrame = rimFindOrCreateHoldingFrame(a1, v5, a3, v7);
  v9 = HoldingFrame;
  if ( HoldingFrame )
  {
    if ( *(_DWORD *)(HoldingFrame + 16) )
    {
      v19 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 794);
    }
    if ( *(_DWORD *)(v9 + 44) )
    {
      v19 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 795);
    }
    if ( *(_DWORD *)(v9 + 48) )
    {
      v19 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 796);
    }
    if ( *(_DWORD *)(v9 + 40) )
    {
      v19 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 797);
    }
    if ( *(_QWORD *)(v9 + 72) )
    {
      v19 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 798);
    }
    if ( *(_QWORD *)(v9 + 80) )
    {
      v19 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 799);
    }
    if ( *(_QWORD *)(v9 + 32) )
    {
      v19 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 800);
    }
    if ( *(_QWORD *)(v9 + 56) )
    {
      v19 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 801);
    }
    if ( *(_QWORD *)(v9 + 64) )
    {
      v19 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 802);
    }
    *(_DWORD *)(v9 + 16) = 1;
    *(_QWORD *)(v9 + 32) = v3;
    v4 = 1;
  }
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
  {
    v12 = *(_QWORD *)(v5 + 464);
    v19 = *(unsigned __int16 *)(v12 + 18);
    v16 = *(unsigned __int16 *)(v12 + 16);
    v17 = *(_QWORD *)(v9 + 32);
    v18 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C0297B99,
      v10,
      v11,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v19);
  }
  InputTraceLogging::TelemetryDebug::RIM::StartFrame();
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v13) = 0;
  }
  if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v13,
      v14,
      (_DWORD)gRimLog,
      4,
      1,
      49,
      (__int64)&WPP_9395a828eeb43e0402bb2d1378077ce1_Traceguids,
      v4);
  }
  return v4;
}
