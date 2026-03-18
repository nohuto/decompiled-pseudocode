/*
 * XREFs of ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C003880C
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00364E4 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0040FFC (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FBCD8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C00356F8 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C003802C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C0038BB0 (-GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C003A380 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00447F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C00CDC54 (ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C00CDE80 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1C00E8416 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C01D3C70 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U3@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4444654444@Z @ 0x1C01F85A4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CMouseProcessor::MouseHitTest(
        __int64 a1,
        __int64 a2,
        struct tagPOINT *a3,
        __int64 a4,
        CMouseProcessor::CMouseEvent *a5,
        unsigned int a6,
        _DWORD *a7)
{
  __int64 v8; // rbx
  __int64 v12; // rcx
  int v13; // edi
  signed __int32 v14; // eax
  int v15; // eax
  unsigned int HitTestContext; // r13d
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // r12d
  __int64 v20; // rdi
  int v21; // esi
  __int64 v22; // r14
  __int16 v23; // r15
  __int16 v24; // ax
  int *v25; // rdi
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  int *v33; // rcx
  bool v34; // r14
  int v35; // esi
  __int64 v36; // r15
  _OWORD *v37; // rbx
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  unsigned int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  signed __int32 v54; // eax
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 WindowDetails; // rax
  __int128 v58; // xmm1
  __int64 v59; // [rsp+38h] [rbp-E8h]
  int v60; // [rsp+A0h] [rbp-80h] BYREF
  int v61; // [rsp+A4h] [rbp-7Ch] BYREF
  __int64 v62; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v63; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-68h] BYREF
  int v65; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v66; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v67; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-48h] BYREF
  __int128 v69; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v70; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v71; // [rsp+F8h] [rbp-28h] BYREF
  __int64 WindowHandle; // [rsp+100h] [rbp-20h] BYREF
  __int64 v73; // [rsp+108h] [rbp-18h] BYREF
  __int128 v74; // [rsp+110h] [rbp-10h]
  _BYTE v75[24]; // [rsp+120h] [rbp+0h]
  _OWORD *v76; // [rsp+138h] [rbp+18h]
  _OWORD v77[7]; // [rsp+140h] [rbp+20h] BYREF
  char v78[48]; // [rsp+1B0h] [rbp+90h] BYREF
  _OWORD v79[8]; // [rsp+1E0h] [rbp+C0h] BYREF
  _OWORD v80[8]; // [rsp+260h] [rbp+140h] BYREF
  _DWORD v81[28]; // [rsp+2E0h] [rbp+1C0h] BYREF

  v8 = (__int64)*a3;
  v68 = a4;
  v67 = (__int64)a3;
  v76 = (_OWORD *)a2;
  v64 = (__int64)a5;
  v66 = (__int64)a7;
  v63 = v8;
  if ( a7 )
    *a7 = 0;
  if ( (a6 & 1) == 0 )
  {
    v12 = *(_QWORD *)(*((_QWORD *)a5 + 1) + 88LL);
    *(_QWORD *)(a1 + 16) = v12;
    *(_QWORD *)(a1 + 24) = 4LL;
    if ( a6 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, a6, 1LL);
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3696), 1, 1) != 0 ? 0x200 : 0;
    if ( *((_DWORD *)a5 + 4) == 3 )
    {
      do
        v54 = _InterlockedIncrement((volatile signed __int32 *)&CSpatialProcessor::CInputStreamTokenGenerator::nextInputStreamToken);
      while ( !v54 );
      *(_DWORD *)(a1 + 3436) = v54;
    }
    else if ( !v13 )
    {
      do
        v14 = _InterlockedIncrement((volatile signed __int32 *)&CSpatialProcessor::CInputStreamTokenGenerator::nextInputStreamToken);
      while ( !v14 );
      *(_DWORD *)(a1 + 3432) = v14;
    }
    v65 = 0;
    memset(v81, 0, sizeof(v81));
    if ( *((_DWORD *)a5 + 4) == 3 )
      v15 = *(_DWORD *)(a1 + 3436);
    else
      v15 = *(_DWORD *)(a1 + 3432);
    v60 = v15;
    HitTestContext = CMouseProcessor::CMouseEvent::GetHitTestContext(a5);
    v17 = (*(__int64 (__fastcall **)(CMouseProcessor::CMouseEvent *))(*(_QWORD *)a5 + 8LL))(a5);
    v18 = *((_QWORD *)a5 + 1);
    v19 = v13 | v17;
    v20 = *(_QWORD *)(v18 + 8);
    v21 = *(_DWORD *)(v18 + 80);
    v22 = *(_QWORD *)(v18 + 88);
    v23 = *(_WORD *)(v18 + 30);
    v24 = (**(__int64 (__fastcall ***)(__int64))v64)(v64);
    v59 = v20;
    v25 = (int *)v67;
    v26 = CMouseProcessor::MouseSpeedHitTest(
            v80,
            (_QWORD *)v67,
            v68,
            v24,
            v23,
            v22,
            v21,
            v59,
            v19,
            HitTestContext,
            v60,
            &v65,
            (__int64)v81);
    v27 = v26[1];
    v77[0] = *v26;
    v28 = v26[2];
    v77[1] = v27;
    v29 = v26[3];
    v77[2] = v28;
    v30 = v26[4];
    v77[3] = v29;
    v31 = v26[5];
    v77[4] = v30;
    v32 = v26[6];
    v77[5] = v31;
    v77[6] = v32;
    CInputDest::CInputDest((CInputDest *)v79, (const struct tagINPUTDEST *)v77);
    v33 = (int *)v66;
    if ( v66 )
      *(_DWORD *)v66 = v81[20];
    v34 = v65 != 0;
    if ( v33 )
      v35 = *v33;
    else
      v35 = 0;
    v36 = *(_QWORD *)(*(_QWORD *)(v64 + 8) + 88LL);
    if ( !InputTraceLogging::Enabled(0) )
      goto LABEL_17;
    if ( HIDWORD(v79[5]) == 1 )
    {
      v55 = *(_QWORD *)&v79[5];
    }
    else
    {
      v55 = 0LL;
      if ( HIDWORD(v79[5]) == 2 )
      {
        v56 = *(_QWORD *)&v79[5];
LABEL_28:
        WindowDetails = InputTraceLogging::GetWindowDetails(v78, v56, v55);
        v58 = *(_OWORD *)(WindowDetails + 16);
        v74 = *(_OWORD *)WindowDetails;
        *(_QWORD *)&v75[16] = *(_QWORD *)(WindowDetails + 32);
        *(_OWORD *)v75 = v58;
        if ( v34 )
        {
          if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 64LL) )
          {
            v60 = v25[1];
            v61 = *v25;
            v62 = __PAIR64__(v8, HIDWORD(v63));
            v69 = v74;
            LODWORD(v66) = *(_DWORD *)&v75[20];
            LODWORD(v67) = *(_DWORD *)&v75[16];
            LODWORD(v63) = *(_DWORD *)&v75[12];
            LODWORD(v68) = *(_DWORD *)&v75[8];
            v70 = *(_QWORD *)v75;
            v71 = InputTraceLogging::RoutingModeToString(DWORD1(v79[0]));
            LODWORD(v64) = v35;
            WindowHandle = (__int64)CInputDest::GetWindowHandle((CInputDest *)v79);
            v73 = v36;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (int)&dword_1C028EE70,
              (int)&unk_1C0263955,
              (__int64)&v73,
              (__int64)&WindowHandle,
              (__int64)&v64,
              (__int64)&v71,
              (__int64)&v70,
              (__int64)&v68,
              (__int64)&v63,
              (__int64)&v67,
              (__int64)&v66,
              (__int64)&v69 + 8,
              (__int64)&v69,
              (__int64)&v62 + 4,
              (__int64)&v62,
              (__int64)&v61,
              (__int64)&v60);
          }
        }
        else if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 64LL) )
        {
          LODWORD(v64) = v25[1];
          LODWORD(v68) = *v25;
          LODWORD(v63) = HIDWORD(v63);
          WindowHandle = *((_QWORD *)&v74 + 1);
          v73 = v74;
          LODWORD(v66) = *(_DWORD *)&v75[20];
          v62 = *(_QWORD *)&v75[12];
          v61 = *(_DWORD *)&v75[8];
          v71 = *(_QWORD *)v75;
          LODWORD(v67) = v8;
          v70 = InputTraceLogging::RoutingModeToString(DWORD1(v79[0]));
          v60 = v35;
          *((_QWORD *)&v69 + 1) = CInputDest::GetWindowHandle((CInputDest *)v79);
          *(_QWORD *)&v69 = v36;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (int)&dword_1C028EE70,
            (int)&dword_1C0263A3D,
            (__int64)&v69,
            (__int64)&v69 + 8,
            (__int64)&v60,
            (__int64)&v70,
            (__int64)&v71,
            (__int64)&v61,
            (__int64)&v62,
            (__int64)&v62 + 4,
            (__int64)&v66,
            (__int64)&WindowHandle,
            (__int64)&v73,
            (__int64)&v67,
            (__int64)&v63,
            (__int64)&v68,
            (__int64)&v64);
        }
LABEL_17:
        v37 = v76;
        v38 = v79[1];
        *v76 = v79[0];
        v39 = v79[2];
        v37[1] = v38;
        v40 = v79[3];
        v37[2] = v39;
        v41 = v79[4];
        v37[3] = v40;
        v42 = v79[5];
        v37[4] = v41;
        v43 = v79[6];
        v37[5] = v42;
        v37[6] = v43;
        *((_BYTE *)v37 + 112) = 0;
        memset(v79, 0, 0x78uLL);
        CInputDest::SetEmpty((CInputDest *)v79);
        return v37;
      }
    }
    v56 = 0LL;
    goto LABEL_28;
  }
  v45 = CMouseProcessor::CMouseEvent::GetHitTestContext(a5);
  CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
    (CSpatialProcessor *)a1,
    4u,
    *a3,
    *(_QWORD *)(*((_QWORD *)a5 + 1) + 88LL),
    0,
    v45);
  CInputDest::CInputDest((CInputDest *)v80, (const struct CInputDest *)(a1 + 3576));
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3696), 1, 1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, v46, v47);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint)(
    a3,
    *a3,
    a4,
    v80);
  v48 = v80[1];
  *(_OWORD *)a2 = v80[0];
  v49 = v80[2];
  *(_OWORD *)(a2 + 16) = v48;
  v50 = v80[3];
  *(_OWORD *)(a2 + 32) = v49;
  v51 = v80[4];
  *(_OWORD *)(a2 + 48) = v50;
  v52 = v80[5];
  *(_OWORD *)(a2 + 64) = v51;
  v53 = v80[6];
  *(_OWORD *)(a2 + 80) = v52;
  *(_OWORD *)(a2 + 96) = v53;
  *(_BYTE *)(a2 + 112) = 0;
  memset(v80, 0, 0x78uLL);
  CInputDest::SetEmpty((CInputDest *)v80);
  return (_OWORD *)a2;
}
