/*
 * XREFs of xxxKeyEventEx @ 0x1C007F2E0
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C007EE00 (xxxProcessKeyEvent.c)
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C00C3A30 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxICO_00@@YAHPEAUtagKE@@@Z @ 0x1C00C76F0 (-xxxICO_00@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C021419C (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C0214488 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     xxxKeyEvent @ 0x1C021B2F0 (xxxKeyEvent.c)
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C021B374 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1C021B490 (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C021BF70 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C021C100 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C021C360 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C021C580 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C021C760 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C021C870 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     HMAssignmentLock @ 0x1C00788D0 (HMAssignmentLock.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C007D0EC (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     GetActiveHKL @ 0x1C007F950 (GetActiveHKL.c)
 *     ApiSetEditionKeyEventLLHook @ 0x1C0080144 (ApiSetEditionKeyEventLLHook.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C0080360 (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C0080388 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     GetKeyEventInputSource @ 0x1C00804A0 (GetKeyEventInputSource.c)
 *     ApiSetEditionUpdateSASModifiers @ 0x1C0080664 (ApiSetEditionUpdateSASModifiers.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C008097C (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ @ 0x1C0081090 (-OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01E3DAC (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C020A370 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$01@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4444AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$01@@444@Z @ 0x1C0219A4C (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U-$_t.c)
 *     ?DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0219BE8 (-DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x1C021A3B0 (-OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z.c)
 */

void __fastcall xxxKeyEventEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        unsigned __int16 *a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        __int64 a9,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a10)
{
  unsigned int v10; // r13d
  unsigned __int16 *v11; // r14
  unsigned __int16 v12; // di
  struct tagTHREADINFO *v13; // r12
  unsigned int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int8 v20; // bl
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 KeyboardProcessor; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // r13d
  __int64 v45; // rax
  unsigned int v46; // r13d
  int v47; // ebx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // edi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // ebx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  int v66; // edi
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  int v71; // ebx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  int v76; // edi
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  int v81; // ebx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  int v86; // edi
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  int v91; // ebx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  int v96; // edi
  char v97; // cl
  int v98; // eax
  unsigned __int64 v99; // rcx
  char v100; // bl
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 *v104; // r15
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  unsigned int v109; // [rsp+58h] [rbp-C0h]
  unsigned __int8 v110; // [rsp+98h] [rbp-80h]
  _WORD v111[5]; // [rsp+9Ah] [rbp-7Eh] BYREF
  int v112; // [rsp+A4h] [rbp-74h]
  __int64 v113; // [rsp+A8h] [rbp-70h] BYREF
  unsigned int v114[2]; // [rsp+B0h] [rbp-68h] BYREF
  int v115; // [rsp+B8h] [rbp-60h]
  __int64 v116; // [rsp+C0h] [rbp-58h] BYREF
  int v117; // [rsp+C8h] [rbp-50h] BYREF
  int v118; // [rsp+CCh] [rbp-4Ch] BYREF
  int v119; // [rsp+D0h] [rbp-48h] BYREF
  int v120; // [rsp+D4h] [rbp-44h] BYREF
  int v121; // [rsp+D8h] [rbp-40h] BYREF
  unsigned int v122; // [rsp+DCh] [rbp-3Ch] BYREF
  BOOL v123; // [rsp+E0h] [rbp-38h] BYREF
  int v124; // [rsp+E4h] [rbp-34h]
  __int64 ActiveHKL; // [rsp+E8h] [rbp-30h] BYREF
  __int64 *v126[2]; // [rsp+F8h] [rbp-20h] BYREF
  __int64 v127[10]; // [rsp+108h] [rbp-10h] BYREF
  __int64 v128; // [rsp+168h] [rbp+50h] BYREF
  unsigned __int16 v129; // [rsp+170h] [rbp+58h]
  unsigned int v130; // [rsp+178h] [rbp+60h]
  __int64 v131; // [rsp+180h] [rbp+68h]

  v131 = a4;
  v130 = a3;
  v129 = a2;
  *(_QWORD *)v114 = 0LL;
  v10 = 0;
  v11 = a6;
  v12 = a2;
  v13 = gptiCurrent;
  v14 = (unsigned __int16)a1;
  v126[0] = (__int64 *)gptiCurrent;
  if ( a6 )
    v112 = *a6;
  else
    v112 = 0xFFFF;
  v113 = -1LL;
  if ( *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 14152) )
  {
    v19 = SGDGetUserSessionState(v16, v15, v17, v18);
    CAsyncKeyEventMonitor::OnKeyEvent(*(CAsyncKeyEventMonitor **)(v19 + 14152));
  }
  v20 = a7;
  v21 = a9;
  if ( a7 )
  {
    if ( a9 )
    {
      v10 = *(_DWORD *)(a9 + 8);
      v22 = *(_QWORD *)a9;
    }
    else
    {
      v45 = *((_QWORD *)v13 + 53);
      v46 = *(_DWORD *)(v45 + 12);
      v22 = *(_QWORD *)(v45 + 864);
      v10 = v46 >> 31;
    }
    v113 = v22;
  }
  LODWORD(v116) = a7;
  GetKeyEventInputSource(a7, (unsigned __int16)v112, a9, v114);
  _InterlockedOr((volatile signed __int32 *)gpsi, 0x40u);
  LOWORD(v23) = ((v14 & 0x8000) != 0) + 256;
  v124 = (unsigned __int16)v23;
  *(_DWORD *)&v111[3] = (unsigned __int16)v23;
  if ( (*(_BYTE *)(SGDGetUserSessionState(v23, v24, v25, v26) + 14060) & 0x10) != 0
    && (*(_BYTE *)(SGDGetUserSessionState(v28, v27, v29, v30) + 14060) & 4) == 0 )
  {
    *(_DWORD *)&v111[3] += 4;
  }
  v111[1] = v14 & 0x100;
  v110 = CKeyboardProcessor::HandleLeftRightVKs(v14);
  ActiveHKL = GetActiveHKL();
  if ( InputTraceLogging::Enabled(0) )
  {
    v47 = *(_BYTE *)(SGDGetUserSessionState(v32, v31, v33, v34) + 13996) & 1;
    v56 = v47 | 2;
    if ( (*(_BYTE *)(SGDGetUserSessionState(v49, v48, v50, v51) + 14032) & 1) == 0 )
      v56 = v47;
    v61 = v56 | 4;
    if ( (*(_BYTE *)(SGDGetUserSessionState(v53, v52, v54, v55) + 14032) & 4) == 0 )
      v61 = v56;
    v66 = v61 | 8;
    if ( (*(_BYTE *)(SGDGetUserSessionState(v58, v57, v59, v60) + 13996) & 0x10) == 0 )
      v66 = v61;
    v71 = v66 | 0x10;
    if ( (*(_BYTE *)(SGDGetUserSessionState(v63, v62, v64, v65) + 14033) & 1) == 0 )
      v71 = v66;
    v76 = v71 | 0x20;
    if ( (*(_BYTE *)(SGDGetUserSessionState(v68, v67, v69, v70) + 14033) & 4) == 0 )
      v76 = v71;
    v81 = v76 | 0x40;
    if ( (*(_BYTE *)(SGDGetUserSessionState(v73, v72, v74, v75) + 13996) & 4) == 0 )
      v81 = v76;
    v86 = v81 | 0x80;
    if ( (*(_BYTE *)(SGDGetUserSessionState(v78, v77, v79, v80) + 14032) & 0x10) == 0 )
      v86 = v81;
    LOBYTE(v88) = *(_BYTE *)(SGDGetUserSessionState(v83, v82, v84, v85) + 14032);
    v91 = v86 | 0x100;
    if ( (v88 & 0x40) == 0 )
      v91 = v86;
    v96 = v91 | 0x200;
    if ( (*(_BYTE *)(SGDGetUserSessionState(v88, v87, v89, v90) + 14014) & 0x40) == 0 )
      v96 = v91;
    v97 = *(_BYTE *)(SGDGetUserSessionState(v93, v92, v94, v95) + 14015);
    v98 = v96 | 0x400;
    if ( (v97 & 1) == 0 )
      v98 = v96;
    v115 = v98;
    if ( (v98 & 0x648) != 0
      || ((unsigned __int8)(v14 - 48) > 0x3Fu
       || (v99 = 0xFFFF07FFFFFFFFFFuLL, !_bittest64((const __int64 *)&v99, v14 - 48)))
      && (unsigned __int8)(v14 + 70) > 6u
      && (unsigned __int8)(v14 + 37) > 7u )
    {
      v100 = v14;
    }
    else
    {
      v100 = -1;
    }
    if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 0x4000LL) )
    {
      LODWORD(v128) = dword_1C02D159C;
      v117 = dword_1C02D1594;
      v118 = *(unsigned __int16 *)(SGDGetUserSessionState(v101, v31, v102, v103) + 12598);
      v111[0] = v115;
      v119 = ActiveHKL;
      v120 = a8;
      v121 = v116;
      v122 = v130;
      v127[0] = (__int64)a5;
      LOBYTE(a6) = v100;
      v123 = (v14 & 0x8000) == 0;
      ActiveHKL = InputTraceLogging::OriginIdToString(v114[1]);
      v116 = (__int64)InputTraceLogging::DeviceTypeToString(v114[0]);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_1C02CA7E0,
        (int)&dword_1C029CBD7,
        (__int64)&v116,
        (__int64)&ActiveHKL,
        (__int64)&v123,
        (__int64)v127,
        (__int64)&v122,
        (__int64)&v121,
        (__int64)&v120,
        (__int64)&v119,
        (__int64)&a6,
        (__int64)v111,
        (__int64)&v118,
        (__int64)&v117,
        (__int64)&v128);
    }
    v20 = a7;
    v12 = v129;
  }
  LOBYTE(v31) = v110;
  ApiSetEditionUpdateSASModifiers(v20, v31, v12, v14 & 0x8000);
  if ( a8 )
    goto LABEL_57;
  KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor(v36, v35, v37, v38);
  if ( KeyboardProcessor && *(_DWORD *)(KeyboardProcessor + 24) )
  {
    if ( v11 )
    {
      v104 = v126[0] + 55;
      if ( !v126[0][55] )
      {
        if ( *(_QWORD *)(SGDGetUserSessionState(v41, v40, v42, v43) + 13912) )
        {
          v126[0] = v104;
          v126[1] = *(__int64 **)(SGDGetUserSessionState(v106, v105, v107, v108) + 13912);
          HMAssignmentLock(v126, 0);
        }
      }
      CKeyboardProcessor::ForwardInputToKeyboardOverrider(v20, v12, v14, *v11, a5, v130, v11[2], a10);
      return;
    }
LABEL_57:
    v44 = v131;
    goto LABEL_15;
  }
  v109 = v10;
  v44 = v131;
  if ( (unsigned int)ApiSetEditionKeyEventLLHook(
                       v126[0],
                       v111[1],
                       (unsigned __int16)v124,
                       *(_DWORD *)&v111[3],
                       v14,
                       v12,
                       (unsigned __int16)v14 & 0x8000,
                       v20,
                       v130,
                       v131,
                       v109,
                       (__int64)&v113) != 1 )
  {
LABEL_15:
    xxxUpdateGlobalsAndSendKeyEvent(
      (unsigned __int16)v14,
      v12,
      v130,
      v44,
      (__int64)a5,
      (__int64)v11,
      v112,
      v20,
      a8,
      v21,
      (__int64)v114,
      (__int64)a10);
    return;
  }
  InputTraceLogging::Keyboard::DropInput(3LL);
}
