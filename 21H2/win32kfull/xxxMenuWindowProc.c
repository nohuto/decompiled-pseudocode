/*
 * XREFs of xxxMenuWindowProc @ 0x1C0234200
 * Callers:
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C016B580 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0061074 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     MNGetpItemIndex @ 0x1C0068DA4 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0069238 (MNIsUAHMenu.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C007B464 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C007CC00 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxDefWindowProc @ 0x1C00A3F90 (xxxDefWindowProc.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     IsPointerParentNotify @ 0x1C00AC364 (IsPointerParentNotify.c)
 *     IsPointerInputMessageWithState @ 0x1C00AC37C (IsPointerInputMessageWithState.c)
 *     xxxDWP_DoNCActivate @ 0x1C00BABE4 (xxxDWP_DoNCActivate.c)
 *     xxxSendUAHMenuMessage @ 0x1C00BD2C0 (xxxSendUAHMenuMessage.c)
 *     xxxMenuDraw @ 0x1C00BD4E0 (xxxMenuDraw.c)
 *     GetDPIMetrics @ 0x1C00BE974 (GetDPIMetrics.c)
 *     xxxMNCompute @ 0x1C00BEB88 (xxxMNCompute.c)
 *     GreGetLayout @ 0x1C00C1400 (GreGetLayout.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C00CDD98 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C00CE218 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     FindTimer @ 0x1C01041A4 (FindTimer.c)
 *     xxxPlayEventSound @ 0x1C01088E0 (xxxPlayEventSound.c)
 *     xxxValidateRect @ 0x1C0115F9C (xxxValidateRect.c)
 *     GreSetWindowOrg @ 0x1C013F75C (GreSetWindowOrg.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C015A044 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     xxxValidateClassAndSize @ 0x1C015A2B0 (xxxValidateClassAndSize.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01DB7A8 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C01DB7D4 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E1818 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     zzzShowFade @ 0x1C01E2E4C (zzzShowFade.c)
 *     zzzStartFade @ 0x1C01E2EB4 (zzzStartFade.c)
 *     _SetTimer @ 0x1C01E60B0 (_SetTimer.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01EBB0C (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C021B934 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocPopup @ 0x1C021BAC0 (MNAllocPopup.c)
 *     MNCreateAnimationBitmap @ 0x1C021BB40 (MNCreateAnimationBitmap.c)
 *     xxxMNEndMenuState @ 0x1C021BF30 (xxxMNEndMenuState.c)
 *     xxxUserModeCallback @ 0x1C022D320 (xxxUserModeCallback.c)
 *     xxxEndMenuLoop @ 0x1C022D580 (xxxEndMenuLoop.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C022EBFC (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C022EE24 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C022F1A4 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C022F200 (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C022F3B0 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C022F478 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C022F878 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C022F9FC (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     IsMFMWFPWindow @ 0x1C0230060 (IsMFMWFPWindow.c)
 *     LockPopupMenu @ 0x1C02300E8 (LockPopupMenu.c)
 *     MNCheckButtonDownState @ 0x1C02301C4 (MNCheckButtonDownState.c)
 *     MNGetpItem @ 0x1C023021C (MNGetpItem.c)
 *     xxxCallHandleMenuMessages @ 0x1C02303C0 (xxxCallHandleMenuMessages.c)
 *     xxxMNButtonDown @ 0x1C02304EC (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C02305F0 (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C0230708 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C02309F8 (xxxMNChar.c)
 *     xxxMNCloseHierarchy @ 0x1C0230E00 (xxxMNCloseHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C0231350 (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0231654 (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C0231A20 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0232340 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C02325D0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C02334EC (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C0233B40 (xxxMNSetCapture.c)
 *     FindBestPos @ 0x1C0245C74 (FindBestPos.c)
 *     MNAnimate @ 0x1C0247828 (MNAnimate.c)
 *     MNDrawEdge @ 0x1C0247C54 (MNDrawEdge.c)
 *     MNEraseBackground @ 0x1C0247D38 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C0247E7C (xxxMNDrawFullNC.c)
 *     MNFindNextValidItem @ 0x1C024D7E8 (MNFindNextValidItem.c)
 */

__int64 __fastcall xxxMenuWindowProc(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rsi
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // r9
  unsigned __int64 v12; // r10
  __int64 v13; // r12
  __int64 v14; // rdx
  HDC i; // rdi
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r13
  int v19; // r12d
  __int64 FadeInternal; // r8
  __int64 ThreadWin32Thread; // rax
  int v22; // eax
  unsigned __int64 v23; // rcx
  __int64 ValidItem; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  struct tagMONITOR *v41; // rax
  int v42; // ebx
  __int64 v43; // rdi
  int v44; // edi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // r14d
  struct tagMONITOR *v50; // r12
  __int64 v51; // rax
  int v52; // edx
  int BestPos; // eax
  int v54; // r14d
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rbx
  unsigned int v67; // r13d
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 DPIMetrics; // rax
  struct tagMONITOR *v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  bool v75; // zf
  int v76; // eax
  __int64 v77; // r13
  __int64 v78; // rax
  __int64 v79; // rax
  int v80; // r8d
  int v82; // ecx
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // rcx
  int v86; // edi
  unsigned int v87; // ebx
  const struct tagWND **TopWindow; // rax
  unsigned int v89; // eax
  __int64 *v90; // rdi
  __int64 v91; // rax
  ULONG_PTR *v92; // rbx
  __int64 v93; // r14
  __int64 *v94; // r15
  __int64 v95; // r14
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // rax
  unsigned int v102; // edx
  unsigned int v103; // r8d
  unsigned int v104; // ecx
  int v105; // eax
  int v106; // eax
  __int64 v107; // rbx
  __int64 v108; // rax
  char v109; // dl
  PSLIST_ENTRY v110; // rax
  __int64 v111; // rax
  unsigned __int64 v112; // rdx
  __int64 v113; // r8
  struct tagWND *v114; // rcx
  __int64 DCEx; // rbx
  __int64 v116; // rdi
  int v117; // ebx
  __int64 v118; // rdi
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // rbx
  __int64 v123; // rbx
  __int64 v124; // rcx
  int v125; // ecx
  unsigned int v126; // [rsp+58h] [rbp-B0h]
  __int64 v127[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v128; // [rsp+70h] [rbp-98h] BYREF
  struct tagMONITOR *v129; // [rsp+78h] [rbp-90h] BYREF
  __int64 v130[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v131; // [rsp+98h] [rbp-70h]
  unsigned __int64 v132; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v133[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v134; // [rsp+C0h] [rbp-48h]
  __int128 v135; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v136; // [rsp+D8h] [rbp-30h]
  __int128 v137; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v138; // [rsp+F0h] [rbp-18h]
  struct tagMENUSTATE *v139; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v140; // [rsp+100h] [rbp-8h] BYREF
  __int64 v141; // [rsp+110h] [rbp+8h]

  v130[0] = a4;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v127, 0LL);
  v8 = 0LL;
  v141 = 0LL;
  v138 = 0LL;
  v126 = 0;
  v132 = 0LL;
  v129 = 0LL;
  v140 = 0LL;
  v137 = 0LL;
  if ( (unsigned int)xxxValidateClassAndSize(a1, a2, a3, a4, 668, 129, (__int64 *)&v129) )
  {
    if ( *((_QWORD *)a1 + 2) != gptiCurrent )
    {
      v10 = IsPointerInputMessageWithState(a2);
      if ( !v10 && !IsPointerParentNotify(v9, a3) )
      {
LABEL_6:
        v8 = xxxSendMessage((ULONG_PTR)a1);
        goto LABEL_168;
      }
      if ( v10 )
      {
        LOWORD(v12) = a3;
      }
      else
      {
        if ( !IsPointerParentNotify(a2, a3) )
        {
LABEL_12:
          if ( !GetThreadPointerData((struct _LIST_ENTRY *)(v11 + 1112), v12, 0LL, 0LL) )
            goto LABEL_168;
          goto LABEL_6;
        }
        v12 = a3 >> 16;
      }
      if ( (_WORD)v12 == 1 )
        goto LABEL_168;
      goto LABEL_12;
    }
    v13 = *((_QWORD *)a1 + 35);
    v129 = (struct tagMONITOR *)v13;
    v14 = *(_QWORD *)(v13 + 8);
    *(_QWORD *)v13 = a1;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v127, v14);
    if ( *(_QWORD *)v127[0] )
    {
      for ( i = *(HDC *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 608LL); i; i = (HDC)*((_QWORD *)i + 6) )
      {
        if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(v13 + 8) + 64LL) )
          break;
      }
    }
    else
    {
      i = 0LL;
    }
    MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
      (MenuStateOwnerLockxxxUnlock *)&v139,
      (struct tagMENUSTATE *)i);
    if ( *(_QWORD *)v127[0] )
      v18 = *(_QWORD *)(*(_QWORD *)v127[0] + 40LL);
    else
      v18 = 0LL;
    v19 = 1;
    FadeInternal = 256LL;
    if ( i && v18 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v140 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v140;
      *((_QWORD *)&v140 + 1) = v18;
      HMLockObject(v18);
      if ( !*(_QWORD *)(*(_QWORD *)v127[0] + 64LL)
        || (v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v129 + 16LL) + 608LL),
            v22 = 1,
            *(_QWORD *)v16 == *(_QWORD *)(*(_QWORD *)v127[0] + 64LL)) )
      {
        v22 = 0;
      }
      v23 = *((unsigned int *)i + 2);
      FadeInternal = 256LL;
      if ( (v23 & 0x100) != 0 && (v23 & 0x200) == 0 )
      {
        if ( v22 )
        {
          if ( a2 - 512 <= 0xE || a2 - 256 <= 9 || a2 - 160 <= 0xD )
            goto LABEL_165;
        }
        else
        {
          if ( (unsigned int)xxxCallHandleMenuMessages((__int64)i, (__int64 *)a1, a2, a3, v130[0]) )
          {
LABEL_151:
            ThreadUnlock1(v23, v16, FadeInternal);
            goto LABEL_167;
          }
          FadeInternal = 256LL;
        }
      }
      v16 = 1LL;
      v126 = 1;
      if ( a2 > 0x1E1 )
      {
        if ( a2 > 0x2A3 )
        {
          if ( a2 == 791 )
          {
            v66 = v130[0];
            if ( (v130[0] & 2) != 0 && (*(_DWORD *)(v18 + 124) & 3) != 0 )
            {
              if ( a3 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 && (GreGetLayout((HDC)a3) & 1) == 0 )
              {
                v67 = GreSetLayout(
                        a3,
                        (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL)),
                        1LL);
              }
              else
              {
                v19 = 0;
                v67 = 0;
              }
              xxxMNDrawFullNC(a1);
              if ( v19 )
                GreSetLayout(
                  a3,
                  (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL)),
                  v67);
              GreGetDCPoint(a3, 8LL, &v132);
              DPIMetrics = GetDPIMetrics(v69, v68);
              GreSetWindowOrg((HDC)a3, v132 - 3, HIDWORD(v132) - *(_DWORD *)(DPIMetrics + 28) - 3);
              xxxDefWindowProc(a1, 0x317u, a3, v66 & 0xFFFFFFFFFFFFFFFDuLL);
              GreSetWindowOrg((HDC)a3, v132, SHIDWORD(v132));
              goto LABEL_151;
            }
            ValidItem = xxxDefWindowProc(a1, 0x317u, a3, v130[0]);
            if ( !(unsigned int)MNIsUAHMenu(v18)
              || (v28 = *(_QWORD *)v127[0], !*(_QWORD *)(*(_QWORD *)v127[0] + 16LL))
              || !(unsigned int)xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v127[0] + 16LL), 149LL, v18, a3) )
            {
              v29 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
              if ( (_DWORD)v29 == -2147352576 )
                MNDrawEdge(v18, a3, *((_QWORD *)a1 + 5) + 88LL, 0LL);
            }
            goto LABEL_55;
          }
          if ( a2 == 792 )
          {
            xxxMenuDraw((HDC)a3, v18, a1);
            goto LABEL_151;
          }
          goto LABEL_165;
        }
        if ( a2 == 675 )
        {
          *((_DWORD *)i + 2) ^= ((unsigned __int16)*((_DWORD *)i + 2) ^ (unsigned __int16)~(unsigned __int16)(*((_DWORD *)i + 2) >> 1)) & 0x4000;
          **(_DWORD **)v127[0] &= ~0x100000u;
          MNSetTimerToAutoDismiss((struct tagMENUSTATE *)i, a1);
          v16 = *(_QWORD *)v127[0];
          v23 = *(_QWORD *)(*(_QWORD *)i + 56LL);
          if ( *(_QWORD *)(*(_QWORD *)v127[0] + 16LL) == v23 )
            xxxMNSelectItem((__int64 **)v127, (__int64)i, -1);
          goto LABEL_151;
        }
        if ( a2 <= 0x1ED )
        {
          switch ( a2 )
          {
            case 0x1EDu:
              v23 = *(unsigned int *)(*(_QWORD *)(v18 + 40) + 44LL);
              if ( a3 < v23 || a3 >= 0xFFFFFFFC )
                xxxMNButtonDown(v127, (__int64)i, a3, 1);
              goto LABEL_151;
            case 0x1E2u:
              if ( *(_QWORD *)(*(_QWORD *)v127[0] + 8LL) )
              {
                v35 = *(_QWORD *)(*(_QWORD *)v127[0] + 8LL);
                v36 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                *(_QWORD *)&v137 = *(_QWORD *)(v36 + 416);
                *(_QWORD *)(v36 + 416) = &v137;
                *((_QWORD *)&v137 + 1) = v35;
                HMLockObject(v35);
                v37 = *(_QWORD *)(*(_QWORD *)v127[0] + 8LL);
                SmartObjStackRefBase<tagMENU>::Init(v130, v18);
                v131 = 0LL;
                xxxMNCompute((__int64 **)v130, v37, (__int64)a1, 0, 0, 0, 0LL);
                SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v130);
                ThreadUnlock1(v39, v38, v40);
              }
              v41 = _MonitorFromWindowInternal(a1, 1, 0);
              v42 = *(_DWORD *)(v18 + 64);
              v129 = v41;
              v43 = (__int64)v41;
              SmartObjStackRefBase<tagMENU>::Init(v133, v18);
              v134 = 0LL;
              v44 = MNCheckScroll((__int64 **)v127, v133, v43);
              SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v133);
              if ( a3 )
              {
                v48 = 0LL;
                v49 = (8 * (_BYTE)a3) & 0x20 | 0x214;
                if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
                {
                  *(_OWORD *)v130 = 0LL;
                  SmartObjStackRefBase<tagPOPUPMENU>::Init(&v135, *(_QWORD *)v127[0]);
                  v50 = v129;
                  MNGetPopupBoundsRect((int ***)&v135, (__int64)v129, (struct tagRECT *)v130, 1);
                  v51 = *((_QWORD *)a1 + 5);
                  v52 = *(_DWORD *)(v51 + 92);
                  LODWORD(v129) = *(_DWORD *)(v51 + 88);
                  HIDWORD(v129) = v52;
                  BestPos = FindBestPos((int)v129, v52, (__int64)v130, 0, (__int64)v127, v50, (__int64)v129);
                  LODWORD(v8) = (__int16)BestPos;
                  v48 = (unsigned int)SHIWORD(BestPos);
                }
                else
                {
                  v49 |= 2u;
                }
                xxxSetWindowPos(a1, 0LL, (unsigned int)v8, v48, v42 + 6, v44 + 6, v49);
              }
              ThreadUnlock1(v46, v45, v47);
              v8 = (unsigned __int16)v42 | ((unsigned __int16)v44 << 16);
              break;
            case 0x1E3u:
              ValidItem = xxxMNOpenHierarchy((__int64 **)v127, (__int64)i);
              ThreadUnlock1(v33, v32, v34);
              if ( ValidItem != -1 )
                goto LABEL_52;
              break;
            case 0x1E4u:
              xxxMNCloseHierarchy(*(_QWORD *)v127[0], (__int64)i);
              goto LABEL_151;
            case 0x1E5u:
              v23 = *(unsigned int *)(*(_QWORD *)(v18 + 40) + 44LL);
              if ( a3 >= v23 && a3 < 0xFFFFFFFC )
                goto LABEL_151;
              v31 = (_QWORD *)xxxMNSelectItem((__int64 **)v127, (__int64)i, a3);
              if ( !v31 )
                goto LABEL_151;
              ThreadUnlock1(v23, v16, FadeInternal);
              v8 = *(unsigned __int16 *)(*v31 + 4LL) | (unsigned __int64)(v31[2] != 0LL ? 0x10 : 0);
              break;
            case 0x1E6u:
              xxxMNCancel((__int64)i, a3, LOWORD(v130[0]), 0LL);
              goto LABEL_151;
            case 0x1E7u:
              ValidItem = (int)MNFindNextValidItem(v18, 0xFFFFFFFFLL, 1LL, 1LL);
              xxxSendMessage((ULONG_PTR)a1);
LABEL_55:
              ThreadUnlock1(v29, v28, v30);
LABEL_56:
              v8 = ValidItem;
              break;
            case 0x1EBu:
              ValidItem = xxxMNFindWindowFromPoint((__int64 **)v127, (_DWORD *)a3, v130[0]);
              ThreadUnlock1(v26, v25, v27);
              if ( IsMFMWFPWindow(ValidItem) )
              {
LABEL_52:
                if ( ValidItem )
                  v8 = *(_QWORD *)ValidItem;
                break;
              }
              goto LABEL_56;
            case 0x1ECu:
              xxxPlayEventSound(5LL);
              xxxShowWindowEx((ULONG_PTR)a1, BYTE1(*((_DWORD *)i + 2)) & 1 | 4, 0);
              goto LABEL_151;
            default:
              goto LABEL_165;
          }
LABEL_167:
          MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(&v139);
          goto LABEL_168;
        }
        switch ( a2 )
        {
          case 0x1EEu:
            xxxMNMouseMove((__int64 **)v127, (__int64)i, v130[0]);
            goto LABEL_151;
          case 0x1EFu:
            v23 = *(unsigned int *)(*(_QWORD *)(v18 + 40) + 44LL);
            if ( a3 < v23 || a3 >= 0xFFFFFFFC )
              xxxMNButtonUp(v127, (__int64)i, a3);
            goto LABEL_151;
          case 0x1F0u:
            ThreadUnlock1(v23, 1LL, 256LL);
            v8 = (unsigned __int16)MNSetTimerToOpenHierarchy((__int64)v127);
            goto LABEL_167;
          case 0x1F1u:
            xxxMNDoubleClick((__int64)i, (__int64)v127, a3);
            goto LABEL_151;
          case 0x1F2u:
            xxxActivateWindowWithOptions(*(const struct tagWND **)(*(_QWORD *)v127[0] + 16LL), 0LL, 0LL, 1);
            goto LABEL_151;
        }
        if ( a2 != 499 )
        {
          if ( a2 == 500 )
          {
            ThreadUnlock1(v23, 1LL, 256LL);
            v54 = 0;
            if ( (*((_DWORD *)i + 2) & 0x80u) == 0 )
              goto LABEL_167;
            if ( !*(_QWORD *)(*(_QWORD *)v127[0] + 8LL) )
              goto LABEL_167;
            if ( !IsMFMWFPWindow(*((_QWORD *)i + 8)) )
              goto LABEL_167;
            v56 = safe_cast_fnid_to_PMENUWND(v55);
            if ( !v56 || !*(_QWORD *)(v56 + 8) )
              goto LABEL_167;
            if ( ((_DWORD)i[2] & 0x100) == 0 )
              *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x100000u;
            ++*((_DWORD *)i + 10);
            v57 = *(_QWORD *)(*(_QWORD *)v127[0] + 8LL);
            v58 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)&v137 = *(_QWORD *)(v58 + 416);
            *(_QWORD *)(v58 + 416) = &v137;
            *((_QWORD *)&v137 + 1) = v57;
            HMLockObject(v57);
            *((_DWORD *)i + 2) |= 0x8000u;
            v59 = xxxSendMessage(*(_QWORD *)(*(_QWORD *)v127[0] + 8LL));
            v62 = *((unsigned int *)i + 2);
            LODWORD(v62) = v62 & 0xFFFF7FFF;
            *((_DWORD *)i + 2) = v62;
            if ( v59 != 1 )
            {
              *((_DWORD *)i + 2) = v62 | 0x2000;
              MNCheckButtonDownState((__int64)i);
              if ( ((_DWORD)i[2] & 0x100) == 0 )
                xxxMNSetCapture((__int64)v127, (__int64)i);
              ThreadUnlock1(v64, v63, v65);
              xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1);
              goto LABEL_167;
            }
            ThreadUnlock1(v62, v60, v61);
            if ( (unsigned int)xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1) )
              goto LABEL_167;
            goto LABEL_279;
          }
LABEL_165:
          ThreadUnlock1(v23, v16, FadeInternal);
          goto LABEL_166;
        }
        v54 = 1;
LABEL_279:
        xxxEndMenuLoop((__int64)i, *(_QWORD *)i);
        if ( ((_DWORD)i[2] & 0x100) != 0 )
          xxxMNEndMenuState((__int64)i);
        v75 = v54 == 0;
LABEL_150:
        if ( !v75 )
          goto LABEL_151;
        goto LABEL_167;
      }
    }
    else
    {
      if ( a2 == 480 )
      {
        if ( !*(_QWORD *)v127[0] || *(char *)(*(_QWORD *)(*(_QWORD *)v129 + 40LL) + 19LL) < 0 )
          goto LABEL_167;
        goto LABEL_262;
      }
      if ( a2 == 129 )
      {
        v71 = v129;
        v23 = *(_QWORD *)(*(_QWORD *)v129 + 40LL);
        if ( *(char *)(v23 + 19) < 0 )
          goto LABEL_167;
        v16 = 0LL;
        goto LABEL_248;
      }
      if ( a2 != 112 )
        goto LABEL_166;
      v16 = 0LL;
    }
    LODWORD(v128) = v16;
    v23 = (unsigned int)v16;
    if ( a2 == 481 )
    {
      if ( (_DWORD)v16 )
        v18 = ThreadUnlock1((unsigned int)v16, v16, 256LL);
      if ( v18 )
        v8 = *(_QWORD *)v18;
      goto LABEL_167;
    }
    if ( a2 <= 0x81 )
    {
      if ( a2 != 129 )
      {
        if ( a2 <= 0x18 )
        {
          switch ( a2 )
          {
            case 0x18u:
              if ( !a3 )
                xxxMNCancel((__int64)i, 0, 0, 0LL);
              goto LABEL_163;
            case 3u:
            case 5u:
              if ( !*(_QWORD *)(*(_QWORD *)v127[0] + 24LL) )
                goto LABEL_148;
              v90 = (__int64 *)MNGetpItem((__int64)v127, *(_DWORD *)(*(_QWORD *)v127[0] + 84LL));
              v91 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v127[0] + 24LL));
              v92 = (ULONG_PTR *)v91;
              if ( !v90 )
                goto LABEL_148;
              if ( !v91 )
                goto LABEL_148;
              v93 = *(_QWORD *)(v91 + 8);
              if ( !v93 )
                goto LABEL_148;
              v94 = *(__int64 **)v91;
              if ( !*(_QWORD *)v91 )
                goto LABEL_148;
              v95 = *(_QWORD *)(v93 + 40);
              v136 = 0LL;
              v134 = 0LL;
              LODWORD(v130[0]) = 0;
              LODWORD(v128) = 0;
              v96 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              v133[0] = *(__int64 **)(v96 + 416);
              *(_QWORD *)(v96 + 416) = v133;
              v133[1] = v94;
              HMLockObject(v94);
              v97 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)&v135 = *(_QWORD *)(v97 + 416);
              *(_QWORD *)(v97 + 416) = &v135;
              *((_QWORD *)&v135 + 1) = v95;
              HMLockObject(v95);
              if ( !*(_DWORD *)(v95 + 64) )
                xxxSendMessage(*v92);
              if ( *(_QWORD *)(*(_QWORD *)v127[0] + 40LL)
                && (unsigned int)MNGetpItemIndex(*(_QWORD *)(*(_QWORD *)v127[0] + 40LL), (__int64)v90) != -1 )
              {
                xxxMNPositionHierarchy(
                  (__int64 **)v127,
                  v90,
                  *(_DWORD *)(v95 + 64) + 6,
                  *(_DWORD *)(v95 + 68) + 6,
                  (LONG *)v130,
                  (LONG *)&v128,
                  0LL);
              }
              xxxSetWindowPos((struct tagWND *)*v92, 0LL, LODWORD(v130[0]), (unsigned int)v128, 0, 0, 1029);
              ThreadUnlock1(v99, v98, v100);
              break;
            case 6u:
              v76 = *((_DWORD *)i + 2);
              if ( (v76 & 0x100) != 0 )
              {
                if ( (_WORD)a3 )
                  goto LABEL_163;
                if ( (v76 & 0x200) != 0 )
                  goto LABEL_163;
                if ( (**(_DWORD **)i & 0x80000) != 0 )
                  goto LABEL_163;
                v130[0] = HMValidateHandleNoSecure(v130[0], 1);
                v77 = v130[0];
                v78 = safe_cast_fnid_to_PMENUWND(v130[0]);
                if ( !v77 )
                  goto LABEL_163;
                if ( v78 )
                {
                  v79 = *(_QWORD *)(v78 + 8);
                  if ( v79 )
                  {
                    if ( *(_QWORD *)i == *(_QWORD *)(v79 + 64) )
                      goto LABEL_163;
                  }
                }
                v80 = *((_DWORD *)i + 2);
                if ( (v80 & 0x10000) != 0 && gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
                {
                  *((_DWORD *)i + 2) = v80 & 0xFFFEFFFF;
                  PostMessage((int)a1, 498, 0, 0);
LABEL_163:
                  v23 = v126;
LABEL_164:
                  if ( (_DWORD)v23 )
                    goto LABEL_165;
LABEL_166:
                  v8 = xxxDefWindowProc(a1, a2, a3, v130[0]);
                  goto LABEL_167;
                }
                goto LABEL_169;
              }
              if ( !(_WORD)a3 )
                goto LABEL_148;
              v136 = 0LL;
              v135 = 0LL;
              if ( *(_WORD *)(gptiCurrent + 632LL) >= 0x500u )
              {
LABEL_169:
                v82 = (int)a1;
LABEL_170:
                PostMessage(v82, 499, 0, 0);
                goto LABEL_148;
              }
              if ( gpqForegroundPrev
                && IsWindowActivateable(*(const struct tagWND **)(gpqForegroundPrev + 128LL))
                && (v16 = *(_QWORD *)(gpqForegroundPrev + 128LL),
                    (*(_WORD *)(*(_QWORD *)(v16 + 40) + 42LL) & 0x2FFF) != 0x29C) )
              {
LABEL_176:
                a1 = (struct tagWND *)v16;
              }
              else
              {
                v86 = (int)a1;
                v87 = 0;
                do
                {
                  TopWindow = (const struct tagWND **)FindNextTopWindow::NextTopWindow((__int64)a1, 0LL, 0);
                  a1 = (struct tagWND *)TopWindow;
                  if ( !TopWindow )
                    break;
                  if ( IsWindowActivateable(TopWindow[25]) )
                  {
                    v16 = *((_QWORD *)a1 + 25);
                    if ( (*(_WORD *)(*(_QWORD *)(v16 + 40) + 42LL) & 0x2FFF) != 0x29C )
                      goto LABEL_176;
                  }
                  v89 = v87++;
                }
                while ( v89 < 0xFF );
                if ( v87 )
                {
                  v82 = v86;
                  goto LABEL_170;
                }
              }
              if ( !a1 )
                goto LABEL_148;
              *(_QWORD *)&v135 = *(_QWORD *)(gptiCurrent + 416LL);
              *(_QWORD *)(gptiCurrent + 416LL) = &v135;
              *((_QWORD *)&v135 + 1) = a1;
              HMLockObject(a1);
              v85 = *(_QWORD *)(gptiCurrent + 432LL);
              if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == v85 )
              {
                xxxActivateWindowWithOptions(a1, 0LL, 0LL, 1);
              }
              else if ( gpqForeground == v85 )
              {
                xxxSetForegroundWindowWithOptions(a1, 2LL, 0LL, 0);
              }
              break;
            case 0xFu:
              SmartObjStackRefBase<tagMENU>::Init(v133, v18);
              v134 = 0LL;
              xxxHandleMenuPainting(a1, v133);
LABEL_147:
              SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v133);
LABEL_148:
              v23 = v126;
LABEL_149:
              v75 = (_DWORD)v23 == 0;
              goto LABEL_150;
            default:
              if ( a2 == 20 && *(_QWORD *)(*(_QWORD *)(v18 + 40) + 24LL) )
              {
                MNEraseBackground(
                  (HDC)a3,
                  *(_DWORD *)(*((_QWORD *)a1 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 104LL),
                  *(_DWORD *)(*((_QWORD *)a1 + 5) + 116LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 108LL));
                goto LABEL_144;
              }
              goto LABEL_163;
          }
LABEL_189:
          ThreadUnlock1(v85, v83, v84);
          goto LABEL_148;
        }
        if ( a2 == 28 )
        {
          if ( ((_DWORD)i[2] & 0x100) == 0 || a1 != *(struct tagWND **)(*(_QWORD *)i + 56LL) )
            goto LABEL_148;
          if ( a3 )
          {
            PostMessage((int)a1, 498, 0, 0);
            v16 = *(_QWORD *)(gptiCurrent + 432LL) - gpqForeground;
            *((_DWORD *)i + 2) = (_DWORD)i[2] & 0xFFFEFFFF | (*(_QWORD *)(gptiCurrent + 432LL) != gpqForeground
                                                            ? 0x10000
                                                            : 0);
          }
          if ( !*(_QWORD *)(*(_QWORD *)v127[0] + 8LL) )
            goto LABEL_148;
          v107 = *(_QWORD *)(*(_QWORD *)v127[0] + 8LL);
          v108 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v137 = *(_QWORD *)(v108 + 416);
          *(_QWORD *)(v108 + 416) = &v137;
          *((_QWORD *)&v137 + 1) = v107;
          HMLockObject(v107);
          if ( !a3 || (v109 = 1, ((_DWORD)i[2] & 0x10000) != 0) )
            v109 = 2;
          xxxDWP_DoNCActivate(*(struct tagWND **)(*(_QWORD *)v127[0] + 8LL), v109, 1LL);
          goto LABEL_189;
        }
        if ( a2 != 70 )
        {
          if ( a2 != 71 )
          {
            if ( a2 != 112 )
              goto LABEL_163;
            if ( i && ((_DWORD)i[2] & 0x400) != 0 )
            {
              v130[0] = *(_QWORD *)a1;
              xxxUserModeCallback(101LL, (__int64)v130, 8LL, v17);
            }
            xxxMNDestroyHandler(v129);
LABEL_211:
            v75 = v126 == 0;
            goto LABEL_150;
          }
          if ( (*(_DWORD *)(v130[0] + 32) & 0x40) == 0 || (**(_DWORD **)v127[0] & 0x8000000) == 0 )
            goto LABEL_163;
          if ( (gfade[6] & 0x10) != 0 )
          {
            zzzStartFade();
          }
          else
          {
            *((_DWORD *)i + 26) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            SetTimer((unsigned __int64)a1, 65531LL, 0xAu, 0LL, 0);
          }
LABEL_217:
          **(_DWORD **)v127[0] &= ~0x8000000u;
          goto LABEL_163;
        }
        if ( (*(_DWORD *)(v130[0] + 32) & 0x40) == 0 )
          goto LABEL_163;
        if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000002) != 0x80000002 )
          goto LABEL_217;
        if ( (**(_DWORD **)v127[0] & 0x8000000) == 0 )
          goto LABEL_217;
        if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1 )
          goto LABEL_217;
        if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 4 )
          goto LABEL_217;
        if ( CInputGlobals::WasLastInputJournalling(gpInputGlobals) )
          goto LABEL_217;
        v101 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        if ( *(_DWORD *)(v101 + 632) <= 0x400u && (*(_DWORD *)(v101 + 648) & 1) != 0 )
          goto LABEL_217;
        v102 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL);
        *((_DWORD *)i + 29) = v102;
        v103 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 100LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL);
        *((_DWORD *)i + 30) = v103;
        if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000200) != 0x80000200 )
        {
          if ( !(unsigned int)MNCreateAnimationBitmap(i, v102, v103) )
            goto LABEL_217;
          *((_QWORD *)i + 12) = _GetDCEx(a1, 1LL, 65665LL);
          v104 = (**(_DWORD **)v127[0] >> 4) & 0xF80000 | (_DWORD)i[2] & 0xFF07FFFF;
          v105 = 0;
          *((_DWORD *)i + 2) = v104;
          if ( (v104 & 0x180000) == 0 )
            v105 = *((_DWORD *)i + 29);
          *((_DWORD *)i + 27) = v105;
          v106 = 0;
          if ( (v104 & 0x600000) == 0 )
            v106 = *((_DWORD *)i + 30);
          *((_DWORD *)i + 28) = v106;
        }
        else
        {
          FadeInternal = (__int64)CreateFadeInternal(a1, 0LL, 175LL, 17LL, 0);
          if ( !FadeInternal )
            goto LABEL_217;
        }
        *(_DWORD *)(*(_QWORD *)(v18 + 40) + 40LL) |= 8u;
        xxxSendMessage((ULONG_PTR)a1);
        *(_DWORD *)(*(_QWORD *)(v18 + 40) + 40LL) &= ~8u;
        if ( (gfade[6] & 0x10) != 0 )
          zzzShowFade();
        goto LABEL_163;
      }
      v71 = v129;
LABEL_248:
      if ( *((_QWORD *)v71 + 1) || *((_QWORD *)v71 + 2) )
      {
        v75 = (_DWORD)v16 == 0;
        goto LABEL_150;
      }
      v110 = MNAllocPopup(1);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v127, (__int64)v110);
      if ( *(_QWORD *)v127[0] )
      {
        *((_QWORD *)v71 + 1) = *(_QWORD *)v127[0];
        **(_DWORD **)v127[0] |= 0x40000000u;
        *(_DWORD *)(*(_QWORD *)v127[0] + 80LL) = -1;
        v130[1] = (__int64)a1;
        v130[0] = *(_QWORD *)v127[0] + 16LL;
        HMAssignmentLock(v130, 0LL);
LABEL_144:
        if ( v126 )
          ThreadUnlock1(v73, v72, v74);
LABEL_308:
        v8 = 1LL;
        goto LABEL_167;
      }
      goto LABEL_211;
    }
    v126 = v16;
    v16 = 131LL;
    switch ( a2 )
    {
      case 0x83u:
        v123 = v130[0];
        xxxDefWindowProc(a1, 0x83u, a3, v130[0]);
        if ( (*(_DWORD *)(v18 + 124) & 3) != 0 )
        {
          v125 = *(_DWORD *)(GetDPIMetrics(v124, v16) + 28);
          *(_DWORD *)(v123 + 4) += v125;
          *(_DWORD *)(v123 + 12) -= v125;
        }
        goto LABEL_297;
      case 0x84u:
        if ( ((_DWORD)i[2] & 0x100) != 0 )
        {
          LODWORD(v132) = SLOWORD(v130[0]);
          HIDWORD(v132) = SWORD1(v130[0]);
          if ( (_DWORD)v128 )
            ThreadUnlock1((unsigned __int64)v130[0] >> 16, 131LL, 256LL);
          if ( !PtInRect((_DWORD *)(*((_QWORD *)a1 + 5) + 88LL), v132) )
            goto LABEL_167;
          goto LABEL_308;
        }
        goto LABEL_164;
      case 0x85u:
        if ( (**(_DWORD **)v127[0] & 0x8000000) != 0 )
        {
          xxxValidateRect(a1, 0LL);
        }
        else
        {
          if ( (*(_DWORD *)(v18 + 124) & 3) != 0 )
          {
            if ( (unsigned int)MNIsUAHMenu(v18) )
            {
              v112 = 0LL;
              v113 = 65537LL;
              v114 = *(struct tagWND **)(*(_QWORD *)v127[0] + 16LL);
            }
            else
            {
              v113 = 328833LL;
              v112 = a3;
              v114 = a1;
            }
            DCEx = _GetDCEx(v114, v112, v113);
            xxxMNDrawFullNC(a1);
          }
          else
          {
            if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) != 0x80020000 )
            {
              v118 = xxxDefWindowProc(a1, 0x85u, a3, v130[0]);
              if ( (unsigned int)MNIsUAHMenu(v18) )
              {
                v120 = v127[0];
                v119 = *(_QWORD *)v127[0];
                if ( *(_QWORD *)(*(_QWORD *)v127[0] + 16LL) )
                {
                  v122 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v127[0] + 16LL), 0LL, 65537LL);
                  xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v127[0] + 16LL), 149LL, v18, v122);
                  _ReleaseDC(v122);
                }
              }
              if ( (_DWORD)v128 )
                ThreadUnlock1(v120, v119, v121);
              v8 = v118;
              goto LABEL_167;
            }
            if ( (unsigned int)MNIsUAHMenu(v18) )
            {
              v116 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v127[0] + 16LL), 0LL, 65537LL);
              v117 = xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v127[0] + 16LL), 149LL, v18, v116);
              _ReleaseDC(v116);
              if ( v117 )
                goto LABEL_297;
            }
            DCEx = _GetDCEx(a1, a3, 328833LL);
            MNDrawEdge(v18, DCEx, *((_QWORD *)a1 + 5) + 88LL, 0LL);
          }
          _ReleaseDC(DCEx);
        }
LABEL_297:
        v23 = (unsigned int)v128;
        goto LABEL_149;
    }
    if ( a2 != 256 )
    {
      if ( a2 == 258 )
        goto LABEL_283;
      if ( a2 != 260 )
      {
        if ( a2 != 262 )
        {
          if ( a2 != 275 )
          {
            if ( a2 != 480 )
              goto LABEL_163;
LABEL_262:
            if ( !a3 )
              goto LABEL_148;
            v111 = ValidateHmenu(a3);
            if ( !v111 )
              goto LABEL_148;
            SmartObjStackRefBase<tagMENU>::Init(v133, v111);
            v134 = 0LL;
            LockPopupMenu((__int64)v127, (__int64 *)(*(_QWORD *)v127[0] + 40LL), (__int64)v133);
            goto LABEL_147;
          }
          v16 = 65529LL;
          switch ( a3 )
          {
            case 0xFFF9uLL:
              FindTimer((__int64)a1, 65529LL, 0, 1, 0LL);
              if ( ((_DWORD)i[2] & 0x1000) != 0 )
              {
                v54 = v128;
                goto LABEL_279;
              }
              break;
            case 0xFFFBuLL:
              if ( *((_QWORD *)i + 12) )
                MNAnimate(i, 1LL);
              break;
            case 0xFFFEuLL:
              **(_DWORD **)v127[0] &= ~0x80u;
              xxxMNOpenHierarchy((__int64 **)v127, (__int64)i);
              break;
            case 0xFFFFuLL:
              **(_DWORD **)v127[0] &= ~0x80u;
              xxxMNCloseHierarchy(*(_QWORD *)v127[0], (__int64)i);
              break;
            default:
              if ( a3 - 4294967292u <= 1 )
              {
                if ( ((_DWORD)i[2] & 8) != 0 )
                  xxxMNDoScroll((__int64)v127, a3, 0);
                else
                  FindTimer((__int64)a1, (unsigned int)a3, 0, 1, 0LL);
              }
              break;
          }
          goto LABEL_297;
        }
LABEL_283:
        xxxMNChar((__int64 **)v127, (__int64)i, a3);
        goto LABEL_297;
      }
    }
    xxxMNKeyDown((__int64 **)v127, (__int64)i, a3);
    goto LABEL_297;
  }
  v8 = (__int64)v129;
LABEL_168:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v127);
  return v8;
}
