/*
 * XREFs of ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00549A0
 * Callers:
 *     _PostTransformableMessage @ 0x1C003F8B8 (_PostTransformableMessage.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00435B0 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     _PostMessageExtended @ 0x1C0054290 (_PostMessageExtended.c)
 *     NtUserPostMessage @ 0x1C0054600 (NtUserPostMessage.c)
 *     xxxDoHotKeyStuff @ 0x1C0104F50 (xxxDoHotKeyStuff.c)
 *     ?GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z @ 0x1C0258034 (-GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1C003FDE8 (xxxBroadcastMessageEx.c)
 *     SetWakeBit @ 0x1C0051880 (SetWakeBit.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C00551A0 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     WPP_RECORDER_SF_qqdd @ 0x1C0058500 (WPP_RECORDER_SF_qqdd.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C005BA10 (TransformMessageBetweenCoordinateSpaces.c)
 *     DelQEntry @ 0x1C00667AC (DelQEntry.c)
 *     HMValidateHandle @ 0x1C0067040 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     _PostThreadMessage @ 0x1C00DA3F8 (_PostThreadMessage.c)
 *     ProcessSuspendedPostMessage @ 0x1C0126548 (ProcessSuspendedPostMessage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     IsMiPEnabledForWindow @ 0x1C01E18C8 (IsMiPEnabledForWindow.c)
 *     xxxDDETrackPostHook @ 0x1C021CACC (xxxDDETrackPostHook.c)
 */

unsigned __int64 __fastcall _PostTransformableMessageExtended(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        struct tagINPUT_MESSAGE_SOURCE *a5,
        int a6)
{
  struct tagINPUT_MESSAGE_SOURCE *v6; // rbx
  _DWORD *v7; // rdi
  unsigned int v9; // r10d
  struct tagWND *v10; // rsi
  struct tagINPUT_MESSAGE_SOURCE *v11; // r13
  struct _KTHREAD *CurrentThread; // r14
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 CurrentProcessWin32Process; // r14
  unsigned int v21; // r8d
  int v22; // r12d
  __int64 v23; // rbx
  tagObjLock *v24; // r14
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // r15
  __int64 v27; // rdx
  unsigned int v28; // ecx
  unsigned __int64 v29; // r15
  int v30; // r12d
  _DWORD *v31; // rax
  _DWORD *v32; // r14
  int v33; // r8d
  int v34; // r9d
  _QWORD *v35; // rcx
  int v36; // eax
  _QWORD *v37; // rax
  int v38; // eax
  __int64 v39; // rcx
  tagObjLock *v40; // rsi
  unsigned int v41; // eax
  tagDomLock *v42; // r15
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int128 *v48; // rdx
  __int64 v49; // rax
  __int128 *v50; // rcx
  __int64 v51; // xmm1_8
  __int128 *v52; // rax
  __int64 v53; // xmm1_8
  __int128 v54; // xmm0
  __int64 v55; // xmm1_8
  __int128 v56; // xmm0
  __int64 v57; // xmm1_8
  __int64 v58; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v61; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v63; // rcx
  unsigned int v64; // ebx
  __int64 v65; // rax
  struct _KEVENT *v66; // rcx
  int v67; // [rsp+20h] [rbp-99h]
  int v68; // [rsp+70h] [rbp-49h]
  unsigned __int64 v69; // [rsp+78h] [rbp-41h]
  __int64 v70; // [rsp+80h] [rbp-39h] BYREF
  tagObjLock *v71; // [rsp+88h] [rbp-31h]
  tagDomLock *v72; // [rsp+90h] [rbp-29h]
  __int128 v73; // [rsp+98h] [rbp-21h]
  __int64 v74; // [rsp+A8h] [rbp-11h]
  __int128 v75; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v76; // [rsp+C0h] [rbp+7h]
  unsigned int v77; // [rsp+118h] [rbp+5Fh] BYREF
  unsigned __int64 v78; // [rsp+120h] [rbp+67h] BYREF
  __int64 v79; // [rsp+128h] [rbp+6Fh] BYREF

  v79 = (__int64)a4;
  v78 = a3;
  v77 = a2;
  v6 = a5;
  v7 = 0LL;
  v76 = 0LL;
  v70 = 0LL;
  v9 = a2;
  v10 = (struct tagWND *)a1;
  v75 = 0LL;
  if ( !a5 )
  {
    SetUnavailableInputSource(&v70);
    a4 = (struct _LARGE_STRING *)v79;
    v9 = v77;
  }
  v11 = (struct tagINPUT_MESSAGE_SOURCE *)&v70;
  if ( v6 )
    v11 = v6;
  if ( v9 < 0x400 )
  {
    a1 = 512LL;
    if ( (MessageTable[v9] & 0x200) != 0 || v9 == 537 && (a3 & 0x8000) != 0 )
      goto LABEL_90;
  }
  if ( v9 != 536 )
  {
    if ( v9 - 577 <= 3 )
      goto LABEL_92;
    goto LABEL_8;
  }
  if ( (a3 & 0x8000) != 0 )
  {
LABEL_90:
    UserSetLastError(1159LL);
    return 0LL;
  }
LABEL_8:
  if ( v9 - 581 > 0x12 || v9 == 589 )
  {
    if ( v9 != 528 || (_DWORD)a3 != 66118 )
      goto LABEL_10;
    goto LABEL_93;
  }
LABEL_92:
  if ( (_WORD)a3 != 1 )
    goto LABEL_10;
LABEL_93:
  if ( v10 && !(unsigned int)IsMiPEnabledForWindow(v10) )
  {
    LODWORD(a5) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3973LL);
    return 0LL;
  }
LABEL_10:
  if ( v10 == (struct tagWND *)-1LL )
  {
    xxxBroadcastMessageEx(0LL, v9, a3, a4, 2u, 0LL, 0, 0);
    return 1LL;
  }
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v15, v14, v16),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v61),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  if ( !v10 )
    return (unsigned int)PostThreadMessage(v13, v77, v78) != 0;
  v19 = *(_QWORD *)(*((_QWORD *)v10 + 2) + 424LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
  if ( v19 != CurrentProcessWin32Process )
  {
    v21 = v77;
    if ( v77 > 0x288 )
      goto LABEL_17;
    if ( v77 > 0xD0 )
    {
      if ( v77 == 272 )
      {
LABEL_107:
        UserSetLastError(5LL);
        return 0LL;
      }
      if ( v77 != 353 && v77 != 424 && v77 != 563 && v77 != 648 )
        goto LABEL_17;
    }
    else if ( v77 != 208 )
    {
      switch ( v77 )
      {
        case 0xCu:
        case 0xBCu:
          goto LABEL_103;
        case 0xDu:
        case 0xC4u:
        case 0xCCu:
          if ( *(_WORD *)(gpsi + 870LL) != *(_WORD *)(*(_QWORD *)(*((_QWORD *)v10 + 17) + 8LL) + 2LL)
            || (*(_BYTE *)(*((_QWORD *)v10 + 5) + 28LL) & 0x20) == 0 )
          {
            goto LABEL_17;
          }
          UserSetLastError(5LL);
          break;
        case 0x4Eu:
          goto LABEL_107;
        default:
          goto LABEL_17;
      }
      goto LABEL_107;
    }
LABEL_103:
    if ( (unsigned __int8)Enforced() && *(_QWORD *)v19 != gpepCSRSS
      || *(_DWORD *)(v19 + 780) == *(_DWORD *)(CurrentProcessWin32Process + 780)
      && *(_DWORD *)(v19 + 784) == *(_DWORD *)(CurrentProcessWin32Process + 784) )
    {
      goto LABEL_16;
    }
    goto LABEL_107;
  }
LABEL_16:
  v21 = v77;
LABEL_17:
  v68 = 0;
  v22 = 0;
  v69 = v78;
  if ( v21 - 992 > 8 )
    goto LABEL_18;
  *(_QWORD *)&v75 = *(_QWORD *)(v13 + 416);
  *(_QWORD *)(v13 + 416) = &v75;
  *((_QWORD *)&v75 + 1) = v10;
  HMLockObject(v10);
  v64 = xxxDDETrackPostHook(&v77, v10, 0);
  if ( v64 == 2 )
  {
    v22 = 1;
    v68 = 1;
LABEL_18:
    v23 = *((_QWORD *)v10 + 2);
    v24 = (tagObjLock *)(v23 + 848);
    v71 = (tagObjLock *)(v23 + 848);
    DLT = DLT_POST::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    v72 = DomainLockRef;
    if ( v23 + 848 == gObjDummyLock )
    {
      LODWORD(a5) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 360LL);
    }
    tagDomLock::LockShared(DomainLockRef);
    tagObjLock::LockExclusive((tagObjLock *)(v23 + 848));
    v28 = v77;
    if ( v77 == 30 || v77 - 912 <= 0xF )
    {
      v27 = *(_QWORD *)(v23 + 816);
      if ( v27 )
      {
        if ( *(_DWORD *)(v27 + 24) == v77 && *(_QWORD *)(v27 + 16) == *(_QWORD *)v10 )
        {
          DelQEntry(v23 + 808, v27, 1LL);
          v28 = v77;
        }
      }
    }
    if ( v28 - 256 <= 9 )
    {
      v46 = *(_QWORD *)(v23 + 432);
      v47 = *(_QWORD *)(v46 + 96);
      if ( v47 )
        v48 = (__int128 *)(v47 + 392);
      else
        v48 = (__int128 *)gObjDummyLock;
      v49 = *(_QWORD *)(v46 + 88);
      if ( v49 )
        v50 = (__int128 *)(v49 + 392);
      else
        v50 = (__int128 *)gObjDummyLock;
      v51 = *((_QWORD *)&gpsiLock + 2);
      v52 = *(__int128 **)(v23 + 432);
      v73 = gpsiLock;
      v74 = v51;
      v53 = *((_QWORD *)v52 + 2);
      v73 = *v52;
      v54 = *v50;
      v74 = v53;
      v55 = *((_QWORD *)v50 + 2);
      v73 = v54;
      v56 = *v48;
      v74 = v55;
      v57 = *((_QWORD *)v48 + 2);
      v73 = v56;
      v74 = v57;
      PostUpdateKeyStateEvent(v52);
    }
    else if ( v28 == 576 )
    {
      LOBYTE(v27) = 20;
      if ( !HMValidateHandle(v79, v27) )
        goto LABEL_72;
    }
    else if ( v28 == 281 )
    {
      LOBYTE(v27) = 21;
      if ( !HMValidateHandle(v79, v27) )
        goto LABEL_72;
    }
    if ( (*(_DWORD *)(v23 + 1232) & 0x20) == 0 )
      goto LABEL_26;
    if ( v23 == W32GetThreadWin32Thread(KeGetCurrentThread()) )
    {
      v29 = v78;
      goto LABEL_27;
    }
    v67 = v79;
    v69 = v78;
    if ( (unsigned int)ProcessSuspendedPostMessage(v23, v10, v77) )
    {
LABEL_26:
      v29 = v69;
LABEL_27:
      v30 = 0;
      if ( *(_DWORD *)(v23 + 824) >= gUserPostMessageLimit )
      {
        UserSetLastError(1816LL);
        v32 = 0LL;
      }
      else
      {
        v31 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
        v32 = v31;
        if ( v31 )
        {
          memset(v31, 0, 0xA0uLL);
          v35 = (_QWORD *)(v23 + 808);
          v36 = 4;
          if ( *(_DWORD *)(v23 + 828) == 2 )
            v36 = 8;
          v32[25] |= v36;
          v37 = *(_QWORD **)(v23 + 816);
          if ( v37 )
          {
            *v37 = v32;
            *((_QWORD *)v32 + 1) = *(_QWORD *)(v23 + 816);
          }
          else
          {
            *v35 = v32;
          }
          *(_QWORD *)(v23 + 816) = v32;
          v38 = *(_DWORD *)(v23 + 824) + 1;
          *(_DWORD *)(v23 + 824) = v38;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqdd(
              (_DWORD)v35,
              (unsigned int)&WPP_RECORDER_INITIALIZED,
              v33,
              v34,
              v67,
              (char)v32,
              v23 + 40,
              *(_DWORD *)(v23 + 828),
              v38);
          if ( a6 && (unsigned int)IsWindowDesktopComposed(v10) )
            TransformMessageBetweenCoordinateSpaces(v77, 0, (unsigned int)&v78, (unsigned int)&v79, (__int64)v10, 0LL);
          StoreQMessage(
            (struct tagQMSG *)v32,
            v10,
            v77,
            v29,
            v79,
            0,
            0LL,
            0,
            0LL,
            0,
            v11,
            *(_DWORD *)(*((_QWORD *)v10 + 5) + 288LL),
            0LL,
            0LL);
          v39 = v77;
          if ( v77 == 576 || v77 == 281 )
          {
            v65 = _HMObjectFromHandle(v79);
            if ( v65 )
              HMChangeOwnerThread(v65, v23);
          }
          if ( (*(_DWORD *)(v23 + 488) & 1) == 0 )
          {
            *(_WORD *)(*(_QWORD *)(v23 + 448) + 6LL) |= 0x108u;
            *(_WORD *)(*(_QWORD *)(v23 + 448) + 4LL) |= 0x108u;
            if ( (*(_WORD *)(*(_QWORD *)(v23 + 448) + 10LL) & 0x108) != 0 )
              KeSetEvent(*(PRKEVENT *)(v23 + 736), 2, 0);
          }
          if ( v77 == 786 )
          {
            if ( (*(_DWORD *)(v23 + 1232) & 0x40000) != 0 )
            {
              v66 = *(struct _KEVENT **)(v23 + 1384);
              if ( v66 )
                KeSetEvent(v66, 1, 0);
            }
            SetWakeBit(v23, 0x80u);
          }
          v30 = 1;
        }
        else
        {
          UserSetLastError(8LL);
          v32 = 0LL;
        }
      }
      v40 = *(tagObjLock **)(v23 + 432);
      v41 = DLT_QUEUE::getDLT(v39);
      v42 = (tagDomLock *)GetDomainLockRef(v41);
      if ( v40 == (tagObjLock *)gObjDummyLock )
      {
        LODWORD(a5) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 360LL);
      }
      tagDomLock::LockShared(v42);
      tagObjLock::LockExclusive(v40);
      v43 = *(_QWORD *)(v23 + 432);
      if ( v23 == *(_QWORD *)(v43 + 64) )
        *(_QWORD *)(v43 + 72) = v32;
      tagObjLock::UnLockExclusive(v40);
      tagDomLock::UnLockShared(v42);
      if ( v68 )
        ThreadUnlock1(v44);
      DomainLockRef = v72;
      if ( v30 )
        v7 = v32;
      v24 = v71;
LABEL_54:
      tagObjLock::UnLockExclusive(v24);
      tagDomLock::UnLockShared(DomainLockRef);
      return (unsigned __int64)v7;
    }
LABEL_72:
    if ( v22 )
      ThreadUnlock1(v58);
    goto LABEL_54;
  }
  ThreadUnlock1(v63);
  return v64;
}
