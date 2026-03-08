/*
 * XREFs of ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C007C470
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C007C068 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C022F50C (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C023042C (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0079840 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C007C734 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 *     ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C007C900 (-GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ?GetNextInputStreamToken@CInputStreamTokenGenerator@CSpatialProcessor@@SAKXZ @ 0x1C007C920 (-GetNextInputStreamToken@CInputStreamTokenGenerator@CSpatialProcessor@@SAKXZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C007CE44 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C007D0EC (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1C00F2AD6 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C01E31F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C0201934 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C0225CB4 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U3@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapSz@G@@4444654444@Z @ 0x1C0229CFC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapSz@.c)
 *     ?UpdateTargetForCapture@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@@Z @ 0x1C0231850 (-UpdateTargetForCapture@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@@Z.c)
 *     ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C0240E2C (ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 */

_OWORD *__fastcall CMouseProcessor::MouseHitTest(
        __int64 a1,
        __int64 a2,
        struct tagPOINT *a3,
        __int64 a4,
        CMouseProcessor::CMouseEvent *a5,
        int a6,
        _DWORD *a7)
{
  __int64 v8; // rbx
  char v12; // al
  int v13; // eax
  unsigned int HitTestContext; // r13d
  int v15; // eax
  __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // rsi
  int v19; // r14d
  __int64 v20; // r15
  __int16 v21; // r12
  unsigned __int16 v22; // ax
  int v23; // edx
  __int64 v24; // rdi
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  int *v32; // rcx
  bool v33; // r14
  int v34; // esi
  __int64 v35; // r15
  _OWORD *v36; // rbx
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  unsigned int v44; // eax
  HWND v45; // rax
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 WindowDetails; // rax
  __int128 v55; // xmm1
  __int64 v56; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v59; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-60h] BYREF
  int v61; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v63; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v64; // [rsp+E0h] [rbp-40h] BYREF
  __int128 v65; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v66; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v67; // [rsp+100h] [rbp-20h] BYREF
  __int64 WindowHandle; // [rsp+108h] [rbp-18h] BYREF
  __int64 v69; // [rsp+110h] [rbp-10h] BYREF
  __int128 v70; // [rsp+118h] [rbp-8h]
  __int128 v71; // [rsp+128h] [rbp+8h]
  __int64 v72; // [rsp+138h] [rbp+18h]
  _OWORD *v73; // [rsp+140h] [rbp+20h]
  _OWORD v74[7]; // [rsp+150h] [rbp+30h] BYREF
  char v75[48]; // [rsp+1C0h] [rbp+A0h] BYREF
  _OWORD v76[8]; // [rsp+1F0h] [rbp+D0h] BYREF
  _OWORD v77[8]; // [rsp+270h] [rbp+150h] BYREF
  _DWORD v78[28]; // [rsp+2F0h] [rbp+1D0h] BYREF

  v8 = (__int64)*a3;
  v64 = a4;
  v63 = (__int64)a3;
  v73 = (_OWORD *)a2;
  v60 = (__int64)a5;
  v62 = (__int64)a7;
  v59 = v8;
  if ( a7 )
    *a7 = 0;
  if ( (a6 & 1) == 0 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(*((_QWORD *)a5 + 1) + 88LL);
    *(_QWORD *)(a1 + 24) = 4LL;
    if ( a6 )
    {
      LODWORD(v56) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6151LL);
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3696), 1, 1) )
    {
      v12 = 1;
      LODWORD(v56) = 512;
    }
    else
    {
      v12 = 0;
      LODWORD(v56) = 0;
    }
    if ( *((_DWORD *)a5 + 4) == 3 )
    {
      *(_DWORD *)(a1 + 3436) = CSpatialProcessor::CInputStreamTokenGenerator::GetNextInputStreamToken();
    }
    else if ( !v12 )
    {
      *(_DWORD *)(a1 + 3432) = CSpatialProcessor::CInputStreamTokenGenerator::GetNextInputStreamToken();
    }
    v61 = 0;
    memset(v78, 0, sizeof(v78));
    if ( *((_DWORD *)a5 + 4) == 3 )
      v13 = *(_DWORD *)(a1 + 3436);
    else
      v13 = *(_DWORD *)(a1 + 3432);
    HIDWORD(v56) = v13;
    HitTestContext = CMouseProcessor::CMouseEvent::GetHitTestContext(a5);
    v15 = (*(__int64 (__fastcall **)(CMouseProcessor::CMouseEvent *))(*(_QWORD *)a5 + 8LL))(a5);
    v16 = *((_QWORD *)a5 + 1);
    v17 = v15;
    v18 = *(_QWORD *)(v16 + 8);
    v19 = *(_DWORD *)(v16 + 80);
    v20 = *(_QWORD *)(v16 + 88);
    v21 = *(_WORD *)(v16 + 30);
    v22 = (**(__int64 (__fastcall ***)(__int64))v60)(v60);
    v23 = v17 | v56;
    v24 = v63;
    v25 = (_OWORD *)CMouseProcessor::MouseSpeedHitTest(
                      v77,
                      v63,
                      v64,
                      v22,
                      v21,
                      v20,
                      v19,
                      v18,
                      v23,
                      HitTestContext,
                      HIDWORD(v56),
                      &v61,
                      v78);
    v26 = v25[1];
    v74[0] = *v25;
    v27 = v25[2];
    v74[1] = v26;
    v28 = v25[3];
    v74[2] = v27;
    v29 = v25[4];
    v74[3] = v28;
    v30 = v25[5];
    v74[4] = v29;
    v31 = v25[6];
    v74[5] = v30;
    v74[6] = v31;
    CInputDest::CInputDest((CInputDest *)v76, (const struct tagINPUTDEST *)v74);
    v32 = (int *)v62;
    if ( v62 )
      *(_DWORD *)v62 = v78[20];
    v33 = v61 != 0;
    if ( v32 )
      v34 = *v32;
    else
      v34 = 0;
    v35 = *(_QWORD *)(*(_QWORD *)(v60 + 8) + 88LL);
    if ( !(unsigned __int8)InputTraceLogging::Enabled(0LL) )
      goto LABEL_18;
    if ( HIDWORD(v76[5]) == 1 )
    {
      v52 = *(_QWORD *)&v76[5];
    }
    else
    {
      v52 = 0LL;
      if ( HIDWORD(v76[5]) == 2 )
      {
        v53 = *(_QWORD *)&v76[5];
LABEL_29:
        WindowDetails = InputTraceLogging::GetWindowDetails(v75, v53, v52);
        v55 = *(_OWORD *)(WindowDetails + 16);
        v70 = *(_OWORD *)WindowDetails;
        v72 = *(_QWORD *)(WindowDetails + 32);
        v71 = v55;
        if ( v33 )
        {
          if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
          {
            v56 = *(_QWORD *)v24;
            v57 = __PAIR64__(v8, HIDWORD(v59));
            v65 = v70;
            LODWORD(v58) = HIDWORD(v72);
            LODWORD(v62) = v72;
            LODWORD(v63) = HIDWORD(v71);
            LODWORD(v59) = DWORD2(v71);
            v66 = v71;
            LODWORD(v64) = DWORD2(v76[6]);
            v67 = InputTraceLogging::RoutingModeToString(DWORD1(v76[0]));
            LODWORD(v60) = v34;
            WindowHandle = (__int64)CInputDest::GetWindowHandle((CInputDest *)v76);
            v69 = v35;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (int)&dword_1C02CA7E0,
              (int)&unk_1C029D6CA,
              (__int64)&v69,
              (__int64)&WindowHandle,
              (__int64)&v60,
              (__int64)&v67,
              (__int64)&v64,
              (__int64)&v66,
              (__int64)&v59,
              (__int64)&v63,
              (__int64)&v62,
              (__int64)&v58,
              (__int64)&v65 + 8,
              (__int64)&v65,
              (__int64)&v57 + 4,
              (__int64)&v57,
              (__int64)&v56,
              (__int64)&v56 + 4);
          }
        }
        else if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
        {
          LODWORD(v60) = *(_DWORD *)(v24 + 4);
          LODWORD(v64) = *(_DWORD *)v24;
          LODWORD(v59) = HIDWORD(v59);
          WindowHandle = *((_QWORD *)&v70 + 1);
          v69 = v70;
          LODWORD(v62) = HIDWORD(v72);
          LODWORD(v58) = v72;
          v57 = *((_QWORD *)&v71 + 1);
          v67 = v71;
          HIDWORD(v56) = DWORD2(v76[6]);
          LODWORD(v63) = v8;
          v66 = InputTraceLogging::RoutingModeToString(DWORD1(v76[0]));
          LODWORD(v56) = v34;
          *((_QWORD *)&v65 + 1) = CInputDest::GetWindowHandle((CInputDest *)v76);
          *(_QWORD *)&v65 = v35;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (int)&dword_1C02CA7E0,
            (int)&dword_1C029D7C4,
            (__int64)&v65,
            (__int64)&v65 + 8,
            (__int64)&v56,
            (__int64)&v66,
            (__int64)&v56 + 4,
            (__int64)&v67,
            (__int64)&v57,
            (__int64)&v57 + 4,
            (__int64)&v58,
            (__int64)&v62,
            (__int64)&WindowHandle,
            (__int64)&v69,
            (__int64)&v63,
            (__int64)&v59,
            (__int64)&v64,
            (__int64)&v60);
        }
LABEL_18:
        v36 = v73;
        v37 = v76[1];
        *v73 = v76[0];
        v38 = v76[2];
        v36[1] = v37;
        v39 = v76[3];
        v36[2] = v38;
        v40 = v76[4];
        v36[3] = v39;
        v41 = v76[5];
        v36[4] = v40;
        v42 = v76[6];
        v36[5] = v41;
        v36[6] = v42;
        *((_BYTE *)v36 + 112) = 0;
        memset(v76, 0, 0x78uLL);
        CInputDest::SetEmpty((CInputDest *)v76);
        return v36;
      }
    }
    v53 = 0LL;
    goto LABEL_29;
  }
  v44 = CMouseProcessor::CMouseEvent::GetHitTestContext(a5);
  CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
    (CSpatialProcessor *)a1,
    4u,
    *a3,
    *(_QWORD *)(*((_QWORD *)a5 + 1) + 88LL),
    0,
    v44);
  CInputDest::CInputDest((CInputDest *)v77, (const struct CInputDest *)(a1 + 3576));
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3696), 1, 1) )
  {
    LODWORD(v56) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6133LL);
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint)(
    a3,
    *a3,
    a4,
    v77);
  v45 = CInputDest::GetWindowHandle((CInputDest *)v77);
  InputTraceLogging::Mouse::UpdateTargetForCapture(*(_QWORD *)(*((_QWORD *)a5 + 1) + 88LL), v45);
  v46 = v77[1];
  *(_OWORD *)a2 = v77[0];
  v47 = v77[2];
  *(_OWORD *)(a2 + 16) = v46;
  v48 = v77[3];
  *(_OWORD *)(a2 + 32) = v47;
  v49 = v77[4];
  *(_OWORD *)(a2 + 48) = v48;
  v50 = v77[5];
  *(_OWORD *)(a2 + 64) = v49;
  v51 = v77[6];
  *(_OWORD *)(a2 + 80) = v50;
  *(_OWORD *)(a2 + 96) = v51;
  *(_BYTE *)(a2 + 112) = 0;
  memset(v77, 0, 0x78uLL);
  CInputDest::SetEmpty((CInputDest *)v77);
  return (_OWORD *)a2;
}
