/*
 * XREFs of ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C00446B0
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0040034 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004ABB0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01C16DC (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0043D04 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0043EC0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C00449F0 (-GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ApiSetEditionMouseSpeedHitTest @ 0x1C0044A90 (ApiSetEditionMouseSpeedHitTest.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C0044CEC (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0072CC0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0095988 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C00A98E8 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C00AA614 (ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C0195DAC (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C019B3F0 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U3@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4444654444@Z @ 0x1C01BDC44 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@.c)
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
  struct tagPOINT v8; // rbx
  CMouseProcessor::CMouseEvent *v10; // rdx
  __int64 v13; // rsi
  int v14; // r14d
  __int64 v15; // r15
  __int16 v16; // r12
  __int64 (__fastcall ***v17)(_QWORD); // rdx
  unsigned int HitTestContext; // edi
  int v19; // eax
  struct tagPOINT *v20; // rdi
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  bool v28; // r15
  int v29; // esi
  __int64 v30; // r14
  _OWORD *v31; // rbx
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 WindowDetails; // rax
  __int64 v50; // r8
  __int64 v51; // r9
  __int128 v52; // xmm1
  HWND WindowHandle; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  HWND v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // [rsp+48h] [rbp-D8h]
  int y; // [rsp+A0h] [rbp-80h] BYREF
  _DWORD v63[3]; // [rsp+A4h] [rbp-7Ch] BYREF
  __int64 v64; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-68h] BYREF
  LONG x; // [rsp+C0h] [rbp-60h] BYREF
  int v67; // [rsp+C4h] [rbp-5Ch] BYREF
  LONG v68; // [rsp+C8h] [rbp-58h] BYREF
  int v69; // [rsp+CCh] [rbp-54h] BYREF
  int v70; // [rsp+D0h] [rbp-50h] BYREF
  int v71; // [rsp+D4h] [rbp-4Ch] BYREF
  int v72; // [rsp+D8h] [rbp-48h] BYREF
  int v73; // [rsp+DCh] [rbp-44h] BYREF
  LONG v74; // [rsp+E0h] [rbp-40h] BYREF
  LONG v75; // [rsp+E4h] [rbp-3Ch] BYREF
  int v76; // [rsp+E8h] [rbp-38h] BYREF
  LONG v77; // [rsp+ECh] [rbp-34h] BYREF
  struct tagPOINT *v78; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v79; // [rsp+F8h] [rbp-28h] BYREF
  __int128 v80; // [rsp+100h] [rbp-20h]
  __int128 v81; // [rsp+110h] [rbp-10h]
  __int64 v82; // [rsp+120h] [rbp+0h]
  __int64 v83; // [rsp+128h] [rbp+8h] BYREF
  __int64 v84; // [rsp+130h] [rbp+10h] BYREF
  __int64 v85; // [rsp+138h] [rbp+18h] BYREF
  __int64 v86; // [rsp+140h] [rbp+20h] BYREF
  __int64 v87; // [rsp+148h] [rbp+28h] BYREF
  __int128 v88; // [rsp+150h] [rbp+30h] BYREF
  __int64 v89; // [rsp+160h] [rbp+40h] BYREF
  __int64 v90; // [rsp+168h] [rbp+48h] BYREF
  __int64 v91; // [rsp+170h] [rbp+50h] BYREF
  __int64 v92; // [rsp+178h] [rbp+58h] BYREF
  _OWORD *v93; // [rsp+180h] [rbp+60h]
  __int64 v94; // [rsp+188h] [rbp+68h] BYREF
  _OWORD v95[7]; // [rsp+190h] [rbp+70h] BYREF
  char v96[40]; // [rsp+200h] [rbp+E0h] BYREF
  char v97[120]; // [rsp+228h] [rbp+108h] BYREF
  _OWORD v98[8]; // [rsp+2A0h] [rbp+180h] BYREF
  _OWORD v99[8]; // [rsp+320h] [rbp+200h] BYREF

  v8 = *a3;
  v93 = (_OWORD *)a2;
  v10 = a5;
  v64 = (__int64)a5;
  v79 = a4;
  v78 = a3;
  v65 = (__int64)a7;
  *(struct tagPOINT *)&v63[1] = v8;
  if ( a7 )
    *a7 = 0;
  if ( (a6 & 1) == 0 )
  {
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(*((_QWORD *)a5 + 1) + 88LL);
    *(_QWORD *)(a1 + 32) = 4LL;
    if ( a6 )
    {
      y = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5909LL);
      v10 = (CMouseProcessor::CMouseEvent *)v64;
    }
    v13 = *((_QWORD *)v10 + 1);
    v63[0] = 0;
    v14 = *(_DWORD *)(v13 + 80);
    v15 = *(_QWORD *)(v13 + 88);
    v16 = *(_WORD *)(v13 + 30);
    HitTestContext = CMouseProcessor::CMouseEvent::GetHitTestContext(v10);
    v19 = (**v17)(v17);
    v61 = HitTestContext;
    v20 = v78;
    v21 = (_OWORD *)ApiSetEditionMouseSpeedHitTest(
                      v97,
                      v16,
                      v15,
                      v14,
                      *(_QWORD *)(v13 + 8),
                      v19,
                      v61,
                      (__int64)v63,
                      v65);
    v22 = v21[1];
    v95[0] = *v21;
    v23 = v21[2];
    v95[1] = v22;
    v24 = v21[3];
    v95[2] = v23;
    v25 = v21[4];
    v95[3] = v24;
    v26 = v21[5];
    v95[4] = v25;
    v27 = v21[6];
    v95[5] = v26;
    v95[6] = v27;
    CInputDest::CInputDest((CInputDest *)v98, (const struct tagINPUTDEST *)v95);
    v28 = v63[0] != 0;
    if ( v65 )
      v29 = *(_DWORD *)v65;
    else
      v29 = 0;
    v30 = *(_QWORD *)(*(_QWORD *)(v64 + 8) + 88LL);
    if ( !(unsigned __int8)InputTraceLogging::Enabled(0LL) )
      goto LABEL_9;
    if ( HIDWORD(v98[5]) == 1 )
    {
      v47 = *(_QWORD *)&v98[5];
    }
    else
    {
      v47 = 0LL;
      if ( HIDWORD(v98[5]) == 2 )
      {
        v48 = *(_QWORD *)&v98[5];
LABEL_17:
        WindowDetails = InputTraceLogging::GetWindowDetails(v96, v48, v47);
        v52 = *(_OWORD *)(WindowDetails + 16);
        v80 = *(_OWORD *)WindowDetails;
        v82 = *(_QWORD *)(WindowDetails + 32);
        v81 = v52;
        if ( v28 )
        {
          if ( (unsigned int)dword_1C024AA90 > 4 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 64LL, v50, v51) )
            {
              WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v98);
              y = v20->y;
              x = v20->x;
              v67 = v63[2];
              v83 = *((_QWORD *)&v80 + 1);
              v94 = v80;
              v71 = HIDWORD(v81);
              v69 = HIDWORD(v82);
              v72 = DWORD2(v81);
              v70 = v82;
              v68 = v8.x;
              v84 = v81;
              v85 = InputTraceLogging::RoutingModeToString(DWORD1(v98[0]), v54, v55, WindowHandle);
              v73 = v29;
              v86 = v56;
              v87 = v30;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                (int)&dword_1C024AA90,
                (int)&unk_1C021F990,
                (__int64)&v87,
                (__int64)&v86,
                (__int64)&v73,
                (__int64)&v85,
                (__int64)&v84,
                (__int64)&v72,
                (__int64)&v71,
                (__int64)&v70,
                (__int64)&v69,
                (__int64)&v83,
                (__int64)&v94,
                (__int64)&v68,
                (__int64)&v67,
                (__int64)&x,
                (__int64)&y);
            }
          }
        }
        else if ( (unsigned int)dword_1C024AA90 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 64LL, v50, v51) )
        {
          v57 = CInputDest::GetWindowHandle((CInputDest *)v98);
          v74 = v20->y;
          v75 = v20->x;
          v76 = v63[2];
          v88 = v80;
          v63[1] = HIDWORD(v81);
          LODWORD(v78) = HIDWORD(v82);
          LODWORD(v64) = DWORD2(v81);
          LODWORD(v79) = v82;
          v77 = v8.x;
          v89 = v81;
          v90 = InputTraceLogging::RoutingModeToString(DWORD1(v98[0]), v58, v59, v57);
          LODWORD(v65) = v29;
          v91 = v60;
          v92 = v30;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (int)&dword_1C024AA90,
            (int)&dword_1C021F8A1,
            (__int64)&v92,
            (__int64)&v91,
            (__int64)&v65,
            (__int64)&v90,
            (__int64)&v89,
            (__int64)&v64,
            (__int64)&v63[1],
            (__int64)&v79,
            (__int64)&v78,
            (__int64)&v88 + 8,
            (__int64)&v88,
            (__int64)&v77,
            (__int64)&v76,
            (__int64)&v75,
            (__int64)&v74);
        }
LABEL_9:
        v31 = v93;
        v32 = v98[1];
        *v93 = v98[0];
        v33 = v98[2];
        v31[1] = v32;
        v34 = v98[3];
        v31[2] = v33;
        v35 = v98[4];
        v31[3] = v34;
        v36 = v98[5];
        v31[4] = v35;
        v37 = v98[6];
        v31[5] = v36;
        v31[6] = v37;
        *((_BYTE *)v31 + 112) = 0;
        memset(v98, 0, 0x78uLL);
        CInputDest::SetEmpty((CInputDest *)v98);
        return v31;
      }
    }
    v48 = 0LL;
    goto LABEL_17;
  }
  v39 = CMouseProcessor::CMouseEvent::GetHitTestContext(a5);
  CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
    (CSpatialProcessor *)a1,
    4u,
    *a3,
    *(_QWORD *)(*(_QWORD *)(v40 + 8) + 88LL),
    0,
    v39);
  CInputDest::CInputDest((CInputDest *)v99, (const struct CInputDest *)(a1 + 3568));
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3688), 1, 1) )
  {
    y = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5893LL);
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint)(
    a3,
    *a3,
    a4,
    v99);
  v41 = v99[1];
  *(_OWORD *)a2 = v99[0];
  v42 = v99[2];
  *(_OWORD *)(a2 + 16) = v41;
  v43 = v99[3];
  *(_OWORD *)(a2 + 32) = v42;
  v44 = v99[4];
  *(_OWORD *)(a2 + 48) = v43;
  v45 = v99[5];
  *(_OWORD *)(a2 + 64) = v44;
  v46 = v99[6];
  *(_OWORD *)(a2 + 80) = v45;
  *(_OWORD *)(a2 + 96) = v46;
  *(_BYTE *)(a2 + 112) = 0;
  memset(v99, 0, 0x78uLL);
  CInputDest::SetEmpty((CInputDest *)v99);
  return (_OWORD *)a2;
}
