/*
 * XREFs of xxxProcessEventMessage @ 0x1C005C220
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     SetVisible @ 0x1C001FE88 (SetVisible.c)
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     xxxProcessAsyncSendMessage @ 0x1C005C6C8 (xxxProcessAsyncSendMessage.c)
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxProcessNotifyWinEvent @ 0x1C007446C (xxxProcessNotifyWinEvent.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C009AE90 (xxxProcessSetWindowPosEvent.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00A184C (xxxCancelMouseMoveTracking.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00A22D8 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     PostShellHookMessages @ 0x1C00A6110 (PostShellHookMessages.c)
 *     _PostTransformableMessage @ 0x1C00A755C (_PostTransformableMessage.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1C00A81DC (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     _PostThreadMessage @ 0x1C00AB08C (_PostThreadMessage.c)
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ @ 0x1C00AEE98 (-xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C00CA760 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00DBE0C (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00F6110 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00FA304 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     WPUpdateCheckPointSettings @ 0x1C0104AE0 (WPUpdateCheckPointSettings.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C010C53C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C010D388 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxClientBroadcastThemeChange @ 0x1C0117854 (xxxClientBroadcastThemeChange.c)
 *     xxxResetTooltip @ 0x1C0118B6C (xxxResetTooltip.c)
 *     xxxSoundSentry @ 0x1C011B3AC (xxxSoundSentry.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01DCEB0 (PostMousePointerLeaveAndCleanup.c)
 *     xxxProcessTSFEvent @ 0x1C01E55A8 (xxxProcessTSFEvent.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01ED250 (xxxDoDeferredPointerActivate.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020BEC4 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     xxxClientUpdateDpi @ 0x1C022D060 (xxxClientUpdateDpi.c)
 *     xxxSendShutdownData @ 0x1C022D134 (xxxSendShutdownData.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C02377B8 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxProcessRecalcForWindow@DesktopRecalc@@YAXPEAUHWND__@@@Z @ 0x1C023B648 (-xxxProcessRecalcForWindow@DesktopRecalc@@YAXPEAUHWND__@@@Z.c)
 */

__int64 __fastcall xxxProcessEventMessage(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v5; // rbx
  __int64 *ThreadWin32Thread; // rax
  struct tagQMSG *v7; // rdx
  int v8; // ecx
  ULONG_PTR *v9; // rbx
  int v10; // ecx
  int v11; // ecx
  __int64 *v12; // rax
  __int64 result; // rax
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 *v19; // rbx
  int v20; // r15d
  tagDomLock *v21; // rcx
  __int64 v22; // rcx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  DesktopRecalc *v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rsi
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r15
  int v50; // edi
  __int64 v51; // r8
  __int64 v52; // rax
  struct tagWND *v53; // rbx
  ULONG_PTR v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rbx
  __int64 v61; // rdi
  __int64 v62; // rax
  struct tagWND *v63; // rbx
  __int64 v64; // r8
  __int64 v65; // rdx
  int v66; // eax
  unsigned int v67; // esi
  unsigned int v68; // ebx
  int v69; // ecx
  __int64 v70; // rbx
  __int64 v71; // rax
  ULONG_PTR v72; // rsi
  __int64 v73; // rcx
  int v74; // ebx
  unsigned __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rbx
  __int64 v81; // rax
  int v82; // ecx
  struct tagWND *v83; // rbx
  __int128 v84; // [rsp+40h] [rbp-39h] BYREF
  __int64 v85; // [rsp+50h] [rbp-29h]
  _QWORD v86[3]; // [rsp+58h] [rbp-21h] BYREF
  tagDomLock *v87; // [rsp+70h] [rbp-9h] BYREF
  __int64 v88; // [rsp+78h] [rbp-1h] BYREF
  __int64 v89; // [rsp+80h] [rbp+7h]
  char v90; // [rsp+88h] [rbp+Fh]
  __int64 v91; // [rsp+90h] [rbp+17h]
  char v92; // [rsp+98h] [rbp+1Fh]

  v84 = 0LL;
  v85 = 0LL;
  v3 = 0LL;
  v5 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v5 = *ThreadWin32Thread;
  v86[0] = *(_QWORD *)(v5 + 16);
  *(_QWORD *)(v5 + 16) = v86;
  v8 = *(_DWORD *)(a2 + 96);
  v9 = *(ULONG_PTR **)(a1 + 432);
  v86[2] = CleanEventMessage;
  v86[1] = a2;
  if ( v8 <= 14 )
  {
    if ( v8 != 14 )
    {
      if ( v8 <= 7 )
      {
        if ( v8 == 7 )
        {
          v58 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
          if ( v58 )
            PostTransformableMessage(v58, *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 1);
        }
        else
        {
          v23 = v8 - 1;
          if ( !v23 )
          {
            v45 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
            v46 = v45;
            if ( !v45 || *(char *)(*(_QWORD *)(v45 + 40) + 20LL) < 0 )
              goto LABEL_9;
            *(_QWORD *)&v84 = *(_QWORD *)(a1 + 416);
            *(_QWORD *)(a1 + 416) = &v84;
            *((_QWORD *)&v84 + 1) = v45;
            HMLockObject(v45);
            v48 = *(_QWORD *)(a2 + 40);
            v49 = *(_QWORD *)(a2 + 32);
            v50 = *(_DWORD *)(a2 + 24);
            v51 = v48 & 0x10000;
            if ( v50 == 1 )
              v51 = (unsigned int)v49 | (unsigned int)v51;
            LOBYTE(v47) = v48;
            xxxShowWindowEx(v46, v47, v51);
            if ( !v50 && (v49 & 4) != 0 && (*(_BYTE *)(*(_QWORD *)(v46 + 40) + 31LL) & 0x20) != 0 )
              WPUpdateCheckPointSettings(v46, (unsigned int)v49);
            goto LABEL_47;
          }
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              v26 = v25 - 1;
              if ( v26 )
              {
                v27 = v26 - 1;
                if ( v27 )
                {
                  if ( v27 == 1 )
                    xxxProcessActivationEvent((const struct tagQMSG *)a2);
                }
                else
                {
                  xxxDeactivate(a1, *(unsigned int *)(a2 + 32), *(unsigned int *)(a2 + 72));
                }
              }
              else
              {
                ProcessUpdateKeyStateEvent(v9, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 32) + 64LL);
              }
            }
            else
            {
              xxxProcessSetWindowPosEvent(*(_QWORD *)(a2 + 32));
            }
          }
          else
          {
            v54 = v9[13];
            if ( v54 )
            {
              *(_QWORD *)&v84 = *(_QWORD *)(a1 + 416);
              *(_QWORD *)(a1 + 416) = &v84;
              *((_QWORD *)&v84 + 1) = v54;
              HMLockObject(v54);
              xxxSendMessage(v9[13]);
              ThreadUnlock1(v56, v55, v57);
              SetWakeBit(a1, 2LL);
            }
          }
        }
      }
      else
      {
        v10 = v8 - 8;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( !v11 )
          {
            xxxProcessAsyncSendMessage(*(_QWORD *)(a2 + 16), *(unsigned int *)(a2 + 24), *(_QWORD *)(a2 + 32), a2 + 40);
            goto LABEL_9;
          }
          v14 = v11 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                if ( v16 == 1 )
                {
                  if ( ((*(_DWORD *)(a1 + 680) | *(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL)) & 0x800) != 0 )
                    xxxCallHook(*(_DWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL, 10);
                  PostShellHookMessages(*(unsigned int *)(a2 + 32), *(_QWORD *)(a2 + 40));
                }
              }
              else
              {
                DLT = DLT_WINEVENT::getDLT();
                DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
                v90 = 0;
                v87 = DomainLockRef;
                v19 = &v88;
                v20 = 0;
                v89 = gDomainDummyLock;
                v91 = 0LL;
                LOBYTE(v88) = 1;
                v92 = 0;
                do
                {
                  v21 = (tagDomLock *)*(v19 - 1);
                  if ( v21 )
                  {
                    if ( *(_BYTE *)v19 )
                      tagDomLock::LockExclusive(v21);
                    else
                      tagDomLock::LockShared(v21);
                  }
                  ++v20;
                  v19 += 2;
                }
                while ( !v20 );
                v22 = *(_QWORD *)(a2 + 40);
                v92 = 1;
                if ( *(_DWORD *)(v22 + 24) )
                  xxxProcessTSFEvent((struct tagNOTIFY *)v22);
                else
                  xxxProcessNotifyWinEvent(v22);
                if ( v92 && v87 )
                {
                  if ( (_BYTE)v88 )
                    tagDomLock::UnLockExclusive(v87);
                  else
                    tagDomLock::UnLockShared(v87);
                }
              }
              goto LABEL_9;
            }
            v30 = *(_QWORD *)(a1 + 456);
            v31 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
            v32 = *(_DWORD *)(v30 + 48);
            if ( (v32 & 0x5C0) != 0
              && **(_QWORD **)(v30 + 184) == *(_QWORD *)(a2 + 16)
              && *(_DWORD *)(v30 + 192) == *(_DWORD *)(a2 + 32) )
            {
              goto LABEL_9;
            }
            if ( (v32 & 0x100) != 0 )
              *(_QWORD *)(a2 + 40) &= 0xFFFFFFFFFFFFFCFFuLL;
            if ( v31 )
            {
              *(_QWORD *)&v84 = *(_QWORD *)(a1 + 416);
              *(_QWORD *)(a1 + 416) = &v84;
              *((_QWORD *)&v84 + 1) = v31;
              HMLockObject(v31);
              xxxCancelMouseMoveTracking(
                *(unsigned int *)(a2 + 24),
                v31,
                *(unsigned int *)(a2 + 32),
                *(unsigned int *)(a2 + 40));
            }
            else
            {
              if ( (*(_DWORD *)(a2 + 40) & 0x300LL) == 0 )
                goto LABEL_9;
              if ( (*(_DWORD *)(a2 + 24) & 0x200) == 0 )
                goto LABEL_9;
              v59 = (_QWORD *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v30 + 112));
              v60 = v59;
              if ( !v59 )
                goto LABEL_9;
              v61 = *v59;
              if ( !*v59 )
                goto LABEL_9;
              v89 = 0LL;
              v62 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              v87 = *(tagDomLock **)(v62 + 416);
              *(_QWORD *)(v62 + 416) = &v87;
              v88 = v61;
              HMLockObject(v61);
              xxxResetTooltip(v60);
            }
LABEL_47:
            ThreadUnlock1(v34, v33, v35);
            goto LABEL_9;
          }
          v63 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
          if ( !v63 )
            goto LABEL_9;
          *(_QWORD *)&v84 = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 416) = &v84;
          *((_QWORD *)&v84 + 1) = v63;
          HMLockObject(v63);
          v34 = *((_QWORD *)v63 + 5);
          if ( (*(_BYTE *)(v34 + 31) & 0x10) != 0 )
            goto LABEL_47;
          SetVisible(v63, 1u);
          if ( (*(_BYTE *)(*((_QWORD *)v63 + 5) + 31LL) & 0x20) != 0 )
            goto LABEL_47;
          v64 = 1LL;
          v65 = 7LL;
LABEL_98:
          xxxMinMaximize(v63, v65, v64);
          goto LABEL_47;
        }
        v52 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 32), 1);
        v53 = (struct tagWND *)v52;
        if ( v52 )
        {
          if ( *(char *)(*(_QWORD *)(v52 + 40) + 19LL) < 0 )
          {
            *(_QWORD *)&v84 = *(_QWORD *)(a1 + 416);
            *(_QWORD *)(a1 + 416) = &v84;
            *((_QWORD *)&v84 + 1) = v52;
            HMLockObject(v52);
            xxxFreeWindow(v53);
          }
          else
          {
            xxxDestroyWindow(v52);
          }
        }
      }
      goto LABEL_9;
    }
    v66 = *(_DWORD *)(a2 + 24);
    if ( v66 == 5 )
    {
      v67 = *(_DWORD *)(a2 + 40);
      v66 = *(_DWORD *)(a2 + 32);
      if ( v67 > 5 )
        v67 = 5;
      if ( !v67 )
        goto LABEL_108;
    }
    else
    {
      v67 = 1;
    }
    v68 = (unsigned __int16)v66 | 0x10000;
    do
    {
      CUserPlaySound::PlaySync((CUserPlaySound *)CUserPlaySound::s_pUserPlaySound, v68);
      --v67;
    }
    while ( v67 );
LABEL_108:
    xxxSoundSentry();
    goto LABEL_9;
  }
  if ( v8 <= 21 )
  {
    if ( v8 == 21 )
    {
      v80 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 40), 1);
      v81 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      PostMousePointerLeaveAndCleanup(v80, v81);
      goto LABEL_9;
    }
    v39 = v8 - 15;
    if ( v39 )
    {
      v40 = v39 - 1;
      if ( !v40 )
      {
        v71 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
        v63 = (struct tagWND *)v71;
        if ( !v71 || (*(_BYTE *)(*(_QWORD *)(v71 + 40) + 31LL) & 1) == 0 )
          goto LABEL_9;
        *(_QWORD *)&v84 = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = &v84;
        *((_QWORD *)&v84 + 1) = v71;
        HMLockObject(v71);
        v65 = 3LL;
        v64 = 19LL;
        goto LABEL_98;
      }
      v41 = v40 - 1;
      if ( !v41 )
      {
        v70 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
        if ( !v70 )
          goto LABEL_9;
        *(_QWORD *)&v84 = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = &v84;
        *((_QWORD *)&v84 + 1) = v70;
        HMLockObject(v70);
        xxxArrangeWindow(v70, *(unsigned int *)(a2 + 32));
        goto LABEL_47;
      }
      v42 = v41 - 1;
      if ( v42 )
      {
        v69 = v42 - 1;
        if ( v69 )
        {
          if ( v69 == 1 )
          {
            xxxDoDeferredPointerActivate(a2);
            CleanEventMessage((struct tagQMSG *)a2);
          }
        }
        else if ( *(_DWORD *)(a2 + 24) == 809 )
        {
          PostThreadMessage(a1, 809LL, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
        }
        else
        {
          xxxSendShutdownData(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 32));
        }
      }
      else if ( gpqForeground )
      {
        v43 = *(_QWORD *)(gpqForeground + 112LL);
        if ( v43 )
        {
          if ( *(_QWORD *)(v43 + 16) == a1 )
          {
            v44 = HIDWORD(gpdwCPUserPreferencesMask);
            if ( (v44 & 0x80u) == 0 )
              xxxApplyGlobalInputSettings(v44);
          }
        }
      }
    }
    else
    {
      v72 = v9[14];
      if ( v72 || (v72 = v9[15]) != 0 )
      {
        v73 = *(_QWORD *)(v72 + 16);
        if ( a1 == v73 )
        {
          v74 = *(_DWORD *)(a2 + 40) - 165;
          v75 = ((unsigned __int64)(unsigned __int16)v74 << 16) | (unsigned __int16)GetMouseKeyFlags(*(_QWORD *)(v73 + 432));
          *((_QWORD *)&v84 + 1) = v72;
          v76 = *(_QWORD *)(a2 + 120);
          *(_QWORD *)(a2 + 40) = v75;
          *(_DWORD *)(a1 + 1256) |= 0x800u;
          *(_QWORD *)(a1 + 1272) = v76;
          *(_QWORD *)&v84 = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 416) = &v84;
          HMLockObject(v72);
          xxxSendMessage(v72);
          ThreadUnlock1(v78, v77, v79);
          *(_DWORD *)(a1 + 1256) &= ~0x800u;
        }
        else
        {
          PostEventMessageEx(
            (struct tagTHREADINFO *)v73,
            *(struct tagQ **)(v73 + 432),
            0xFu,
            0LL,
            0,
            0LL,
            *(_QWORD *)(a2 + 40),
            (struct tagINPUT_MESSAGE_SOURCE *)(a2 + 120));
        }
      }
    }
  }
  else
  {
    v28 = v8 - 22;
    if ( v28 )
    {
      v36 = v28 - 1;
      if ( !v36 )
      {
        v63 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
        if ( !v63 )
          goto LABEL_9;
        *(_QWORD *)&v84 = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = &v84;
        *((_QWORD *)&v84 + 1) = v63;
        HMLockObject(v63);
        v64 = *(unsigned int *)(a2 + 40);
        v65 = *(unsigned int *)(a2 + 32);
        goto LABEL_98;
      }
      v37 = v36 - 1;
      if ( !v37 )
      {
        xxxClientUpdateDpi(*(unsigned int *)(a2 + 32));
        goto LABEL_9;
      }
      v38 = v37 - 1;
      if ( !v38 )
      {
        xxxClientBroadcastThemeChange(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
        goto LABEL_9;
      }
      v82 = v38 - 2;
      if ( !v82 )
      {
        ShellWindowPos::xxxProcessPositionEvent((ShellWindowPos *)a2, v7);
        goto LABEL_9;
      }
      if ( v82 == 2 )
      {
        v83 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
        if ( v83 )
        {
          *(_QWORD *)&v84 = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 416) = &v84;
          *((_QWORD *)&v84 + 1) = v83;
          HMLockObject(v83);
          xxxDeliverRestoreFocusMessage(v83);
          goto LABEL_47;
        }
      }
    }
    else
    {
      v29 = (DesktopRecalc *)*(unsigned int *)(a2 + 32);
      if ( (_DWORD)v29 )
      {
        if ( (_DWORD)v29 == 1 )
          DesktopRecalc::xxxProcessRecalcForThread(v29);
      }
      else
      {
        DesktopRecalc::xxxProcessRecalcForWindow(*(DesktopRecalc **)(a2 + 16), (HWND)v7);
      }
    }
  }
LABEL_9:
  v12 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v12 )
    v3 = *v12;
  result = v86[0];
  *(_QWORD *)(v3 + 16) = v86[0];
  return result;
}
