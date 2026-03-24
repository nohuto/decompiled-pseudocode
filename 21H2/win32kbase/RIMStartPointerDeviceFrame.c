/*
 * XREFs of RIMStartPointerDeviceFrame @ 0x1C0171CF8
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01595D0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C015D0D0 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C015FBFC (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0179434 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01796B8 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0179BD0 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     rimFindHoldingFrame @ 0x1C00A6778 (rimFindHoldingFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C016F8D4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall RIMStartPointerDeviceFrame(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // r14
  int v7; // edx
  _QWORD *HoldingFrame; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // edx
  int v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF
  int v20; // [rsp+A8h] [rbp+48h] BYREF

  v4 = 0;
  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 49, (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids);
  }
  HoldingFrame = rimFindHoldingFrame(a1, v5);
  if ( !HoldingFrame )
  {
    v9 = Win32AllocPoolZInit(0x58uLL, 1718121298LL);
    HoldingFrame = v9;
    if ( !v9 )
      goto LABEL_29;
    v9[3] = *(_QWORD *)(v5 + 16);
    v10 = (_QWORD *)(a1 + 536);
    v11 = *(_QWORD *)(a1 + 536);
    if ( *(_QWORD *)(v11 + 8) != a1 + 536 )
      __fastfail(3u);
    *HoldingFrame = v11;
    HoldingFrame[1] = v10;
    *(_QWORD *)(v11 + 8) = HoldingFrame;
    *v10 = HoldingFrame;
  }
  if ( *((_DWORD *)HoldingFrame + 4) )
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 800);
  }
  if ( *((_DWORD *)HoldingFrame + 11) )
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 801);
  }
  if ( *((_DWORD *)HoldingFrame + 12) )
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 802);
  }
  if ( *((_DWORD *)HoldingFrame + 10) )
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 803);
  }
  if ( HoldingFrame[9] )
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 804);
  }
  if ( HoldingFrame[10] )
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 805);
  }
  if ( HoldingFrame[4] )
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 806);
  }
  if ( HoldingFrame[7] )
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 807);
  }
  if ( HoldingFrame[8] )
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 808);
  }
  if ( a3 < 0 )
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 810);
  }
  *((_DWORD *)HoldingFrame + 4) = 1;
  v4 = 1;
  HoldingFrame[4] = a3;
LABEL_29:
  if ( (unsigned int)dword_1C024BA90 > 4 && tlgKeywordOn((__int64)&dword_1C024BA90, 256LL) )
  {
    v14 = *(_QWORD *)(v5 + 472);
    v15 = *(unsigned __int16 *)(v14 + 16);
    v20 = *(unsigned __int16 *)(v14 + 18);
    v18 = HoldingFrame[4];
    v17 = v15;
    v19 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C024BA90,
      byte_1C021C914,
      v12,
      v13,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v20);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v7, 1, 50, (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids, v4);
  }
  return v4;
}
