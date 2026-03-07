__int64 __fastcall xxxProcessEventMessage(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 *ThreadWin32Thread; // rax
  struct tagQMSG *v6; // rdx
  _QWORD *v7; // rbx
  int v8; // eax
  __int64 *v9; // rax
  struct tagWND *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int DLT; // eax
  __int64 DomainLockRef; // rax
  _BYTE *v18; // rbx
  int v19; // esi
  tagDomLock *v20; // rcx
  __int64 v21; // rcx
  struct tagINPUT_MESSAGE_SOURCE *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // r13
  unsigned int v28; // r15d
  __int64 v29; // rsi
  __int128 *v30; // rbx
  __int64 v31; // r14
  __int64 v32; // rcx
  struct tagWND **v33; // r12
  struct tagWND *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned __int16 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 *v43; // rax
  __int64 v44; // rcx
  __int64 result; // rax
  struct tagINPUT_MESSAGE_SOURCE *v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rdx
  struct tagINPUT_MESSAGE_SOURCE *v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // r14
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  struct tagTOOLTIPWND *v58; // rax
  struct tagTOOLTIPWND *v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  int v64; // eax
  unsigned int v65; // ebx
  unsigned int v66; // edi
  struct tagINPUT_MESSAGE_SOURCE *v67; // r14
  struct tagQ **v68; // rcx
  int v69; // ebx
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rbx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rax
  __int64 v85; // rcx
  int v86; // ecx
  DesktopRecalc *v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rbx
  struct tagWND *v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  struct tagINPUT_MESSAGE_SOURCE *v97[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v98; // [rsp+58h] [rbp-B0h]
  __int128 v99; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v100[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v101; // [rsp+88h] [rbp-80h] BYREF
  __int64 v102; // [rsp+98h] [rbp-70h]
  char v103; // [rsp+A0h] [rbp-68h]
  __int64 v104; // [rsp+A8h] [rbp-60h]
  char v105; // [rsp+B0h] [rbp-58h]
  _WORD v106[264]; // [rsp+B8h] [rbp-50h] BYREF

  v98 = 0LL;
  *(_OWORD *)v97 = 0LL;
  v3 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  v100[0] = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(v3 + 16) = v100;
  v7 = *(_QWORD **)(a1 + 432);
  v100[2] = CleanEventMessage;
  v8 = *(_DWORD *)(a2 + 96) - 1;
  v100[1] = a2;
  switch ( v8 )
  {
    case 0:
      LOBYTE(v6) = 1;
      v11 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v6);
      v12 = v11;
      if ( v11 && *(char *)(*(_QWORD *)(v11 + 40) + 20LL) >= 0 )
      {
        v97[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v97;
        v97[1] = (struct tagINPUT_MESSAGE_SOURCE *)v11;
        HMLockObject(v11);
        xxxProcessShowWindowEvent(v12, *(unsigned int *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
        ThreadUnlock1(v14, v13, v15);
      }
      goto LABEL_60;
    case 1:
      v22 = (struct tagINPUT_MESSAGE_SOURCE *)v7[14];
      if ( v22 )
      {
        v97[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v97;
        v97[1] = v22;
        HMLockObject(v22);
        xxxSendMessage(v7[14], 31LL, 0LL, 0LL);
        ThreadUnlock1(v24, v23, v25);
        SetWakeBit(a1, 2u);
      }
      goto LABEL_60;
    case 2:
      xxxProcessSetWindowPosEvent(*(_QWORD *)(a2 + 32));
      goto LABEL_60;
    case 3:
      ProcessUpdateKeyStateEvent(v7, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 32) + 64LL);
      goto LABEL_60;
    case 4:
      xxxDeactivate(a1, *(unsigned int *)(a2 + 32), *(unsigned int *)(a2 + 72));
      goto LABEL_60;
    case 5:
      xxxProcessActivationEvent((const struct tagQMSG *)a2);
      goto LABEL_60;
    case 6:
      LOBYTE(v6) = 1;
      v26 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v6);
      if ( v26 )
        PostTransformableMessage(v26, *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 1);
      goto LABEL_60;
    case 7:
      LOBYTE(v6) = 1;
      v9 = (__int64 *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 32), v6);
      v10 = (struct tagWND *)v9;
      if ( v9 )
      {
        if ( *(char *)(v9[5] + 19) < 0 )
        {
          v97[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
          *(_QWORD *)(a1 + 416) = v97;
          v97[1] = (struct tagINPUT_MESSAGE_SOURCE *)v9;
          HMLockObject(v9);
          xxxFreeWindow(v10, (__int64)v97);
        }
        else
        {
          xxxDestroyWindow(v9);
        }
      }
      goto LABEL_60;
    case 8:
      v27 = *(_QWORD *)(a2 + 32);
      v28 = *(_DWORD *)(a2 + 24);
      v29 = *(_QWORD *)(a2 + 16);
      v30 = *(__int128 **)(a2 + 40);
      v101 = 0LL;
      v102 = 0LL;
      v99 = 0LL;
      PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( (unsigned __int64)(unsigned __int16)v29 >= *(_QWORD *)(gpsi + 8LL) )
        goto LABEL_60;
      v31 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v29;
      v33 = (struct tagWND **)HMPkheFromPhe(v31);
      LOWORD(v29) = WORD1(v29) & 0x7FFF;
      if ( (WORD1(v29) & 0x7FFF) != *(_WORD *)(v31 + 26)
        && (_WORD)v29 != 0x7FFF
        && ((_WORD)v29 || !PsGetCurrentProcessWow64Process(v32)) )
      {
        goto LABEL_60;
      }
      if ( (*(_BYTE *)(v31 + 25) & 1) != 0 )
        goto LABEL_60;
      if ( *(_BYTE *)(v31 + 24) != 1 )
        goto LABEL_60;
      v34 = *v33;
      if ( !*v33 )
        goto LABEL_60;
      ThreadLockAlways(*v33, &v101);
      if ( v28 == 26 || v28 == 27 )
      {
        if ( v30 )
        {
          if ( v30 == (__int128 *)-1LL )
          {
            v106[0] = 0;
            RtlInitLargeUnicodeString(&v99, v106);
            v30 = &v99;
          }
          else
          {
            v38 = (unsigned __int16)v30;
            if ( (unsigned int)UserGetAtomName((unsigned __int16)v30, v106, 260LL) )
            {
              *((_QWORD *)&v99 + 1) = v106;
              v42 = -1LL;
              do
                ++v42;
              while ( v106[v42] );
              v30 = &v99;
              LODWORD(v99) = 2 * v42;
              DWORD1(v99) = (2 * v42 + 2) & 0x7FFFFFFF;
            }
            else
            {
              v30 = 0LL;
            }
            UserDeleteAtom(v38, v39, v40, v41);
          }
        }
        *(_QWORD *)(a2 + 40) = 0LL;
      }
      else if ( v28 == 834 )
      {
        xxxEndGetWidnowTrackInfoAsync(v34);
        goto LABEL_59;
      }
      xxxSendMessage(v34, v28, v27, v30);
LABEL_59:
      ThreadUnlock1(v36, v35, v37);
      goto LABEL_60;
    case 9:
      LOBYTE(v6) = 1;
      v46 = (struct tagINPUT_MESSAGE_SOURCE *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v6);
      if ( v46 )
      {
        v97[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v97;
        v97[1] = v46;
        HMLockObject(v46);
        v49 = *((_QWORD *)v46 + 5);
        if ( (*(_BYTE *)(v49 + 31) & 0x10) == 0 )
        {
          SetVisible(v46, 1u);
          if ( (*(_BYTE *)(*((_QWORD *)v46 + 5) + 31LL) & 0x20) == 0 )
          {
            v50 = 7LL;
            v51 = v46;
            goto LABEL_119;
          }
        }
        goto LABEL_120;
      }
      goto LABEL_60;
    case 10:
      LOBYTE(v6) = 1;
      v52 = *(_QWORD *)(a1 + 456);
      v53 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v6);
      v54 = *(_DWORD *)(v52 + 48);
      if ( (v54 & 0x5C0) == 0
        || **(_QWORD **)(v52 + 184) != *(_QWORD *)(a2 + 16)
        || *(_DWORD *)(v52 + 192) != *(_DWORD *)(a2 + 32) )
      {
        if ( (v54 & 0x100) != 0 )
          *(_QWORD *)(a2 + 40) &= 0xFFFFFFFFFFFFFCFFuLL;
        if ( v53 )
        {
          v97[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
          *(_QWORD *)(a1 + 416) = v97;
          v97[1] = (struct tagINPUT_MESSAGE_SOURCE *)v53;
          HMLockObject(v53);
          xxxCancelMouseMoveTracking(
            *(unsigned int *)(a2 + 24),
            v53,
            *(unsigned int *)(a2 + 32),
            *(unsigned int *)(a2 + 40));
          ThreadUnlock1(v56, v55, v57);
        }
        else if ( (*(_DWORD *)(a2 + 40) & 0x300LL) != 0 && (*(_DWORD *)(a2 + 24) & 0x200) != 0 )
        {
          v58 = (struct tagTOOLTIPWND *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v52 + 112));
          v59 = v58;
          if ( v58 )
          {
            v60 = *(_QWORD *)v58;
            if ( *(_QWORD *)v58 )
            {
              v101 = 0LL;
              v102 = 0LL;
              ThreadLockAlways(v60, &v101);
              xxxResetTooltip(v59);
              ThreadUnlock1(v62, v61, v63);
            }
          }
        }
      }
      goto LABEL_60;
    case 11:
      DLT = DLT_WINEVENT::getDLT();
      DomainLockRef = GetDomainLockRef(DLT);
      BYTE8(v101) = 1;
      v18 = (char *)&v101 + 8;
      *(_QWORD *)&v101 = DomainLockRef;
      v19 = 0;
      v102 = gDomainDummyLock;
      v104 = 0LL;
      v105 = 0;
      v103 = 0;
      do
      {
        v20 = (tagDomLock *)*((_QWORD *)v18 - 1);
        if ( v20 )
        {
          if ( *v18 )
            tagDomLock::LockExclusive(v20);
          else
            tagDomLock::LockShared(v20);
        }
        ++v19;
        v18 += 16;
      }
      while ( !v19 );
      v21 = *(_QWORD *)(a2 + 40);
      v105 = 1;
      if ( *(_DWORD *)(v21 + 24) )
        xxxProcessTSFEvent((struct tagNOTIFY *)v21);
      else
        xxxProcessNotifyWinEvent(v21);
      if ( v105 && (_QWORD)v101 )
      {
        if ( BYTE8(v101) )
          tagDomLock::UnLockExclusive((tagDomLock *)v101);
        else
          tagDomLock::UnLockShared((tagDomLock *)v101);
      }
      goto LABEL_60;
    case 12:
      if ( ((*(_DWORD *)(a1 + 680) | *(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL)) & 0x800) != 0 )
        xxxCallHook(*(_DWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL, 10);
      PostShellHookMessagesEx(*(unsigned int *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL);
      goto LABEL_60;
    case 13:
      v64 = *(_DWORD *)(a2 + 24);
      if ( v64 == 5 )
      {
        v65 = *(_DWORD *)(a2 + 40);
        v64 = *(_DWORD *)(a2 + 32);
        if ( v65 <= 5 )
        {
          if ( !v65 )
            goto LABEL_89;
        }
        else
        {
          v65 = 5;
        }
      }
      else
      {
        v65 = 1;
      }
      v66 = (unsigned __int16)v64 | 0x10000;
      do
      {
        CUserPlaySound::PlaySync((CUserPlaySound *)CUserPlaySound::s_pUserPlaySound, v66);
        --v65;
      }
      while ( v65 );
LABEL_89:
      xxxSoundSentry();
      goto LABEL_60;
    case 14:
      v67 = (struct tagINPUT_MESSAGE_SOURCE *)v7[15];
      if ( v67 || (v67 = (struct tagINPUT_MESSAGE_SOURCE *)v7[16]) != 0LL )
      {
        v68 = (struct tagQ **)*((_QWORD *)v67 + 2);
        if ( (struct tagQ **)a1 == v68 )
        {
          v69 = *(_DWORD *)(a2 + 40) - 165;
          v70 = ((unsigned __int64)(unsigned __int16)v69 << 16) | (unsigned __int16)GetMouseKeyFlags(v68[54]);
          v97[1] = v67;
          v71 = *(_QWORD *)(a2 + 120);
          *(_QWORD *)(a2 + 40) = v70;
          *(_DWORD *)(a1 + 1272) |= 0x800u;
          *(_QWORD *)(a1 + 1288) = v71;
          v97[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
          *(_QWORD *)(a1 + 416) = v97;
          HMLockObject(v67);
          xxxSendMessage(v67, 793LL, *(_QWORD *)v67, *(_QWORD *)(a2 + 40));
          ThreadUnlock1(v73, v72, v74);
          *(_DWORD *)(a1 + 1272) &= ~0x800u;
        }
        else
        {
          PostEventMessageEx(
            (struct tagTHREADINFO *)v68,
            v68[54],
            0xFu,
            0LL,
            0,
            0LL,
            *(_QWORD *)(a2 + 40),
            (struct tagINPUT_MESSAGE_SOURCE *)(a2 + 120));
        }
      }
      goto LABEL_60;
    case 15:
      LOBYTE(v6) = 1;
      v75 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v6);
      v76 = v75;
      if ( v75 && (*(_BYTE *)(*(_QWORD *)(v75 + 40) + 31LL) & 1) != 0 )
      {
        v97[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v97;
        v97[1] = (struct tagINPUT_MESSAGE_SOURCE *)v75;
        HMLockObject(v75);
        xxxMinMaximize(v76, 3LL);
        ThreadUnlock1(v78, v77, v79);
      }
      goto LABEL_60;
    case 16:
      LOBYTE(v6) = 1;
      v80 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v6);
      if ( v80 )
      {
        v97[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v97;
        v97[1] = (struct tagINPUT_MESSAGE_SOURCE *)v80;
        HMLockObject(v80);
        xxxArrangeWindow(v80, *(unsigned int *)(a2 + 32));
        ThreadUnlock1(v82, v81, v83);
      }
      goto LABEL_60;
    case 17:
      if ( (unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage() )
      {
        v85 = *(_QWORD *)(a1 + 432);
        if ( !v85 || !*(_QWORD *)(v85 + 120) || v85 != gpqForeground && !(unsigned __int8)IsKeyboardDelegationTarget(a1) )
          goto LABEL_60;
      }
      else
      {
        if ( !gpqForeground )
          goto LABEL_60;
        v84 = *(_QWORD *)(gpqForeground + 120LL);
        if ( !v84 || *(_QWORD *)(v84 + 16) != a1 )
          goto LABEL_60;
      }
      v86 = HIDWORD(gpdwCPUserPreferencesMask);
      if ( (v86 & 0x80u) == 0 )
        xxxApplyGlobalInputSettings(v86);
LABEL_60:
      v43 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v43 )
      {
        v44 = *v43;
        result = v100[0];
        *(_QWORD *)(v44 + 16) = v100[0];
      }
      else
      {
        result = v100[0];
        MEMORY[0x10] = v100[0];
      }
      return result;
    case 18:
      if ( *(_DWORD *)(a2 + 24) == 809 )
        PostThreadMessage(a1, 809LL, *(_QWORD *)(a2 + 32));
      else
        xxxSendShutdownData(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 32));
      goto LABEL_60;
    case 19:
      xxxDoDeferredPointerActivate(a2);
      CleanEventMessage((struct tagQMSG *)a2);
      goto LABEL_60;
    case 20:
      LOBYTE(v6) = 1;
      v88 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 40), v6);
      LOBYTE(v89) = 1;
      v90 = v88;
      v91 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v89);
      PostMousePointerLeaveAndCleanup(v90, v91);
      goto LABEL_60;
    case 21:
      v87 = (DesktopRecalc *)*(unsigned int *)(a2 + 32);
      if ( (_DWORD)v87 )
      {
        if ( (_DWORD)v87 == 1 )
          DesktopRecalc::xxxProcessRecalcForThread(v87);
      }
      else
      {
        DesktopRecalc::xxxProcessRecalcForWindow(*(DesktopRecalc **)(a2 + 16), (HWND)v6);
      }
      goto LABEL_60;
    case 22:
      LOBYTE(v6) = 1;
      v92 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v6);
      if ( v92 )
      {
        v97[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v97;
        v97[1] = (struct tagINPUT_MESSAGE_SOURCE *)v92;
        HMLockObject(v92);
        v51 = (struct tagINPUT_MESSAGE_SOURCE *)v92;
        v50 = *(unsigned int *)(a2 + 32);
LABEL_119:
        xxxMinMaximize(v51, v50);
LABEL_120:
        ThreadUnlock1(v49, v47, v48);
      }
      goto LABEL_60;
    case 23:
      xxxClientUpdateDpi(*(unsigned int *)(a2 + 32));
      goto LABEL_60;
    case 24:
      xxxClientBroadcastThemeChange(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      goto LABEL_60;
    case 26:
      ShellWindowPos::xxxProcessPositionEvent((ShellWindowPos *)a2, v6);
      goto LABEL_60;
    case 28:
      LOBYTE(v6) = 1;
      v93 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v6);
      if ( v93 )
      {
        v97[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v97;
        v97[1] = v93;
        HMLockObject(v93);
        xxxDeliverRestoreFocusMessage(v93);
        ThreadUnlock1(v95, v94, v96);
      }
      goto LABEL_60;
    default:
      goto LABEL_60;
  }
}
