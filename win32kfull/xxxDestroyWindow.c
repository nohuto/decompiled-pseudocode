// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxDestroyWindow(__int64 *a1)
{
  __int64 v2; // rcx
  struct tagTHREADINFO *v3; // r14
  unsigned int v4; // edi
  unsigned int v5; // r15d
  int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _DWORD *v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 ThreadpMenuState; // rax
  __int64 v15; // rdx
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  int v30; // r8d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 i; // rcx
  __int64 v36; // rax
  struct tagWND *v37; // rbx
  char v38; // cl
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // r12d
  unsigned __int8 v45; // r15
  tagQ *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 *v50; // rbx
  tagQ *v51; // rax
  _QWORD *j; // rcx
  __int64 *v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  char v56; // bl
  __int64 v57; // r8
  tagQ *v58; // rax
  tagQ *v59; // rax
  tagQ *v60; // rax
  tagQ *v61; // rax
  struct tagWND *v62; // rax
  struct tagWND *v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  EPOINTFIX *v70; // rcx
  EPOINTFIX *v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rax
  _DWORD *v74; // r12
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // r8
  int CanDestroyDefIME; // ebx
  __int64 v79; // rcx
  struct tagWND *v80; // r9
  __int64 v81; // r8
  __int64 v82; // rcx
  __int64 v83; // r15
  EPOINTFIX *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // r9
  __int64 v88; // rax
  __int64 v89; // r9
  __int64 v90; // rcx
  __int64 v91; // rax
  unsigned int v92; // eax
  unsigned int v93; // eax
  __int128 v94; // [rsp+40h] [rbp-49h] BYREF
  __int64 v95; // [rsp+50h] [rbp-39h]
  __int128 v96; // [rsp+58h] [rbp-31h] BYREF
  __int64 v97; // [rsp+68h] [rbp-21h]
  __int128 v98; // [rsp+70h] [rbp-19h] BYREF
  __int64 v99; // [rsp+80h] [rbp-9h]
  _QWORD v100[3]; // [rsp+88h] [rbp-1h] BYREF
  __int128 v101[4]; // [rsp+A0h] [rbp+17h] BYREF
  unsigned int v102; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v103; // [rsp+F8h] [rbp+6Fh]

  v3 = PtiCurrent();
  v4 = 0;
  v100[2] = 0LL;
  v99 = 0LL;
  v97 = 0LL;
  v103 = 0;
  v5 = 0;
  v98 = 0LL;
  v96 = 0LL;
  v100[0] = *((_QWORD *)v3 + 52);
  *((_QWORD *)v3 + 52) = v100;
  v100[1] = v2;
  if ( v2 )
    HMLockObject(v2);
  v6 = *(_BYTE *)(_HMPheFromObject(a1) + 25) & 1;
  if ( v3 != (struct tagTHREADINFO *)a1[2] )
  {
    if ( !v6 || (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 2) == 0 )
    {
      UserSetLastError(5);
      v10 = (_DWORD *)((char *)v3 + 488);
LABEL_22:
      if ( v6 )
      {
        v11 = operator~(0x10000000LL);
        v12 = operator&((unsigned int)*v10, v11);
        *v10 = operator|(v12, v5);
      }
      LOBYTE(v4) = ThreadUnlock1(v8, v7, v9) == 0;
      return v4;
    }
    HMChangeOwnerThread(a1, v3);
    goto LABEL_9;
  }
  if ( v6 )
  {
LABEL_9:
    v10 = (_DWORD *)((char *)v3 + 488);
    v103 = operator&(*((unsigned int *)v3 + 122), 0x10000000LL);
    v5 = v103;
    operator|=((char *)v3 + 488);
    goto LABEL_11;
  }
  v10 = (_DWORD *)((char *)v3 + 488);
LABEL_11:
  if ( tagWND::HasState((__int64)a1, 0x400000) )
  {
    tagWND::RemoveState();
    QueueShutdownData(*a1, 0LL);
  }
  if ( !v6 && !(unsigned int)operator&((unsigned int)*v10, 1LL) )
  {
    if ( (*gpsi & 4) != 0 && a1 == *((__int64 **)v3 + 98)
      || tagWND::HasState((__int64)a1, 0x10000000) && *((_DWORD *)v3 + 228) == 1 )
    {
      xxxCallCtfHook(5LL, 4LL, *a1);
    }
    if ( ((*((_BYTE *)v3 + 680) | (unsigned __int8)tagKERNELDESKTOPINFO::RedirectedFieldfsHooks<unsigned long>::operator unsigned long(*((_QWORD *)v3 + 58) + 32LL)) & 0x40) != 0
      && (unsigned int)xxxCallHook(4, *a1, 0LL, 5) )
    {
      goto LABEL_22;
    }
    if ( (unsigned int)IsInsideUserApiHook() )
      xxxSendMessage(a1, 144LL, 0LL, 0LL);
  }
  ThreadpMenuState = GetThreadpMenuState(a1[2]);
  if ( ThreadpMenuState )
  {
    if ( a1 == *(__int64 **)(*(_QWORD *)ThreadpMenuState + 8LL) )
    {
      v15 = ThreadpMenuState;
      do
      {
        *(_DWORD *)(ThreadpMenuState + 8) &= ~4u;
        ThreadpMenuState = *(_QWORD *)(ThreadpMenuState + 48);
      }
      while ( ThreadpMenuState );
      if ( (*(_DWORD *)(v15 + 8) & 0x100) == 0 )
      {
        MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
          (MenuStateOwnerLockxxxUnlock *)&v102,
          (struct tagMENUSTATE *)v15);
        xxxEndMenu(v16);
        MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v102);
      }
    }
  }
  if ( ghwndSwitch == *a1 )
    ghwndSwitch = 0LL;
  if ( (*(_BYTE *)(a1[5] + 31) & 0x40) == 0
    && (unsigned __int8)SharedPointerBase<tagWND>::operator==(a1 + 15)
    && (*(_BYTE *)(v17 + 18) & 0x20) != 0 )
  {
    xxxFlushPalette(a1);
  }
  v18 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 17);
  if ( (unsigned __int8)tagCLS::RedirectedFieldatomClassName<unsigned short>::operator!=(v18 + 24, gpsi + 898LL) )
  {
    if ( (*(_BYTE *)(v19 + 31) & 0xC0) != 0x40 )
    {
      if ( (unsigned __int8)SharedPointerBase<unsigned short>::operator!=(a1 + 15) )
      {
        v21 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v20);
        if ( *(_QWORD *)(v21 + 16) != v23 )
        {
          v24 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v22);
          zzzAttachThreadInput(v25, *(_QWORD *)(v24 + 16), 0LL);
        }
      }
    }
  }
  v26 = a1[5];
  if ( (*(_BYTE *)(v26 + 31) & 0x40) != 0
    && (*(_BYTE *)(v26 + 24) & 4) == 0
    && !IsTopLevelWindow((__int64)a1)
    && (unsigned __int8)SharedPointerBase<unsigned short>::operator!=(a1 + 13) )
  {
    v28 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v27);
    *(_QWORD *)&v96 = *((_QWORD *)v3 + 52);
    *((_QWORD *)v3 + 52) = &v96;
    *((_QWORD *)&v96 + 1) = v28;
    HMLockObject(v28);
    tagWND::RedirectedFieldulpChildWindowID<unsigned __int64>::operator unsigned __int64((char *)a1 + 306);
    v29 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 13);
    xxxSendTransformableMessage(v29, 528, v30, *a1, 0);
    ThreadUnlock1(v32, v31, v33);
  }
  if ( !(unsigned int)IsMotherDesktopWindow(a1) )
    SetWF(v34, 1152LL);
  xxxHandleGhostRelatedWindowDestruction((struct tagWND *)a1);
  if ( IsTopLevelWindow((__int64)a1) )
  {
    for ( i = SharedPointerBase<tagSBINFO>::operator unsigned __int64(*(_QWORD *)(a1[3] + 8) + 24LL) + 112;
          ;
          i = (__int64)v37 + 88 )
    {
      v36 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(i);
      v37 = (struct tagWND *)v36;
      if ( !v36 )
        break;
      if ( (__int64 *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(v36 + 120) == a1
        && v3 != *((struct tagTHREADINFO **)v37 + 2) )
      {
        PostUnownedNotification(v37);
      }
    }
  }
  v38 = *(_BYTE *)(a1[5] + 31);
  if ( (v38 & 0x10) != 0 )
  {
    if ( (v38 & 0x40) != 0 )
      xxxShowWindow((struct tagWND *)a1, gdwPUDFlags & 0x10000);
    else
      xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, (v6 << 13) + 151);
    if ( (*(_BYTE *)(a1[5] + 31) & 0x10) != 0 )
    {
      SetVisible((struct tagWND *)a1, 0);
      v39 = *((_QWORD *)v3 + 57);
      if ( v39 )
      {
        if ( SharedPointerBase<tagSBINFO>::operator unsigned __int64(*(_QWORD *)(v39 + 8) + 24LL) )
        {
          if ( SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 13) )
          {
            v41 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v40);
            zzzLockDisplayAreaAndInvalidateDCCache(v41, 16LL);
          }
          tagWND::RedirectedRecttagWNDrcWindow::operator&(a1 + 16);
          xxxRedrawWindow(0LL);
        }
      }
    }
  }
  else if ( IsTrayWindow((struct tagWND *)a1, 1) && !(unsigned int)IsGhostWindow((const struct tagWND *)a1) )
  {
    PostShellHookMessages(2LL, *a1);
  }
  if ( (*(_BYTE *)(a1[5] + 31) & 0x40) == 0 )
  {
    xxxDW_DestroyOwnedWindows(a1);
    DWP_SetHotKey((struct tagWND *)a1, 0);
  }
  if ( !v6 )
  {
    v95 = 0LL;
    v94 = 0LL;
    v42 = operator|(16LL, 2LL);
    v43 = operator|(v42, 32LL);
    v102 = operator|(v43, 8LL);
    v44 = v102;
    v45 = 0;
    v46 = tagTHREADINFO::GetQ(v3);
    if ( a1 == (__int64 *)tagQ::GetActiveWindow(v46) )
    {
      if ( *(char *)(a1[5] + 31) < 0 && SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 15) )
      {
        v50 = (__int64 *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(v49);
        v45 = 1;
      }
      else
      {
        v50 = a1;
      }
    }
    else
    {
      v51 = tagTHREADINFO::GetQ(v3);
      if ( tagQ::GetActiveWindow(v51) || (struct tagQ *)gpqForeground != tagTHREADINFO::GetQ(v3) )
        goto LABEL_109;
      v50 = a1;
      operator|=(&v102);
      v44 = v102;
    }
    if ( v50 )
    {
      if ( v45 )
      {
        if ( IsImmersiveBand((__int64)v50, v47, v48) && *(char *)(v50[5] + 20) < 0 )
        {
          for ( j = v50 + 15; SharedPointerBase<tagSBINFO>::operator unsigned __int64(j); j = v53 + 15 )
          {
            if ( tagWND::HasState((__int64)a1, 256) && *(char *)(v53[5] + 20) >= 0 )
            {
              v50 = v53;
              break;
            }
          }
        }
        *(_QWORD *)&v94 = *((_QWORD *)v3 + 52);
        *((_QWORD *)v3 + 52) = &v94;
        *((_QWORD *)&v94 + 1) = v50;
        HMLockObject(v50);
        if ( tagWND::HasState((__int64)a1, 256) )
          xxxEnableWindow((struct tagWND *)v50, 1);
      }
      v56 = xxxActivateWindowWithOptions((struct tagWND *)v50, (unsigned int)v45 + 2, v44, 1);
      if ( v45 )
        ThreadUnlock1(v55, v54, v57);
      if ( !v56 || !v45 && (v58 = tagTHREADINFO::GetQ(v3), a1 == (__int64 *)tagQ::GetActiveWindow(v58)) )
      {
        if ( !v45 || (v59 = tagTHREADINFO::GetQ(v3), a1 == (__int64 *)tagQ::GetActiveWindow(v59)) )
        {
          v60 = tagTHREADINFO::GetQ(v3);
          tagQ::SetActiveWindow(v60, 0LL);
          v61 = tagTHREADINFO::GetQ(v3);
          v62 = tagQ::UnlockFocusWnd(v61);
          v63 = v62;
          if ( (*gpsi & 4) != 0 && v62 )
          {
            *(_QWORD *)&v98 = *((_QWORD *)v3 + 52);
            *((_QWORD *)v3 + 52) = &v98;
            *((_QWORD *)&v98 + 1) = v62;
            HMLockObject(v62);
            xxxFocusSetInputContext(v63, 0, 0);
            v63 = (struct tagWND *)ThreadUnlock1(v65, v64, v66);
          }
          if ( tagTHREADINFO::GetQ(v3) == (struct tagQ *)gpqForeground )
          {
            if ( v63 )
              zzzInputFocusLostWindowEvent(v63, 9LL);
            xxxWindowEvent(0x8005u, 0);
            xxxWindowEvent(3u, 1);
          }
          zzzInternalDestroyCaret();
        }
      }
    }
  }
LABEL_109:
  v67 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 15);
  if ( v67 )
  {
    while ( (unsigned __int8)SharedPointerBase<unsigned short>::operator!=(v67 + 120) )
      v67 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v69);
    if ( a1 == (__int64 *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(v68 + 200) )
    {
      v71 = EPOINTFIX::EPOINTFIX(v70);
      if ( (*(_BYTE *)(_HMPheFromObject(v72) + 25) & 1) != 0 )
      {
        v73 = UnlockPointer(v71);
        HMAssignmentUnlock(v73);
      }
      else
      {
        SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 15);
        v101[0] = *(_OWORD *)LockPointer(&v94, v71);
        HMAssignmentLock(v101, 0LL);
      }
    }
  }
  if ( !v6 )
  {
    if ( *(char *)(a1[5] + 19) >= 0 )
      xxxWindowEvent(0x8001u, 0);
    xxxDW_SendDestroyMessages((const struct tagWND *)a1);
  }
  v74 = (_DWORD *)((char *)v3 + 488);
  if ( (*gpsi & 4) == 0 )
    goto LABEL_139;
  if ( (unsigned int)operator&((unsigned int)*v74, 1LL) )
    goto LABEL_139;
  if ( !*((_QWORD *)v3 + 98) )
    goto LABEL_139;
  if ( (*(_BYTE *)(*(_QWORD *)(SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 17) + 8) + 10LL) & 1) != 0 )
    goto LABEL_139;
  v76 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v75);
  if ( !(unsigned __int8)tagCLS::RedirectedFieldatomClassName<unsigned short>::operator!=(v76 + 24, v77 + 898) || v6 )
    goto LABEL_139;
  if ( (*(_BYTE *)(a1[5] + 31) & 0x40) != 0 )
  {
    if ( (unsigned __int8)SharedPointerBase<unsigned short>::operator!=(a1 + 13)
      && ImeCanDestroyDefIMEforChild(v80, (struct tagWND *)a1) )
    {
      v79 = *((_QWORD *)v3 + 98);
LABEL_134:
      xxxDestroyWindow(v79);
    }
  }
  else
  {
    ++gdwDeferWinEvent;
    CanDestroyDefIME = zzzImeCanDestroyDefIME(*((struct tagWND **)v3 + 98), (struct tagWND *)a1);
    zzzEndDeferWinEventNotify();
    if ( CanDestroyDefIME )
    {
      v79 = *((_QWORD *)v3 + 98);
      if ( v79 )
        goto LABEL_134;
    }
  }
  if ( *((_QWORD *)v3 + 98) && *((_DWORD *)v3 + 228) == 1 && tagWND::HasState((__int64)a1, 0x10000000) )
    xxxDestroyWindow(v81);
LABEL_139:
  if ( SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 13) && !v6 )
  {
    v83 = *(_QWORD *)(SharedPointerBase<tagSBINFO>::operator unsigned __int64(v82) + 16);
    if ( *(__int64 **)(v83 + 1440) == a1 )
    {
      v84 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(v83 + 1440));
      HMAssignmentUnlock(v84);
      DisassociateShellFrameAppThreads2(v83, v3);
    }
    if ( (*(_BYTE *)(a1[5] + 31) & 0xC0) == 0x40 && !IsTopLevelWindow((__int64)a1) )
    {
      v85 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 13);
      if ( v87 != *(_QWORD *)(v85 + 16) )
      {
        v88 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v86);
        zzzAttachThreadInput(v89, *(_QWORD *)(v88 + 16), 0LL);
      }
    }
    if ( SharedPointerBase<tagSBINFO>::operator unsigned __int64(a1 + 13) )
    {
      v91 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v90);
      UnlinkWindow(a1, v91);
    }
  }
  SetWF(a1, 896LL);
  xxxFreeWindow((struct tagWND *)a1, (__int64)v100);
  if ( v6 )
  {
    v92 = operator~(0x10000000LL);
    v93 = operator&((unsigned int)*v74, v92);
    *v74 = operator|(v93, v103);
  }
  return 1LL;
}
