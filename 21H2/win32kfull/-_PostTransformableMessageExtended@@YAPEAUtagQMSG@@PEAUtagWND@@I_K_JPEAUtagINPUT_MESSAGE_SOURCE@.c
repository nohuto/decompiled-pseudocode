/*
 * XREFs of ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0054A60
 * Callers:
 *     NtUserPostMessage @ 0x1C0054740 (NtUserPostMessage.c)
 *     _PostMessageExtended @ 0x1C00A5EEC (_PostMessageExtended.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00A6180 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     _PostTransformableMessage @ 0x1C00A755C (_PostTransformableMessage.c)
 *     xxxDoHotKeyStuff @ 0x1C00F6330 (xxxDoHotKeyStuff.c)
 *     ?GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z @ 0x1C0255360 (-GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqdd @ 0x1C0057F9C (WPP_RECORDER_AND_TRACE_SF_qqdd.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0058160 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C005849C (TransformMessageBetweenCoordinateSpaces.c)
 *     DelQEntry @ 0x1C005BE3C (DelQEntry.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxBroadcastMessageEx @ 0x1C00A9E58 (xxxBroadcastMessageEx.c)
 *     _PostThreadMessage @ 0x1C00AB08C (_PostThreadMessage.c)
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 *     vDLOrderDispositionCompare @ 0x1C00E0C80 (vDLOrderDispositionCompare.c)
 *     vOLOrderCompare @ 0x1C00E0F80 (vOLOrderCompare.c)
 *     ProcessSuspendedPostMessage @ 0x1C011907C (ProcessSuspendedPostMessage.c)
 *     ??$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z @ 0x1C0123C4C (--$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     IsMiPEnabledForWindow @ 0x1C01DCDE0 (IsMiPEnabledForWindow.c)
 *     xxxDDETrackPostHook @ 0x1C0217FF8 (xxxDDETrackPostHook.c)
 */

unsigned __int64 __fastcall _PostTransformableMessageExtended(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagINPUT_MESSAGE_SOURCE *a5,
        int a6)
{
  _DWORD *v6; // r14
  int v7; // ebx
  unsigned int v8; // r10d
  __int64 v10; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rsi
  unsigned int v16; // r8d
  int v17; // edi
  __int64 v18; // r15
  __int128 *v19; // rsi
  __int128 *v20; // rdi
  __int64 v21; // rbx
  unsigned int DLT; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // xmm1_8
  __int128 v27; // xmm0
  __int64 v28; // xmm1_8
  __int128 v29; // xmm0
  __int64 v30; // xmm1_8
  unsigned int i; // ebx
  unsigned int j; // ebx
  __int64 v33; // rdx
  unsigned int v34; // edi
  char *v35; // rbx
  tagDomLock *v36; // rcx
  unsigned int v37; // edi
  tagObjLock **p_Base; // rbx
  int v39; // edi
  int v40; // esi
  _DWORD *v41; // rax
  _DWORD *v42; // rbx
  int v43; // edx
  int v44; // r8d
  int v45; // ecx
  _QWORD *v46; // rax
  int v47; // r9d
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // ebx
  tagObjLock **v53; // rsi
  char *v54; // rbx
  tagDomLock *v55; // rcx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  unsigned int v62; // ebx
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rax
  struct _KEVENT *v68; // rcx
  int v69; // [rsp+20h] [rbp-E0h]
  unsigned int v70; // [rsp+70h] [rbp-90h] BYREF
  __int64 v71; // [rsp+78h] [rbp-88h]
  int v72; // [rsp+80h] [rbp-80h]
  unsigned __int64 v73; // [rsp+88h] [rbp-78h]
  unsigned __int64 v74; // [rsp+90h] [rbp-70h]
  __int64 v75; // [rsp+98h] [rbp-68h] BYREF
  struct tagINPUT_MESSAGE_SOURCE *v76; // [rsp+A0h] [rbp-60h]
  __int128 v77; // [rsp+A8h] [rbp-58h]
  __int64 v78; // [rsp+B8h] [rbp-48h]
  __int128 v79; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v80; // [rsp+D0h] [rbp-30h]
  __int64 DomainLockRef; // [rsp+E0h] [rbp-20h] BYREF
  char v82; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v83; // [rsp+F0h] [rbp-10h]
  char v84; // [rsp+F8h] [rbp-8h]
  __int64 v85; // [rsp+100h] [rbp+0h]
  char v86; // [rsp+108h] [rbp+8h] BYREF
  __int64 v87; // [rsp+110h] [rbp+10h]
  char v88; // [rsp+118h] [rbp+18h]
  __int128 Base; // [rsp+120h] [rbp+20h] BYREF
  __int128 v90; // [rsp+130h] [rbp+30h] BYREF
  char v91; // [rsp+140h] [rbp+40h]

  v70 = a2;
  v6 = 0LL;
  v80 = 0LL;
  v7 = a3;
  v73 = a3;
  v71 = a4;
  v8 = a2;
  v75 = 0LL;
  v76 = a5;
  v79 = 0LL;
  if ( !a5 )
  {
    SetUnavailableInputSource(&v75);
    v8 = v70;
    v76 = (struct tagINPUT_MESSAGE_SOURCE *)&v75;
  }
  if ( v8 < 0x400 && ((MessageTable[v8] & 0x200) != 0 || v8 == 537 && (v7 & 0x8000) != 0) )
    goto LABEL_115;
  if ( v8 != 536 )
  {
    if ( v8 - 577 <= 3 )
      goto LABEL_117;
    goto LABEL_6;
  }
  if ( (v7 & 0x8000) != 0 )
  {
LABEL_115:
    UserSetLastError(1159LL);
    return 0LL;
  }
LABEL_6:
  if ( v8 - 581 > 0x12 || v8 == 589 )
  {
    if ( v8 != 528 || v7 != 66118 )
      goto LABEL_8;
    goto LABEL_118;
  }
LABEL_117:
  if ( (_WORD)v7 != 1 )
    goto LABEL_8;
LABEL_118:
  if ( !a1 )
    goto LABEL_9;
  if ( !(unsigned int)IsMiPEnabledForWindow(a1) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v59);
    return 0LL;
  }
LABEL_8:
  if ( a1 == (struct tagWND *)-1LL )
  {
    xxxBroadcastMessageEx(0LL, v8);
    return 1LL;
  }
LABEL_9:
  v10 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v10 = *ThreadWin32Thread;
  if ( !a1 )
    return (unsigned int)PostThreadMessage(v10, v70, v73, v71) != 0;
  v13 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
  if ( v13 == CurrentProcessWin32Process )
    goto LABEL_13;
  v16 = v70;
  if ( v70 <= 0x288 )
  {
    if ( v70 <= 0xD0 )
    {
      if ( v70 != 208 )
      {
        switch ( v70 )
        {
          case 0xCu:
          case 0xBCu:
            goto LABEL_126;
          case 0xDu:
          case 0xC4u:
          case 0xCCu:
            if ( *(_WORD *)(gpsi + 870LL) != *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 2LL)
              || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 28LL) & 0x20) == 0 )
            {
              goto LABEL_14;
            }
            UserSetLastError(5LL);
            break;
          case 0x4Eu:
            goto LABEL_130;
          default:
            goto LABEL_14;
        }
        goto LABEL_130;
      }
      goto LABEL_126;
    }
    if ( v70 == 272 )
      goto LABEL_130;
    if ( v70 == 353 || v70 == 424 || v70 == 563 || v70 == 648 )
    {
LABEL_126:
      if ( (unsigned __int8)Enforced(v14) && *(_QWORD *)v13 != gpepCSRSS
        || *(_DWORD *)(v13 + 780) == *(_DWORD *)(CurrentProcessWin32Process + 780)
        && *(_DWORD *)(v13 + 784) == *(_DWORD *)(CurrentProcessWin32Process + 784) )
      {
LABEL_13:
        v16 = v70;
        goto LABEL_14;
      }
LABEL_130:
      UserSetLastError(5LL);
      return 0LL;
    }
  }
LABEL_14:
  v72 = 0;
  v17 = 0;
  v74 = v73;
  if ( v16 - 992 <= 8 )
  {
    *(_QWORD *)&v79 = *(_QWORD *)(v10 + 416);
    *(_QWORD *)(v10 + 416) = &v79;
    *((_QWORD *)&v79 + 1) = a1;
    HMLockObject(a1);
    v62 = xxxDDETrackPostHook(&v70, a1, 0);
    if ( v62 != 2 )
    {
      ThreadUnlock1(v61, v60, v63);
      return v62;
    }
    v16 = v70;
    v17 = 1;
    v72 = 1;
  }
  v18 = *((_QWORD *)a1 + 2);
  if ( v16 - 256 <= 9 )
  {
    PostUpdateKeyStateEvent(*(_QWORD *)(v18 + 432));
  }
  else if ( v16 == 576 )
  {
    if ( !HMValidateHandle(v71, 0x14u) )
    {
      if ( !v17 )
        return 0LL;
      goto LABEL_139;
    }
  }
  else if ( v16 == 281 && !HMValidateHandle(v71, 0x15u) )
  {
    if ( !v17 )
      return 0LL;
LABEL_139:
    ThreadUnlock1(v65, v64, v66);
    return 0LL;
  }
  v19 = *(__int128 **)(v18 + 432);
  v20 = (__int128 *)(v18 + 848);
  v21 = v18 + 392;
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = GetDomainLockRef(DLT);
  v82 = 0;
  v23 = DLT_QUEUE::getDLT();
  v83 = GetDomainLockRef(v23);
  v84 = 0;
  v24 = DLT_POST::getDLT();
  v25 = GetDomainLockRef(v24);
  v86 = 0;
  v85 = v25;
  Base = 0LL;
  v87 = gDomainDummyLock;
  v90 = 0LL;
  v88 = 0;
  v91 = 0;
  v26 = *(_QWORD *)(v18 + 408);
  if ( v18 + 392 == gObjDummyLock )
    v21 = 0LL;
  v77 = *(_OWORD *)(v18 + 392);
  v27 = *v20;
  v78 = v26;
  v28 = *(_QWORD *)(v18 + 864);
  if ( v20 == (__int128 *)gObjDummyLock )
    v20 = 0LL;
  v77 = v27;
  v29 = *v19;
  v78 = v28;
  v30 = *((_QWORD *)v19 + 2);
  if ( v19 == (__int128 *)gObjDummyLock )
    v19 = 0LL;
  *(_QWORD *)&Base = v19;
  v77 = v29;
  *(_QWORD *)&v90 = v21;
  v78 = v30;
  *((_QWORD *)&Base + 1) = v20;
  qsort(&Base, 3uLL, 8uLL, vOLOrderCompare);
  for ( i = 1; i < 3; ++i )
  {
    if ( !vOLOrderCompare((char *)&Base + 8 * (int)i, (char *)&Base + 8 * (int)(i - 1)) )
      ClearCObjLock<tagObjLock *>((char *)&Base + 8 * (int)(i - 1));
  }
  qsort(&DomainLockRef, 3uLL, 0x10uLL, vDLOrderDispositionCompare);
  for ( j = 1; j < 3; ++j )
  {
    if ( !vDLOrderDispositionCompare(&DomainLockRef + 2 * (int)j, &DomainLockRef + 2 * (int)(j - 1)) )
      ClearCObjLock<tagObjLock *>(&DomainLockRef + 2 * (int)(j - 1));
  }
  if ( !v91 )
  {
    v34 = 0;
    v35 = &v82;
    do
    {
      v36 = (tagDomLock *)*((_QWORD *)v35 - 1);
      if ( v36 )
      {
        if ( *v35 )
          tagDomLock::LockExclusive(v36);
        else
          tagDomLock::LockShared(v36);
      }
      ++v34;
      v35 += 16;
    }
    while ( v34 < 3 );
    v37 = 0;
    p_Base = (tagObjLock **)&Base;
    do
    {
      if ( *p_Base )
        tagObjLock::LockExclusive(*p_Base);
      ++v37;
      ++p_Base;
    }
    while ( v37 < 3 );
    v91 = 1;
  }
  if ( v70 == 30 || v70 - 912 <= 0xF )
  {
    v33 = *(_QWORD *)(v18 + 816);
    if ( v33 )
    {
      if ( *(_DWORD *)(v33 + 24) == v70 && *(_QWORD *)(v33 + 16) == *(_QWORD *)a1 )
        DelQEntry(v18 + 808, v33, 1LL);
    }
  }
  v39 = 2;
  if ( (*(_DWORD *)(v18 + 1256) & 0x20) != 0 )
  {
    if ( v18 == W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    {
      v74 = v73;
    }
    else
    {
      v69 = v71;
      v74 = v73;
      if ( !(unsigned int)ProcessSuspendedPostMessage(v18, a1, v70, v73) )
      {
        if ( v72 )
          ThreadUnlock1(v57, v33, v58);
        goto LABEL_74;
      }
    }
  }
  v40 = 0;
  if ( *(_DWORD *)(v18 + 824) >= gUserPostMessageLimit )
  {
    UserSetLastError(1816LL);
    v42 = 0LL;
  }
  else
  {
    v41 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside, v33);
    v42 = v41;
    if ( v41 )
    {
      memset(v41, 0, 0xA0uLL);
      v45 = v42[25] | 4;
      if ( *(_DWORD *)(v18 + 828) == 2 )
        v45 = v42[25] | 8;
      v42[25] = v45;
      v46 = *(_QWORD **)(v18 + 816);
      if ( v46 )
      {
        *v46 = v42;
        *((_QWORD *)v42 + 1) = *(_QWORD *)(v18 + 816);
      }
      else
      {
        *(_QWORD *)(v18 + 808) = v42;
      }
      *(_QWORD *)(v18 + 816) = v42;
      v47 = *(_DWORD *)(v18 + 824) + 1;
      *(_DWORD *)(v18 + 824) = v47;
      LOBYTE(v43) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v44) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qqdd(WPP_GLOBAL_Control->AttachedDevice, v43, v44, v47, v69);
      }
      if ( a6 && (unsigned int)IsWindowDesktopComposed(a1) )
        TransformMessageBetweenCoordinateSpaces(v70, (__int64)a1, 0LL);
      StoreQMessage(
        (struct tagQMSG *)v42,
        a1,
        v70,
        v74,
        v71,
        0,
        0LL,
        0,
        0LL,
        0,
        v76,
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL),
        0LL,
        0LL);
      v50 = v70;
      if ( v70 == 576 || v70 == 281 )
      {
        v67 = _HMObjectFromHandle(v71);
        if ( v67 )
          HMChangeOwnerThread(v67, v18);
      }
      if ( (*(_DWORD *)(v18 + 488) & 1) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v18 + 448) + 8LL), 0x108u);
        _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v18 + 448) + 4LL), 0x108u);
        if ( (*(_DWORD *)(*(_QWORD *)(v18 + 448) + 16LL) & 0x108) != 0 )
          KeSetEvent(*(PRKEVENT *)(v18 + 736), 2, 0);
      }
      if ( v70 == 786 )
      {
        if ( (*(_DWORD *)(v18 + 1256) & 0x40000) != 0 )
        {
          v68 = *(struct _KEVENT **)(v18 + 1384);
          if ( v68 )
            KeSetEvent(v68, 1, 0);
        }
        SetWakeBit(v18, 128LL);
      }
      v40 = 1;
    }
    else
    {
      UserSetLastError(8LL);
      v42 = 0LL;
    }
  }
  v51 = *(_QWORD *)(v18 + 432);
  if ( v18 == *(_QWORD *)(v51 + 64) )
    *(_QWORD *)(v51 + 72) = v42;
  if ( v72 )
    ThreadUnlock1(v50, v48, v49);
  if ( v40 )
    v6 = v42;
LABEL_74:
  if ( v91 )
  {
    v52 = 2;
    v53 = (tagObjLock **)&v90;
    do
    {
      if ( *v53 )
        tagObjLock::UnLockExclusive(*v53);
      --v53;
      --v52;
    }
    while ( v52 >= 0 );
    v54 = &v86;
    do
    {
      v55 = (tagDomLock *)*((_QWORD *)v54 - 1);
      if ( v55 )
      {
        if ( *v54 )
          tagDomLock::UnLockExclusive(v55);
        else
          tagDomLock::UnLockShared(v55);
      }
      v54 -= 16;
      --v39;
    }
    while ( v39 >= 0 );
  }
  return (unsigned __int64)v6;
}
