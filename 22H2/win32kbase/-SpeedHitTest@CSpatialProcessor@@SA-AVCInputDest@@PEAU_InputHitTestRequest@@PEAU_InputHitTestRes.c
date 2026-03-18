/*
 * XREFs of ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1C005808C
 * Callers:
 *     DCompHitTest @ 0x1C0058000 (DCompHitTest.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C005361C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0057318 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ApiSetAddMagnificationOutputTransform @ 0x1C005880C (ApiSetAddMagnificationOutputTransform.c)
 *     ApiSetClientCallDitThread @ 0x1C0058904 (ApiSetClientCallDitThread.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0058ABC (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0058B74 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C0058BF4 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C00D4174 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C00E0D4A (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C00E16C2 (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1C00E4612 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x1C01B5554 (-GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C01D2B54 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U?$_tlgWrapSz@D@@U2@U2@U4@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@44445AEBU?$_tlgWrapSz@D@@446444444444444444444@Z @ 0x1C01F1E74 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U3.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U2@U?$_tlgWrapSz@G@@U4@U4@U4@U4@U4@U4@U4@U4@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@44AEBU?$_tlgWrapSz@G@@66666666443@Z @ 0x1C01F2240 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U2@U-$_tlgWrapSz@.c)
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z @ 0x1C01F26EC (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z.c)
 */

_DWORD *__fastcall CSpatialProcessor::SpeedHitTest(_DWORD *a1, unsigned int *a2, __int64 a3)
{
  int v6; // ebx
  char v7; // r15
  _DWORD *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  PDEVICE_OBJECT v12; // rcx
  unsigned int v13; // ecx
  const wchar_t *v14; // rax
  const wchar_t *v15; // rax
  const wchar_t *v16; // rax
  const wchar_t *v17; // rax
  const wchar_t *v18; // rax
  const wchar_t *v19; // rax
  const wchar_t *v20; // rax
  const wchar_t *v21; // rax
  bool v22; // zf
  unsigned int v23; // ecx
  const wchar_t *v24; // rax
  __int64 v25; // rax
  int v26; // edx
  int v27; // r8d
  __int64 v28; // rax
  __int64 v29; // r8
  int v30; // r9d
  unsigned int v31; // r15d
  __int64 v32; // r14
  CInputDest *v33; // rcx
  struct tagWND *UserWindow; // rax
  __int64 WindowDetails; // rax
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int64 v38; // rcx
  int v40; // [rsp+120h] [rbp-80h] BYREF
  int v41; // [rsp+124h] [rbp-7Ch] BYREF
  __int64 v42; // [rsp+128h] [rbp-78h] BYREF
  __int64 v43; // [rsp+130h] [rbp-70h] BYREF
  __int64 v44; // [rsp+138h] [rbp-68h] BYREF
  int v45; // [rsp+140h] [rbp-60h] BYREF
  int v46; // [rsp+144h] [rbp-5Ch] BYREF
  int v47; // [rsp+148h] [rbp-58h] BYREF
  int v48; // [rsp+14Ch] [rbp-54h] BYREF
  int v49; // [rsp+150h] [rbp-50h] BYREF
  int v50; // [rsp+154h] [rbp-4Ch] BYREF
  int v51; // [rsp+158h] [rbp-48h] BYREF
  __int64 v52; // [rsp+160h] [rbp-40h] BYREF
  __int64 v53; // [rsp+168h] [rbp-38h] BYREF
  __int64 v54; // [rsp+170h] [rbp-30h] BYREF
  __int64 v55; // [rsp+178h] [rbp-28h] BYREF
  __int64 v56; // [rsp+180h] [rbp-20h] BYREF
  __int64 v57; // [rsp+188h] [rbp-18h] BYREF
  __int64 v58; // [rsp+190h] [rbp-10h] BYREF
  __int64 v59; // [rsp+198h] [rbp-8h] BYREF
  __int64 v60; // [rsp+1A0h] [rbp+0h] BYREF
  __int64 v61; // [rsp+1A8h] [rbp+8h] BYREF
  __int64 v62; // [rsp+1B0h] [rbp+10h] BYREF
  __int64 v63; // [rsp+1B8h] [rbp+18h] BYREF
  __int64 v64; // [rsp+1C0h] [rbp+20h] BYREF
  __int128 v65; // [rsp+1C8h] [rbp+28h] BYREF
  __int64 v66; // [rsp+1D8h] [rbp+38h] BYREF
  __int64 v67; // [rsp+1E0h] [rbp+40h] BYREF
  __int64 v68; // [rsp+1E8h] [rbp+48h] BYREF
  __int64 v69; // [rsp+1F0h] [rbp+50h] BYREF
  __int128 v70; // [rsp+1F8h] [rbp+58h]
  __int128 v71; // [rsp+208h] [rbp+68h]
  __int64 v72; // [rsp+218h] [rbp+78h]
  _BYTE v73[48]; // [rsp+220h] [rbp+80h] BYREF
  _BYTE v74[80]; // [rsp+250h] [rbp+B0h] BYREF
  __int128 v75; // [rsp+2A0h] [rbp+100h]

  memset(a1, 0, 0x70uLL);
  v6 = 0;
  *((_BYTE *)a1 + 112) = 0;
  if ( !*a2 || (v7 = 0, *a2 == 6) )
    v7 = 1;
  v8 = a2 + 5;
  ApiSetAddMagnificationOutputTransform(a2 + 5);
  v12 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v9) = 0;
  }
  LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_ddd(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v10,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      2,
      10,
      (__int64)&WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids,
      *a2,
      *v8,
      a2[6]);
  if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 2LL) )
  {
    v13 = a2[14];
    v44 = *((_QWORD *)a2 + 8);
    v40 = a2[15];
    v14 = L"ControlDown";
    if ( (v13 & 0x100) == 0 )
      v14 = &word_1C0248490;
    LODWORD(v42) = v13;
    v62 = (__int64)v14;
    v15 = L"EraserDown";
    if ( (v13 & 0x80u) == 0 )
      v15 = &word_1C0248490;
    v61 = (__int64)v15;
    v16 = L"BarrelButtonDown";
    if ( (v13 & 0x40) == 0 )
      v16 = &word_1C0248490;
    v60 = (__int64)v16;
    v17 = L"NoHoverPointer";
    if ( (v13 & 0x20) == 0 )
      v17 = &word_1C0248490;
    v59 = (__int64)v17;
    v18 = L"TouchTargeting";
    if ( (v13 & 0x10) == 0 )
      v18 = &word_1C0248490;
    v58 = (__int64)v18;
    v19 = L"ButtonDown";
    if ( (v13 & 8) == 0 )
      v19 = &word_1C0248490;
    v57 = (__int64)v19;
    v20 = L"WheelHorizontal";
    if ( (v13 & 4) == 0 )
      v20 = &word_1C0248490;
    v56 = (__int64)v20;
    v21 = L"WheelIncreasing";
    if ( (v13 & 2) == 0 )
      v21 = &word_1C0248490;
    v22 = (v13 & 1) == 0;
    v23 = *a2;
    v55 = (__int64)v21;
    v24 = L"MouseWheel";
    if ( v22 )
      v24 = &word_1C0248490;
    v54 = (__int64)v24;
    HIDWORD(v42) = a2[6];
    LODWORD(v43) = *v8;
    v53 = (__int64)InputTraceLogging::PointerTypeToString(v23);
    v41 = a2[3];
    v52 = *((_QWORD *)a2 + 6);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (int)&dword_1C0289810,
      (int)&dword_1C025E77E,
      (__int64)&v52,
      (__int64)&v41,
      (__int64)&v53,
      (__int64)&v43,
      (__int64)&v42 + 4,
      (__int64)&v54,
      (__int64)&v55,
      (__int64)&v56,
      (__int64)&v57,
      (__int64)&v58,
      (__int64)&v59,
      (__int64)&v60,
      (__int64)&v61,
      (__int64)&v62,
      (__int64)&v42,
      (__int64)&v40,
      (__int64)&v44);
  }
  v25 = SGDGetUserSessionState(v12, v9, v10, v11);
  if ( (unsigned int)ApiSetClientCallDitThread(*(_QWORD *)(v25 + 3448), a2, a3) )
  {
    if ( qword_1C0296630 && (int)qword_1C0296630() >= 0 && qword_1C0296638 )
      qword_1C0296638(a3 + 16);
    if ( v7 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v26) = 0;
      }
      if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v26,
          v27,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          2,
          11,
          (__int64)&WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids);
      }
      if ( *a1 )
      {
        v40 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 78LL);
      }
      CSpatialProcessor::SatisfyNonPointerInputSinkInfoRequest((const struct _InputHitTestResult *)a3);
    }
    else
    {
      v28 = CSpatialProcessor::ResolveDcompHitTestResultToInputDest(v74, a3, *a2, *((_QWORD *)a2 + 6));
      CInputDest::operator=(a1, v28);
      CInputDest::SetEmpty((CInputDest *)v74);
      if ( *a1 && !CInputDest::GetThreadInfo((CInputDest *)a1) )
      {
        v40 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 89LL);
      }
    }
    if ( *(_QWORD *)(a3 + 8) )
    {
      if ( (unsigned int)dword_1C0289810 > 5 && tlgKeywordOn((__int64)&dword_1C0289810, 4LL) )
      {
        v41 = 1;
        v44 = v29;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1C0289810,
          (unsigned int)&unk_1C025E746,
          v29,
          v30,
          (__int64)&v44,
          (__int64)&v41);
      }
      NtClose(*(HANDLE *)(a3 + 8));
      *(_QWORD *)(a3 + 8) = 0LL;
      if ( !*a1 )
        *(_DWORD *)(a3 + 80) = 0;
    }
  }
  v31 = a2[3];
  v32 = *((_QWORD *)a2 + 6);
  if ( InputTraceLogging::Enabled(0) )
  {
    CInputDest::GetBaseWindow((CInputDest *)a1);
    UserWindow = CInputDest::GetUserWindow(v33);
    WindowDetails = InputTraceLogging::GetWindowDetails(v73, UserWindow);
    v36 = *(_OWORD *)(WindowDetails + 16);
    v70 = *(_OWORD *)WindowDetails;
    v72 = *(_QWORD *)(WindowDetails + 32);
    v37 = *((_OWORD *)a1 + 5);
    v71 = v36;
    v75 = v37;
    if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 2LL) )
    {
      v38 = *(unsigned int *)(a3 + 100);
      v41 = *(_DWORD *)(a3 + 76);
      LODWORD(v43) = *(_DWORD *)(a3 + 72);
      v42 = *(_QWORD *)(a3 + 64);
      v40 = *(_DWORD *)(a3 + 60);
      LODWORD(v63) = *(_DWORD *)(a3 + 56);
      v45 = *(_DWORD *)(a3 + 52);
      v46 = *(_DWORD *)(a3 + 48);
      v47 = *(_DWORD *)(a3 + 44);
      v48 = *(_DWORD *)(a3 + 40);
      v49 = *(_DWORD *)(a3 + 36);
      v50 = *(_DWORD *)(a3 + 32);
      v51 = *(_DWORD *)(a3 + 28);
      LODWORD(v52) = *(_DWORD *)(a3 + 24);
      LODWORD(v53) = *(_DWORD *)(a3 + 20);
      LODWORD(v54) = *(_DWORD *)(a3 + 16);
      LODWORD(v55) = *(_DWORD *)(a3 + 104);
      LODWORD(v56) = *(_DWORD *)(a3 + 96);
      v64 = InputTraceLogging::RoutingModeToString(v38);
      LODWORD(v57) = *(_DWORD *)(a3 + 80);
      if ( HIDWORD(v75) == 2 )
        v6 = -(BYTE8(v75) & 1);
      v65 = v70;
      LODWORD(v59) = HIDWORD(v72);
      LODWORD(v60) = v72;
      LODWORD(v61) = HIDWORD(v71);
      LODWORD(v62) = DWORD2(v71);
      v66 = v71;
      v67 = *(_QWORD *)a3;
      v68 = *(_QWORD *)(a3 + 8);
      LODWORD(v58) = v6;
      LODWORD(v44) = v31;
      v69 = v32;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_1C0289810,
        (int)&dword_1C025E5F2,
        (__int64)&v69,
        (__int64)&v44,
        (__int64)&v68,
        (__int64)&v67,
        (__int64)&v66,
        (__int64)&v62,
        (__int64)&v61,
        (__int64)&v60,
        (__int64)&v59,
        (__int64)&v65 + 8,
        (__int64)&v65,
        (__int64)&v58,
        (__int64)&v57,
        (__int64)&v64,
        (__int64)&v56,
        (__int64)&v55,
        (__int64)&v54,
        (__int64)&v53,
        (__int64)&v52,
        (__int64)&v51,
        (__int64)&v50,
        (__int64)&v49,
        (__int64)&v48,
        (__int64)&v47,
        (__int64)&v46,
        (__int64)&v45,
        (__int64)&v63,
        (__int64)&v40,
        (__int64)&v42,
        (__int64)&v42 + 4,
        (__int64)&v43,
        (__int64)&v41);
    }
  }
  return a1;
}
