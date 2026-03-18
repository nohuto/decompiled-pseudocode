/*
 * XREFs of xxxKeyEventEx @ 0x1C006A7C8
 * Callers:
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C00B4C60 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxICO_00@@YAHPEAUtagKE@@@Z @ 0x1C00B7D80 (-xxxICO_00@@YAHPEAUtagKE@@@Z.c)
 *     xxxProcessKeyEvent @ 0x1C00C90C0 (xxxProcessKeyEvent.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C01E486C (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C01E4B58 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     xxxKeyEvent @ 0x1C01EB0B0 (xxxKeyEvent.c)
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C01EB134 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1C01EB250 (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EBD30 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EBEC0 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EC120 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EC340 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EC520 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EC630 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C004FF50 (HMAssignmentLock.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C005361C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     GetActiveHKL @ 0x1C006B1A0 (GetActiveHKL.c)
 *     ApiSetEditionKeyEventLLHook @ 0x1C006B208 (ApiSetEditionKeyEventLLHook.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C006B2DC (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C006B304 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     GetKeyEventInputSource @ 0x1C006B340 (GetKeyEventInputSource.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C006B3FC (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ @ 0x1C006BA20 (-OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01B5B8C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C01DB590 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$01@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4444AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$01@@444@Z @ 0x1C01E9B78 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U-$_t.c)
 *     ?DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01E9D14 (-DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x1C01EA4DC (-OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z.c)
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
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int8 v20; // bl
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // r13d
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // ebx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // edi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // ebx
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
  char v87; // cl
  int v88; // eax
  unsigned __int64 v89; // rcx
  char v90; // bl
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 KeyboardProcessor; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 *v101; // r15
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  int v106; // r13d
  unsigned int v107; // [rsp+58h] [rbp-C0h]
  unsigned __int8 v108; // [rsp+98h] [rbp-80h]
  _WORD v109[5]; // [rsp+9Ah] [rbp-7Eh] BYREF
  int v110; // [rsp+A4h] [rbp-74h]
  __int64 v111; // [rsp+A8h] [rbp-70h] BYREF
  unsigned int v112[2]; // [rsp+B0h] [rbp-68h] BYREF
  int v113; // [rsp+B8h] [rbp-60h]
  __int64 v114; // [rsp+C0h] [rbp-58h] BYREF
  int v115; // [rsp+C8h] [rbp-50h] BYREF
  int v116; // [rsp+CCh] [rbp-4Ch] BYREF
  int v117; // [rsp+D0h] [rbp-48h] BYREF
  int v118; // [rsp+D4h] [rbp-44h] BYREF
  int v119; // [rsp+D8h] [rbp-40h] BYREF
  unsigned int v120; // [rsp+DCh] [rbp-3Ch] BYREF
  BOOL v121; // [rsp+E0h] [rbp-38h] BYREF
  int v122; // [rsp+E4h] [rbp-34h]
  __int64 ActiveHKL; // [rsp+E8h] [rbp-30h] BYREF
  __int64 *v124[2]; // [rsp+F8h] [rbp-20h] BYREF
  __int64 v125[10]; // [rsp+108h] [rbp-10h] BYREF
  __int64 v126; // [rsp+168h] [rbp+50h] BYREF
  unsigned __int16 v127; // [rsp+170h] [rbp+58h]
  unsigned int v128; // [rsp+178h] [rbp+60h]
  __int64 v129; // [rsp+180h] [rbp+68h]

  v129 = a4;
  v128 = a3;
  v127 = a2;
  *(_QWORD *)v112 = 0LL;
  v10 = 0;
  v11 = a6;
  v12 = a2;
  v13 = gptiCurrent;
  v14 = (unsigned __int16)a1;
  v124[0] = (__int64 *)gptiCurrent;
  if ( a6 )
    v110 = *a6;
  else
    v110 = 0xFFFF;
  v111 = -1LL;
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
      v23 = *((_QWORD *)v13 + 53);
      v24 = *(_DWORD *)(v23 + 12);
      v22 = *(_QWORD *)(v23 + 888);
      v10 = v24 >> 31;
    }
    v111 = v22;
  }
  LODWORD(v114) = a7;
  GetKeyEventInputSource(a7, (unsigned __int16)v110, a9, v112);
  _InterlockedOr((volatile signed __int32 *)gpsi, 0x40u);
  LOWORD(v25) = ((v14 & 0x8000) != 0) + 256;
  v122 = (unsigned __int16)v25;
  *(_DWORD *)&v109[3] = (unsigned __int16)v25;
  if ( (*(_BYTE *)(SGDGetUserSessionState(v25, v26, v27, v28) + 14060) & 0x10) != 0
    && (*(_BYTE *)(SGDGetUserSessionState(v30, v29, v31, v32) + 14060) & 4) == 0 )
  {
    *(_DWORD *)&v109[3] += 4;
  }
  v109[1] = v14 & 0x100;
  v108 = CKeyboardProcessor::HandleLeftRightVKs(v14);
  ActiveHKL = GetActiveHKL();
  if ( InputTraceLogging::Enabled(0) )
  {
    v37 = *(_BYTE *)(SGDGetUserSessionState(v34, v33, v35, v36) + 13996) & 1;
    v46 = v37 | 2;
    if ( (*(_BYTE *)(SGDGetUserSessionState(v39, v38, v40, v41) + 14032) & 1) == 0 )
      v46 = v37;
    v51 = v46 | 4;
    if ( (*(_BYTE *)(SGDGetUserSessionState(v43, v42, v44, v45) + 14032) & 4) == 0 )
      v51 = v46;
    v56 = v51 | 8;
    if ( (*(_BYTE *)(SGDGetUserSessionState(v48, v47, v49, v50) + 13996) & 0x10) == 0 )
      v56 = v51;
    v61 = v56 | 0x10;
    if ( (*(_BYTE *)(SGDGetUserSessionState(v53, v52, v54, v55) + 14033) & 1) == 0 )
      v61 = v56;
    v66 = v61 | 0x20;
    if ( (*(_BYTE *)(SGDGetUserSessionState(v58, v57, v59, v60) + 14033) & 4) == 0 )
      v66 = v61;
    v71 = v66 | 0x40;
    if ( (*(_BYTE *)(SGDGetUserSessionState(v63, v62, v64, v65) + 13996) & 4) == 0 )
      v71 = v66;
    v76 = v71 | 0x80;
    if ( (*(_BYTE *)(SGDGetUserSessionState(v68, v67, v69, v70) + 14032) & 0x10) == 0 )
      v76 = v71;
    LOBYTE(v78) = *(_BYTE *)(SGDGetUserSessionState(v73, v72, v74, v75) + 14032);
    v81 = v76 | 0x100;
    if ( (v78 & 0x40) == 0 )
      v81 = v76;
    v86 = v81 | 0x200;
    if ( (*(_BYTE *)(SGDGetUserSessionState(v78, v77, v79, v80) + 14014) & 0x40) == 0 )
      v86 = v81;
    v87 = *(_BYTE *)(SGDGetUserSessionState(v83, v82, v84, v85) + 14015);
    v88 = v86 | 0x400;
    if ( (v87 & 1) == 0 )
      v88 = v86;
    v113 = v88;
    if ( (v88 & 0x648) != 0
      || ((unsigned __int8)(v14 - 48) > 0x3Fu
       || (v89 = 0xFFFF07FFFFFFFFFFuLL, !_bittest64((const __int64 *)&v89, (unsigned int)(v14 - 48))))
      && (unsigned __int8)(v14 + 70) > 6u
      && (unsigned __int8)(v14 + 37) > 7u )
    {
      v90 = v14;
    }
    else
    {
      v90 = -1;
    }
    if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 0x4000LL) )
    {
      LODWORD(v126) = dword_1C02905FC;
      v115 = dword_1C02905F4;
      v116 = *(unsigned __int16 *)(SGDGetUserSessionState(v92, v91, v93, v94) + 12598);
      v109[0] = v113;
      v117 = ActiveHKL;
      v118 = a8;
      v119 = v114;
      v120 = v128;
      v125[0] = (__int64)a5;
      LOBYTE(a6) = v90;
      v121 = (v14 & 0x8000) == 0;
      ActiveHKL = InputTraceLogging::OriginIdToString(v112[1]);
      v114 = (__int64)InputTraceLogging::DeviceTypeToString(v112[0]);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_1C0289810,
        (int)&dword_1C025E249,
        (__int64)&v114,
        (__int64)&ActiveHKL,
        (__int64)&v121,
        (__int64)v125,
        (__int64)&v120,
        (__int64)&v119,
        (__int64)&v118,
        (__int64)&v117,
        (__int64)&a6,
        (__int64)v109,
        (__int64)&v116,
        (__int64)&v115,
        (__int64)&v126);
    }
    v20 = a7;
    v12 = v127;
  }
  if ( qword_1C0296800 && (int)qword_1C0296800() >= 0 && qword_1C0296808 )
  {
    LOBYTE(v95) = v108;
    ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))qword_1C0296808)(v20, v95, v12, v14 & 0x8000);
  }
  if ( a8 )
    goto LABEL_60;
  KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor();
  if ( !KeyboardProcessor || !*(_DWORD *)(KeyboardProcessor + 24) )
  {
    v107 = v10;
    v106 = v129;
    if ( (unsigned int)ApiSetEditionKeyEventLLHook(
                         v124[0],
                         v109[1],
                         (unsigned __int16)v122,
                         *(_DWORD *)&v109[3],
                         v14,
                         v12,
                         (unsigned __int16)v14 & 0x8000,
                         v20,
                         v128,
                         v129,
                         v107,
                         (__int64)&v111) == 1 )
    {
      InputTraceLogging::Keyboard::DropInput(3LL);
      return;
    }
    goto LABEL_61;
  }
  if ( !v11 )
  {
LABEL_60:
    v106 = v129;
LABEL_61:
    xxxUpdateGlobalsAndSendKeyEvent(
      (unsigned __int16)v14,
      v12,
      v128,
      v106,
      (__int64)a5,
      (__int64)v11,
      v110,
      v20,
      a8,
      v21,
      (__int64)v112,
      (__int64)a10);
    return;
  }
  v101 = v124[0] + 55;
  if ( !v124[0][55] )
  {
    if ( *(_QWORD *)(SGDGetUserSessionState(v98, v97, v99, v100) + 13912) )
    {
      v124[0] = v101;
      v124[1] = *(__int64 **)(SGDGetUserSessionState(v103, v102, v104, v105) + 13912);
      HMAssignmentLock(v124, 0);
    }
  }
  CKeyboardProcessor::ForwardInputToKeyboardOverrider(v20, v12, v14, *v11, a5, v128, v11[2], a10);
}
