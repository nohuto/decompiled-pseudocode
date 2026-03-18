/*
 * XREFs of xxxRealDefWindowProc @ 0x1C0067528
 * Callers:
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00673C0 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x1C00A3F90 (xxxDefWindowProc.c)
 * Callees:
 *     _IsDescendant @ 0x1C00205E8 (_IsDescendant.c)
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0048EF8 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     xxxSleepThread2 @ 0x1C0052D3C (xxxSleepThread2.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     DWP_SetHotKey @ 0x1C0063640 (DWP_SetHotKey.c)
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C00636DC (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     xxxDrawWindowFrame @ 0x1C00638D4 (xxxDrawWindowFrame.c)
 *     xxxCalcClientRect @ 0x1C0066538 (xxxCalcClientRect.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     xxxAdjustSize @ 0x1C00686A8 (xxxAdjustSize.c)
 *     _InitPwSB @ 0x1C006884C (_InitPwSB.c)
 *     DefSetText @ 0x1C00689C0 (DefSetText.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00692F0 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C006D640 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     xxxInternalDoSyncPaint @ 0x1C0071E00 (xxxInternalDoSyncPaint.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0077064 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     GetNonChildAncestor @ 0x1C00825AC (GetNonChildAncestor.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00A36F0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxLoadUserApiHook @ 0x1C00A4130 (xxxLoadUserApiHook.c)
 *     xxxInternalGetMessage @ 0x1C00A4B4C (xxxInternalGetMessage.c)
 *     PostIAMShellHookMessage @ 0x1C00A5150 (PostIAMShellHookMessage.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     xxxRedrawTitle @ 0x1C00A6034 (xxxRedrawTitle.c)
 *     PostShellHookMessagesEx @ 0x1C00A6128 (PostShellHookMessagesEx.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00A6180 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00A75A0 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00A770C (MSGSQMAddMessage.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00A79AC (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxReleaseCapture @ 0x1C00AA35C (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00AA44C (xxxSetCapture.c)
 *     xxxSendNotifyMessage @ 0x1C00ACBA0 (xxxSendNotifyMessage.c)
 *     xxxDWP_DoNCActivate @ 0x1C00BABE4 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C00BAE5C (xxxDrawCaptionBar.c)
 *     xxxGetSysMenu @ 0x1C00BBF14 (xxxGetSysMenu.c)
 *     _SetMenuDefaultItem @ 0x1C00BC748 (_SetMenuDefaultItem.c)
 *     GreSetTextColor @ 0x1C00BE3F8 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00BE480 (GreSetBkColor.c)
 *     xxxDWP_EraseBkgnd @ 0x1C00C2600 (xxxDWP_EraseBkgnd.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00C4C84 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00C8EC0 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxGetTitleBarInfoEx @ 0x1C00CC5FC (xxxGetTitleBarInfoEx.c)
 *     _GetProcessWindowStation @ 0x1C00CEC40 (_GetProcessWindowStation.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00E7390 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00E73F4 (DesktopVerifyHeapLargeUnicodeString.c)
 *     TextCopy @ 0x1C00E74B4 (TextCopy.c)
 *     xxxSendSizeMessage @ 0x1C00F2578 (xxxSendSizeMessage.c)
 *     GetThreadDesktopWindow @ 0x1C00F26A0 (GetThreadDesktopWindow.c)
 *     xxxDWP_UpdateUIState @ 0x1C00FB224 (xxxDWP_UpdateUIState.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0107A0C (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     DWP_GetIcon @ 0x1C010836C (DWP_GetIcon.c)
 *     xxxClientShutdown @ 0x1C01093D0 (xxxClientShutdown.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C010ADC8 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     FindNCHit @ 0x1C010C5EC (FindNCHit.c)
 *     xxxSendMinRectMessages @ 0x1C010DD14 (xxxSendMinRectMessages.c)
 *     IsImmersiveApplicationBandId @ 0x1C0112D98 (IsImmersiveApplicationBandId.c)
 *     MNClearCachedPopupSizes @ 0x1C0117A6C (MNClearCachedPopupSizes.c)
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C011CE5C (xxxDrawMenuBarUnderlines.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C011E5AC (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C013F388 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxMessageBeep @ 0x1C014C6C4 (xxxMessageBeep.c)
 *     WCSToMBEx @ 0x1C014E8DC (WCSToMBEx.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0159CB4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0159CDC (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxSimulateShiftF10 @ 0x1C01D3B08 (xxxSimulateShiftF10.c)
 *     _FreeTouchInputInfo @ 0x1C01D7140 (_FreeTouchInputInfo.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0222C70 (SfnCOPYGLOBALDATA.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0238D30 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C023A8B0 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C023F3A8 (-xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDefPointerProc @ 0x1C023F5B4 (xxxDefPointerProc.c)
 *     xxxDoScrollMenu @ 0x1C024162C (xxxDoScrollMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 *     xxxSendHelpMessage @ 0x1C024A834 (xxxSendHelpMessage.c)
 *     ClientFrame @ 0x1C025AC14 (ClientFrame.c)
 *     GetContextHelpId @ 0x1C025D408 (GetContextHelpId.c)
 */

__int64 __fastcall xxxRealDefWindowProc(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rcx
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v15; // edi
  unsigned int v16; // edi
  unsigned int v17; // edi
  int v18; // eax
  __int64 v19; // r14
  unsigned int v20; // edi
  unsigned int v21; // edi
  unsigned int v22; // edi
  unsigned int v23; // edi
  unsigned int v24; // edi
  unsigned int v25; // edi
  int v26; // eax
  __int64 v27; // rdi
  _DWORD *v28; // rax
  _BYTE *v29; // rcx
  int TitleBarInfo; // eax
  unsigned __int64 v31; // rbx
  unsigned int v32; // edi
  unsigned int v33; // edi
  HDC v34; // rdi
  __int16 v35; // bx
  HICON updated; // rax
  unsigned int v37; // edi
  unsigned int v38; // edi
  unsigned int v39; // edi
  __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned int v44; // edi
  unsigned int v45; // edi
  unsigned int v46; // edi
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  HDC DCEx; // rbx
  int v51; // ecx
  unsigned int v52; // edi
  unsigned int v53; // edi
  ULONG v54; // ecx
  ULONG v55; // ecx
  struct _LARGE_UNICODE_STRING *StrName; // rax
  unsigned int v57; // r8d
  _QWORD *v58; // rdi
  int v59; // eax
  tagWND::ProtectedLargeUnicodeStringWNDstrName *v60; // rcx
  int v61; // eax
  int v62; // esi
  struct _LARGE_UNICODE_STRING *v63; // rax
  _WORD *v64; // rcx
  __int64 v65; // rdx
  char v66; // cl
  ULONG_PTR v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rax
  int v73; // eax
  struct tagHOTKEYSTRUCT **v74; // rax
  int v75; // ebx
  __int64 v76; // rax
  __int64 DesktopWindow; // rax
  int v78; // edx
  int v79; // r8d
  __int64 v80; // r9
  __int64 v81; // rax
  int ContextHelpId; // r9d
  unsigned int v83; // edi
  unsigned int v84; // edi
  unsigned int v85; // edi
  unsigned __int64 *v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rax
  __int64 v93; // rsi
  _QWORD *v94; // rdi
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  struct tagWND *v100; // rdi
  __int64 v101; // rax
  ULONG_PTR v102; // rcx
  __int64 v103; // rcx
  __int64 ProcessWindowStation; // rax
  char v105; // bl
  int v106; // r9d
  _BYTE *v107; // rdx
  __int64 v108; // rbx
  __int64 v109; // rax
  unsigned __int64 v110; // r8
  unsigned int v111; // edx
  unsigned int v112; // r12d
  int v113; // r9d
  struct tagWND *Host; // rax
  __int64 TopLevelWindow; // rax
  __int64 v116; // rdx
  __int64 v117; // r8
  struct tagWND *v118; // rcx
  __int64 v119; // rax
  __int16 v120; // r12
  int NCHit; // ecx
  int v122; // edi
  int v123; // ecx
  unsigned __int64 v124; // r8
  __int64 v125; // r9
  unsigned int v126; // edi
  __int64 v127; // rdx
  _QWORD *v128; // rdx
  const struct tagWND *v129; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rsi
  __int64 v131; // rdi
  __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  unsigned int v136; // edx
  unsigned __int64 *NonChildAncestor; // r15
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  unsigned __int64 v141; // r15
  __int64 v142; // rax
  int v143; // ecx
  unsigned int v144; // edi
  unsigned int v145; // edi
  __int16 v146; // r9
  unsigned __int64 v147; // rdx
  int v148; // eax
  __int16 v149; // dx
  int v150; // eax
  __int64 v151; // rax
  int v152; // eax
  int v153; // eax
  __int64 v154; // rax
  int v155; // eax
  int v156; // r8d
  __int64 v157; // rbx
  __int64 v158; // rax
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // r8
  struct tagWND *v162; // r8
  __int64 v163; // rdi
  struct tagPROCESSINFO *v164; // r12
  unsigned __int8 v165; // al
  __int64 v166; // rcx
  __int16 v167; // ax
  __int64 v168; // rbx
  __int64 v169; // rax
  __int64 v170; // rdi
  unsigned int v171; // ebx
  __int64 v172; // rcx
  unsigned __int16 v173; // ax
  int v174; // eax
  unsigned int v175; // ebx
  __int64 v176; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 *v178; // rcx
  __int64 SysMenu; // rax
  __int64 v180; // rcx
  __int64 v181; // r14
  __int64 v182; // rax
  __int64 v183; // rbx
  __int64 v184; // rax
  int v185; // r8d
  int v186; // r9d
  unsigned int v187; // ecx
  char v188; // r14
  int v189; // edi
  __int64 v190; // rcx
  __int64 v191; // rcx
  struct tagINPUT_MESSAGE_SOURCE *v192; // rdi
  void *v193; // rdx
  ULONG BytesInMultiByteString; // [rsp+50h] [rbp-E8h] BYREF
  int v195; // [rsp+54h] [rbp-E4h]
  __int64 v196; // [rsp+58h] [rbp-E0h] BYREF
  _QWORD v197[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v198; // [rsp+70h] [rbp-C8h]
  __int128 v199; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v200; // [rsp+88h] [rbp-B0h]
  __int128 v201; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v202; // [rsp+A0h] [rbp-98h]
  __int128 v203; // [rsp+A8h] [rbp-90h] BYREF
  __int128 v204; // [rsp+B8h] [rbp-80h]
  __int128 v205; // [rsp+C8h] [rbp-70h]
  _BYTE v206[20]; // [rsp+E0h] [rbp-58h] BYREF

  *(_QWORD *)v206 = a1;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v197);
  v199 = 0LL;
  v200 = 0LL;
  v201 = 0LL;
  v202 = 0LL;
  if ( a1 == (struct tagWND *)-1LL || a2 > 0x400 )
    goto LABEL_13;
  if ( a2 > 0xA3 )
  {
    if ( a2 > 0x136 )
    {
      if ( a2 > 0x240 )
      {
        if ( a2 <= 0x317 )
        {
          if ( a2 != 791 )
          {
            if ( a2 <= 0x243 )
              goto LABEL_452;
            if ( a2 <= 0x244 )
              goto LABEL_13;
            if ( a2 <= 0x247 )
              goto LABEL_452;
            if ( a2 <= 0x24D )
              goto LABEL_13;
            if ( a2 <= 0x24F )
            {
LABEL_452:
              updated = (HICON)xxxDefPointerProc(v8, a2, a3, 0LL);
              goto LABEL_73;
            }
            if ( a2 != 787
              || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) != 0
              || *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != gpqForeground
              && !(unsigned __int8)xxxSetForegroundWindowWithOptions(a1, 2LL, 0LL) )
            {
              goto LABEL_13;
            }
            *(_QWORD *)&v204 = 0LL;
            v107 = (_BYTE *)*((_QWORD *)a1 + 5);
            goto LABEL_439;
          }
          TitleBarInfo = xxxDWPPrint(a1, (HDC)a3, a4);
        }
        else
        {
          v44 = a2 - 793;
          if ( !v44 )
          {
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            {
              if ( a1 != (struct tagWND *)GetDesktopWindow(a1)
                && (((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) == 0
                 || !(unsigned int)xxxCallHook(12, a3, a4, 10)) )
              {
                v187 = *(_DWORD *)(gptiCurrent + 1256LL);
                v188 = 1;
                v189 = (v187 >> 11) & 1;
                *(_QWORD *)v206 = *(_QWORD *)(gptiCurrent + 1272LL);
                if ( (v187 & 0x40000) != 0 && *(struct tagWND **)(gptiCurrent + 1392LL) == a1
                  || (unsigned int)CoreWindowProp::IsComponent(a1) )
                {
                  v190 = *(_QWORD *)(gptiCurrent + 512LL);
                  if ( v190 )
                  {
                    v191 = *(_QWORD *)(v190 + 32);
                    if ( v191 )
                    {
                      if ( _bittest((const signed __int32 *)(v191 + 1256), 0xBu) )
                      {
                        v189 = 1;
                        *(_QWORD *)v206 = *(_QWORD *)(v191 + 1272);
                      }
                    }
                  }
                }
                v192 = (struct tagINPUT_MESSAGE_SOURCE *)((unsigned __int64)v206 & -(__int64)(v189 != 0));
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
                  || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
                {
                  v188 = 0;
                }
                if ( v188 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v193 = &WPP_638f61f5370132f305bd20c35bb3250c_Traceguids;
                  LOBYTE(v193) = v188;
                  LOBYTE(v185) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_(
                    WPP_GLOBAL_Control->AttachedDevice,
                    (_DWORD)v193,
                    v185,
                    v186,
                    4,
                    2,
                    13,
                    (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids);
                }
                CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
                _PostShellHookMsgWorker(*(_DWORD *)(gpsi + 928LL), 0xCuLL, a4, v192);
              }
              goto LABEL_13;
            }
            goto LABEL_455;
          }
          v45 = v44 - 2;
          if ( v45 )
          {
            v46 = v45 - 36;
            if ( v46 )
            {
              if ( v46 == 10 && a3 )
              {
                v48 = *((_QWORD *)a1 + 13);
                v49 = v48 ? *(_QWORD *)(v48 + 16) : 0LL;
                if ( v49 && *(struct tagWND **)(v49 + 1400) == a1 )
                  xxxSetFocus(a1);
              }
              goto LABEL_13;
            }
            TitleBarInfo = xxxGetTitleBarInfoEx(a1, (struct tagTITLEBARINFO *)a4);
          }
          else
          {
            if ( gihmodUserApiHook < 0 || (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
              goto LABEL_13;
            TitleBarInfo = xxxLoadUserApiHook();
          }
        }
LABEL_55:
        v31 = TitleBarInfo;
LABEL_56:
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v197);
        return v31;
      }
      if ( a2 == 576 )
      {
        if ( *(_QWORD *)(gptiCurrent + 1096LL) == a4 )
          *(_QWORD *)(gptiCurrent + 1096LL) = 0LL;
        FreeTouchInputInfo(a4, 1LL);
        goto LABEL_13;
      }
      if ( a2 > 0x20C )
      {
        if ( a2 != 526 )
        {
          if ( a2 <= 0x217 )
            goto LABEL_13;
          if ( a2 <= 0x219 )
            goto LABEL_65;
          if ( a2 == 554 )
          {
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v197);
            return 1162627398LL;
          }
          else
          {
            if ( a2 != 555 )
              goto LABEL_13;
            v175 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 24LL);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v197);
            return ((unsigned __int64)v175 >> 4) & 1;
          }
        }
      }
      else
      {
        switch ( a2 )
        {
          case 0x20Cu:
            goto LABEL_276;
          case 0x137u:
            if ( *(_WORD *)(gpsi + 6996LL) < 8u
              || (v174 = *(_DWORD *)(gpsi + 4648LL), v174 != *(_DWORD *)(gpsi + 4568LL))
              || v174 == *(_DWORD *)(gpsi + 4588LL) )
            {
              GreSetBkColor((HDC)a3);
              GreSetTextColor((HDC)a3);
              v19 = *(_QWORD *)(gpsi + 4944LL);
              goto LABEL_23;
            }
            v170 = 4856LL;
            goto LABEL_417;
          case 0x138u:
            goto LABEL_410;
          case 0x205u:
            v172 = *((_QWORD *)a1 + 5);
            v173 = *(_WORD *)(v172 + 108) + WORD1(a4);
            if ( (*(_BYTE *)(v172 + 26) & 0x40) != 0 )
              v125 = (unsigned __int16)(*(_WORD *)(v172 + 112) - a4) | ((unsigned __int64)v173 << 16);
            else
              v125 = (unsigned __int16)(a4 + *(_WORD *)(v172 + 104)) | (v173 << 16);
            v124 = *(_QWORD *)a1;
            _InterlockedAdd(&glSendMessage, 1u);
LABEL_408:
            v136 = 123;
            goto LABEL_409;
        }
        if ( a2 != 522 )
          goto LABEL_13;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
        goto LABEL_13;
      v176 = *((_QWORD *)a1 + 13);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v199 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v199;
      *((_QWORD *)&v199 + 1) = v176;
      HMLockObject(v176);
      v110 = a3;
      v111 = a2;
      goto LABEL_431;
    }
    if ( a2 == 310 )
      goto LABEL_410;
    if ( a2 > 0x112 )
    {
      if ( a2 <= 0x128 )
      {
        if ( a2 == 296 )
        {
          updated = (HICON)xxxDWP_UpdateUIState(a1, a3, a4);
          goto LABEL_73;
        }
        v144 = a2 - 281;
        if ( !v144 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            goto LABEL_13;
          v162 = (struct tagWND *)*((_QWORD *)a1 + 13);
          v163 = *(_QWORD *)(*((_QWORD *)v162 + 2) + 424LL);
          v164 = *(struct tagPROCESSINFO **)(gptiCurrent + 424LL);
          *(_QWORD *)v206 = v164;
          if ( (struct tagPROCESSINFO *)v163 != v164 )
          {
            BytesInMultiByteString = IsMessageAllowedAcrossILByReceiver(
                                       v164,
                                       (struct tagPROCESSINFO *)v163,
                                       v162,
                                       0x119u,
                                       a3,
                                       a4,
                                       1);
            if ( !BytesInMultiByteString )
            {
              v196 = *(_QWORD *)v163 == gpepCSRSS ? 0x2000LL : *(_QWORD *)(v163 + 880);
              v165 = CheckAccess((char *)v164 + 880, &v196);
              BytesInMultiByteString = v165;
              if ( v165 )
              {
                if ( (unsigned __int8)Enforced(v166) )
                  v167 = 5;
                else
                  v167 = 1;
                MSGSQMAddMessage(*(struct tagPROCESSINFO **)v206, (struct tagPROCESSINFO *)v163, a4, 1, v167);
              }
            }
            if ( !BytesInMultiByteString )
            {
              EtwTraceUIPIMsgError(*(_QWORD *)v206, v163, 281LL, a3, a4);
              UserSetLastError(5LL);
              MSGSQMAddMessage(*(struct tagPROCESSINFO **)v206, (struct tagPROCESSINFO *)v163, a4, 1, 0);
              goto LABEL_13;
            }
          }
          v168 = *((_QWORD *)a1 + 13);
          v169 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v199 = *(_QWORD *)(v169 + 416);
          *(_QWORD *)(v169 + 416) = &v199;
          *((_QWORD *)&v199 + 1) = v168;
          HMLockObject(v168);
          goto LABEL_456;
        }
        v145 = v144 - 1;
        if ( v145 )
        {
          if ( v145 != 13 )
            goto LABEL_13;
          v146 = a3;
          *(_QWORD *)v206 = (unsigned __int16)a3;
          v147 = a3 >> 16;
          v196 = a3 >> 16;
          if ( (a3 & 0xFFF80000) != 0 || (unsigned __int16)a3 > 3u || a4 )
            goto LABEL_13;
          v148 = *gpsi;
          if ( (_WORD)a3 == 3 )
          {
            v149 = 0;
            v196 = 0LL;
            if ( (v148 & 0x80u) != 0 || (v150 = *(_DWORD *)(gpsi + 7004LL), (v150 & 0x20) != 0) || v150 >= 0 )
            {
LABEL_368:
              if ( !v149 )
                goto LABEL_13;
              if ( (v149 & 1) != 0 )
                v156 = (v146 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 7);
              else
                v156 = 0;
              if ( (v149 & 2) != 0 )
                v156 |= (v146 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 6) & 1;
              if ( (v149 & 4) != 0 )
                v156 |= (v146 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 2) & 1;
              if ( !v156 )
                goto LABEL_13;
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
              {
                v157 = *((_QWORD *)a1 + 13);
                v158 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                *(_QWORD *)&v199 = *(_QWORD *)(v158 + 416);
                *(_QWORD *)(v158 + 416) = &v199;
                *((_QWORD *)&v199 + 1) = v157;
                HMLockObject(v157);
                v31 = xxxSendMessage(*((_QWORD *)a1 + 13));
                ThreadUnlock1(v160, v159, v161);
                goto LABEL_56;
              }
              updated = (HICON)xxxSendMessage((ULONG_PTR)a1);
              goto LABEL_73;
            }
            v151 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            if ( *(_DWORD *)(v151 + 632) <= 0x400u )
              v152 = *(_DWORD *)(v151 + 648);
            else
              LOBYTE(v152) = 0;
            if ( (v152 & 2) == 0 )
            {
              v146 = ((*gpsi & 0x40) != 0) + 1;
              v149 = 3;
              goto LABEL_368;
            }
LABEL_371:
            v146 = *(_WORD *)v206;
            v149 = v196;
            goto LABEL_368;
          }
          if ( (v148 & 0x80u) == 0 )
          {
            v153 = *(_DWORD *)(gpsi + 7004LL);
            if ( (v153 & 0x20) == 0 && v153 < 0 )
            {
              v154 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              if ( *(_DWORD *)(v154 + 632) <= 0x400u )
                v155 = *(_DWORD *)(v154 + 648);
              else
                LOBYTE(v155) = 0;
              if ( (v155 & 2) == 0 )
                goto LABEL_371;
              LOWORD(v147) = v196;
              v146 = *(_WORD *)v206;
            }
          }
          v149 = v147 & 0xFFFC;
          goto LABEL_368;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
          goto LABEL_13;
LABEL_455:
        v183 = *((_QWORD *)a1 + 13);
        v184 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v199 = *(_QWORD *)(v184 + 416);
        *(_QWORD *)(v184 + 416) = &v199;
        *((_QWORD *)&v199 + 1) = v183;
        HMLockObject(v183);
LABEL_456:
        v88 = xxxSendMessage(*((_QWORD *)a1 + 13));
LABEL_457:
        v19 = v88;
        ThreadUnlock1(v90, v89, v91);
        goto LABEL_23;
      }
      if ( a2 == 297 )
      {
        v171 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL);
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v197);
        return ((v171 & 0x40 | ((unsigned __int64)v171 >> 2)) >> 5) | v171 & 4;
      }
      if ( a2 != 306 )
      {
        if ( a2 <= 0x132 )
          goto LABEL_13;
        if ( a2 > 0x134 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
        {
          v170 = 4816LL;
LABEL_417:
          GreSetBkColor((HDC)a3);
          GreSetTextColor((HDC)a3);
          v19 = *(_QWORD *)(v170 + gpsi);
          goto LABEL_23;
        }
        goto LABEL_412;
      }
LABEL_410:
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
      {
        v170 = 4816LL;
        goto LABEL_417;
      }
LABEL_412:
      v170 = 4736LL;
      goto LABEL_417;
    }
    if ( a2 == 274 )
    {
      xxxSysCommand(a1);
      goto LABEL_13;
    }
    if ( a2 <= 0x101 )
    {
      if ( a2 == 257 )
      {
LABEL_94:
        if ( a3 == 18
          && (v51 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL), (v51 & 0x80u) == 0)
          && (v51 & 0xC) == 8
          || a3 == 121 && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) & 0x10) != 0 )
        {
          NonChildAncestor = (unsigned __int64 *)GetNonChildAncestor(a1);
          *(_QWORD *)&v201 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v201;
          *((_QWORD *)&v201 + 1) = NonChildAncestor;
          if ( NonChildAncestor )
            HMLockObject(NonChildAncestor);
          if ( a3 == 121 )
            xxxDrawMenuBarUnderlines(a1, 1LL);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(NonChildAncestor, 0x112u, 0xF100uLL, 0LL, 0, 0, 0LL, 1, 0);
          ThreadUnlock1(v139, v138, v140);
        }
        if ( a3 == 18 )
        {
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x80u;
          xxxDrawMenuBarUnderlines(a1, 0LL);
        }
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= 0xFFFFFFE3;
        goto LABEL_13;
      }
      if ( a2 == 164 )
      {
        v203 = 0LL;
        v204 = 0LL;
        v205 = 0LL;
        NCHit = FindNCHit(a1, (unsigned int)a4);
        if ( (unsigned int)(NCHit - 6) <= 1 )
        {
          if ( !(unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL), (__int64)a1) )
            goto LABEL_13;
        }
        else if ( (unsigned int)(NCHit - 2) > 1 || a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) )
        {
          goto LABEL_13;
        }
        xxxSetCapture(a1);
        while ( !(unsigned int)xxxInternalGetMessage((unsigned int)&v203, 0, 512, 526, 1, 0) || DWORD2(v203) != 517 )
        {
          if ( a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL)
            || !(unsigned int)xxxSleepThread2(6u, 0, 1, 0, 0LL) )
          {
            goto LABEL_13;
          }
        }
        xxxReleaseCapture();
        v122 = WORD2(v205) | (WORD4(v205) << 16);
        v123 = FindNCHit(a1, (unsigned int)v122);
        if ( ((v123 - 2) & 0xFFFFFFFA) != 0 )
          goto LABEL_13;
        v107 = (_BYTE *)*((_QWORD *)a1 + 5);
        if ( (v107[232] & 0x40) != 0 )
        {
          if ( v123 == 2 )
            goto LABEL_439;
          if ( v123 == 3 )
          {
LABEL_264:
            v112 = 61536;
LABEL_440:
            SysMenu = xxxGetSysMenu(a1, 1LL);
            v198 = 0LL;
            SmartObjStackRefBase<tagMENU>::operator=((__int64)v197, SysMenu);
            if ( SmartObjStackRef<tagMENU>::operator==((__int64)v197) )
              goto LABEL_13;
            if ( gihmodUserApiHook >= 0 )
              MNClearCachedPopupSizes();
            v180 = v198;
            if ( !v198 )
              v180 = *(_QWORD *)v197[0];
            SetMenuDefaultItem(v180, v112, 0LL);
            PostShellHookMessagesEx(9uLL, *(_QWORD *)a1, 0LL);
            v181 = v198;
            if ( !v198 )
              v181 = *(_QWORD *)v197[0];
            v182 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)&v203 = *(_QWORD *)(v182 + 416);
            *(_QWORD *)(v182 + 416) = &v203;
            *((_QWORD *)&v203 + 1) = v181;
            HMLockObject(v181);
            if ( a4 == 0xFFFFFFFF )
            {
              v42 = gpsi;
              if ( (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
              {
                *(_OWORD *)&v206[4] = 0LL;
                *(_DWORD *)v206 = 20;
                if ( (unsigned int)xxxSendMinRectMessages(a1, &v206[4]) )
                  xxxTrackPopupMenuEx(v197, 576LL, *(unsigned int *)&v206[4], *(unsigned int *)&v206[8], a1, v206);
              }
            }
            else
            {
              xxxTrackPopupMenuEx(v197, 514LL, (unsigned int)(__int16)a4, (unsigned int)SWORD1(a4), a1, 0LL);
            }
            goto LABEL_113;
          }
        }
        v124 = *(_QWORD *)a1;
        _InterlockedAdd(&glSendMessage, 1u);
        v125 = v122;
        goto LABEL_408;
      }
      if ( a2 != 172 )
      {
        if ( a2 == 174 )
        {
          DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
          xxxDrawCaptionBar((ULONG_PTR)a1, DCEx);
          _ReleaseDC(DCEx);
          goto LABEL_13;
        }
        if ( a2 == 175 )
        {
          xxxDrawWindowFrame(a1, (HDC)a3, a4);
          goto LABEL_13;
        }
        if ( a2 != 256 )
          goto LABEL_13;
        if ( a3 == 27 )
        {
          if ( !(unsigned int)CoreWindowProp::IsComponent(a1) )
            goto LABEL_13;
          Host = CoreWindowProp::GetHost(a1);
          if ( !Host )
            goto LABEL_13;
          TopLevelWindow = GetTopLevelWindow(Host);
          if ( !TopLevelWindow )
            goto LABEL_13;
          v116 = 256LL;
          v117 = 27LL;
          v118 = (struct tagWND *)TopLevelWindow;
          goto LABEL_303;
        }
        if ( a3 != 121 )
          goto LABEL_13;
        v119 = *(_QWORD *)(gptiCurrent + 432LL);
        goto LABEL_341;
      }
LABEL_276:
      v120 = 0;
      if ( WORD1(a3) == 1 )
      {
        v120 = 1;
      }
      else if ( WORD1(a3) == 2 )
      {
        goto LABEL_421;
      }
      if ( !v120 )
        goto LABEL_13;
LABEL_421:
      if ( a2 != 524 )
        GetMouseKeyFlags(*(_QWORD *)(gptiCurrent + 432LL));
      xxxSendMessage((ULONG_PTR)a1);
      goto LABEL_13;
    }
    v52 = a2 - 260;
    if ( !v52 )
    {
      v141 = a4 >> 16;
      if ( (v141 & 0x2000) != 0 )
      {
        if ( (v141 & 0x4000) == 0 )
        {
          v142 = *(_QWORD *)(gptiCurrent + 432LL);
          if ( a3 != 18 || (v143 = *(_DWORD *)(v142 + 388), (v143 & 8) != 0) )
          {
            *(_DWORD *)(v142 + 388) &= 0xFFFFFFF3;
          }
          else
          {
            *(_DWORD *)(v142 + 388) = v143 | 8;
            xxxDrawMenuBarUnderlines(a1, 1LL);
          }
        }
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x10u;
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) && (_DWORD)a3 == 115 )
          xxxCloseApplication(gptiCurrent);
        goto LABEL_13;
      }
      if ( a3 != 121 )
        goto LABEL_13;
      v119 = *(_QWORD *)(gptiCurrent + 432LL);
LABEL_341:
      *(_DWORD *)(v119 + 388) |= 0x10u;
      if ( (_GetKeyState(16LL) & 0x8000u) == 0LL || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
        goto LABEL_13;
      v124 = *(_QWORD *)a1;
      _InterlockedAdd(&glSendMessage, 1u);
      v125 = -1LL;
      goto LABEL_408;
    }
    v53 = v52 - 1;
    if ( !v53 )
      goto LABEL_94;
    v126 = v53 - 1;
    if ( v126 )
    {
      if ( v126 != 3 || a3 == 0xFFFF )
        goto LABEL_13;
      v117 = a3;
      v116 = 258LL;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= 0xFFFFFFF3;
      if ( a3 != 13 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      {
        if ( (a4 & 0x20000000) == 0 || !a3 )
        {
          if ( a3 != 27 )
            xxxMessageBeep(0LL);
          goto LABEL_13;
        }
        if ( a3 == 9 || a3 == 27 )
          goto LABEL_13;
        if ( a3 != 32 )
          goto LABEL_321;
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
        {
          v103 = *((_QWORD *)a1 + 13);
          *(_QWORD *)&v199 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v199;
          *((_QWORD *)&v199 + 1) = v103;
          HMLockObject(v103);
          v102 = *((_QWORD *)a1 + 13);
          goto LABEL_250;
        }
        v127 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
        if ( v127 && (unsigned int)IsImmersiveApplicationBandId(*(unsigned int *)(*(_QWORD *)(v127 + 40) + 236LL)) )
        {
          PostIAMShellHookMessage(33LL, *v128);
          goto LABEL_13;
        }
        v129 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
        if ( !v129 || !(unsigned int)IsCompositionInputWindow(v129) )
        {
LABEL_321:
          _InterlockedAdd(&glSendMessage, 1u);
          v125 = (unsigned int)a3;
          v124 = 61696LL;
          v136 = 274;
LABEL_409:
          xxxSendTransformableMessageTimeout((unsigned __int64 *)a1, v136, v124, v125, 0, 0, 0LL, 1, 0);
          goto LABEL_13;
        }
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL)
                                                                                                 + 120LL));
        if ( (unsigned int)CoreWindowProp::IsComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL)) )
          CompositionInputWindowUIOwner = CoreWindowProp::GetTopLevelHostForComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL));
        if ( !CompositionInputWindowUIOwner )
          goto LABEL_13;
        v131 = GetTopLevelWindow(CompositionInputWindowUIOwner);
        if ( !v131 )
          goto LABEL_13;
        *(_QWORD *)&v204 = 0LL;
        v132 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v203 = *(_QWORD *)(v132 + 416);
        *(_QWORD *)(v132 + 416) = &v203;
        *((_QWORD *)&v203 + 1) = v131;
        HMLockObject(v131);
        xxxForceForegroundWindowNoRestoreFocus(v131, 0LL);
        if ( !ThreadUnlock1(v134, v133, v135) )
          goto LABEL_13;
        v117 = 61696LL;
        v116 = 274LL;
        v118 = (struct tagWND *)v131;
LABEL_303:
        PostMessage(v118, v116, v117);
        goto LABEL_13;
      }
      v117 = 61728LL;
      v116 = 274LL;
    }
    v118 = a1;
    goto LABEL_303;
  }
  if ( a2 >= 0xA1 )
  {
    xxxDWP_NCMouse((ULONG_PTR)a1, a2, a3, a4);
    goto LABEL_13;
  }
  if ( a2 <= 0x33 )
  {
    if ( a2 == 51 )
    {
      v74 = HotKeyHelper(a1);
      v75 = 0;
      if ( *v74 )
        v75 = *((_DWORD *)*v74 + 2);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v197);
      return v75;
    }
    if ( a2 <= 0x18 )
    {
      if ( a2 == 24 )
      {
        if ( !(_WORD)a4 )
          goto LABEL_13;
        v65 = *((_QWORD *)a1 + 5);
        if ( (((*(_BYTE *)(v65 + 31) & 0xC0) + 0x80) & 0xBF) != 0 && !*((_QWORD *)a1 + 15) )
          goto LABEL_13;
        v66 = *(_BYTE *)(v65 + 31) & 0x10;
        if ( a3 )
        {
          if ( v66 || (*(_BYTE *)(v65 + 17) & 0x40) == 0 )
            goto LABEL_13;
        }
        else if ( !v66 )
        {
          goto LABEL_13;
        }
        SetOrClrWF(0LL, a1, 320LL, 1LL);
        if ( !a3 )
          SetOrClrWF(1LL, a1, 320LL, 1LL);
        xxxShowWindowEx(a1, gdwPUDFlags & 0x10000 | (a3 != 0 ? 4 : 0), gdwPUDFlags & 0x10000);
        goto LABEL_13;
      }
      if ( a2 <= 0xF )
      {
        if ( a2 != 15 )
        {
          v23 = a2 - 6;
          if ( !v23 )
          {
            if ( a3 )
              xxxSetFocus(a1);
            if ( *(char *)(*((_QWORD *)a1 + 5) + 232LL) >= 0 )
              goto LABEL_13;
            v40 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 1400LL);
            if ( !v40 )
              goto LABEL_13;
            v203 = 0LL;
            *(_QWORD *)&v204 = 0LL;
            ThreadLock(v40, &v203);
            xxxSendNotifyMessage(v40, 841LL, a3, 0LL, 0);
            goto LABEL_113;
          }
          v24 = v23 - 5;
          if ( !v24 )
          {
            xxxDWP_SetRedraw(a1, a3 != 0);
            goto LABEL_13;
          }
          v25 = v24 - 1;
          if ( v25 )
          {
            v38 = v25 - 1;
            if ( v38 )
            {
              if ( v38 != 1 )
                goto LABEL_13;
              v54 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
              if ( !v54 )
                goto LABEL_13;
              BytesInMultiByteString = 0;
              if ( a4 )
              {
                RtlUnicodeToMultiByteSize(&BytesInMultiByteString, *((PCWCH *)a1 + 23), v54);
                v55 = BytesInMultiByteString;
              }
              else
              {
                v55 = v54 >> 1;
                BytesInMultiByteString = v55;
              }
              v19 = v55;
              goto LABEL_23;
            }
            if ( !a3 )
              goto LABEL_13;
            if ( *((_QWORD *)a1 + 23) )
            {
              *(_OWORD *)v206 = 0LL;
              StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                          (struct tagWND *)((char *)a1 + 184),
                          (struct _LARGE_UNICODE_STRING *)v206);
              DesktopVerifyHeapLargeUnicodeString(*((_QWORD *)a1 + 3), StrName);
            }
            v57 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
            v58 = (_QWORD *)(a4 + 8);
            v59 = *(_DWORD *)(a4 + 4);
            if ( !v57 )
            {
              v64 = (_WORD *)*v58;
              if ( v59 >= 0 )
                *v64 = 0;
              else
                *(_BYTE *)v64 = 0;
              goto LABEL_13;
            }
            v60 = (struct tagWND *)((char *)a1 + 184);
            if ( v59 >= 0 )
            {
              *(_OWORD *)v206 = 0LL;
              v63 = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(v60, (struct _LARGE_UNICODE_STRING *)v206);
              v62 = TextCopy(v63, *v58, (unsigned int)a3);
              v61 = 2 * v62;
            }
            else
            {
              v61 = WCSToMBEx(0LL, *(_QWORD *)v60, v57 >> 1, a4 + 8, (v59 & 0x7FFFFFFFu) - 1);
              v62 = v61;
              *(_BYTE *)(v61 + *v58) = 0;
            }
            *(_DWORD *)a4 = v61;
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v197);
            return v62;
          }
          else
          {
            v26 = DefSetText(a1, a4);
            v27 = v26;
            if ( v26 )
            {
              xxxRedrawTitle((ULONG_PTR)a1);
              xxxWindowEvent(0x800Cu, 0);
            }
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v197);
            return v27;
          }
        }
        goto LABEL_83;
      }
      if ( a2 == 16 )
      {
        xxxDestroyWindow(a1);
        goto LABEL_13;
      }
      if ( a2 == 17 || a2 == 19 )
        goto LABEL_65;
      if ( a2 != 20 )
        goto LABEL_13;
    }
    else
    {
      if ( a2 <= 0x26 )
      {
        if ( a2 != 38 )
        {
          v15 = a2 - 25;
          if ( v15 )
          {
            v16 = v15 - 6;
            if ( !v16 )
            {
              xxxDWP_DoCancelMode(a1);
              goto LABEL_13;
            }
            v17 = v16 - 1;
            if ( v17 )
            {
              if ( v17 != 1 )
                goto LABEL_13;
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
                v67 = *((_QWORD *)a1 + 13);
              else
                v67 = 0LL;
              if ( !v67
                || (v68 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread()),
                    *(_QWORD *)&v201 = *(_QWORD *)(v68 + 416),
                    *(_QWORD *)(v68 + 416) = &v201,
                    *((_QWORD *)&v201 + 1) = v67,
                    HMLockObject(v67),
                    v19 = xxxSendMessage(v67),
                    ThreadUnlock1(v70, v69, v71),
                    !v19) )
              {
                if ( (_WORD)a4 != 2 || (v72 = 3LL, WORD1(a4) != 513) )
                  v72 = 1LL;
                v19 = v72;
              }
              goto LABEL_23;
            }
            v18 = xxxDWP_SetCursor(a1, (HWND)a3, (__int16)a4, WORD1(a4));
            goto LABEL_22;
          }
          goto LABEL_412;
        }
LABEL_83:
        xxxDWP_Paint(a1);
        goto LABEL_13;
      }
      if ( a2 == 43 )
      {
        if ( *(_DWORD *)a4 == 2 )
        {
          v73 = *(_DWORD *)(a4 + 12);
          if ( v73 == 4 || v73 == 1 && (*(_DWORD *)(a4 + 16) & 0x10) != 0 )
            ClientFrame(*(HDC *)(a4 + 32));
        }
        goto LABEL_13;
      }
      if ( a2 != 39 )
      {
        if ( a2 <= 0x2D )
          goto LABEL_13;
        if ( a2 <= 0x2F )
        {
          v19 = -1LL;
          goto LABEL_23;
        }
        if ( a2 != 50 )
          goto LABEL_13;
        TitleBarInfo = DWP_SetHotKey(a1, a3);
        goto LABEL_55;
      }
    }
    v18 = xxxDWP_EraseBkgnd(a1, a2, a3);
    goto LABEL_22;
  }
  if ( a2 > 0x55 )
  {
    v9 = a2 - 123;
    if ( v9 )
    {
      v10 = v9 - 4;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 2;
            if ( !v13 )
            {
              xxxCalcClientRect(a1, (_DWORD *)a4, 0);
              goto LABEL_13;
            }
            v32 = v13 - 1;
            if ( v32 )
            {
              v33 = v32 - 1;
              if ( !v33 )
              {
                SetOrClrWF(1LL, a1, 384LL, 1LL);
                v34 = (HDC)_GetDCEx(a1, a3, 328833LL);
                v35 = 0;
                if ( v34 )
                {
                  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) != 0 )
                    v35 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == gpqForeground;
                  xxxDrawWindowFrame(a1, v34, v35);
                  _ReleaseDC(v34);
                }
                SetOrClrWF(0LL, a1, 384LL, 1LL);
                goto LABEL_13;
              }
              v37 = v33 - 1;
              if ( v37 )
              {
                if ( v37 == 2 )
                {
                  SetOrClrWF(0LL, a1, 640LL, 1LL);
                  xxxInternalDoSyncPaint(a1, (unsigned int)a3);
                }
                goto LABEL_13;
              }
              xxxDWP_DoNCActivate((ULONG_PTR)a1);
              goto LABEL_65;
            }
            v18 = FindNCHit(a1, (unsigned int)a4);
LABEL_22:
            v19 = v18;
LABEL_23:
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v197);
            return v19;
          }
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 0x30) != 0 && !InitPwSB(a1) )
            goto LABEL_13;
          if ( a4 )
          {
            v28 = (_DWORD *)(a4 + 80);
            if ( !*((_QWORD *)a1 + 3) || a4 == -80LL || (v29 = *(_BYTE **)(a4 + 88)) == 0LL )
            {
              *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) = 0;
LABEL_65:
              v19 = 1LL;
              goto LABEL_23;
            }
            if ( *(int *)(a4 + 84) < 0 )
            {
              if ( *v28 && *v29 == 0xFF )
                goto LABEL_49;
            }
            else if ( *v28 >= 2u && *(_WORD *)v29 == 0xFFFF )
            {
LABEL_49:
              SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v197);
              return 1LL;
            }
          }
          SetOrClrWF(1LL, a1, 514LL, 1LL);
          TitleBarInfo = DefSetText(a1, a4 + 80);
          goto LABEL_55;
        }
        updated = xxxDWP_SetIcon(a1, a3, (HICON)a4);
      }
      else
      {
        updated = (HICON)DWP_GetIcon(a1, (unsigned int)a3);
      }
LABEL_73:
      v31 = (unsigned __int64)updated;
      goto LABEL_56;
    }
    v106 = FindNCHit(a1, (unsigned int)a4);
    if ( (unsigned int)(v106 - 6) <= 1 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL), (__int64)a1) )
        xxxDoScrollMenu(a1, 0LL, v113 - 6);
      goto LABEL_13;
    }
    v107 = (_BYTE *)*((_QWORD *)a1 + 5);
    if ( (v107[31] & 0xC0) == 0x40 )
    {
      v108 = *((_QWORD *)a1 + 13);
      v109 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v199 = *(_QWORD *)(v109 + 416);
      *(_QWORD *)(v109 + 416) = &v199;
      *((_QWORD *)&v199 + 1) = v108;
      HMLockObject(v108);
      v110 = *(_QWORD *)a1;
      v111 = 123;
LABEL_431:
      v178 = (unsigned __int64 *)*((_QWORD *)a1 + 13);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v178, v111, v110, a4, 0, 0, 0LL, 1, 1);
      goto LABEL_113;
    }
    if ( a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) )
      goto LABEL_13;
    if ( v106 != 2 )
    {
      if ( v106 != 3 )
      {
        if ( a4 == -1LL && (v107[21] & 2) == 0 )
          xxxSimulateShiftF10();
        goto LABEL_13;
      }
      goto LABEL_264;
    }
LABEL_439:
    v112 = (v107[31] & 0x21) != 0 ? 61728 : 61488;
    goto LABEL_440;
  }
  if ( a2 != 85 )
  {
    if ( a2 <= 0x4D )
    {
      if ( a2 == 77 )
      {
        ContextHelpId = GetContextHelpId(a1);
        xxxSendHelpMessage((ULONG_PTR)a1, ContextHelpId);
        goto LABEL_13;
      }
      v20 = a2 - 53;
      if ( !v20 )
      {
        v31 = ((unsigned __int64)*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 16LL) >> 6) & 1;
        goto LABEL_56;
      }
      v21 = v20 - 6;
      if ( !v21 )
      {
        v18 = xxxClientShutdown(a1, a3);
        goto LABEL_22;
      }
      v22 = v21 - 11;
      if ( !v22 )
      {
        if ( (*(_DWORD *)(a4 + 32) & 1) == 0 )
          xxxAdjustSize(a1);
        goto LABEL_13;
      }
      v39 = v22 - 1;
      if ( !v39 )
      {
        v47 = *(_DWORD *)(a4 + 32);
        if ( (v47 & 0x1000) == 0 )
        {
          v76 = *((_QWORD *)a1 + 5);
          BytesInMultiByteString = *(_DWORD *)(v76 + 104);
          v195 = *(_DWORD *)(v76 + 108);
          DesktopWindow = GetDesktopWindow(a1);
          if ( v80 != DesktopWindow )
          {
            v81 = *(_QWORD *)(v80 + 40);
            BytesInMultiByteString = v78 - *(_DWORD *)(v81 + 104);
            v195 = v79 - *(_DWORD *)(v81 + 108);
          }
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(
            (unsigned __int64 *)a1,
            3u,
            0LL,
            (unsigned __int16)BytesInMultiByteString | ((unsigned __int16)v195 << 16),
            0,
            0,
            0LL,
            1,
            0);
          v47 = *(_DWORD *)(a4 + 32);
        }
        if ( (v47 & 0x8800) != 0x800 )
          xxxSendSizeMessage((ULONG_PTR)a1);
        goto LABEL_13;
      }
      if ( v39 == 2 )
      {
        updated = (HICON)SfnCOPYGLOBALDATA(0LL, 0LL, a3, a4, 0LL, 0LL, 0, 0LL);
        goto LABEL_73;
      }
LABEL_13:
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v197);
      return 0LL;
    }
    v83 = a2 - 79;
    if ( !v83 )
    {
      if ( !ValidateHwnd(a3) )
        goto LABEL_13;
      goto LABEL_65;
    }
    v84 = v83 - 1;
    if ( v84 )
    {
      v85 = v84 - 1;
      if ( !v85 )
      {
        v203 = 0LL;
        *(_QWORD *)&v204 = 0LL;
        v92 = BuildHwndList(*((ShellWindowManagement **)a1 + 14));
        v93 = v92;
        if ( v92 )
        {
          v94 = (_QWORD *)(v92 + 32);
          v95 = *(_QWORD *)(v92 + 32);
          if ( v95 != 1 )
          {
            do
            {
              *(_QWORD *)v206 = HMValidateHandleNoSecure(v95, 1);
              if ( *(_QWORD *)v206 )
              {
                v96 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                *(_QWORD *)&v203 = *(_QWORD *)(v96 + 416);
                *(_QWORD *)(v96 + 416) = &v203;
                *((_QWORD *)&v203 + 1) = *(_QWORD *)v206;
                HMLockObject(*(_QWORD *)v206);
                xxxSendMessage(*(ULONG_PTR *)v206);
                ThreadUnlock1(v98, v97, v99);
              }
              v95 = *++v94;
            }
            while ( *v94 != 1LL );
          }
          FreeHwndList(v93);
          goto LABEL_13;
        }
        v19 = 0LL;
        goto LABEL_23;
      }
      if ( v85 != 2 )
        goto LABEL_13;
      v86 = (unsigned __int64 *)((*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40
                               ? *((_QWORD *)a1 + 13)
                               : *((_QWORD *)a1 + 15));
      if ( !v86 || v86 == (unsigned __int64 *)GetThreadDesktopWindow(0LL) )
        goto LABEL_13;
      v87 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v201 = *(_QWORD *)(v87 + 416);
      *(_QWORD *)(v87 + 416) = &v201;
      *((_QWORD *)&v201 + 1) = v86;
      HMLockObject(v86);
      _InterlockedAdd(&glSendMessage, 1u);
      v88 = xxxSendTransformableMessageTimeout(v86, 0x53u, a3, a4, 0, 0, 0LL, 1, 1);
      goto LABEL_457;
    }
    v100 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
    if ( !v100 || v100 == a1 || **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) == *(_WORD *)(gpsi + 904LL) )
    {
      ProcessWindowStation = GetProcessWindowStation(0LL);
      if ( !xxxActivateKeyboardLayout(ProcessWindowStation, a4, 256LL, a1) )
        UserSetLastError(1457LL);
      goto LABEL_13;
    }
    v101 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v201 = *(_QWORD *)(v101 + 416);
    *(_QWORD *)(v101 + 416) = &v201;
    *((_QWORD *)&v201 + 1) = v100;
    HMLockObject(v100);
    v102 = (ULONG_PTR)v100;
LABEL_250:
    xxxSendMessage(v102);
LABEL_113:
    ThreadUnlock1(v42, v41, v43);
    goto LABEL_13;
  }
  if ( a4 != 3 )
    goto LABEL_13;
  v105 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v197);
  return 2LL - ((v105 & 0x20) != 0);
}
