/*
 * XREFs of xxxRealDefWindowProc @ 0x1C0049EC8
 * Callers:
 *     xxxDefWindowProc @ 0x1C0048580 (xxxDefWindowProc.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0049D50 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     DWP_SetHotKey @ 0x1C0008230 (DWP_SetHotKey.c)
 *     xxxClientShutdown @ 0x1C000B2CC (xxxClientShutdown.c)
 *     _GetProcessWindowStation @ 0x1C000EED0 (_GetProcessWindowStation.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C0023584 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C002DB50 (PostIAMShellHookMessageEx.c)
 *     _PostMessage @ 0x1C002DC40 (_PostMessage.c)
 *     xxxGetTitleBarInfoEx @ 0x1C002E528 (xxxGetTitleBarInfoEx.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0031D34 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0034410 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     GetNonChildAncestor @ 0x1C00389C8 (GetNonChildAncestor.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C003B09C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C003F99C (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C003FB08 (MSGSQMAddMessage.c)
 *     xxxSendNotifyMessage @ 0x1C0040370 (xxxSendNotifyMessage.c)
 *     PostShellHookMessagesEx @ 0x1C00435F8 (PostShellHookMessagesEx.c)
 *     GreSetTextColor @ 0x1C0044618 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00446A0 (GreSetBkColor.c)
 *     xxxDWP_EraseBkgnd @ 0x1C0046028 (xxxDWP_EraseBkgnd.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C004608C (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     DWP_GetIcon @ 0x1C0046864 (DWP_GetIcon.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C00468C8 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxLoadUserApiHook @ 0x1C0046930 (xxxLoadUserApiHook.c)
 *     xxxRedrawTitle @ 0x1C00469E0 (xxxRedrawTitle.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0049254 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     xxxCalcClientRect @ 0x1C004A8A0 (xxxCalcClientRect.c)
 *     DefSetText @ 0x1C004B02C (DefSetText.c)
 *     xxxAdjustSize @ 0x1C004B2E8 (xxxAdjustSize.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C004B3CC (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxDrawWindowFrame @ 0x1C004BB1C (xxxDrawWindowFrame.c)
 *     _IsDescendant @ 0x1C004C618 (_IsDescendant.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     xxxSleepThread2 @ 0x1C0058750 (xxxSleepThread2.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B900 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     _InitPwSB @ 0x1C0063EC0 (_InitPwSB.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006A1DC (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006B740 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C006B91C (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     BuildHwndList @ 0x1C006CB60 (BuildHwndList.c)
 *     xxxInternalDoSyncPaint @ 0x1C006D560 (xxxInternalDoSyncPaint.c)
 *     FreeHwndList @ 0x1C006DAC0 (FreeHwndList.c)
 *     _GetTopLevelWindow @ 0x1C006FCC0 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C00704C0 (_GetDesktopWindow.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078B40 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxDestroyWindow @ 0x1C007DCA0 (xxxDestroyWindow.c)
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C008A9C4 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     WCSToMBEx @ 0x1C00D3558 (WCSToMBEx.c)
 *     xxxInternalGetMessage @ 0x1C00D9FB0 (xxxInternalGetMessage.c)
 *     xxxReleaseCapture @ 0x1C00DAE50 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00DAF80 (xxxSetCapture.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00DB008 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxGetSysMenu @ 0x1C00DB164 (xxxGetSysMenu.c)
 *     xxxDWP_DoNCActivate @ 0x1C00DCB94 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C00DCE08 (xxxDrawCaptionBar.c)
 *     xxxDWP_UpdateUIState @ 0x1C00E0EE4 (xxxDWP_UpdateUIState.c)
 *     GetAppCompatFlags2 @ 0x1C00E1310 (GetAppCompatFlags2.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00E1F30 (xxxDrawMenuBarUnderlines.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00FD288 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00FD2EC (DesktopVerifyHeapLargeUnicodeString.c)
 *     TextCopy @ 0x1C00FD3AC (TextCopy.c)
 *     xxxSendSizeMessage @ 0x1C00FFBC0 (xxxSendSizeMessage.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010139C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     MNClearCachedPopupSizes @ 0x1C010286C (MNClearCachedPopupSizes.c)
 *     GetThreadDesktopWindow @ 0x1C0104120 (GetThreadDesktopWindow.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C010C1FC (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     _SetMenuDefaultItem @ 0x1C01110FC (_SetMenuDefaultItem.c)
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C0111898 (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     FindNCHit @ 0x1C0122508 (FindNCHit.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0122908 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C0124CA8 (xxxSendMinRectMessages.c)
 *     xxxSysCommand @ 0x1C0130714 (xxxSysCommand.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0132650 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxMessageBeep @ 0x1C015D9A0 (xxxMessageBeep.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C01674C4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D24C8 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     xxxSimulateShiftF10 @ 0x1C01D8374 (xxxSimulateShiftF10.c)
 *     _FreeTouchInputInfo @ 0x1C01DCB40 (_FreeTouchInputInfo.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0228CA0 (SfnCOPYGLOBALDATA.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0240FD0 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDefPointerProc @ 0x1C0243C00 (xxxDefPointerProc.c)
 *     xxxDoScrollMenu @ 0x1C02456CC (xxxDoScrollMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024ABB0 (xxxTrackPopupMenuEx.c)
 *     xxxSendHelpMessage @ 0x1C025067C (xxxSendHelpMessage.c)
 *     ClientFrame @ 0x1C025E040 (ClientFrame.c)
 *     GetContextHelpId @ 0x1C0260798 (GetContextHelpId.c)
 */

__int64 __fastcall xxxRealDefWindowProc(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  struct tagTHREADINFO *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // edi
  _DWORD *v17; // rax
  _BYTE *v18; // rcx
  int TitleBarInfo; // eax
  unsigned __int64 v20; // rbx
  unsigned int v21; // edi
  unsigned int v22; // edi
  unsigned int v23; // edi
  int v24; // eax
  __int64 v25; // r14
  unsigned int v26; // edi
  unsigned int v27; // edi
  unsigned int v28; // edi
  unsigned int v29; // edi
  unsigned int v30; // edi
  __int64 v31; // rdi
  BOOL v32; // ebx
  unsigned int v33; // edi
  unsigned int v34; // edi
  unsigned int v35; // edi
  int v36; // eax
  __int64 v37; // rdi
  unsigned int v38; // edi
  HICON updated; // rax
  unsigned int v40; // edi
  unsigned int v41; // edi
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rcx
  unsigned int v45; // edi
  unsigned int v46; // edi
  unsigned int v47; // edi
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // ecx
  __int64 DCEx; // rbx
  unsigned int v53; // edi
  unsigned int v54; // edi
  ULONG v55; // ecx
  ULONG v56; // ecx
  struct _LARGE_UNICODE_STRING *StrName; // rax
  unsigned int v58; // r8d
  _QWORD *v59; // r13
  int v60; // eax
  tagWND::ProtectedLargeUnicodeStringWNDstrName *v61; // rcx
  int v62; // eax
  int v63; // edi
  struct _LARGE_UNICODE_STRING *v64; // rax
  _WORD *v65; // rcx
  __int64 v66; // rdx
  char v67; // cl
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  int v72; // eax
  struct tagHOTKEYSTRUCT **v73; // rax
  int v74; // ebx
  __int64 DesktopWindow; // rax
  int v76; // edx
  int v77; // r8d
  __int64 v78; // r9
  __int64 v79; // rax
  char v80; // cl
  int v81; // edx
  int v82; // ecx
  bool v83; // zf
  int ContextHelpId; // eax
  unsigned int v85; // edi
  unsigned int v86; // edi
  unsigned int v87; // edi
  __int64 v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rsi
  _QWORD *v95; // rdi
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rcx
  struct tagWND *v99; // rdi
  __int64 v100; // rax
  __int64 v101; // r8
  __int64 v102; // rdx
  struct tagWND *v103; // rcx
  __int64 v104; // rcx
  __int64 ProcessWindowStation; // rax
  char v106; // bl
  int v107; // r9d
  _BYTE *v108; // rdx
  __int64 v109; // rbx
  __int64 v110; // rax
  __int64 v111; // r8
  int v112; // edx
  unsigned int v113; // r12d
  int v114; // r9d
  struct tagWND *Host; // rax
  __int64 TopLevelWindow; // rax
  int v117; // r9d
  int v118; // edx
  int v119; // r8d
  int v120; // ecx
  __int64 v121; // rax
  __int16 v122; // r13
  int NCHit; // ecx
  unsigned int v124; // edi
  int v125; // ecx
  __int64 v126; // r8
  int v127; // r9d
  unsigned int v128; // edi
  __int64 *v129; // r8
  int v130; // edx
  int v131; // ecx
  const struct tagWND *v132; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rsi
  __int64 v134; // rdi
  __int64 v135; // rax
  __int64 v136; // rcx
  int v137; // edx
  struct tagWND *NonChildAncestor; // r15
  __int64 v139; // rcx
  unsigned __int64 v140; // r15
  __int64 v141; // rax
  int v142; // ecx
  unsigned int v143; // edi
  unsigned int v144; // edi
  __int64 v145; // r9
  unsigned __int64 v146; // rdx
  __int16 v147; // dx
  int v148; // eax
  int v149; // eax
  int v150; // r8d
  __int64 v151; // rbx
  __int64 v152; // rax
  __int64 v153; // rcx
  __int64 v154; // rbx
  __int64 v155; // rax
  __int64 v156; // rdx
  __int64 v157; // r8
  __int64 v158; // rdi
  struct tagPROCESSINFO *v159; // r13
  unsigned __int8 v160; // al
  __int16 v161; // ax
  __int64 v162; // rbx
  __int64 v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rdi
  unsigned int v166; // ebx
  __int64 v167; // rcx
  unsigned __int16 v168; // ax
  __int64 v169; // rbx
  int v170; // eax
  unsigned __int16 v171; // r13
  unsigned int v172; // ebx
  __int64 v173; // rbx
  __int64 v174; // rax
  __int64 v175; // rcx
  __int64 v176; // rcx
  __int64 v177; // r14
  __int64 v178; // rax
  __int64 v179; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned int v181; // ecx
  int v182; // edi
  __int64 v183; // rcx
  __int64 v184; // rcx
  ULONG BytesInMultiByteString; // [rsp+50h] [rbp-178h] BYREF
  struct tagPROCESSINFO *v186; // [rsp+58h] [rbp-170h]
  _QWORD v187[2]; // [rsp+60h] [rbp-168h] BYREF
  __int64 v188; // [rsp+70h] [rbp-158h]
  __int64 v189; // [rsp+78h] [rbp-150h] BYREF
  __int128 v190; // [rsp+80h] [rbp-148h] BYREF
  __int64 v191; // [rsp+90h] [rbp-138h]
  struct tagWND *v192; // [rsp+98h] [rbp-130h] BYREF
  __int128 v193; // [rsp+A0h] [rbp-128h] BYREF
  __int64 v194; // [rsp+B0h] [rbp-118h]
  __int128 v195; // [rsp+B8h] [rbp-110h] BYREF
  __int64 v196; // [rsp+C8h] [rbp-100h]
  _QWORD v197[3]; // [rsp+D0h] [rbp-F8h] BYREF
  _QWORD v198[3]; // [rsp+E8h] [rbp-E0h] BYREF
  _QWORD v199[3]; // [rsp+100h] [rbp-C8h] BYREF
  _OWORD v200[2]; // [rsp+118h] [rbp-B0h] BYREF
  __int128 v201; // [rsp+138h] [rbp-90h]
  __int128 v202; // [rsp+150h] [rbp-78h] BYREF
  __int128 v203; // [rsp+160h] [rbp-68h] BYREF
  int v204; // [rsp+170h] [rbp-58h] BYREF
  __int128 v205; // [rsp+174h] [rbp-54h] BYREF

  v192 = a1;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v187);
  v190 = 0LL;
  v191 = 0LL;
  v193 = 0LL;
  v194 = 0LL;
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
              goto LABEL_457;
            if ( a2 <= 0x244 )
              goto LABEL_13;
            if ( a2 <= 0x247 )
              goto LABEL_457;
            if ( a2 <= 0x24D )
              goto LABEL_13;
            if ( a2 <= 0x24F )
            {
LABEL_457:
              updated = (HICON)xxxDefPointerProc(v9, a2, a3, 0LL);
              goto LABEL_74;
            }
            if ( a2 != 787
              || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) != 0
              || *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != gpqForeground
              && !xxxSetForegroundWindowWithOptions((__int64)a1, 2LL, 0LL, 0LL) )
            {
              goto LABEL_13;
            }
            v199[2] = 0LL;
            v108 = (_BYTE *)*((_QWORD *)a1 + 5);
            goto LABEL_444;
          }
          TitleBarInfo = xxxDWPPrint(a1, (HDC)a3, a4);
        }
        else
        {
          v45 = a2 - 793;
          if ( !v45 )
          {
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            {
              if ( a1 != (struct tagWND *)GetDesktopWindow(a1)
                && (((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) == 0
                 || !(unsigned int)xxxCallHook(12, a3, a4, 10)) )
              {
                v181 = *(_DWORD *)(gptiCurrent + 1232LL);
                v182 = (v181 >> 11) & 1;
                v192 = *(struct tagWND **)(gptiCurrent + 1240LL);
                if ( (v181 & 0x40000) != 0 && *(struct tagWND **)(gptiCurrent + 1392LL) == a1
                  || (unsigned int)CoreWindowProp::IsComponent(a1) )
                {
                  v183 = *(_QWORD *)(gptiCurrent + 512LL);
                  if ( v183 )
                  {
                    v184 = *(_QWORD *)(v183 + 32);
                    if ( v184 )
                    {
                      if ( (*(_DWORD *)(v184 + 1232) & 0x800) != 0 )
                      {
                        v182 = 1;
                        v192 = *(struct tagWND **)(v184 + 1240);
                      }
                    }
                  }
                }
                PostShellHookMessagesEx(
                  0xCu,
                  a4,
                  (struct tagINPUT_MESSAGE_SOURCE *)((unsigned __int64)&v192 & -(__int64)(v182 != 0)));
              }
              goto LABEL_13;
            }
            v179 = *((_QWORD *)a1 + 13);
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            *(_QWORD *)&v190 = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = &v190;
            *((_QWORD *)&v190 + 1) = v179;
            HMLockObject(v179);
            v156 = 793LL;
            goto LABEL_461;
          }
          v46 = v45 - 2;
          if ( v46 )
          {
            v47 = v46 - 36;
            if ( v47 )
            {
              if ( v47 == 10 && a3 )
              {
                v49 = *((_QWORD *)a1 + 13);
                v50 = v49 ? *(_QWORD *)(v49 + 16) : 0LL;
                if ( v50 && *(struct tagWND **)(v50 + 1400) == a1 )
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
            TitleBarInfo = xxxLoadUserApiHook(gptiCurrent, (__int64)v8, v10);
          }
        }
LABEL_26:
        v20 = TitleBarInfo;
LABEL_27:
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v187);
        return v20;
      }
      if ( a2 == 576 )
      {
        if ( *(_QWORD *)(gptiCurrent + 1072LL) == a4 )
          *(_QWORD *)(gptiCurrent + 1072LL) = 0LL;
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
            goto LABEL_63;
          if ( a2 == 554 )
          {
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v187);
            return 1162627398LL;
          }
          else
          {
            if ( a2 != 555 )
              goto LABEL_13;
            v172 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 24LL);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v187);
            return ((unsigned __int64)v172 >> 4) & 1;
          }
        }
      }
      else
      {
        switch ( a2 )
        {
          case 0x20Cu:
            goto LABEL_280;
          case 0x137u:
            if ( *(_WORD *)(gpsi + 6996LL) < 8u
              || (v170 = *(_DWORD *)(gpsi + 4648LL), v170 != *(_DWORD *)(gpsi + 4568LL))
              || v170 == *(_DWORD *)(gpsi + 4588LL) )
            {
              GreSetBkColor((HDC)a3, *(_DWORD *)(gpsi + 4648LL));
              GreSetTextColor((HDC)a3, *(_DWORD *)(gpsi + 4628LL));
              v25 = *(_QWORD *)(gpsi + 4944LL);
              goto LABEL_37;
            }
            v164 = 4648LL;
            v165 = 4856LL;
            goto LABEL_421;
          case 0x138u:
            goto LABEL_414;
          case 0x205u:
            v167 = *((_QWORD *)a1 + 5);
            v168 = *(_WORD *)(v167 + 108) + WORD1(a4);
            if ( (*(_BYTE *)(v167 + 26) & 0x40) != 0 )
              v127 = (unsigned __int16)(*(_WORD *)(v167 + 112) - a4) | (v168 << 16);
            else
              v127 = (unsigned __int16)(a4 + *(_WORD *)(v167 + 104)) | (v168 << 16);
            v126 = *(_QWORD *)a1;
            _InterlockedAdd(&glSendMessage, 1u);
LABEL_412:
            v137 = 123;
            goto LABEL_413;
        }
        if ( a2 != 522 )
          goto LABEL_13;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
        goto LABEL_13;
      v173 = *((_QWORD *)a1 + 13);
      v174 = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v190 = *(_QWORD *)(v174 + 416);
      *(_QWORD *)(v174 + 416) = &v190;
      *((_QWORD *)&v190 + 1) = v173;
      HMLockObject(v173);
      LODWORD(v111) = a3;
      v112 = a2;
      goto LABEL_436;
    }
    if ( a2 == 310 )
      goto LABEL_414;
    if ( a2 > 0x112 )
    {
      if ( a2 <= 0x128 )
      {
        if ( a2 == 296 )
        {
          updated = (HICON)xxxDWP_UpdateUIState(a1, a3, a4);
          goto LABEL_74;
        }
        v143 = a2 - 281;
        if ( v143 )
        {
          v144 = v143 - 1;
          if ( v144 )
          {
            if ( v144 != 13 )
              goto LABEL_13;
            LOWORD(v145) = a3;
            v189 = (unsigned __int16)a3;
            v146 = a3 >> 16;
            v186 = (struct tagPROCESSINFO *)(a3 >> 16);
            if ( (a3 & 0xFFF80000) != 0 || (unsigned __int16)a3 > 3u || a4 )
              goto LABEL_13;
            if ( (_WORD)a3 == 3 )
            {
              v147 = 0;
              v186 = 0LL;
              if ( (*gpsi & 0x80u) != 0 || (v148 = *(_DWORD *)(gpsi + 7004LL), (v148 & 0x20) != 0) || v148 >= 0 )
              {
LABEL_372:
                if ( !v147 )
                  goto LABEL_13;
                if ( (v147 & 1) != 0 )
                  v150 = ((_WORD)v145 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 7);
                else
                  v150 = 0;
                if ( (v147 & 2) != 0 )
                  v150 |= ((_WORD)v145 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 6) & 1;
                if ( (v147 & 4) != 0 )
                  v150 |= ((_WORD)v145 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 2) & 1;
                if ( !v150 )
                  goto LABEL_13;
                if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
                {
                  v151 = *((_QWORD *)a1 + 13);
                  v152 = W32GetThreadWin32Thread(KeGetCurrentThread());
                  *(_QWORD *)&v190 = *(_QWORD *)(v152 + 416);
                  *(_QWORD *)(v152 + 416) = &v190;
                  *((_QWORD *)&v190 + 1) = v151;
                  HMLockObject(v151);
                  v20 = xxxSendMessage(*((_QWORD *)a1 + 13), 295LL, a3, 0LL);
                  ThreadUnlock1(v153);
                  goto LABEL_27;
                }
                updated = (HICON)xxxSendMessage(a1, 296LL, a3, 0LL);
                goto LABEL_74;
              }
              if ( (GetAppCompatFlags2(1024LL) & 2) == 0 )
              {
                v145 = (unsigned __int16)(((*gpsi & 0x40) != 0) + 1);
                v147 = 3;
                a3 = v145 | 0x30000;
                goto LABEL_372;
              }
LABEL_375:
              LOWORD(v145) = v189;
              v147 = (__int16)v186;
              goto LABEL_372;
            }
            if ( (*gpsi & 0x80u) == 0 )
            {
              v149 = *(_DWORD *)(gpsi + 7004LL);
              if ( (v149 & 0x20) == 0 && v149 < 0 )
              {
                if ( (GetAppCompatFlags2(1024LL) & 2) == 0 )
                  goto LABEL_375;
                LOWORD(v146) = (_WORD)v186;
                LOWORD(v145) = v189;
              }
            }
            v147 = v146 & 0xFFFC;
            goto LABEL_372;
          }
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            goto LABEL_13;
          v154 = *((_QWORD *)a1 + 13);
          v155 = W32GetThreadWin32Thread(KeGetCurrentThread());
          *(_QWORD *)&v190 = *(_QWORD *)(v155 + 416);
          *(_QWORD *)(v155 + 416) = &v190;
          *((_QWORD *)&v190 + 1) = v154;
          HMLockObject(v154);
          v156 = 282LL;
        }
        else
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            goto LABEL_13;
          v157 = *((_QWORD *)a1 + 13);
          v158 = *(_QWORD *)(*(_QWORD *)(v157 + 16) + 424LL);
          v159 = *(struct tagPROCESSINFO **)(gptiCurrent + 424LL);
          v186 = v159;
          if ( (struct tagPROCESSINFO *)v158 != v159 )
          {
            BytesInMultiByteString = IsMessageAllowedAcrossILByReceiver(
                                       v159,
                                       (void *const **)v158,
                                       (struct tagWND *)v157,
                                       0x119u,
                                       a3,
                                       a4,
                                       1);
            if ( !BytesInMultiByteString )
            {
              v189 = *(_QWORD *)v158 == gpepCSRSS ? 0x2000LL : *(_QWORD *)(v158 + 880);
              v160 = CheckAccess((char *)v159 + 880, &v189);
              BytesInMultiByteString = v160;
              if ( v160 )
              {
                if ( (unsigned __int8)Enforced() )
                  v161 = 5;
                else
                  v161 = 1;
                MSGSQMAddMessage(v186, (struct tagPROCESSINFO *)v158, 0x119u, a3, a4, 1, v161);
              }
            }
            if ( !BytesInMultiByteString )
            {
              EtwTraceUIPIMsgError(v186, v158, 281LL, a3, a4);
              UserSetLastError(5LL);
              MSGSQMAddMessage(v186, (struct tagPROCESSINFO *)v158, 0x119u, a3, a4, 1, 0);
              goto LABEL_13;
            }
          }
          v162 = *((_QWORD *)a1 + 13);
          v163 = W32GetThreadWin32Thread(KeGetCurrentThread());
          *(_QWORD *)&v190 = *(_QWORD *)(v163 + 416);
          *(_QWORD *)(v163 + 416) = &v190;
          *((_QWORD *)&v190 + 1) = v162;
          HMLockObject(v162);
          v156 = 281LL;
        }
LABEL_461:
        v90 = xxxSendMessage(*((_QWORD *)a1 + 13), v156, a3, a4);
LABEL_462:
        v25 = v90;
        ThreadUnlock1(v91);
        goto LABEL_37;
      }
      if ( a2 == 297 )
      {
        v166 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL);
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v187);
        return ((v166 & 0x40 | ((unsigned __int64)v166 >> 2)) >> 5) | v166 & 4;
      }
      if ( a2 != 306 )
      {
        if ( a2 <= 0x132 )
          goto LABEL_13;
        if ( a2 > 0x134 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
        {
          v164 = 4628LL;
          v165 = 4816LL;
LABEL_421:
          v169 = 4640LL;
          goto LABEL_422;
        }
LABEL_416:
        v164 = 4588LL;
        v169 = 4600LL;
        v165 = 4736LL;
        goto LABEL_422;
      }
LABEL_414:
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
      {
        v164 = 4628LL;
        v169 = 4600LL;
        v165 = 4816LL;
LABEL_422:
        GreSetBkColor((HDC)a3, *(_DWORD *)(v164 + gpsi));
        GreSetTextColor((HDC)a3, *(_DWORD *)(v169 + gpsi));
        v25 = *(_QWORD *)(v165 + gpsi);
        goto LABEL_37;
      }
      goto LABEL_416;
    }
    if ( a2 == 274 )
    {
      xxxSysCommand(a1);
      goto LABEL_13;
    }
    if ( a2 <= 0x101 )
    {
      if ( a2 == 257 )
        goto LABEL_89;
      if ( a2 == 164 )
      {
        memset(v200, 0, sizeof(v200));
        v201 = 0LL;
        NCHit = FindNCHit(a1, (unsigned int)a4);
        if ( (unsigned int)(NCHit - 6) <= 1 )
        {
          if ( !(unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL), a1) )
            goto LABEL_13;
        }
        else if ( (unsigned int)(NCHit - 2) > 1 || a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) )
        {
          goto LABEL_13;
        }
        xxxSetCapture(a1);
        while ( !(unsigned int)xxxInternalGetMessage((unsigned int)v200, 0, 512, 526, 1, 0) || DWORD2(v200[0]) != 517 )
        {
          if ( a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL)
            || !(unsigned int)xxxSleepThread2(6u, 0, 1, 0, 0LL) )
          {
            goto LABEL_13;
          }
        }
        xxxReleaseCapture();
        v124 = WORD2(v201) | (WORD4(v201) << 16);
        v125 = FindNCHit(a1, v124);
        if ( ((v125 - 2) & 0xFFFFFFFA) != 0 )
          goto LABEL_13;
        v108 = (_BYTE *)*((_QWORD *)a1 + 5);
        if ( (v108[234] & 0x20) != 0 )
        {
          if ( v125 == 2 )
            goto LABEL_444;
          if ( v125 == 3 )
          {
LABEL_268:
            v113 = 61536;
LABEL_445:
            xxxGetSysMenu(a1);
            v188 = 0LL;
            SmartObjStackRefBase<tagMENU>::operator=(v187);
            if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v187) )
              goto LABEL_13;
            if ( gihmodUserApiHook >= 0 )
              MNClearCachedPopupSizes();
            v176 = v188;
            if ( !v188 )
              v176 = *(_QWORD *)v187[0];
            SetMenuDefaultItem(v176, v113, 0LL);
            PostShellHookMessagesEx(9u, *(_QWORD *)a1, 0LL);
            v177 = v188;
            if ( !v188 )
              v177 = *(_QWORD *)v187[0];
            v178 = W32GetThreadWin32Thread(KeGetCurrentThread());
            v199[0] = *(_QWORD *)(v178 + 416);
            *(_QWORD *)(v178 + 416) = v199;
            v199[1] = v177;
            HMLockObject(v177);
            if ( a4 == 0xFFFFFFFF )
            {
              v44 = gpsi;
              if ( (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
              {
                v205 = 0LL;
                v204 = 20;
                if ( (unsigned int)xxxSendMinRectMessages(a1, &v205) )
                  xxxTrackPopupMenuEx(v187, 576LL, (unsigned int)v205, DWORD1(v205), a1, &v204);
              }
            }
            else
            {
              xxxTrackPopupMenuEx(v187, 514LL, (unsigned int)(__int16)a4, (unsigned int)SWORD1(a4), a1, 0LL);
            }
            goto LABEL_111;
          }
        }
        v126 = *(_QWORD *)a1;
        _InterlockedAdd(&glSendMessage, 1u);
        v127 = v124;
        goto LABEL_412;
      }
      if ( a2 != 172 )
      {
        if ( a2 == 174 )
        {
          DCEx = _GetDCEx(a1, 0LL, 65537LL);
          xxxDrawCaptionBar(a1, DCEx, (unsigned int)a3);
          _ReleaseDC(DCEx);
          goto LABEL_13;
        }
        if ( a2 == 175 )
        {
          xxxDrawWindowFrame(a1, a3, (unsigned int)a4);
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
          v117 = a4;
          v118 = 256;
          v119 = 27;
          v120 = TopLevelWindow;
          goto LABEL_307;
        }
        if ( a3 != 121 )
          goto LABEL_13;
        v121 = *(_QWORD *)(gptiCurrent + 432LL);
        goto LABEL_351;
      }
LABEL_280:
      v122 = 0;
      if ( WORD1(a3) == 1 )
      {
        v122 = 1;
      }
      else if ( WORD1(a3) == 2 )
      {
        v122 = 2;
        goto LABEL_426;
      }
      if ( !v122 )
        goto LABEL_13;
LABEL_426:
      v171 = v122 | 0x8000;
      if ( a2 != 524 )
        LOWORD(a3) = GetMouseKeyFlags(*(_QWORD *)(gptiCurrent + 432LL));
      xxxSendMessage(a1, 793LL, *(_QWORD *)a1, (unsigned __int16)a3 | ((unsigned __int64)v171 << 16));
      goto LABEL_13;
    }
    v53 = a2 - 260;
    if ( !v53 )
    {
      v140 = a4 >> 16;
      if ( (v140 & 0x2000) != 0 )
      {
        if ( (v140 & 0x4000) == 0 )
        {
          v141 = *(_QWORD *)(gptiCurrent + 432LL);
          if ( a3 != 18 || (v142 = *(_DWORD *)(v141 + 388), (v142 & 8) != 0) )
          {
            *(_DWORD *)(v141 + 388) &= 0xFFFFFFF3;
          }
          else
          {
            *(_DWORD *)(v141 + 388) = v142 | 8;
            xxxDrawMenuBarUnderlines(a1, 1LL);
          }
        }
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x10u;
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) && (_DWORD)a3 == 115 )
          WindowManagementExtended::xxxCloseApplication(gptiCurrent, v8);
        goto LABEL_13;
      }
      if ( a3 != 121 )
        goto LABEL_13;
      v121 = *(_QWORD *)(gptiCurrent + 432LL);
LABEL_351:
      *(_DWORD *)(v121 + 388) |= 0x10u;
      if ( (_GetKeyState(16LL) & 0x8000u) == 0LL || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
        goto LABEL_13;
      v126 = *(_QWORD *)a1;
      _InterlockedAdd(&glSendMessage, 1u);
      v127 = -1;
      goto LABEL_412;
    }
    v54 = v53 - 1;
    if ( !v54 )
    {
LABEL_89:
      if ( a3 == 18
        && (v51 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL), (v51 & 0x80u) == 0)
        && (v51 & 0xC) == 8
        || a3 == 121 && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) & 0x10) != 0 )
      {
        NonChildAncestor = (struct tagWND *)GetNonChildAncestor((__int64)a1);
        if ( gspwndFullScreen != NonChildAncestor )
        {
          *(_QWORD *)&v193 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v193;
          *((_QWORD *)&v193 + 1) = NonChildAncestor;
          if ( NonChildAncestor )
            HMLockObject(NonChildAncestor);
          if ( a3 == 121 )
            xxxDrawMenuBarUnderlines(a1, 1LL);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout((int)NonChildAncestor, 274, 61696, 0, 0, 0, 0LL, 1, 0);
          ThreadUnlock1(v139);
        }
      }
      if ( a3 == 18 )
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x80u;
        xxxDrawMenuBarUnderlines(a1, 0LL);
      }
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= 0xFFFFFFE3;
      goto LABEL_13;
    }
    v128 = v54 - 1;
    if ( v128 )
    {
      if ( v128 != 3 || a3 == 0xFFFF )
        goto LABEL_13;
      v117 = a4;
      v119 = a3;
      v118 = 258;
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
        if ( a3 == 32 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
          {
            v104 = *((_QWORD *)a1 + 13);
            *(_QWORD *)&v190 = *(_QWORD *)(gptiCurrent + 416LL);
            *(_QWORD *)(gptiCurrent + 416LL) = &v190;
            *((_QWORD *)&v190 + 1) = v104;
            HMLockObject(v104);
            v102 = 262LL;
            v101 = 32LL;
            v103 = (struct tagWND *)*((_QWORD *)a1 + 13);
            goto LABEL_254;
          }
          v129 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
          if ( v129 )
          {
            v130 = 0;
            v131 = *(_DWORD *)(v129[5] + 236);
            if ( v131 >= 8 && (v131 <= 11 || v131 == 13) )
              v130 = 1;
            if ( v130 )
            {
              PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x21u, *v129);
              goto LABEL_13;
            }
          }
        }
        if ( a3 != 32
          || (v132 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL)) == 0LL
          || !(unsigned int)IsCompositionInputWindow(v132) )
        {
          _InterlockedAdd(&glSendMessage, 1u);
          v127 = a3;
          LODWORD(v126) = 61696;
          v137 = 274;
LABEL_413:
          xxxSendTransformableMessageTimeout((int)a1, v137, v126, v127, 0, 0, 0LL, 1, 0);
          goto LABEL_13;
        }
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL)
                                                                                                 + 120LL));
        if ( (unsigned int)CoreWindowProp::IsComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL)) )
          CompositionInputWindowUIOwner = CoreWindowProp::GetTopLevelHostForComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL));
        if ( !CompositionInputWindowUIOwner )
          goto LABEL_13;
        v134 = GetTopLevelWindow(CompositionInputWindowUIOwner);
        if ( !v134 )
          goto LABEL_13;
        v198[2] = 0LL;
        v135 = W32GetThreadWin32Thread(KeGetCurrentThread());
        v198[0] = *(_QWORD *)(v135 + 416);
        *(_QWORD *)(v135 + 416) = v198;
        v198[1] = v134;
        HMLockObject(v134);
        xxxForceForegroundWindowNoRestoreFocus(v134, 0LL);
        if ( !ThreadUnlock1(v136) )
          goto LABEL_13;
        v117 = 32;
        v119 = 61696;
        v118 = 274;
        v120 = v134;
LABEL_307:
        PostMessage(v120, v118, v119, v117);
        goto LABEL_13;
      }
      v117 = 0;
      v119 = 61728;
      v118 = 274;
    }
    v120 = (int)a1;
    goto LABEL_307;
  }
  if ( a2 >= 0xA1 )
  {
    xxxDWP_NCMouse(a1, a2, a3, a4);
    goto LABEL_13;
  }
  if ( a2 <= 0x33 )
  {
    if ( a2 == 51 )
    {
      v73 = HotKeyHelper(a1);
      v74 = 0;
      if ( *v73 )
        v74 = *((_DWORD *)*v73 + 2);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v187);
      return v74;
    }
    if ( a2 <= 0x18 )
    {
      if ( a2 == 24 )
      {
        if ( !(_WORD)a4 )
          goto LABEL_13;
        v66 = *((_QWORD *)a1 + 5);
        if ( (((*(_BYTE *)(v66 + 31) & 0xC0) + 0x80) & 0xBF) != 0 && !*((_QWORD *)a1 + 15) )
          goto LABEL_13;
        v67 = *(_BYTE *)(v66 + 31) & 0x10;
        if ( a3 )
        {
          if ( v67 || (*(_BYTE *)(v66 + 17) & 0x40) == 0 )
            goto LABEL_13;
        }
        else if ( !v67 )
        {
          goto LABEL_13;
        }
        SetOrClrWF(0LL, a1, 320LL, 1LL);
        if ( !a3 )
          SetOrClrWF(1LL, a1, 320LL, 1LL);
        xxxShowWindowEx(a1, a3 != 0 ? 4 : 0, gdwPUDFlags & 0x10000);
        goto LABEL_13;
      }
      if ( a2 == 15 )
        goto LABEL_79;
      if ( a2 <= 0xF )
      {
        v33 = a2 - 6;
        if ( !v33 )
        {
          if ( a3 )
            xxxSetFocus(a1);
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) & 0x40) == 0 )
            goto LABEL_13;
          v42 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 1400LL);
          if ( !v42 )
            goto LABEL_13;
          v197[2] = 0LL;
          v43 = W32GetThreadWin32Thread(KeGetCurrentThread());
          v197[0] = *(_QWORD *)(v43 + 416);
          *(_QWORD *)(v43 + 416) = v197;
          v197[1] = v42;
          HMLockObject(v42);
          xxxSendNotifyMessage(v42, 0x349u, a3, 0LL, 0);
          goto LABEL_111;
        }
        v34 = v33 - 5;
        if ( !v34 )
        {
          xxxDWP_SetRedraw(a1, a3 != 0);
          goto LABEL_13;
        }
        v35 = v34 - 1;
        if ( v35 )
        {
          v40 = v35 - 1;
          if ( v40 )
          {
            if ( v40 != 1 )
              goto LABEL_13;
            v55 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
            if ( !v55 )
              goto LABEL_13;
            BytesInMultiByteString = 0;
            if ( a4 )
            {
              RtlUnicodeToMultiByteSize(&BytesInMultiByteString, *((PCWCH *)a1 + 23), v55);
              v56 = BytesInMultiByteString;
            }
            else
            {
              v56 = v55 >> 1;
              BytesInMultiByteString = v56;
            }
            v25 = v56;
            goto LABEL_37;
          }
          if ( !a3 )
            goto LABEL_13;
          if ( *((_QWORD *)a1 + 23) )
          {
            v202 = 0LL;
            StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                        (struct tagWND *)((char *)a1 + 184),
                        (struct _LARGE_UNICODE_STRING *)&v202);
            DesktopVerifyHeapLargeUnicodeString(*((_QWORD *)a1 + 3), StrName);
          }
          v58 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
          v59 = (_QWORD *)(a4 + 8);
          v60 = *(_DWORD *)(a4 + 4);
          if ( !v58 )
          {
            v65 = (_WORD *)*v59;
            if ( v60 >= 0 )
              *v65 = 0;
            else
              *(_BYTE *)v65 = 0;
            goto LABEL_13;
          }
          v61 = (struct tagWND *)((char *)a1 + 184);
          if ( v60 >= 0 )
          {
            v203 = 0LL;
            v64 = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(v61, (struct _LARGE_UNICODE_STRING *)&v203);
            v63 = TextCopy(v64, *v59, (unsigned int)a3);
            v62 = 2 * v63;
          }
          else
          {
            v62 = WCSToMBEx(0LL, *(_QWORD *)v61, v58 >> 1, a4 + 8, (v60 & 0x7FFFFFFFu) - 1);
            v63 = v62;
            *(_BYTE *)(v62 + *v59) = 0;
          }
          *(_DWORD *)a4 = v62;
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v187);
          return v63;
        }
        else
        {
          v36 = DefSetText(a1, a4);
          v37 = v36;
          if ( v36 )
          {
            xxxRedrawTitle((unsigned __int64 *)a1, 8u);
            xxxWindowEvent(0x800Cu, 0);
          }
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v187);
          return v37;
        }
      }
      if ( a2 == 16 )
      {
        xxxDestroyWindow(a1);
        goto LABEL_13;
      }
      if ( a2 == 17 || a2 == 19 )
        goto LABEL_63;
      if ( a2 != 20 )
        goto LABEL_13;
    }
    else
    {
      if ( a2 <= 0x26 )
      {
        if ( a2 != 38 )
        {
          v21 = a2 - 25;
          if ( v21 )
          {
            v22 = v21 - 6;
            if ( !v22 )
            {
              xxxDWP_DoCancelMode(a1);
              goto LABEL_13;
            }
            v23 = v22 - 1;
            if ( v23 )
            {
              if ( v23 != 1 )
                goto LABEL_13;
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
                v68 = *((_QWORD *)a1 + 13);
              else
                v68 = 0LL;
              if ( !v68
                || (v69 = W32GetThreadWin32Thread(KeGetCurrentThread()),
                    *(_QWORD *)&v193 = *(_QWORD *)(v69 + 416),
                    *(_QWORD *)(v69 + 416) = &v193,
                    *((_QWORD *)&v193 + 1) = v68,
                    HMLockObject(v68),
                    v25 = xxxSendMessage(v68, 33LL, a3, a4),
                    ThreadUnlock1(v70),
                    !v25) )
              {
                if ( (_WORD)a4 != 2 || (v71 = 3LL, WORD1(a4) != 513) )
                  v71 = 1LL;
                v25 = v71;
              }
              goto LABEL_37;
            }
            v24 = xxxDWP_SetCursor(a1, (HWND)a3, (__int16)a4, WORD1(a4));
            goto LABEL_36;
          }
          goto LABEL_416;
        }
LABEL_79:
        xxxDWP_Paint(a1);
        goto LABEL_13;
      }
      if ( a2 == 43 )
      {
        if ( *(_DWORD *)a4 == 2 )
        {
          v72 = *(_DWORD *)(a4 + 12);
          if ( v72 == 4 || v72 == 1 && (*(_DWORD *)(a4 + 16) & 0x10) != 0 )
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
          v25 = -1LL;
          goto LABEL_37;
        }
        if ( a2 != 50 )
          goto LABEL_13;
        TitleBarInfo = DWP_SetHotKey(a1, a3);
        goto LABEL_26;
      }
    }
    v24 = xxxDWP_EraseBkgnd((__int64)a1, a2, a3);
    goto LABEL_36;
  }
  if ( a2 > 0x55 )
  {
    v11 = a2 - 123;
    if ( v11 )
    {
      v12 = v11 - 4;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 2;
            if ( !v15 )
            {
              xxxCalcClientRect(a1, a4, 0LL);
              goto LABEL_13;
            }
            v29 = v15 - 1;
            if ( v29 )
            {
              v30 = v29 - 1;
              if ( !v30 )
              {
                SetOrClrWF(1LL, a1, 384LL, 1LL);
                v31 = _GetDCEx(a1, a3, 328833LL);
                v32 = 0;
                if ( v31 )
                {
                  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) != 0 )
                    v32 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == gpqForeground;
                  xxxDrawWindowFrame(a1, v31, v32);
                  _ReleaseDC(v31);
                }
                SetOrClrWF(0LL, a1, 384LL, 1LL);
                goto LABEL_13;
              }
              v38 = v30 - 1;
              if ( v38 )
              {
                if ( v38 == 2 )
                {
                  SetOrClrWF(0LL, a1, 640LL, 1LL);
                  xxxInternalDoSyncPaint(a1, (unsigned int)a3);
                }
                goto LABEL_13;
              }
              xxxDWP_DoNCActivate(a1, (_WORD)a3 != 0, a4);
              goto LABEL_63;
            }
            v24 = FindNCHit(a1, (unsigned int)a4);
LABEL_36:
            v25 = v24;
LABEL_37:
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v187);
            return v25;
          }
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 0x30) != 0 && !InitPwSB(a1) )
            goto LABEL_13;
          if ( a4 )
          {
            v17 = (_DWORD *)(a4 + 80);
            if ( !*((_QWORD *)a1 + 3) || a4 == -80LL || (v18 = *(_BYTE **)(a4 + 88)) == 0LL )
            {
              *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) = 0;
LABEL_63:
              v25 = 1LL;
              goto LABEL_37;
            }
            if ( *(int *)(a4 + 84) < 0 )
            {
              if ( *v17 && *v18 == 0xFF )
                goto LABEL_22;
            }
            else if ( *v17 >= 2u && *(_WORD *)v18 == 0xFFFF )
            {
LABEL_22:
              SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v187);
              return 1LL;
            }
          }
          SetOrClrWF(1LL, a1, 514LL, 1LL);
          TitleBarInfo = DefSetText(a1, a4 + 80);
          goto LABEL_26;
        }
        updated = xxxDWP_SetIcon(a1, a3, (HICON)a4);
      }
      else
      {
        updated = (HICON)DWP_GetIcon((__int64)a1, a3);
      }
LABEL_74:
      v20 = (unsigned __int64)updated;
      goto LABEL_27;
    }
    v107 = FindNCHit(a1, (unsigned int)a4);
    if ( (unsigned int)(v107 - 6) <= 1 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL), a1) )
        xxxDoScrollMenu(a1, 0LL, v114 - 6);
      goto LABEL_13;
    }
    v108 = (_BYTE *)*((_QWORD *)a1 + 5);
    if ( (v108[31] & 0xC0) == 0x40 )
    {
      v109 = *((_QWORD *)a1 + 13);
      v110 = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v190 = *(_QWORD *)(v110 + 416);
      *(_QWORD *)(v110 + 416) = &v190;
      *((_QWORD *)&v190 + 1) = v109;
      HMLockObject(v109);
      v111 = *(_QWORD *)a1;
      v112 = 123;
LABEL_436:
      v175 = *((_QWORD *)a1 + 13);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v175, v112, v111, a4, 0, 0, 0LL, 1, 1);
      goto LABEL_111;
    }
    if ( a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) )
      goto LABEL_13;
    if ( v107 != 2 )
    {
      if ( v107 != 3 )
      {
        if ( a4 == -1LL && (v108[21] & 2) == 0 )
          xxxSimulateShiftF10();
        goto LABEL_13;
      }
      goto LABEL_268;
    }
LABEL_444:
    v113 = (v108[31] & 0x21) != 0 ? 61728 : 61488;
    goto LABEL_445;
  }
  if ( a2 != 85 )
  {
    if ( a2 <= 0x4D )
    {
      if ( a2 == 77 )
      {
        ContextHelpId = GetContextHelpId(a1);
        xxxSendHelpMessage((int)a1, ContextHelpId);
        goto LABEL_13;
      }
      v26 = a2 - 53;
      if ( !v26 )
      {
        v20 = ((unsigned __int64)*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 16LL) >> 6) & 1;
        goto LABEL_27;
      }
      v27 = v26 - 6;
      if ( !v27 )
      {
        v24 = xxxClientShutdown((__int64)a1, a3);
        goto LABEL_36;
      }
      v28 = v27 - 11;
      if ( !v28 )
      {
        if ( (*(_DWORD *)(a4 + 32) & 0x100001) == 0 )
          xxxAdjustSize(a1);
        goto LABEL_13;
      }
      v41 = v28 - 1;
      if ( !v41 )
      {
        v48 = *(_DWORD *)(a4 + 32);
        if ( (v48 & 0x1000) == 0 )
        {
          v186 = *(struct tagPROCESSINFO **)(*((_QWORD *)a1 + 5) + 104LL);
          DesktopWindow = GetDesktopWindow(a1);
          if ( v78 != DesktopWindow )
          {
            v79 = *(_QWORD *)(v78 + 40);
            LODWORD(v186) = v76 - *(_DWORD *)(v79 + 104);
            HIDWORD(v186) = v77 - *(_DWORD *)(v79 + 108);
          }
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(
            (int)a1,
            3,
            0,
            (unsigned __int16)v186 | (WORD2(v186) << 16),
            0,
            0,
            0LL,
            1,
            0);
          v48 = *(_DWORD *)(a4 + 32);
        }
        if ( (v48 & 0x8800) != 0x800 )
        {
          v80 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
          if ( (v80 & 0x20) != 0 )
          {
            v81 = 1;
            v82 = (int)a1;
          }
          else
          {
            v83 = (v80 & 1) == 0;
            v82 = (int)a1;
            if ( v83 )
              v81 = 0;
            else
              v81 = 2;
          }
          xxxSendSizeMessage(v82, v81);
        }
        goto LABEL_13;
      }
      if ( v41 == 2 )
      {
        updated = (HICON)SfnCOPYGLOBALDATA(0LL, 0LL, a3, a4, 0LL, 0LL, 0, 0LL);
        goto LABEL_74;
      }
LABEL_13:
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v187);
      return 0LL;
    }
    v85 = a2 - 79;
    if ( !v85 )
    {
      if ( !ValidateHwnd(a3) )
        goto LABEL_13;
      goto LABEL_63;
    }
    v86 = v85 - 1;
    if ( v86 )
    {
      v87 = v86 - 1;
      if ( !v87 )
      {
        v195 = 0LL;
        v196 = 0LL;
        v92 = BuildHwndList(*((struct tagWND **)a1 + 14));
        v94 = v92;
        if ( v92 )
        {
          v95 = (_QWORD *)(v92 + 32);
          v96 = *(_QWORD *)(v92 + 32);
          if ( v96 != 1 )
          {
            do
            {
              LOBYTE(v93) = 1;
              v186 = (struct tagPROCESSINFO *)HMValidateHandleNoSecure(v96, v93);
              if ( v186 )
              {
                v97 = W32GetThreadWin32Thread(KeGetCurrentThread());
                *(_QWORD *)&v195 = *(_QWORD *)(v97 + 416);
                *(_QWORD *)(v97 + 416) = &v195;
                *((_QWORD *)&v195 + 1) = v186;
                HMLockObject(v186);
                xxxSendMessage(v186, 81LL, a3, a4);
                ThreadUnlock1(v98);
              }
              v96 = *++v95;
            }
            while ( *v95 != 1LL );
          }
          FreeHwndList(v94);
          goto LABEL_13;
        }
        v25 = 0LL;
        goto LABEL_37;
      }
      if ( v87 != 2 )
        goto LABEL_13;
      v88 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 ? *((_QWORD *)a1 + 13) : *((_QWORD *)a1 + 15);
      if ( !v88 || v88 == GetThreadDesktopWindow(0LL) )
        goto LABEL_13;
      v89 = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v193 = *(_QWORD *)(v89 + 416);
      *(_QWORD *)(v89 + 416) = &v193;
      *((_QWORD *)&v193 + 1) = v88;
      HMLockObject(v88);
      _InterlockedAdd(&glSendMessage, 1u);
      v90 = xxxSendTransformableMessageTimeout(v88, 83, a3, a4, 0, 0, 0LL, 1, 1);
      goto LABEL_462;
    }
    v99 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
    if ( !v99 || v99 == a1 || **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) == *(_WORD *)(gpsi + 904LL) )
    {
      ProcessWindowStation = GetProcessWindowStation(0LL);
      if ( !xxxActivateKeyboardLayout(ProcessWindowStation, a4, 256LL, a1) )
        UserSetLastError(1457LL);
      goto LABEL_13;
    }
    v100 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)&v193 = *(_QWORD *)(v100 + 416);
    *(_QWORD *)(v100 + 416) = &v193;
    *((_QWORD *)&v193 + 1) = v99;
    HMLockObject(v99);
    v101 = a3;
    v102 = 80LL;
    v103 = v99;
LABEL_254:
    xxxSendMessage(v103, v102, v101, a4);
LABEL_111:
    ThreadUnlock1(v44);
    goto LABEL_13;
  }
  if ( a4 != 3 )
    goto LABEL_13;
  v106 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v187);
  return 2LL - ((v106 & 0x20) != 0);
}
