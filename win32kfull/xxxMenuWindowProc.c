/*
 * XREFs of xxxMenuWindowProc @ 0x1C021D3D0
 * Callers:
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0144690 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     xxxDWP_DoNCActivate @ 0x1C00245B8 (xxxDWP_DoNCActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002498C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002AE4C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     IsPointerParentNotify @ 0x1C0038544 (IsPointerParentNotify.c)
 *     IsPointerInputMessageWithState @ 0x1C003855C (IsPointerInputMessageWithState.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C003A028 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     GetDPIMetrics @ 0x1C009FD5C (GetDPIMetrics.c)
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     xxxDefWindowProc @ 0x1C00A66F0 (xxxDefWindowProc.c)
 *     MNGetpItemIndex @ 0x1C00A6FD0 (MNGetpItemIndex.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C00C8AFC (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C00C8EF8 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00D2B90 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C00DE8D0 (xxxPlayEventSound.c)
 *     FindTimer @ 0x1C00DEEDC (FindTimer.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00E0FE0 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00E67A8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 *     xxxValidateRect @ 0x1C00F3F9C (xxxValidateRect.c)
 *     xxxValidateClassAndSize @ 0x1C00FA3E4 (xxxValidateClassAndSize.c)
 *     GreGetLayout @ 0x1C0111738 (GreGetLayout.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C012D59E (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C012D878 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C012D8B8 (safe_cast_fnid_to_PMENUWND.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01432F0 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BD154 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     zzzShowFade @ 0x1C01BE658 (zzzShowFade.c)
 *     zzzStartFade @ 0x1C01BE6C0 (zzzStartFade.c)
 *     _SetTimer @ 0x1C01C1BF4 (_SetTimer.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01C6BCC (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0201C0C (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocPopup @ 0x1C0201DA8 (MNAllocPopup.c)
 *     MNCreateAnimationBitmap @ 0x1C0201E28 (MNCreateAnimationBitmap.c)
 *     xxxMNEndMenuState @ 0x1C0202580 (xxxMNEndMenuState.c)
 *     xxxUserModeCallback @ 0x1C02165AC (xxxUserModeCallback.c)
 *     xxxEndMenuLoop @ 0x1C0216810 (xxxEndMenuLoop.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C0217EE8 (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0218110 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C0218490 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C02184EC (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C021869C (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C021876C (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0218B30 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0218C94 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     IsMFMWFPWindow @ 0x1C02192F8 (IsMFMWFPWindow.c)
 *     LockPopupMenu @ 0x1C0219378 (LockPopupMenu.c)
 *     MNCheckButtonDownState @ 0x1C0219454 (MNCheckButtonDownState.c)
 *     MNGetpItem @ 0x1C02194AC (MNGetpItem.c)
 *     MNIsUAHMenu @ 0x1C02194D8 (MNIsUAHMenu.c)
 *     xxxCallHandleMenuMessages @ 0x1C0219674 (xxxCallHandleMenuMessages.c)
 *     xxxMNButtonDown @ 0x1C02197A8 (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C02198AC (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C02199C4 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C0219CB8 (xxxMNChar.c)
 *     xxxMNCloseHierarchy @ 0x1C021A0D0 (xxxMNCloseHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C021A56C (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C021A850 (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C021ABF8 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C021B510 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C021B7B0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C021C660 (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C021CCC4 (xxxMNSetCapture.c)
 *     FindBestPos @ 0x1C0234EF4 (FindBestPos.c)
 *     MNAnimate @ 0x1C0237090 (MNAnimate.c)
 *     MNDrawEdge @ 0x1C0237488 (MNDrawEdge.c)
 *     MNEraseBackground @ 0x1C023756C (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C0237FB4 (xxxMNDrawFullNC.c)
 *     xxxMenuDraw @ 0x1C0238E5C (xxxMenuDraw.c)
 *     xxxSendUAHMenuMessage @ 0x1C023A4DC (xxxSendUAHMenuMessage.c)
 *     xxxMNCompute @ 0x1C023B4C8 (xxxMNCompute.c)
 *     MNFindNextValidItem @ 0x1C0241C80 (MNFindNextValidItem.c)
 *     GreSetWindowOrg @ 0x1C02D25C4 (GreSetWindowOrg.c)
 */

unsigned __int64 __fastcall xxxMenuWindowProc(
        const struct tagWND **a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4)
{
  __int64 v8; // rsi
  int v9; // r14d
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // r9
  unsigned __int64 v13; // r10
  const struct tagWND *v14; // rdi
  __int64 v15; // rdx
  __int64 i; // rbx
  HDC FadeInternal; // r8
  __int64 v18; // r9
  __int64 v19; // r13
  int v20; // edi
  __int64 v21; // rdx
  int v22; // eax
  int v23; // ecx
  unsigned __int64 v24; // rcx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  __int64 *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // eax
  __int64 ValidItem; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD *v41; // rdi
  __int64 v42; // rbx
  int v43; // edi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  struct tagMONITOR *v51; // rax
  int v52; // ebx
  int v53; // r13d
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // r15d
  struct tagMONITOR *v60; // rdi
  const struct tagWND *v61; // rax
  int v62; // edx
  int BestPos; // eax
  int v64; // ecx
  int v65; // ecx
  __int64 v66; // rcx
  int v67; // ecx
  int v68; // ecx
  int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // rcx
  bool v76; // zf
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rbx
  char *v81; // r13
  __int64 v82; // rcx
  struct tagMONITOR *v83; // rbx
  int v84; // edi
  int v85; // ecx
  int v86; // ecx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  int v90; // eax
  __int64 v91; // r13
  __int64 v92; // rax
  __int64 v93; // rax
  int v94; // r8d
  struct tagWND *v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // rcx
  struct tagWND *v99; // r15
  unsigned int v100; // ebx
  const struct tagWND **TopWindow; // rax
  unsigned int v102; // eax
  __int64 v103; // r15
  unsigned __int64 *v104; // rax
  struct tagWND **v105; // rbx
  unsigned __int64 v106; // r14
  __int64 v107; // r14
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 ThreadWin32Thread; // rax
  int v115; // edx
  unsigned int v116; // r8d
  unsigned int v117; // ecx
  int v118; // eax
  int v119; // eax
  char v120; // dl
  PVOID v121; // rax
  int v122; // eax
  int v123; // eax
  int v124; // eax
  int v125; // eax
  int v126; // eax
  __int64 v127; // rax
  unsigned __int64 v128; // rdx
  __int64 v129; // r8
  struct tagWND *v130; // rcx
  __int64 DCEx; // rbx
  __int64 v132; // rdi
  int v133; // ebx
  __int64 v134; // r14
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // rbx
  __int64 v139; // rbx
  __int64 v140[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v141; // [rsp+68h] [rbp-A0h] BYREF
  struct tagMONITOR *v142; // [rsp+70h] [rbp-98h] BYREF
  struct tagMENUSTATE *v143[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v144[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v145; // [rsp+98h] [rbp-70h]
  unsigned __int64 v146; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v147; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v148; // [rsp+C0h] [rbp-48h]
  __int128 v149; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v150; // [rsp+D8h] [rbp-30h]
  __int128 v151; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v152; // [rsp+F0h] [rbp-18h]
  __int128 v153; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v154; // [rsp+108h] [rbp+0h]

  LODWORD(v141) = a2;
  v144[0] = a4;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v140, 0LL);
  v8 = 0LL;
  v154 = 0LL;
  v152 = 0LL;
  v146 = 0LL;
  v142 = 0LL;
  v9 = 0;
  v153 = 0LL;
  v151 = 0LL;
  if ( !(unsigned int)xxxValidateClassAndSize((__int64)a1, a2, (HWND)a3, a4, 668, 129, &v142) )
  {
    v8 = (__int64)v142;
LABEL_137:
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v140);
    return v8;
  }
  if ( a1[2] != (const struct tagWND *)gptiCurrent )
  {
    v11 = IsPointerInputMessageWithState(a2);
    if ( !v11 && !IsPointerParentNotify(v10, a3) )
      goto LABEL_12;
    if ( v11 )
    {
      LOWORD(v13) = a3;
    }
    else
    {
      if ( !IsPointerParentNotify(a2, a3) )
      {
LABEL_11:
        if ( !GetThreadPointerData((struct _LIST_ENTRY *)(v12 + 1128), v13, 0LL, 0LL) )
          goto LABEL_137;
LABEL_12:
        v8 = xxxSendMessage((struct tagWND *)a1, a2);
        goto LABEL_137;
      }
      v13 = a3 >> 16;
    }
    if ( (_WORD)v13 == 1 )
      goto LABEL_137;
    goto LABEL_11;
  }
  v14 = a1[35];
  v142 = v14;
  v15 = *((_QWORD *)v14 + 1);
  *(_QWORD *)v14 = a1;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v140, v15);
  if ( *(_QWORD *)v140[0] )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 16LL) + 608LL); i; i = *(_QWORD *)(i + 48) )
    {
      if ( *(_QWORD *)i == *(_QWORD *)(*((_QWORD *)v14 + 1) + 64LL) )
        break;
    }
  }
  else
  {
    i = 0LL;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
    (MenuStateOwnerLockxxxUnlock *)v143,
    (struct tagMENUSTATE *)i);
  if ( *(_QWORD *)v140[0] )
    v19 = *(_QWORD *)(*(_QWORD *)v140[0] + 40LL);
  else
    v19 = 0LL;
  v20 = 1;
  v21 = 256LL;
  if ( !i || !v19 )
  {
    v24 = (unsigned int)v141;
    if ( (_DWORD)v141 == 480 )
    {
      if ( !*(_QWORD *)v140[0] )
        goto LABEL_136;
      v24 = *(_QWORD *)(*(_QWORD *)v142 + 40LL);
      if ( *(char *)(v24 + 19) < 0 )
        goto LABEL_136;
      goto LABEL_261;
    }
    if ( (_DWORD)v141 == 129 )
    {
      v83 = v142;
      v24 = *(_QWORD *)(*(_QWORD *)v142 + 40LL);
      if ( *(char *)(v24 + 19) < 0 )
        goto LABEL_136;
      goto LABEL_247;
    }
    if ( (_DWORD)v141 != 112 )
      goto LABEL_135;
LABEL_138:
    if ( (_DWORD)v24 == 481 )
    {
      if ( v9 )
        v19 = ThreadUnlock1(v24, 256LL, FadeInternal);
      if ( v19 )
        v8 = *(_QWORD *)v19;
      goto LABEL_136;
    }
    v84 = v9;
    if ( (unsigned int)v24 <= 0x81 )
    {
      if ( (_DWORD)v24 != 129 )
      {
        if ( (unsigned int)v24 <= 0x18 )
        {
          if ( (_DWORD)v24 == 24 )
          {
            if ( !a3 )
              xxxMNCancel(i, 0, 0, 0LL);
            goto LABEL_164;
          }
          v85 = v24 - 3;
          if ( v85 )
          {
            v86 = v85 - 2;
            if ( v86 )
            {
              v24 = (unsigned int)(v86 - 1);
              if ( (_DWORD)v24 )
              {
                v24 = (unsigned int)(v24 - 9);
                if ( (_DWORD)v24 )
                {
                  if ( (_DWORD)v24 != 5 || !*(_QWORD *)(*(_QWORD *)(v19 + 40) + 24LL) )
                    goto LABEL_164;
                  MNEraseBackground(
                    (HDC)a3,
                    *((_DWORD *)a1[5] + 28) - *((_DWORD *)a1[5] + 26),
                    *((_DWORD *)a1[5] + 29) - *((_DWORD *)a1[5] + 27));
                  if ( v9 )
LABEL_251:
                    ThreadUnlock1(v88, v87, v89);
LABEL_302:
                  v8 = 1LL;
                  goto LABEL_136;
                }
                SmartObjStackRefBase<tagMENU>::Init(&v147, v19);
                v148 = 0LL;
                xxxHandleMenuPainting((struct tagWND *)a1, (__int64 **)&v147);
LABEL_152:
                SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v147);
                goto LABEL_305;
              }
              v90 = *(_DWORD *)(i + 8);
              if ( (v90 & 0x100) != 0 )
              {
                if ( (_WORD)a3 )
                  goto LABEL_164;
                if ( (v90 & 0x200) != 0 )
                  goto LABEL_164;
                if ( (**(_DWORD **)i & 0x80000) != 0 )
                  goto LABEL_164;
                v144[0] = HMValidateHandleNoSecure(v144[0], 1);
                v91 = v144[0];
                v92 = safe_cast_fnid_to_PMENUWND(v144[0]);
                if ( !v91 )
                  goto LABEL_164;
                if ( v92 )
                {
                  v93 = *(_QWORD *)(v92 + 8);
                  if ( v93 )
                  {
                    if ( *(_QWORD *)i == *(_QWORD *)(v93 + 64) )
                      goto LABEL_164;
                  }
                }
                v94 = *(_DWORD *)(i + 8);
                if ( (v94 & 0x10000) != 0 && gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
                {
                  *(_DWORD *)(i + 8) = v94 & 0xFFFEFFFF;
                  PostMessage((unsigned __int64)a1, 0x1F2u, 0LL, 0LL);
                  goto LABEL_164;
                }
                goto LABEL_166;
              }
              if ( !(_WORD)a3 )
                goto LABEL_305;
              v150 = 0LL;
              v149 = 0LL;
              if ( *(_WORD *)(gptiCurrent + 632LL) >= 0x500u )
              {
LABEL_166:
                v95 = (struct tagWND *)a1;
LABEL_167:
                PostMessage((unsigned __int64)v95, 0x1F3u, 0LL, 0LL);
                goto LABEL_305;
              }
              if ( !gpqForegroundPrev
                || !IsWindowActivateable(*(const struct tagWND **)(gpqForegroundPrev + 136LL))
                || (v21 = *(_QWORD *)(gpqForegroundPrev + 136LL),
                    v24 = *(_WORD *)(*(_QWORD *)(v21 + 40) + 42LL) & 0x2FFF,
                    (_DWORD)v24 == 668) )
              {
                v99 = (struct tagWND *)a1;
                v100 = 0;
                do
                {
                  TopWindow = (const struct tagWND **)FindNextTopWindow::NextTopWindow((__int64)a1, 0LL, 0);
                  a1 = TopWindow;
                  if ( !TopWindow )
                    break;
                  if ( IsWindowActivateable(TopWindow[25]) )
                  {
                    v21 = (__int64)a1[25];
                    v24 = *(_WORD *)(*(_QWORD *)(v21 + 40) + 42LL) & 0x2FFF;
                    if ( (_DWORD)v24 != 668 )
                    {
                      a1 = (const struct tagWND **)a1[25];
                      goto LABEL_174;
                    }
                  }
                  v102 = v100++;
                }
                while ( v102 < 0xFF );
                if ( !v100 )
                  goto LABEL_174;
                v95 = v99;
                goto LABEL_167;
              }
              a1 = *(const struct tagWND ***)(gpqForegroundPrev + 136LL);
LABEL_174:
              if ( !a1 )
                goto LABEL_305;
              *(_QWORD *)&v149 = *(_QWORD *)(gptiCurrent + 416LL);
              *(_QWORD *)(gptiCurrent + 416LL) = &v149;
              *((_QWORD *)&v149 + 1) = a1;
              HMLockObject(a1);
              v98 = *(_QWORD *)(gptiCurrent + 432LL);
              if ( *((_QWORD *)a1[2] + 54) == v98 )
              {
                xxxActivateWindowWithOptions((struct tagWND *)a1, 0LL, 0LL, 1);
              }
              else if ( gpqForeground == v98 )
              {
                xxxSetForegroundWindowWithOptions((__int64)a1, 2u, 0, 0);
              }
LABEL_245:
              ThreadUnlock1(v98, v96, v97);
              goto LABEL_305;
            }
          }
          v24 = *(_QWORD *)v140[0];
          if ( *(_QWORD *)(*(_QWORD *)v140[0] + 24LL) )
          {
            v103 = MNGetpItem((__int64)v140, *(_DWORD *)(*(_QWORD *)v140[0] + 84LL));
            v104 = (unsigned __int64 *)safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v140[0] + 24LL));
            v105 = (struct tagWND **)v104;
            if ( v103 )
            {
              if ( v104 )
              {
                v106 = v104[1];
                if ( v106 )
                {
                  v24 = *v104;
                  if ( *v104 )
                  {
                    v107 = *(_QWORD *)(v106 + 40);
                    v141 = 0LL;
                    v150 = 0LL;
                    v148 = 0LL;
                    v149 = 0LL;
                    v147 = 0LL;
                    ThreadLockAlways(v24, &v147);
                    ThreadLockAlways(v107, &v149);
                    if ( !*(_DWORD *)(v107 + 64) )
                      xxxSendMessage(*v105, 0x1E2u);
                    if ( *(_QWORD *)(*(_QWORD *)v140[0] + 40LL)
                      && (unsigned int)MNGetpItemIndex(*(_QWORD *)(*(_QWORD *)v140[0] + 40LL), v103) != -1 )
                    {
                      xxxMNPositionHierarchy(
                        (__int64 **)v140,
                        v103,
                        *(_DWORD *)(v107 + 64) + 6,
                        *(_DWORD *)(v107 + 68) + 6,
                        (LONG *)&v141,
                        (int *)&v141 + 1,
                        0LL);
                    }
                    xxxSetWindowPos(*v105, 0LL, (unsigned int)v141, HIDWORD(v141), 0, 0, 1029);
                    ThreadUnlock1(v109, v108, v110);
                    ThreadUnlock1(v112, v111, v113);
                  }
                }
              }
            }
          }
LABEL_277:
          v9 = v84;
          goto LABEL_305;
        }
        v24 = (unsigned int)(v24 - 28);
        if ( !(_DWORD)v24 )
        {
          if ( (*(_DWORD *)(i + 8) & 0x100) == 0 || a1 != *(const struct tagWND ***)(*(_QWORD *)i + 56LL) )
            goto LABEL_305;
          if ( a3 )
          {
            PostMessage((unsigned __int64)a1, 0x1F2u, 0LL, 0LL);
            v21 = *(_QWORD *)(gptiCurrent + 432LL) - gpqForeground;
            *(_DWORD *)(i + 8) = *(_DWORD *)(i + 8) & 0xFFFEFFFF | (*(_QWORD *)(gptiCurrent + 432LL) != gpqForeground
                                                                  ? 0x10000
                                                                  : 0);
          }
          v24 = *(_QWORD *)v140[0];
          if ( !*(_QWORD *)(*(_QWORD *)v140[0] + 8LL) )
            goto LABEL_305;
          ThreadLockAlways(*(_QWORD *)(*(_QWORD *)v140[0] + 8LL), &v151);
          if ( !a3 || (*(_DWORD *)(i + 8) & 0x10000) != 0 )
            v120 = 2;
          else
            v120 = 1;
          xxxDWP_DoNCActivate(*(struct tagWND **)(*(_QWORD *)v140[0] + 8LL), v120, 1LL);
          goto LABEL_245;
        }
        v24 = (unsigned int)(v24 - 42);
        if ( (_DWORD)v24 )
        {
          v24 = (unsigned int)(v24 - 1);
          if ( !(_DWORD)v24 )
          {
            if ( (*(_DWORD *)(v144[0] + 32) & 0x40) != 0 )
            {
              v24 = *(_QWORD *)v140[0];
              if ( (**(_DWORD **)v140[0] & 0x8000000) != 0 )
              {
                if ( (gfade[12] & 0x10) != 0 )
                {
                  zzzStartFade();
                }
                else
                {
                  *(_DWORD *)(i + 104) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                  SetTimer((unsigned __int64)a1, 65531LL, 0xAu, 0LL, 0);
                }
                v24 = *(_QWORD *)v140[0];
                **(_DWORD **)v140[0] &= ~0x8000000u;
              }
            }
            goto LABEL_164;
          }
          if ( (_DWORD)v24 != 41 )
            goto LABEL_164;
          if ( i && (*(_DWORD *)(i + 8) & 0x400) != 0 )
          {
            v144[0] = (__int64)*a1;
            xxxUserModeCallback(101LL, (__int64)v144, 8u, v18);
          }
          xxxMNDestroyHandler(v142);
          v76 = v9 == 0;
LABEL_95:
          if ( v76 )
            goto LABEL_136;
LABEL_96:
          ThreadUnlock1(v24, v21, FadeInternal);
          goto LABEL_136;
        }
        if ( (*(_DWORD *)(v144[0] + 32) & 0x40) == 0 )
          goto LABEL_164;
        if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000002) == 0x80000002
          && (**(_DWORD **)v140[0] & 0x8000000) != 0
          && (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) != 1
          && (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) != 4
          && !CInputGlobals::WasLastInputJournalling(gpInputGlobals) )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          if ( *(_DWORD *)(ThreadWin32Thread + 632) > 0x400u || (*(_DWORD *)(ThreadWin32Thread + 648) & 1) == 0 )
          {
            v115 = *((_DWORD *)a1[5] + 24) - *((_DWORD *)a1[5] + 22);
            *(_DWORD *)(i + 116) = v115;
            v116 = *((_DWORD *)a1[5] + 25) - *((_DWORD *)a1[5] + 23);
            *(_DWORD *)(i + 120) = v116;
            if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000200) != 0x80000200 )
            {
              if ( !(unsigned int)MNCreateAnimationBitmap(i, v115, v116) )
                goto LABEL_225;
              *(_QWORD *)(i + 96) = _GetDCEx(a1, 1LL, 65665LL);
              v117 = (**(_DWORD **)v140[0] >> 4) & 0xF80000 | *(_DWORD *)(i + 8) & 0xFF07FFFF;
              v118 = 0;
              *(_DWORD *)(i + 8) = v117;
              if ( (v117 & 0x180000) == 0 )
                v118 = *(_DWORD *)(i + 116);
              *(_DWORD *)(i + 108) = v118;
              v119 = 0;
              if ( (v117 & 0x600000) == 0 )
                v119 = *(_DWORD *)(i + 120);
              *(_DWORD *)(i + 112) = v119;
            }
            else
            {
              FadeInternal = CreateFadeInternal((struct tagWND *)a1, 0LL, 0xAFu, 17, 0);
              if ( !FadeInternal )
                goto LABEL_225;
            }
            *(_DWORD *)(*(_QWORD *)(v19 + 40) + 40LL) |= 8u;
            xxxSendMessage((struct tagWND *)a1, 0x317u);
            *(_DWORD *)(*(_QWORD *)(v19 + 40) + 40LL) &= ~8u;
            v24 = gfade[12];
            if ( (v24 & 0x10) != 0 )
              zzzShowFade();
            goto LABEL_164;
          }
        }
LABEL_225:
        v24 = *(_QWORD *)v140[0];
        **(_DWORD **)v140[0] &= ~0x8000000u;
        goto LABEL_164;
      }
      v83 = v142;
LABEL_247:
      if ( *((_QWORD *)v83 + 1)
        || *((_QWORD *)v83 + 2)
        || (v121 = MNAllocPopup(1),
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(v140, (__int64)v121),
            !*(_QWORD *)v140[0]) )
      {
LABEL_94:
        v76 = v9 == 0;
        goto LABEL_95;
      }
      *((_QWORD *)v83 + 1) = *(_QWORD *)v140[0];
      **(_DWORD **)v140[0] |= 0x40000000u;
      *(_DWORD *)(*(_QWORD *)v140[0] + 80LL) = -1;
      v144[1] = (__int64)a1;
      v144[0] = *(_QWORD *)v140[0] + 16LL;
      HMAssignmentLock(v144, 0LL);
      if ( v9 )
        goto LABEL_251;
      goto LABEL_302;
    }
    switch ( (_DWORD)v24 )
    {
      case 0x83:
        v139 = v144[0];
        xxxDefWindowProc((struct tagWND *)a1, 0x83u, (HWND)a3, v144[0]);
        if ( (*(_DWORD *)(v19 + 124) & 3) != 0 )
        {
          v24 = *(unsigned int *)(GetDPIMetrics(v24) + 28);
          *(_DWORD *)(v139 + 4) += v24;
          *(_DWORD *)(v139 + 12) -= v24;
        }
        goto LABEL_305;
      case 0x84:
        if ( (*(_DWORD *)(i + 8) & 0x100) == 0 )
          goto LABEL_164;
        LODWORD(v146) = SLOWORD(v144[0]);
        HIDWORD(v146) = SWORD1(v144[0]);
        if ( v9 )
          ThreadUnlock1((unsigned __int64)v144[0] >> 16, 256LL, FadeInternal);
        if ( !PtInRect((_DWORD *)a1[5] + 22, v146) )
          goto LABEL_136;
        goto LABEL_302;
      case 0x85:
        if ( (**(_DWORD **)v140[0] & 0x8000000) != 0 )
        {
          xxxValidateRect((struct tagWND *)a1, 0LL);
        }
        else
        {
          if ( (*(_DWORD *)(v19 + 124) & 3) != 0 )
          {
            if ( (unsigned int)MNIsUAHMenu(v19) )
            {
              v128 = 0LL;
              v129 = 65537LL;
              v130 = *(struct tagWND **)(*(_QWORD *)v140[0] + 16LL);
            }
            else
            {
              v129 = 328833LL;
              v128 = a3;
              v130 = (struct tagWND *)a1;
            }
            DCEx = _GetDCEx(v130, v128, v129);
            xxxMNDrawFullNC((struct tagWND *)a1);
          }
          else
          {
            if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) != 0x80020000 )
            {
              v134 = xxxDefWindowProc((struct tagWND *)a1, v141, (HWND)a3, v144[0]);
              if ( (unsigned int)MNIsUAHMenu(v19) )
              {
                v136 = v140[0];
                v135 = *(_QWORD *)v140[0];
                if ( *(_QWORD *)(*(_QWORD *)v140[0] + 16LL) )
                {
                  v138 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v140[0] + 16LL), 0LL, 65537LL);
                  xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v140[0] + 16LL), 149LL, v19, v138);
                  _ReleaseDC(v138);
                }
              }
              if ( v84 )
                ThreadUnlock1(v136, v135, v137);
              MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(v143);
              v8 = v134;
              goto LABEL_137;
            }
            if ( (unsigned int)MNIsUAHMenu(v19) )
            {
              v132 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v140[0] + 16LL), 0LL, 65537LL);
              v133 = xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v140[0] + 16LL), 149LL, v19, v132);
              _ReleaseDC(v132);
              if ( v133 )
                goto LABEL_305;
            }
            DCEx = _GetDCEx(a1, a3, 328833LL);
            MNDrawEdge(v19, DCEx, (char *)a1[5] + 88, 0LL);
          }
          _ReleaseDC(DCEx);
        }
LABEL_305:
        if ( v9 )
          ThreadUnlock1(v24, v21, FadeInternal);
        MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(v143);
        SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v140);
        return 0LL;
    }
    v122 = v24 - 256;
    if ( (_DWORD)v24 != 256 )
    {
      v24 = 2LL;
      v123 = v122 - 2;
      if ( !v123 )
        goto LABEL_278;
      v124 = v123 - 2;
      if ( v124 )
      {
        v125 = v124 - 2;
        if ( v125 )
        {
          v126 = v125 - 13;
          if ( !v126 )
          {
            v21 = 65529LL;
            switch ( a3 )
            {
              case 0xFFF9uLL:
                FindTimer(a1, (void *)0xFFF9, 0, 1, 0LL);
                if ( (*(_DWORD *)(i + 8) & 0x1000) != 0 )
                {
LABEL_92:
                  xxxEndMenuLoop(i, *(_QWORD *)i);
                  if ( (*(_DWORD *)(i + 8) & 0x100) != 0 )
                    xxxMNEndMenuState(i);
                  goto LABEL_94;
                }
                break;
              case 0xFFFBuLL:
                if ( *(_QWORD *)(i + 96) )
                  MNAnimate(i, 1LL);
                break;
              case 0xFFFEuLL:
                **(_DWORD **)v140[0] &= ~0x80u;
                xxxMNOpenHierarchy((__int64 **)v140, i);
                break;
              case 0xFFFFuLL:
                **(_DWORD **)v140[0] &= ~0x80u;
                xxxMNCloseHierarchy(*(_QWORD *)v140[0], i);
                break;
              default:
                if ( a3 - 4294967292u <= 1 )
                {
                  if ( (*(_DWORD *)(i + 8) & 8) != 0 )
                    xxxMNDoScroll((__int64)v140, a3, 0);
                  else
                    FindTimer(a1, (void *)(unsigned int)a3, 0, 1, 0LL);
                }
                break;
            }
            goto LABEL_277;
          }
          if ( v126 != 205 )
            goto LABEL_164;
LABEL_261:
          if ( !a3 )
            goto LABEL_305;
          v127 = ValidateHmenu(a3);
          if ( !v127 )
            goto LABEL_305;
          SmartObjStackRefBase<tagMENU>::Init(&v147, v127);
          v148 = 0LL;
          LockPopupMenu((__int64)v140, (__int64 *)(*(_QWORD *)v140[0] + 40LL), (__int64)&v147);
          goto LABEL_152;
        }
LABEL_278:
        xxxMNChar((__int64 **)v140, i, a3);
        goto LABEL_305;
      }
    }
    xxxMNKeyDown((__int64 **)v140, i, a3);
    goto LABEL_305;
  }
  ThreadLockAlways(v19, &v153);
  v9 = 1;
  if ( !*(_QWORD *)(*(_QWORD *)v140[0] + 64LL)
    || (FadeInternal = *(HDC *)v140[0],
        v22 = 1,
        **(_QWORD **)(*(_QWORD *)(*(_QWORD *)v142 + 16LL) + 608LL) == *(_QWORD *)(*(_QWORD *)v140[0] + 64LL)) )
  {
    v22 = 0;
  }
  v23 = *(_DWORD *)(i + 8);
  v21 = 256LL;
  if ( (v23 & 0x100) == 0 || (v23 & 0x200) != 0 )
    goto LABEL_36;
  if ( !v22 )
  {
    if ( (unsigned int)xxxCallHandleMenuMessages(i, (__int64 *)a1, v141, a3, v144[0]) )
      goto LABEL_96;
    v21 = 256LL;
LABEL_36:
    v24 = (unsigned int)v141;
    goto LABEL_37;
  }
  v24 = (unsigned int)v141;
  if ( (unsigned int)(v141 - 512) <= 0xE || (unsigned int)(v141 - 256) <= 9 || (unsigned int)(v141 - 160) <= 0xD )
    goto LABEL_165;
LABEL_37:
  if ( (unsigned int)v24 <= 0x1E1 )
    goto LABEL_138;
  if ( (unsigned int)v24 > 0x2A3 )
  {
    if ( (_DWORD)v24 != 791 )
    {
      if ( (_DWORD)v24 == 792 )
      {
        xxxMenuDraw((HDC)a3);
        goto LABEL_305;
      }
      goto LABEL_164;
    }
    v80 = v144[0];
    if ( (v144[0] & 2) != 0 && (*(_DWORD *)(v19 + 124) & 3) != 0 )
    {
      if ( a3 && (v81 = (char *)(a1 + 5), (*((_BYTE *)a1[5] + 26) & 0x40) != 0) && (GreGetLayout((HDC)a3) & 1) == 0 )
      {
        HIDWORD(v141) = GreSetLayout(
                          a3,
                          (unsigned int)(*(_DWORD *)(*(_QWORD *)v81 + 96LL) - *(_DWORD *)(*(_QWORD *)v81 + 88LL)),
                          1LL);
      }
      else
      {
        v20 = 0;
        HIDWORD(v141) = 0;
        v81 = (char *)(a1 + 5);
      }
      xxxMNDrawFullNC((struct tagWND *)a1);
      if ( v20 )
        GreSetLayout(
          a3,
          (unsigned int)(*(_DWORD *)(*(_QWORD *)v81 + 96LL) - *(_DWORD *)(*(_QWORD *)v81 + 88LL)),
          HIDWORD(v141));
      GreGetDCPoint(a3, 8LL, &v146);
      GetDPIMetrics(v82);
      GreSetWindowOrg((HDC)a3);
      xxxDefWindowProc((struct tagWND *)a1, v141, (HWND)a3, v80 & 0xFFFFFFFFFFFFFFFDuLL);
      GreSetWindowOrg((HDC)a3);
      goto LABEL_305;
    }
    ValidItem = xxxDefWindowProc((struct tagWND *)a1, 0x317u, (HWND)a3, v144[0]);
    if ( !(unsigned int)MNIsUAHMenu(v19)
      || (v37 = *(_QWORD *)v140[0], !*(_QWORD *)(*(_QWORD *)v140[0] + 16LL))
      || !(unsigned int)xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v140[0] + 16LL), 149LL, v19, a3) )
    {
      v38 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
      if ( (_DWORD)v38 == -2147352576 )
        MNDrawEdge(v19, a3, (char *)a1[5] + 88, 0LL);
    }
    goto LABEL_56;
  }
  if ( (_DWORD)v24 == 675 )
  {
    *(_DWORD *)(i + 8) ^= ((unsigned __int16)*(_DWORD *)(i + 8) ^ (unsigned __int16)~(unsigned __int16)(*(_DWORD *)(i + 8) >> 1)) & 0x4000;
    **(_DWORD **)v140[0] &= ~0x100000u;
    MNSetTimerToAutoDismiss((struct tagMENUSTATE *)i, (struct tagWND *)a1);
    v21 = *(_QWORD *)v140[0];
    v24 = *(_QWORD *)(*(_QWORD *)i + 56LL);
    if ( *(_QWORD *)(*(_QWORD *)v140[0] + 16LL) == v24 )
      xxxMNSelectItem((__int64 **)v140, i, -1);
    goto LABEL_305;
  }
  if ( (unsigned int)v24 > 0x1ED )
  {
    v64 = v24 - 494;
    if ( !v64 )
    {
      xxxMNMouseMove((__int64 **)v140, i, v144[0]);
      goto LABEL_305;
    }
    v65 = v64 - 1;
    if ( !v65 )
    {
      v24 = *(unsigned int *)(*(_QWORD *)(v19 + 40) + 44LL);
      if ( a3 < v24 || a3 >= 0xFFFFFFFC )
        xxxMNButtonUp(v140, i, a3);
      goto LABEL_305;
    }
    v66 = (unsigned int)(v65 - 1);
    if ( !(_DWORD)v66 )
    {
      ThreadUnlock1(v66, 256LL, FadeInternal);
      v8 = (unsigned __int16)MNSetTimerToOpenHierarchy((__int64)v140);
      goto LABEL_136;
    }
    v67 = v66 - 1;
    if ( !v67 )
    {
      xxxMNDoubleClick(i, (__int64)v140, a3);
      goto LABEL_305;
    }
    v68 = v67 - 1;
    if ( !v68 )
    {
      xxxActivateWindowWithOptions(*(struct tagWND **)(*(_QWORD *)v140[0] + 16LL), 0LL, 0LL, 1);
      goto LABEL_305;
    }
    v24 = (unsigned int)(v68 - 1);
    if ( (_DWORD)v24 )
    {
      if ( (_DWORD)v24 != 1 )
        goto LABEL_164;
      ThreadUnlock1(v24, 256LL, FadeInternal);
      v9 = 0;
      if ( (*(_DWORD *)(i + 8) & 0x80u) == 0 )
        goto LABEL_136;
      if ( !*(_QWORD *)(*(_QWORD *)v140[0] + 8LL) )
        goto LABEL_136;
      LOBYTE(v69) = IsMFMWFPWindow(*(_QWORD *)(i + 64));
      if ( !v69 )
        goto LABEL_136;
      v71 = safe_cast_fnid_to_PMENUWND(v70);
      if ( !v71 || !*(_QWORD *)(v71 + 8) )
        goto LABEL_136;
      if ( (*(_DWORD *)(i + 8) & 0x100) == 0 )
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= ~0x100000u;
      ++*(_DWORD *)(i + 40);
      ThreadLockAlways(*(_QWORD *)(*(_QWORD *)v140[0] + 8LL), &v151);
      *(_DWORD *)(i + 8) |= 0x8000u;
      v72 = xxxSendMessage(*(struct tagWND **)(*(_QWORD *)v140[0] + 8LL), 0x123u);
      v75 = *(unsigned int *)(i + 8);
      LODWORD(v75) = v75 & 0xFFFF7FFF;
      *(_DWORD *)(i + 8) = v75;
      if ( v72 != 1 )
      {
        *(_DWORD *)(i + 8) = v75 | 0x2000;
        MNCheckButtonDownState(i);
        if ( (*(_DWORD *)(i + 8) & 0x100) == 0 )
          xxxMNSetCapture((__int64)v140, i);
        ThreadUnlock1(v78, v77, v79);
        xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1);
        goto LABEL_136;
      }
      ThreadUnlock1(v75, v73, v74);
      if ( (unsigned int)xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1) )
      {
LABEL_136:
        MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(v143);
        goto LABEL_137;
      }
    }
    goto LABEL_92;
  }
  if ( (_DWORD)v24 == 493 )
  {
    v24 = *(unsigned int *)(*(_QWORD *)(v19 + 40) + 44LL);
    if ( a3 < v24 || a3 >= 0xFFFFFFFC )
      xxxMNButtonDown(v140, i, a3, 1);
    goto LABEL_305;
  }
  v25 = v24 - 482;
  if ( v25 )
  {
    v26 = v25 - 1;
    if ( !v26 )
    {
      v31 = (__int64 *)xxxMNOpenHierarchy((__int64 **)v140, i);
      ThreadUnlock1(v45, v44, v46);
      if ( v31 != (__int64 *)-1LL )
        goto LABEL_52;
      goto LABEL_136;
    }
    v27 = v26 - 1;
    if ( !v27 )
    {
      xxxMNCloseHierarchy(*(_QWORD *)v140[0], i);
      goto LABEL_305;
    }
    v28 = v27 - 1;
    if ( !v28 )
    {
      v24 = *(unsigned int *)(*(_QWORD *)(v19 + 40) + 44LL);
      if ( a3 < v24 || a3 >= 0xFFFFFFFC )
      {
        v41 = (_QWORD *)xxxMNSelectItem((__int64 **)v140, i, a3);
        if ( v41 )
        {
          ThreadUnlock1(v24, v21, FadeInternal);
          v42 = v41[2];
          v43 = *(_DWORD *)(*v41 + 4LL);
          MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(v143);
          SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v140);
          return (unsigned __int16)v43 | (unsigned __int64)(v42 != 0 ? 0x10 : 0);
        }
      }
      goto LABEL_305;
    }
    v29 = v28 - 1;
    if ( !v29 )
    {
      xxxMNCancel(i, a3, LOWORD(v144[0]), 0LL);
      goto LABEL_305;
    }
    v30 = v29 - 1;
    if ( v30 )
    {
      v24 = (unsigned int)(v30 - 4);
      if ( (_DWORD)v24 )
      {
        if ( (_DWORD)v24 == 1 )
        {
          xxxPlayEventSound(5LL);
          xxxShowWindowEx((__int64)a1, BYTE1(*(_DWORD *)(i + 8)) & 1 | 4, 0);
          goto LABEL_305;
        }
LABEL_164:
        if ( v9 )
LABEL_165:
          ThreadUnlock1(v24, v21, FadeInternal);
LABEL_135:
        v8 = xxxDefWindowProc((struct tagWND *)a1, v141, (HWND)a3, v144[0]);
        goto LABEL_136;
      }
      v31 = (__int64 *)xxxMNFindWindowFromPoint((__int64 **)v140, (_DWORD *)a3, v144[0]);
      ThreadUnlock1(v33, v32, v34);
      LOBYTE(v35) = IsMFMWFPWindow((__int64)v31);
      if ( v35 )
      {
LABEL_52:
        if ( v31 )
          v8 = *v31;
        goto LABEL_136;
      }
      v8 = (__int64)v31;
      goto LABEL_136;
    }
    ValidItem = (int)MNFindNextValidItem(v19, 0xFFFFFFFFLL, 1LL, 1LL);
    xxxSendMessage((struct tagWND *)a1, 0x1E5u);
LABEL_56:
    ThreadUnlock1(v38, v37, v39);
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(v143);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v140);
    return ValidItem;
  }
  if ( *(_QWORD *)(*(_QWORD *)v140[0] + 8LL) )
  {
    ThreadLockAlways(*(_QWORD *)(*(_QWORD *)v140[0] + 8LL), &v151);
    v47 = *(_QWORD *)(*(_QWORD *)v140[0] + 8LL);
    SmartObjStackRefBase<tagMENU>::Init(v144, v19);
    v145 = 0LL;
    xxxMNCompute((unsigned int)v144, v47, (_DWORD)a1, 0, 0, 0, 0LL);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v144);
    ThreadUnlock1(v49, v48, v50);
  }
  v51 = _MonitorFromWindowInternal((struct tagWND *)a1, 1u, 0);
  v52 = *(_DWORD *)(v19 + 64);
  v142 = v51;
  SmartObjStackRefBase<tagMENU>::Init(&v147, v19);
  v148 = 0LL;
  v53 = MNCheckScroll((__int64 **)v140, (__int64 **)&v147, (__int64)v142);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v147);
  if ( a3 )
  {
    v57 = 0LL;
    v58 = 0LL;
    v59 = (8 * (_BYTE)a3) & 0x20 | 0x214;
    if ( (*((_BYTE *)a1[5] + 31) & 0x10) != 0 )
    {
      *(_OWORD *)v144 = 0LL;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(&v149, *(_QWORD *)v140[0]);
      v60 = v142;
      MNGetPopupBoundsRect((int ***)&v149, (__int64)v142, (struct tagRECT *)v144, 1);
      v61 = a1[5];
      v62 = *((_DWORD *)v61 + 23);
      LODWORD(v142) = *((_DWORD *)v61 + 22);
      HIDWORD(v142) = v62;
      BestPos = FindBestPos((int)v142, v62, (__int64)v144, 0, (__int64)v140, v60, (__int64)v142);
      v57 = (unsigned int)(__int16)BestPos;
      v58 = (unsigned int)SHIWORD(BestPos);
    }
    else
    {
      v59 |= 2u;
    }
    xxxSetWindowPos((struct tagWND *)a1, 0LL, v57, v58, v52 + 6, v53 + 6, v59);
  }
  ThreadUnlock1(v55, v54, v56);
  MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(v143);
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v140);
  return ((unsigned __int16)v53 << 16) | (unsigned __int16)v52;
}
