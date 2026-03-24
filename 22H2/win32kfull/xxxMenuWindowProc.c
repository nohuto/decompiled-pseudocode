/*
 * XREFs of xxxMenuWindowProc @ 0x1C023B5E0
 * Callers:
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E3710 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C0027EC8 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C0028248 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     _PostMessage @ 0x1C002DBA0 (_PostMessage.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0039AC8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C003AFFC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0042160 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     xxxMenuDraw @ 0x1C0043668 (xxxMenuDraw.c)
 *     GreGetLayout @ 0x1C0045F14 (GreGetLayout.c)
 *     xxxMNCompute @ 0x1C0047BA4 (xxxMNCompute.c)
 *     MNGetpItemIndex @ 0x1C00482D0 (MNGetpItemIndex.c)
 *     xxxDefWindowProc @ 0x1C00484E0 (xxxDefWindowProc.c)
 *     MNIsUAHMenu @ 0x1C0049030 (MNIsUAHMenu.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00491B4 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     PtInRect @ 0x1C004DE1C (PtInRect.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     IsPointerParentNotify @ 0x1C006B28C (IsPointerParentNotify.c)
 *     IsPointerInputMessageWithState @ 0x1C006B2B0 (IsPointerInputMessageWithState.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C007D7BC (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     xxxDWP_DoNCActivate @ 0x1C00DC844 (xxxDWP_DoNCActivate.c)
 *     GetDPIMetrics @ 0x1C00E0A9C (GetDPIMetrics.c)
 *     GetAppCompatFlags2 @ 0x1C00E0FC0 (GetAppCompatFlags2.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxSendUAHMenuMessage @ 0x1C0101FD0 (xxxSendUAHMenuMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104778 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     GreSetWindowOrg @ 0x1C010C2D0 (GreSetWindowOrg.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010F934 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C011E880 (xxxPlayEventSound.c)
 *     xxxValidateRect @ 0x1C0124198 (xxxValidateRect.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C01672B0 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     xxxValidateClassAndSize @ 0x1C0167A7C (xxxValidateClassAndSize.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01DF974 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E6B48 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     zzzShowFade @ 0x1C01E81C4 (zzzShowFade.c)
 *     zzzStartFade @ 0x1C01E822C (zzzStartFade.c)
 *     _SetTimer @ 0x1C01EACC8 (_SetTimer.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F0A48 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0221234 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocPopup @ 0x1C02213C8 (MNAllocPopup.c)
 *     MNCreateAnimationBitmap @ 0x1C0221450 (MNCreateAnimationBitmap.c)
 *     xxxMNEndMenuState @ 0x1C0221C40 (xxxMNEndMenuState.c)
 *     xxxUserModeCallback @ 0x1C02334E8 (xxxUserModeCallback.c)
 *     xxxEndMenuLoop @ 0x1C0233740 (xxxEndMenuLoop.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C0234F80 (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C02351A8 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C02353FC (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0235458 (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C023560C (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0235708 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0235BEC (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0235D70 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     IsMFMWFPWindow @ 0x1C0236498 (IsMFMWFPWindow.c)
 *     LockPopupMenu @ 0x1C023651C (LockPopupMenu.c)
 *     MNCheckButtonDownState @ 0x1C02365E4 (MNCheckButtonDownState.c)
 *     MNGetpItem @ 0x1C023663C (MNGetpItem.c)
 *     xxxCallHandleMenuMessages @ 0x1C0236AD0 (xxxCallHandleMenuMessages.c)
 *     xxxMNButtonDown @ 0x1C0236CBC (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C0236DBC (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C0236ED4 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C02372E4 (xxxMNChar.c)
 *     xxxMNCloseHierarchy @ 0x1C0237760 (xxxMNCloseHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C0237DB8 (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0238110 (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C02384D8 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C023913C (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C02394F8 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C023A5BC (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C023AEB4 (xxxMNSetCapture.c)
 *     FindBestPos @ 0x1C024A0F0 (FindBestPos.c)
 *     MNAnimate @ 0x1C024BE2C (MNAnimate.c)
 *     MNDrawEdge @ 0x1C024C258 (MNDrawEdge.c)
 *     MNEraseBackground @ 0x1C024C33C (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C024C484 (xxxMNDrawFullNC.c)
 *     MNFindNextValidItem @ 0x1C0250258 (MNFindNextValidItem.c)
 */

__int64 __fastcall xxxMenuWindowProc(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v8; // rsi
  int v9; // ecx
  int v10; // r8d
  struct _LIST_ENTRY *v11; // r9
  struct _LARGE_STRING *v12; // r9
  unsigned __int64 v13; // r10
  struct _LIST_ENTRY *ThreadPointerData; // rax
  __int64 v15; // r14
  __int64 v16; // r14
  __int64 v17; // rdx
  HDC i; // rdi
  unsigned __int64 v19; // rcx
  __int64 v20; // r13
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // r9
  int v23; // eax
  struct tagMENUWND *v24; // rdx
  __int64 v25; // rcx
  __int64 **v26; // rcx
  int v27; // eax
  unsigned __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r8d
  int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // edi
  unsigned int v36; // ebx
  __int64 TopWindow; // rax
  unsigned int v38; // eax
  __int64 *v39; // r14
  unsigned __int64 *v40; // rax
  unsigned __int64 *v41; // rbx
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // r15
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned int v48; // edx
  unsigned int v49; // r8d
  HDC FadeInternal; // r8
  int v51; // ecx
  int v52; // eax
  int v53; // eax
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rdx
  void *v57; // rax
  bool v58; // zf
  __int64 v59; // rax
  int v60; // r13d
  unsigned __int64 v61; // rdx
  __int64 v62; // r8
  struct tagWND *v63; // rcx
  __int64 DCEx; // rbx
  __int64 v65; // rdi
  int v66; // ebx
  __int64 v67; // rbx
  unsigned __int64 v68; // rbx
  __int64 v69; // rcx
  unsigned int ValidItem; // eax
  __int64 v71; // rbx
  __int64 v72; // rcx
  _QWORD *v73; // rbx
  __int64 v74; // rcx
  __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rcx
  struct tagMENUWND *v78; // rax
  int v79; // ebx
  __int64 v80; // rdi
  int v81; // edi
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  int v85; // r15d
  struct tagMENUWND *v86; // r14
  __int64 v87; // rax
  int v88; // edx
  int BestPos; // eax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rax
  struct _LARGE_STRING **v93; // r15
  __int64 v94; // rbx
  __int64 v95; // rax
  struct _LARGE_STRING *v96; // r9
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rcx
  unsigned __int64 v101; // rbx
  unsigned int v102; // r13d
  __int64 v103; // rcx
  __int64 DPIMetrics; // rax
  int v105; // [rsp+58h] [rbp-B0h]
  __int64 v106[2]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v107; // [rsp+70h] [rbp-98h]
  struct tagMENUWND *v108; // [rsp+78h] [rbp-90h]
  unsigned __int64 v109; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v110; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v111; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v112; // [rsp+90h] [rbp-78h] BYREF
  __int128 v113; // [rsp+98h] [rbp-70h] BYREF
  __int64 v114; // [rsp+A8h] [rbp-60h]
  __int64 v115; // [rsp+B0h] [rbp-58h] BYREF
  struct tagMENUSTATE *v116; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v117; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v118; // [rsp+D0h] [rbp-38h]
  __int128 v119; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v120; // [rsp+E8h] [rbp-20h]
  _QWORD v121[2]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v122[2]; // [rsp+108h] [rbp+0h] BYREF
  __int64 *v123[3]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v124[3]; // [rsp+130h] [rbp+28h] BYREF
  _QWORD v125[3]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v126[3]; // [rsp+160h] [rbp+58h] BYREF
  __int64 **v127[3]; // [rsp+178h] [rbp+70h] BYREF
  __int64 *v128[3]; // [rsp+190h] [rbp+88h] BYREF
  int **v129[2]; // [rsp+1A8h] [rbp+A0h] BYREF

  v107 = a4;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v106, 0LL);
  v8 = 0LL;
  v118 = 0LL;
  v114 = 0LL;
  v105 = 0;
  v109 = 0LL;
  v112 = 0LL;
  v117 = 0LL;
  v113 = 0LL;
  if ( !(unsigned int)xxxValidateClassAndSize((__int64)a1, a2, a3, a4, 668, 129, &v112) )
  {
    v8 = v112;
LABEL_15:
    v15 = v8;
    goto LABEL_301;
  }
  if ( *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    v10 = IsPointerInputMessageWithState(a2);
    if ( !v10 && !IsPointerParentNotify(v9, a3) )
    {
      v12 = (struct _LARGE_STRING *)a4;
      goto LABEL_14;
    }
    if ( v10 )
    {
      LOWORD(v13) = a3;
    }
    else
    {
      if ( !IsPointerParentNotify(a2, a3) )
      {
LABEL_12:
        ThreadPointerData = GetThreadPointerData(v11 + 68, v13, 0LL, 0LL);
        if ( !ThreadPointerData )
          goto LABEL_15;
        v12 = (struct _LARGE_STRING *)ThreadPointerData;
LABEL_14:
        v8 = xxxSendMessage((unsigned __int64)a1, a2, a3, v12);
        goto LABEL_15;
      }
      v13 = a3 >> 16;
    }
    if ( (_WORD)v13 == 1 )
      goto LABEL_15;
    goto LABEL_12;
  }
  v16 = *((_QWORD *)a1 + 35);
  v108 = (struct tagMENUWND *)v16;
  v17 = *(_QWORD *)(v16 + 8);
  *(_QWORD *)v16 = a1;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v106, v17);
  if ( *(_QWORD *)v106[0] )
  {
    for ( i = *(HDC *)(*(_QWORD *)(*(_QWORD *)v16 + 16LL) + 608LL); i; i = (HDC)*((_QWORD *)i + 6) )
    {
      if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(v16 + 8) + 64LL) )
        break;
    }
  }
  else
  {
    i = 0LL;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
    (MenuStateOwnerLockxxxUnlock *)&v116,
    (struct tagMENUSTATE *)i);
  v19 = v106[0];
  if ( *(_QWORD *)v106[0] )
  {
    v19 = *(_QWORD *)v106[0];
    v20 = *(_QWORD *)(*(_QWORD *)v106[0] + 40LL);
  }
  else
  {
    v20 = 0LL;
  }
  v15 = 1LL;
  if ( i && v20 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v117 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v117;
    *((_QWORD *)&v117 + 1) = v20;
    HMLockObject(v20);
    v22 = 1LL;
    v105 = 1;
    if ( !*(_QWORD *)(*(_QWORD *)v106[0] + 64LL)
      || (v23 = 1, **(_QWORD **)(*(_QWORD *)(*(_QWORD *)v108 + 16LL) + 608LL) == *(_QWORD *)(*(_QWORD *)v106[0] + 64LL)) )
    {
      v23 = 0;
    }
    v19 = *((unsigned int *)i + 2);
    if ( (v19 & 0x100) != 0 && (v19 & 0x200) == 0 )
    {
      if ( v23 )
      {
        if ( a2 - 512 <= 0xE || a2 - 256 <= 9 || a2 - 160 <= 0xD )
          goto LABEL_297;
      }
      else
      {
        if ( (unsigned int)xxxCallHandleMenuMessages((__int64)i, (__int64 *)a1, a2, a3, v107) )
        {
LABEL_315:
          ThreadUnlock1(v19);
          goto LABEL_316;
        }
        v22 = 1LL;
      }
    }
    goto LABEL_39;
  }
  switch ( a2 )
  {
    case 0x1E0u:
      if ( !*(_QWORD *)v106[0] )
        goto LABEL_316;
      break;
    case 0x81u:
      break;
    case 0x70u:
      v22 = 0LL;
LABEL_39:
      v24 = v108;
      goto LABEL_40;
    default:
      goto LABEL_298;
  }
  v24 = v108;
  v19 = *(_QWORD *)(*(_QWORD *)v108 + 40LL);
  if ( *(char *)(v19 + 19) < 0 )
    goto LABEL_316;
  v22 = 0LL;
LABEL_40:
  if ( a2 <= 0x1E1 )
  {
    if ( a2 == 481 )
    {
      if ( (_DWORD)v22 )
        v20 = ThreadUnlock1(v19);
      if ( v20 )
      {
        v15 = *(_QWORD *)v20;
        goto LABEL_299;
      }
      goto LABEL_316;
    }
    if ( a2 <= 0x81 )
    {
      if ( a2 == 129 )
      {
        if ( *((_QWORD *)v24 + 1) || *((_QWORD *)v24 + 2) )
        {
          v58 = (_DWORD)v22 == 0;
          goto LABEL_314;
        }
        v57 = MNAllocPopup(1, v24);
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v106, (__int64)v57);
        if ( *(_QWORD *)v106[0] )
        {
          *((_QWORD *)v108 + 1) = *(_QWORD *)v106[0];
          **(_DWORD **)v106[0] |= 0x40000000u;
          *(_DWORD *)(*(_QWORD *)v106[0] + 80LL) = -1;
          v121[1] = a1;
          v121[0] = *(_QWORD *)v106[0] + 16LL;
          HMAssignmentLock(v121);
LABEL_322:
          if ( v105 )
            ThreadUnlock1(v25);
          goto LABEL_299;
        }
        goto LABEL_313;
      }
      if ( a2 <= 0x18 )
      {
        switch ( a2 )
        {
          case 0x18u:
            if ( !a3 )
              xxxMNCancel((__int64)i, 0, 0, 0LL);
            goto LABEL_296;
          case 3u:
          case 5u:
            v19 = *(_QWORD *)v106[0];
            if ( !*(_QWORD *)(*(_QWORD *)v106[0] + 24LL) )
              goto LABEL_313;
            v39 = (__int64 *)MNGetpItem((__int64)v106, *(_DWORD *)(*(_QWORD *)v106[0] + 84LL));
            v40 = (unsigned __int64 *)safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v106[0] + 24LL));
            v41 = v40;
            if ( !v39 )
              goto LABEL_313;
            if ( !v40 )
              goto LABEL_313;
            v42 = v40[1];
            if ( !v42 )
              goto LABEL_313;
            v43 = *v40;
            if ( !*v40 )
              goto LABEL_313;
            v44 = *(_QWORD *)(v42 + 40);
            v125[2] = 0LL;
            v124[2] = 0LL;
            v111 = 0;
            v110 = 0;
            v45 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v124[0] = *(_QWORD *)(v45 + 416);
            *(_QWORD *)(v45 + 416) = v124;
            v124[1] = v43;
            HMLockObject(v43);
            v46 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v125[0] = *(_QWORD *)(v46 + 416);
            *(_QWORD *)(v46 + 416) = v125;
            v125[1] = v44;
            HMLockObject(v44);
            if ( !*(_DWORD *)(v44 + 64) )
              xxxSendMessage(*v41, 0x1E2u, 0LL, 0LL);
            if ( *(_QWORD *)(*(_QWORD *)v106[0] + 40LL)
              && (unsigned int)MNGetpItemIndex(*(_QWORD *)(*(_QWORD *)v106[0] + 40LL), (__int64)v39) != -1 )
            {
              xxxMNPositionHierarchy(
                (__int64 **)v106,
                v39,
                *(_DWORD *)(v44 + 64) + 6,
                *(_DWORD *)(v44 + 68) + 6,
                (int *)&v111,
                (LONG *)&v110,
                0LL);
            }
            xxxSetWindowPos((struct tagWND *)*v41, 0LL, v111, v110, 0, 0, 1029);
            ThreadUnlock1(v47);
            break;
          case 6u:
            v27 = *((_DWORD *)i + 2);
            if ( (v27 & 0x100) != 0 )
            {
              if ( (_WORD)a3 )
                goto LABEL_296;
              if ( (v27 & 0x200) != 0 )
                goto LABEL_296;
              if ( (**(_DWORD **)i & 0x80000) != 0 )
                goto LABEL_296;
              v107 = HMValidateHandleNoSecure(v107, 1);
              v28 = v107;
              v29 = safe_cast_fnid_to_PMENUWND(v107);
              if ( !v28 )
                goto LABEL_296;
              if ( v29 )
              {
                v30 = *(_QWORD *)(v29 + 8);
                if ( v30 )
                {
                  if ( *(_QWORD *)i == *(_QWORD *)(v30 + 64) )
                    goto LABEL_296;
                }
              }
              v31 = *((_DWORD *)i + 2);
              if ( (v31 & 0x10000) != 0 && gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
              {
                *((_DWORD *)i + 2) = v31 & 0xFFFEFFFF;
                PostMessage((int)a1, 498, 0, 0);
                goto LABEL_296;
              }
LABEL_74:
              v32 = (int)a1;
LABEL_75:
              PostMessage(v32, 499, 0, 0);
              goto LABEL_313;
            }
            if ( !(_WORD)a3 )
              goto LABEL_313;
            v120 = 0LL;
            v119 = 0LL;
            if ( *(_WORD *)(gptiCurrent + 632LL) >= 0x500u )
              goto LABEL_74;
            if ( gpqForegroundPrev
              && IsWindowActivateable(*(const struct tagWND **)(gpqForegroundPrev + 128LL))
              && (v33 = *(_QWORD *)(gpqForegroundPrev + 128LL),
                  v19 = *(_WORD *)(*(_QWORD *)(v33 + 40) + 42LL) & 0x2FFF,
                  (_DWORD)v19 != 668) )
            {
LABEL_81:
              a1 = (struct tagWND *)v33;
            }
            else
            {
              v35 = (int)a1;
              v36 = 0;
              do
              {
                TopWindow = FindNextTopWindow::NextTopWindow((__int64)a1, 0LL, 0);
                a1 = (struct tagWND *)TopWindow;
                if ( !TopWindow )
                  break;
                if ( IsWindowActivateable(*(const struct tagWND **)(TopWindow + 200)) )
                {
                  v33 = *((_QWORD *)a1 + 25);
                  v19 = *(_WORD *)(*(_QWORD *)(v33 + 40) + 42LL) & 0x2FFF;
                  if ( (_DWORD)v19 != 668 )
                    goto LABEL_81;
                }
                v38 = v36++;
              }
              while ( v38 < 0xFF );
              if ( v36 )
              {
                v32 = v35;
                goto LABEL_75;
              }
            }
            if ( !a1 )
              goto LABEL_313;
            *(_QWORD *)&v119 = *(_QWORD *)(gptiCurrent + 416LL);
            *(_QWORD *)(gptiCurrent + 416LL) = &v119;
            *((_QWORD *)&v119 + 1) = a1;
            HMLockObject(a1);
            v34 = *(_QWORD *)(gptiCurrent + 432LL);
            if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == v34 )
            {
              xxxActivateWindowWithOptions((__int64)a1, 0, 0, 1);
            }
            else if ( gpqForeground == v34 )
            {
              xxxSetForegroundWindowWithOptions((__int64)a1, 2LL, 0LL, 0LL);
            }
            break;
          case 0xFu:
            SmartObjStackRefBase<tagMENU>::Init(v123, v20);
            v123[2] = 0LL;
            xxxHandleMenuPainting(a1, v123);
            v26 = v123;
LABEL_62:
            SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v26);
            goto LABEL_313;
          default:
            if ( a2 == 20 && *(_QWORD *)(*(_QWORD *)(v20 + 40) + 24LL) )
            {
              MNEraseBackground(
                (HDC)a3,
                *(_DWORD *)(*((_QWORD *)a1 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 104LL),
                *(_DWORD *)(*((_QWORD *)a1 + 5) + 116LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 108LL));
              goto LABEL_322;
            }
LABEL_296:
            if ( v105 )
LABEL_297:
              ThreadUnlock1(v19);
LABEL_298:
            v15 = xxxDefWindowProc(a1, a2, a3, v107);
            goto LABEL_299;
        }
LABEL_149:
        ThreadUnlock1(v34);
        goto LABEL_313;
      }
      switch ( a2 )
      {
        case 0x1Cu:
          if ( ((_DWORD)i[2] & 0x100) == 0 || a1 != *(struct tagWND **)(*(_QWORD *)i + 56LL) )
            goto LABEL_313;
          if ( a3 )
          {
            PostMessage((int)a1, 498, 0, 0);
            *((_DWORD *)i + 2) = (_DWORD)i[2] & 0xFFFEFFFF | (*(_QWORD *)(gptiCurrent + 432LL) != gpqForeground
                                                            ? 0x10000
                                                            : 0);
          }
          v19 = *(_QWORD *)v106[0];
          if ( !*(_QWORD *)(*(_QWORD *)v106[0] + 8LL) )
            goto LABEL_313;
          v54 = *(_QWORD *)(*(_QWORD *)v106[0] + 8LL);
          v55 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v113 = *(_QWORD *)(v55 + 416);
          *(_QWORD *)(v55 + 416) = &v113;
          *((_QWORD *)&v113 + 1) = v54;
          HMLockObject(v54);
          if ( !a3 || (v56 = 1LL, ((_DWORD)i[2] & 0x10000) != 0) )
            v56 = 2LL;
          xxxDWP_DoNCActivate(*(_QWORD *)(*(_QWORD *)v106[0] + 8LL), v56, 1LL);
          goto LABEL_149;
        case 0x46u:
          if ( (*(_DWORD *)(v107 + 32) & 0x40) == 0 )
            goto LABEL_296;
          if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000002) == 0x80000002
            && (**(_DWORD **)v106[0] & 0x8000000) != 0
            && (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) != 1
            && (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) != 4
            && !CInputGlobals::WasLastInputJournalling(gpInputGlobals)
            && (GetAppCompatFlags2(0x400u) & 1) == 0 )
          {
            v48 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL);
            *((_DWORD *)i + 29) = v48;
            v49 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 100LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL);
            *((_DWORD *)i + 30) = v49;
            if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000200) != 0x80000200 )
            {
              if ( !(unsigned int)MNCreateAnimationBitmap(i, v48, v49) )
                break;
              *((_QWORD *)i + 12) = _GetDCEx(a1, 1LL, 65665LL);
              v51 = 0;
              v52 = *((_DWORD *)i + 2) ^ (*((_DWORD *)i + 2) ^ (**(_DWORD **)v106[0] >> 4)) & 0xF80000;
              *((_DWORD *)i + 2) = v52;
              if ( (v52 & 0x180000) == 0 )
                v51 = *((_DWORD *)i + 29);
              v58 = (v52 & 0x600000) == 0;
              *((_DWORD *)i + 27) = v51;
              v53 = 0;
              if ( v58 )
                v53 = *((_DWORD *)i + 30);
              FadeInternal = (HDC)*((_QWORD *)i + 17);
              *((_DWORD *)i + 28) = v53;
            }
            else
            {
              FadeInternal = CreateFadeInternal(a1, 0LL, 175, 17, 0);
              if ( !FadeInternal )
                break;
            }
            *(_DWORD *)(*(_QWORD *)(v20 + 40) + 40LL) |= 8u;
            xxxSendMessage((unsigned __int64)a1, 0x317u, (unsigned __int64)FadeInternal, (struct _LARGE_STRING *)0xE);
            *(_DWORD *)(*(_QWORD *)(v20 + 40) + 40LL) &= ~8u;
            v19 = gfade[12];
            if ( (v19 & 0x10) != 0 )
              zzzShowFade();
            goto LABEL_296;
          }
          break;
        case 0x47u:
          if ( (*(_DWORD *)(v107 + 32) & 0x40) == 0 )
            goto LABEL_296;
          v19 = *(_QWORD *)v106[0];
          if ( (**(_DWORD **)v106[0] & 0x8000000) == 0 )
            goto LABEL_296;
          if ( (gfade[12] & 0x10) != 0 )
          {
            zzzStartFade();
          }
          else
          {
            *((_DWORD *)i + 26) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            SetTimer((__int64)a1, 65531LL, 0xAu, 0LL, 0);
          }
          break;
        case 0x70u:
          if ( i && ((_DWORD)i[2] & 0x400) != 0 )
          {
            v115 = *(_QWORD *)a1;
            xxxUserModeCallback(0x65u, (__int64)&v115, 8u, v22);
          }
          xxxMNDestroyHandler(v108);
          goto LABEL_313;
        default:
          goto LABEL_296;
      }
      v19 = *(_QWORD *)v106[0];
      **(_DWORD **)v106[0] &= ~0x8000000u;
      goto LABEL_296;
    }
    switch ( a2 )
    {
      case 0x83u:
        v68 = v107;
        xxxDefWindowProc(a1, 131LL, a3, v107);
        if ( (*(_DWORD *)(v20 + 124) & 3) != 0 )
        {
          v19 = *(unsigned int *)(GetDPIMetrics(v19) + 28);
          *(_DWORD *)(v68 + 4) += v19;
          *(_DWORD *)(v68 + 12) -= v19;
        }
        goto LABEL_313;
      case 0x84u:
        if ( ((_DWORD)i[2] & 0x100) == 0 )
          goto LABEL_296;
        LODWORD(v109) = (__int16)v107;
        HIDWORD(v109) = SWORD1(v107);
        if ( (_DWORD)v22 )
          ThreadUnlock1(v107 >> 16);
        if ( PtInRect((_DWORD *)(*((_QWORD *)a1 + 5) + 88LL), v109) )
          goto LABEL_299;
        goto LABEL_316;
      case 0x85u:
        if ( (**(_DWORD **)v106[0] & 0x8000000) != 0 )
        {
          xxxValidateRect(a1, 0LL);
        }
        else
        {
          if ( (*(_DWORD *)(v20 + 124) & 3) != 0 )
          {
            if ( (unsigned int)MNIsUAHMenu(v20) )
            {
              v61 = 0LL;
              v62 = 65537LL;
              v63 = *(struct tagWND **)(*(_QWORD *)v106[0] + 16LL);
            }
            else
            {
              v62 = 328833LL;
              v61 = a3;
              v63 = a1;
            }
            DCEx = _GetDCEx(v63, v61, v62);
            xxxMNDrawFullNC(a1);
          }
          else
          {
            if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) != 0x80020000 )
            {
              v15 = xxxDefWindowProc(a1, 133LL, a3, v107);
              if ( (unsigned int)MNIsUAHMenu(v20) )
              {
                v25 = *(_QWORD *)v106[0];
                if ( *(_QWORD *)(*(_QWORD *)v106[0] + 16LL) )
                {
                  v67 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v106[0] + 16LL), 0LL, 65537LL);
                  xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v106[0] + 16LL), 149LL, (__int64 *)v20, v67);
                  _ReleaseDC(v67);
                }
              }
              goto LABEL_322;
            }
            if ( (unsigned int)MNIsUAHMenu(v20) )
            {
              v65 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v106[0] + 16LL), 0LL, 65537LL);
              v66 = xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v106[0] + 16LL), 149LL, (__int64 *)v20, v65);
              _ReleaseDC(v65);
              if ( v66 )
                goto LABEL_313;
            }
            DCEx = _GetDCEx(a1, a3, 328833LL);
            MNDrawEdge(v20, DCEx, *((_QWORD *)a1 + 5) + 88LL, 0LL);
          }
          _ReleaseDC(DCEx);
        }
LABEL_313:
        v58 = v105 == 0;
        goto LABEL_314;
    }
    if ( a2 != 256 )
    {
      v19 = 2LL;
      if ( a2 == 258 )
        goto LABEL_185;
      if ( a2 != 260 )
      {
        if ( a2 != 262 )
        {
          if ( a2 != 275 )
          {
            if ( a2 != 480 )
              goto LABEL_296;
            if ( !a3 )
              goto LABEL_313;
            v59 = ValidateHmenu(a3);
            if ( !v59 )
              goto LABEL_313;
            SmartObjStackRefBase<tagMENU>::Init(v126, v59);
            v126[2] = 0LL;
            LockPopupMenu((__int64)v106, (__int64 *)(*(_QWORD *)v106[0] + 40LL), (__int64)v126);
            v26 = (__int64 **)v126;
            goto LABEL_62;
          }
          if ( a3 != 65529 )
          {
            if ( a3 == 65531 )
            {
              if ( *((_QWORD *)i + 12) )
                MNAnimate(i, 1LL);
              goto LABEL_313;
            }
            if ( a3 == 65534 )
            {
              **(_DWORD **)v106[0] &= ~0x80u;
              xxxMNOpenHierarchy((__int64 **)v106, (__int64)i);
              goto LABEL_313;
            }
            if ( a3 != 0xFFFF )
            {
              if ( a3 - 4294967292u <= 1 )
              {
                if ( ((_DWORD)i[2] & 8) != 0 )
                  xxxMNDoScroll((__int64)v106, a3, 0);
                else
                  FindTimer((__int64)a1, (unsigned int)a3, 0, 1, 0LL);
              }
              goto LABEL_313;
            }
            **(_DWORD **)v106[0] &= ~0x80u;
            goto LABEL_176;
          }
          FindTimer((__int64)a1, 65529LL, 0, 1, 0LL);
          if ( ((_DWORD)i[2] & 0x1000) == 0 )
            goto LABEL_313;
          goto LABEL_181;
        }
LABEL_185:
        xxxMNChar(v106, (__int64)i, a3);
        goto LABEL_313;
      }
    }
    xxxMNKeyDown((__int64 **)v106, (__int64)i, a3);
    goto LABEL_313;
  }
  if ( a2 > 0x2A3 )
  {
    if ( a2 == 791 )
    {
      v101 = v107;
      if ( (v107 & 2) == 0 || (*(_DWORD *)(v20 + 124) & 3) == 0 )
      {
        v15 = xxxDefWindowProc(a1, 791LL, a3, v107);
        if ( !(unsigned int)MNIsUAHMenu(v20)
          || !*(_QWORD *)(*(_QWORD *)v106[0] + 16LL)
          || !(unsigned int)xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v106[0] + 16LL), 149LL, (__int64 *)v20, a3) )
        {
          v25 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
          if ( (_DWORD)v25 == -2147352576 )
            MNDrawEdge(v20, a3, *((_QWORD *)a1 + 5) + 88LL, 0LL);
        }
        goto LABEL_322;
      }
      if ( a3 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 && (GreGetLayout((HDC)a3) & 1) == 0 )
      {
        v102 = GreSetLayout(
                 a3,
                 (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL)),
                 1LL);
      }
      else
      {
        LODWORD(v15) = 0;
        v102 = 0;
      }
      xxxMNDrawFullNC(a1);
      if ( (_DWORD)v15 )
        GreSetLayout(
          a3,
          (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL)),
          v102);
      GreGetDCPoint(a3, 8LL, &v109);
      DPIMetrics = GetDPIMetrics(v103);
      GreSetWindowOrg((HDC)a3, v109 - 3, HIDWORD(v109) - *(_DWORD *)(DPIMetrics + 28) - 3);
      xxxDefWindowProc(a1, 791LL, a3, v101 & 0xFFFFFFFFFFFFFFFDuLL);
      GreSetWindowOrg((HDC)a3, v109, SHIDWORD(v109));
    }
    else
    {
      if ( a2 != 792 )
        goto LABEL_296;
      xxxMenuDraw((HDC)a3, v20, (__int64)a1);
    }
    goto LABEL_313;
  }
  if ( a2 == 675 )
  {
    *((_DWORD *)i + 2) ^= ((unsigned __int16)*((_DWORD *)i + 2) ^ (unsigned __int16)~(unsigned __int16)(*((_DWORD *)i + 2) >> 1)) & 0x4000;
    **(_DWORD **)v106[0] &= ~0x100000u;
    MNSetTimerToAutoDismiss((struct tagMENUSTATE *)i, a1);
    v19 = *(_QWORD *)(*(_QWORD *)i + 56LL);
    if ( *(_QWORD *)(*(_QWORD *)v106[0] + 16LL) == v19 )
      xxxMNSelectItem((__int64 **)v106, (__int64)i, -1);
    goto LABEL_313;
  }
  if ( a2 <= 0x1ED )
  {
    switch ( a2 )
    {
      case 0x1EDu:
        v19 = *(unsigned int *)(*(_QWORD *)(v20 + 40) + 44LL);
        if ( a3 < v19 || a3 >= 0xFFFFFFFC )
          xxxMNButtonDown(v106, (__int64)i, a3, 1);
        goto LABEL_313;
      case 0x1E2u:
        if ( *(_QWORD *)(*(_QWORD *)v106[0] + 8LL) )
        {
          v75 = *(_QWORD *)(*(_QWORD *)v106[0] + 8LL);
          v76 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v113 = *(_QWORD *)(v76 + 416);
          *(_QWORD *)(v76 + 416) = &v113;
          *((_QWORD *)&v113 + 1) = v75;
          HMLockObject(v75);
          SmartObjStackRefBase<tagMENU>::Init(v127, v20);
          v127[2] = 0LL;
          xxxMNCompute(v127, *(_QWORD *)(*(_QWORD *)v106[0] + 8LL), (__int64)a1, 0, 0, 0, 0LL);
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v127);
          ThreadUnlock1(v77);
        }
        v78 = _MonitorFromWindowInternal(a1, 1, 0);
        v79 = *(_DWORD *)(v20 + 64);
        v108 = v78;
        v80 = (__int64)v78;
        SmartObjStackRefBase<tagMENU>::Init(v128, v20);
        v128[2] = 0LL;
        v81 = MNCheckScroll((__int64 **)v106, v128, v80);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v128);
        if ( a3 )
        {
          v83 = 0LL;
          v84 = 0LL;
          v85 = (8 * (_BYTE)a3) & 0x20 | 0x214;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
          {
            *(_OWORD *)v122 = 0LL;
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v129, *(_QWORD *)v106[0]);
            v86 = v108;
            MNGetPopupBoundsRect(v129, (__int64)v108, v122, 1);
            v87 = *((_QWORD *)a1 + 5);
            v88 = *(_DWORD *)(v87 + 92);
            LODWORD(v112) = *(_DWORD *)(v87 + 88);
            HIDWORD(v112) = v88;
            BestPos = FindBestPos(v112, v88, v79, v81, (__int64)v122, 0, (__int64)v106, (__int64)v86, v112);
            v83 = (unsigned int)(__int16)BestPos;
            v84 = (unsigned int)SHIWORD(BestPos);
          }
          else
          {
            v85 |= 2u;
          }
          xxxSetWindowPos(a1, 0LL, v83, v84, v79 + 6, v81 + 6, v85);
        }
        if ( v105 )
          ThreadUnlock1(v82);
        v15 = (unsigned __int16)v79 | ((unsigned __int16)v81 << 16);
        goto LABEL_299;
      case 0x1E3u:
        v15 = xxxMNOpenHierarchy((__int64 **)v106, (__int64)i);
        if ( v105 )
          ThreadUnlock1(v74);
        if ( v15 == -1 )
          goto LABEL_316;
        break;
      case 0x1E4u:
LABEL_176:
        xxxMNCloseHierarchy(*(_QWORD *)v106[0], (__int64)i);
        goto LABEL_313;
      case 0x1E5u:
        v19 = *(unsigned int *)(*(_QWORD *)(v20 + 40) + 44LL);
        if ( a3 < v19 || a3 >= 0xFFFFFFFC )
        {
          v73 = (_QWORD *)xxxMNSelectItem((__int64 **)v106, (__int64)i, a3);
          if ( v73 )
          {
            if ( v105 )
              ThreadUnlock1(v19);
            v15 = *(unsigned __int16 *)(*v73 + 4LL) | (unsigned __int64)(v73[2] != 0LL ? 0x10 : 0);
            goto LABEL_299;
          }
        }
        goto LABEL_313;
      case 0x1E6u:
        xxxMNCancel((__int64)i, a3, (unsigned __int16)v107, 0LL);
        goto LABEL_313;
      case 0x1E7u:
        ValidItem = MNFindNextValidItem(v20, 0xFFFFFFFFLL, 1LL, 1LL);
        v71 = (int)ValidItem;
        xxxSendMessage((unsigned __int64)a1, 0x1E5u, ValidItem, 0LL);
        if ( v105 )
          ThreadUnlock1(v72);
        v15 = v71;
        goto LABEL_299;
      case 0x1EBu:
        v15 = xxxMNFindWindowFromPoint((__int64 **)v106, (_DWORD *)a3, v107);
        if ( v105 )
          ThreadUnlock1(v69);
        if ( !IsMFMWFPWindow(v15) )
          goto LABEL_299;
        break;
      case 0x1ECu:
        xxxPlayEventSound(5LL);
        xxxShowWindowEx(a1, BYTE1(*((_DWORD *)i + 2)) & 1 | 4, 0);
        goto LABEL_313;
      default:
        goto LABEL_296;
    }
    if ( v15 )
    {
      v15 = *(_QWORD *)v15;
      goto LABEL_299;
    }
    goto LABEL_316;
  }
  switch ( a2 )
  {
    case 0x1EEu:
      xxxMNMouseMove((__int64 **)v106, (__int64)i, v107);
      goto LABEL_313;
    case 0x1EFu:
      v19 = *(unsigned int *)(*(_QWORD *)(v20 + 40) + 44LL);
      if ( a3 < v19 || a3 >= 0xFFFFFFFC )
        xxxMNButtonUp(v106, (__int64)i, a3);
      goto LABEL_313;
    case 0x1F0u:
      if ( (_DWORD)v22 )
        ThreadUnlock1(v19);
      v15 = (unsigned __int16)MNSetTimerToOpenHierarchy((__int64)v106);
      goto LABEL_299;
    case 0x1F1u:
      xxxMNDoubleClick((__int64)i, (__int64)v106, a3);
      goto LABEL_313;
    case 0x1F2u:
      xxxActivateWindowWithOptions(*(_QWORD *)(*(_QWORD *)v106[0] + 16LL), 0, 0, 1);
      goto LABEL_313;
  }
  if ( a2 != 499 )
  {
    if ( a2 != 500 )
      goto LABEL_296;
    if ( (_DWORD)v22 )
      ThreadUnlock1(v19);
    v60 = 0;
    if ( (*((_DWORD *)i + 2) & 0x80u) == 0 )
      goto LABEL_316;
    if ( !*(_QWORD *)(*(_QWORD *)v106[0] + 8LL) )
      goto LABEL_316;
    if ( !IsMFMWFPWindow(*((_QWORD *)i + 8)) )
      goto LABEL_316;
    v91 = safe_cast_fnid_to_PMENUWND(v90);
    if ( !v91 )
      goto LABEL_316;
    v92 = *(_QWORD *)(v91 + 8);
    if ( !v92 )
      goto LABEL_316;
    v93 = *(struct _LARGE_STRING ***)(v92 + 40);
    if ( ((_DWORD)i[2] & 0x100) == 0 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x100000u;
    ++*((_DWORD *)i + 10);
    v94 = *(_QWORD *)(*(_QWORD *)v106[0] + 8LL);
    v95 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v113 = *(_QWORD *)(v95 + 416);
    *(_QWORD *)(v95 + 416) = &v113;
    *((_QWORD *)&v113 + 1) = v94;
    HMLockObject(v94);
    *((_DWORD *)i + 2) |= 0x8000u;
    v96 = 0LL;
    if ( v93 )
      v96 = *v93;
    v97 = xxxSendMessage(*(_QWORD *)(*(_QWORD *)v106[0] + 8LL), 0x123u, *((unsigned int *)i + 18), v96);
    v98 = *((unsigned int *)i + 2);
    LODWORD(v98) = v98 & 0xFFFF7FFF;
    *((_DWORD *)i + 2) = v98;
    if ( v97 != 1 )
    {
      *((_DWORD *)i + 2) = v98 | 0x2000;
      MNCheckButtonDownState((__int64)i);
      if ( ((_DWORD)i[2] & 0x100) == 0 )
        xxxMNSetCapture((__int64)v106, (__int64)i);
      ThreadUnlock1(v99);
      xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1);
      goto LABEL_316;
    }
    ThreadUnlock1(v98);
    if ( (unsigned int)xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1) )
      goto LABEL_316;
    goto LABEL_182;
  }
LABEL_181:
  v60 = v105;
LABEL_182:
  xxxEndMenuLoop((__int64)i, *(_QWORD *)i);
  if ( ((_DWORD)i[2] & 0x100) != 0 )
    xxxMNEndMenuState((__int64)i);
  v58 = v60 == 0;
LABEL_314:
  if ( !v58 )
    goto LABEL_315;
LABEL_316:
  v15 = 0LL;
LABEL_299:
  if ( v116 )
    xxxUnlockMenuStateInternal(v116, 0);
LABEL_301:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v106);
  return v15;
}
