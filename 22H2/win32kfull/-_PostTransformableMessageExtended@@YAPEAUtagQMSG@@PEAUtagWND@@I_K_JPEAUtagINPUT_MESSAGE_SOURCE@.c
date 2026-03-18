/*
 * XREFs of ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C011E780
 * Callers:
 *     ?xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0010920 (-xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     _PostTransformableMessage @ 0x1C004F59C (_PostTransformableMessage.c)
 *     xxxTranslateMessage @ 0x1C00ACC1C (xxxTranslateMessage.c)
 *     _PostMessage @ 0x1C00B6CD0 (_PostMessage.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00D33C8 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C00D3520 (PostIAMShellHookMessageEx.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C011E130 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     NtUserPostMessage @ 0x1C011E4B0 (NtUserPostMessage.c)
 *     ?GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z @ 0x1C0246A68 (-GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z.c)
 * Callees:
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     xxxBroadcastMessageEx @ 0x1C004C8D0 (xxxBroadcastMessageEx.c)
 *     vDLOrderDispositionCompare @ 0x1C008F8E0 (vDLOrderDispositionCompare.c)
 *     vOLOrderCompare @ 0x1C00902B0 (vOLOrderCompare.c)
 *     _PostThreadMessage @ 0x1C009C5A0 (_PostThreadMessage.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     SetWakeBit @ 0x1C0118350 (SetWakeBit.c)
 *     DelQEntry @ 0x1C01184CC (DelQEntry.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C011F1F0 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqdd @ 0x1C011F540 (WPP_RECORDER_AND_TRACE_SF_qqdd.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C011F610 (TransformMessageBetweenCoordinateSpaces.c)
 *     ??$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z @ 0x1C013100C (--$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ProcessSuspendedPostMessage @ 0x1C015000E (ProcessSuspendedPostMessage.c)
 *     IsMiPEnabledForWindow @ 0x1C0150E7A (IsMiPEnabledForWindow.c)
 *     ??1?$ObjectLock@UtagObjLock@@U1@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@VDLT_POST@@@@QEAA@XZ @ 0x1C01B4FA8 (--1-$ObjectLock@UtagObjLock@@U1@U1@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@VDLT_Q.c)
 *     xxxDDETrackPostHook @ 0x1C01FB334 (xxxDDETrackPostHook.c)
 */

unsigned __int64 __fastcall _PostTransformableMessageExtended(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int128 *a4,
        struct tagINPUT_MESSAGE_SOURCE *a5,
        int a6)
{
  int v6; // r14d
  unsigned int v8; // r10d
  struct tagWND *v9; // r13
  PERESOURCE *v12; // rax
  int v13; // r12d
  __int64 v14; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rbx
  unsigned int v21; // r8d
  int v22; // ebx
  __int64 v23; // rdx
  unsigned int v24; // ebx
  __int64 v25; // r8
  __int64 v26; // r15
  __int128 *v27; // rsi
  __int128 *v28; // rdi
  __int64 v29; // rbx
  unsigned int DLT; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // rax
  __int64 v34; // xmm1_8
  __int128 v35; // xmm0
  __int64 v36; // xmm1_8
  __int128 v37; // xmm0
  int v38; // esi
  unsigned int i; // ebx
  unsigned int j; // ebx
  __int64 v41; // rdx
  __int64 v42; // r9
  unsigned int v43; // edi
  char *v44; // rbx
  tagDomLock *v45; // rcx
  unsigned __int8 v46; // dl
  __int64 v47; // rdx
  __int64 v48; // r8
  unsigned int v49; // edi
  tagObjLock **p_Base; // rbx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  _DWORD *v59; // rbx
  __int64 v60; // rax
  _DWORD *v61; // rax
  int v62; // edx
  int v63; // r8d
  _QWORD *v64; // rax
  int v65; // r9d
  __int64 v66; // rax
  struct _KEVENT *v67; // rcx
  __int64 v68; // rax
  int v69; // ebx
  tagObjLock **v70; // rdi
  char *v71; // rbx
  tagDomLock *v72; // rcx
  unsigned int v73; // [rsp+70h] [rbp-90h] BYREF
  int v74; // [rsp+78h] [rbp-88h]
  __int64 v75; // [rsp+80h] [rbp-80h]
  unsigned __int64 v76; // [rsp+88h] [rbp-78h]
  __int64 v77; // [rsp+90h] [rbp-70h] BYREF
  struct tagINPUT_MESSAGE_SOURCE *v78; // [rsp+98h] [rbp-68h]
  unsigned __int64 v79; // [rsp+A0h] [rbp-60h]
  __int128 v80; // [rsp+A8h] [rbp-58h]
  __int64 v81; // [rsp+B8h] [rbp-48h]
  __int128 v82; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v83; // [rsp+D0h] [rbp-30h]
  __int64 DomainLockRef; // [rsp+E0h] [rbp-20h] BYREF
  char v85; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v86; // [rsp+F0h] [rbp-10h]
  char v87; // [rsp+F8h] [rbp-8h]
  __int64 v88; // [rsp+100h] [rbp+0h]
  char v89; // [rsp+108h] [rbp+8h] BYREF
  __int64 v90; // [rsp+110h] [rbp+10h]
  char v91; // [rsp+118h] [rbp+18h]
  __int128 Base; // [rsp+120h] [rbp+20h] BYREF
  __int128 v93; // [rsp+130h] [rbp+30h] BYREF
  char v94; // [rsp+140h] [rbp+40h]

  v73 = a2;
  v6 = 0;
  v83 = 0LL;
  v76 = a3;
  v75 = (__int64)a4;
  v8 = a2;
  v77 = 0LL;
  v9 = (struct tagWND *)a1;
  v78 = a5;
  v82 = 0LL;
  if ( !a5 )
  {
    SetUnavailableInputSource(&v77);
    v8 = v73;
    a4 = (__int128 *)v75;
    v78 = (struct tagINPUT_MESSAGE_SOURCE *)&v77;
  }
  if ( v8 < 0x400 && (_bittest16(&MessageTable[v8], 9u) || v8 == 537 && (a3 & 0x8000) != 0) )
    goto LABEL_12;
  if ( v8 == 536 )
  {
    if ( (a3 & 0x8000) != 0 )
    {
LABEL_12:
      UserSetLastError(1159);
      return 0LL;
    }
  }
  else if ( v8 - 577 <= 3 )
  {
    goto LABEL_19;
  }
  if ( v8 - 581 > 0x12 || v8 == 589 )
  {
    if ( v8 != 528 || (_WORD)a3 != 582 )
      goto LABEL_25;
    a1 = WORD1(a3) == 1;
    goto LABEL_21;
  }
LABEL_19:
  if ( (_WORD)a3 != 1 )
  {
    a1 = 0LL;
LABEL_21:
    if ( !(_DWORD)a1 )
      goto LABEL_25;
  }
  if ( !v9 )
    goto LABEL_27;
  if ( !(unsigned int)IsMiPEnabledForWindow(v9) )
  {
    v74 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3690LL);
    return 0LL;
  }
LABEL_25:
  if ( v9 == (struct tagWND *)-1LL )
  {
    xxxBroadcastMessageEx(0LL, v8, a3, a4, 2u, 0LL, 0, 0);
    return 1LL;
  }
LABEL_27:
  v12 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  v13 = 2;
  if ( !ExIsResourceAcquiredSharedLite(*v12) )
  {
    v74 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  }
  v14 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v14 = *ThreadWin32Thread;
  if ( !v9 )
    return (unsigned int)PostThreadMessage(v14, v73, v76, v75) != 0;
  v17 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 424LL);
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v16);
  v20 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
    v20 = 0LL;
  if ( (_QWORD *)v17 == v20 )
  {
LABEL_54:
    v21 = v73;
    goto LABEL_55;
  }
  v21 = v73;
  if ( v73 <= 0xD0 )
  {
    if ( v73 != 208 )
    {
      switch ( v73 )
      {
        case 0xCu:
        case 0xBCu:
          goto LABEL_49;
        case 0xDu:
        case 0xC4u:
        case 0xCCu:
          v19 = gpsi;
          if ( *(_WORD *)(gpsi + 870LL) != *(_WORD *)(*(_QWORD *)(*((_QWORD *)v9 + 17) + 8LL) + 2LL)
            || (*(_BYTE *)(*((_QWORD *)v9 + 5) + 28LL) & 0x20) == 0 )
          {
            goto LABEL_55;
          }
          UserSetLastError(5);
          UserSetLastError(5);
          break;
        case 0x4Eu:
          goto LABEL_53;
        default:
          goto LABEL_55;
      }
      return 0LL;
    }
LABEL_49:
    if ( (!(unsigned __int8)Enforced(v19) || *(_QWORD *)v17 == gpepCSRSS)
      && (*(_DWORD *)(v17 + 772) != *((_DWORD *)v20 + 193) || *(_DWORD *)(v17 + 776) != *((_DWORD *)v20 + 194)) )
    {
      goto LABEL_53;
    }
    goto LABEL_54;
  }
  if ( v73 == 272 )
  {
LABEL_53:
    UserSetLastError(5);
    return 0LL;
  }
  if ( v73 == 353 || v73 == 424 || v73 == 563 || v73 == 648 )
    goto LABEL_49;
LABEL_55:
  v79 = v76;
  v22 = 0;
  v74 = 0;
  if ( v21 - 992 <= 8 )
  {
    *(_QWORD *)&v82 = *(_QWORD *)(v14 + 416);
    *(_QWORD *)(v14 + 416) = &v82;
    *((_QWORD *)&v82 + 1) = v9;
    HMLockObject(v9);
    v24 = xxxDDETrackPostHook(&v73, v9);
    if ( v24 != 2 )
    {
      ThreadUnlock1(v19, v23, v25);
      return v24;
    }
    v21 = v73;
    v22 = 1;
    v74 = 1;
  }
  v26 = *((_QWORD *)v9 + 2);
  if ( v21 - 256 <= 9 )
  {
    PostUpdateKeyStateEvent(*(_QWORD *)(v26 + 432));
    goto LABEL_61;
  }
  if ( v21 == 576 )
  {
    v46 = 20;
    goto LABEL_84;
  }
  if ( v21 == 281 )
  {
    v46 = 21;
LABEL_84:
    if ( !HMValidateHandle(v75, v46) )
    {
      if ( v22 )
        ThreadUnlock1(v19, v47, v48);
      return 0LL;
    }
  }
LABEL_61:
  v27 = *(__int128 **)(v26 + 432);
  v28 = (__int128 *)(v26 + 856);
  v29 = v26 + 392;
  DLT = DLT_THREADINFO::getDLT(v19);
  DomainLockRef = GetDomainLockRef(DLT);
  v85 = 0;
  v31 = DLT_QUEUE::getDLT();
  v86 = GetDomainLockRef(v31);
  v87 = 0;
  v32 = DLT_POST::getDLT();
  v33 = GetDomainLockRef(v32);
  v89 = 0;
  v88 = v33;
  Base = 0LL;
  v90 = gDomainDummyLock;
  v93 = 0LL;
  v91 = 0;
  v94 = 0;
  v34 = *(_QWORD *)(v26 + 408);
  if ( v26 + 392 == gObjDummyLock )
    v29 = 0LL;
  v80 = *(_OWORD *)(v26 + 392);
  v35 = *v28;
  v81 = v34;
  if ( v28 == (__int128 *)gObjDummyLock )
    v28 = 0LL;
  v81 = *(_QWORD *)(v26 + 872);
  v36 = *((_QWORD *)v27 + 2);
  v80 = v35;
  v37 = *v27;
  if ( v27 == (__int128 *)gObjDummyLock )
    v27 = 0LL;
  *(_QWORD *)&v93 = v29;
  v81 = v36;
  *(_QWORD *)&Base = v27;
  v38 = 8;
  *((_QWORD *)&Base + 1) = v28;
  v80 = v37;
  qsort(&Base, 3uLL, 8uLL, (int (__cdecl *)(const void *, const void *))vOLOrderCompare);
  for ( i = 1; i < 3; ++i )
  {
    if ( !(unsigned int)vOLOrderCompare((_QWORD *)&Base + (int)i, (_QWORD *)&Base + (int)(i - 1)) )
      ClearCObjLock<tagObjLock *>((char *)&Base + 8 * (int)(i - 1));
  }
  qsort(&DomainLockRef, 3uLL, 0x10uLL, (int (__cdecl *)(const void *, const void *))vDLOrderDispositionCompare);
  for ( j = 1; j < 3; ++j )
  {
    if ( !(unsigned int)vDLOrderDispositionCompare(
                          (unsigned __int64 **)&DomainLockRef + 2 * (int)j,
                          (unsigned __int64 **)&DomainLockRef + 2 * (int)(j - 1)) )
      ClearCObjLock<tagObjLock *>(&DomainLockRef + 2 * (int)(j - 1));
  }
  if ( !v94 )
  {
    v43 = 0;
    v44 = &v85;
    do
    {
      v45 = (tagDomLock *)*((_QWORD *)v44 - 1);
      if ( v45 )
      {
        if ( *v44 )
          tagDomLock::LockExclusive(v45);
        else
          tagDomLock::LockShared(v45);
      }
      ++v43;
      v44 += 16;
    }
    while ( v43 < 3 );
    v49 = 0;
    p_Base = (tagObjLock **)&Base;
    do
    {
      if ( *p_Base )
        tagObjLock::LockExclusive(*p_Base);
      ++v49;
      ++p_Base;
    }
    while ( v49 < 3 );
    v94 = 1;
  }
  v51 = v73;
  v52 = *(_QWORD *)v9;
  if ( v73 - 912 <= 0xF || v73 == 30 )
  {
    v41 = *(_QWORD *)(v26 + 816);
    if ( v41 )
    {
      if ( *(_DWORD *)(v41 + 24) == v73 && *(_QWORD *)(v41 + 16) == v52 )
        DelQEntry(v26 + 808, v41, 1);
    }
  }
  if ( (*(_DWORD *)(v26 + 1272) & 0x20) == 0
    || (struct tagTHREADINFO *)v26 == PtiCurrentShared(v51, v41, v52, v42)
    || (unsigned int)ProcessSuspendedPostMessage(v26, v9, v73, v79, v75) )
  {
    if ( *(_DWORD *)(v26 + 824) < gUserPostMessageLimit )
    {
      v60 = SGDGetUserSessionState(gUserPostMessageLimit);
      v61 = (_DWORD *)Win32AllocateFromPagedLookasideList(*(_QWORD *)(v60 + 16872));
      v59 = v61;
      if ( v61 )
      {
        memset_0(v61, 0, 0xA0uLL);
        if ( *(_DWORD *)(v26 + 828) != 2 )
          v38 = 4;
        v59[25] |= v38;
        v64 = *(_QWORD **)(v26 + 816);
        if ( v64 )
        {
          *v64 = v59;
          *((_QWORD *)v59 + 1) = *(_QWORD *)(v26 + 816);
        }
        else
        {
          *(_QWORD *)(v26 + 808) = v59;
          *(_QWORD *)(v26 + 840) = 0LL;
        }
        *(_QWORD *)(v26 + 816) = v59;
        v65 = *(_DWORD *)(v26 + 824) + 1;
        *(_DWORD *)(v26 + 824) = v65;
        LOBYTE(v62) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v62 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v63) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qqdd(WPP_GLOBAL_Control->AttachedDevice, v62, v63, v65);
        }
        if ( a6 && (unsigned int)IsWindowDesktopComposed(v9) )
          TransformMessageBetweenCoordinateSpaces(v73, (__int64)v9, 0LL);
        StoreQMessage(
          (struct tagQMSG *)v59,
          v9,
          v73,
          v79,
          v75,
          0,
          0LL,
          0,
          0LL,
          0,
          v78,
          *(_DWORD *)(*((_QWORD *)v9 + 5) + 288LL),
          0LL,
          0LL);
        if ( v73 == 576 || v73 == 281 )
        {
          v66 = _HMObjectFromHandle(v75);
          if ( v66 )
            HMChangeOwnerThread(v66, v26);
        }
        if ( (*(_DWORD *)(v26 + 488) & 1) == 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v26 + 448) + 8LL), 0x108u);
          _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v26 + 448) + 4LL), 0x108u);
          if ( (*(_DWORD *)(*(_QWORD *)(v26 + 448) + 16LL) & 0x108) != 0 )
            KeSetEvent(*(PRKEVENT *)(v26 + 736), 2, 0);
        }
        if ( v73 == 786 )
        {
          if ( (*(_DWORD *)(v26 + 1272) & 0x40000) != 0 )
          {
            v67 = *(struct _KEVENT **)(v26 + 1424);
            if ( v67 )
              KeSetEvent(v67, 1, 0);
          }
          SetWakeBit(v26, 0x80u);
        }
        v6 = 1;
      }
      else
      {
        UserSetLastError(8);
        v59 = 0LL;
      }
    }
    else
    {
      UserSetLastError(1816);
      v59 = 0LL;
    }
    v68 = *(_QWORD *)(v26 + 432);
    if ( v26 == *(_QWORD *)(v68 + 72) )
      *(_QWORD *)(v68 + 80) = v59;
    if ( v74 )
      ThreadUnlock1(v57, v56, v58);
    if ( v6 )
    {
      DomainShared<DLT_THREADINFO,DLT_QUEUE,DLT_POST>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock,tagObjLock>::~ObjectLock<tagObjLock,tagObjLock,tagObjLock>(&DomainLockRef);
      return (unsigned __int64)v59;
    }
    if ( v94 )
    {
      v69 = 2;
      v70 = (tagObjLock **)&v93;
      do
      {
        if ( *v70 )
          tagObjLock::UnLockExclusive(*v70);
        --v70;
        --v69;
      }
      while ( v69 >= 0 );
      v71 = &v89;
      do
      {
        v72 = (tagDomLock *)*((_QWORD *)v71 - 1);
        if ( v72 )
        {
          if ( *v71 )
            tagDomLock::UnLockExclusive(v72);
          else
            tagDomLock::UnLockShared(v72);
        }
        v71 -= 16;
        --v13;
      }
      while ( v13 >= 0 );
    }
  }
  else
  {
    if ( v74 )
      ThreadUnlock1(v54, v53, v55);
    DomainShared<DLT_THREADINFO,DLT_QUEUE,DLT_POST>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock,tagObjLock>::~ObjectLock<tagObjLock,tagObjLock,tagObjLock>(&DomainLockRef);
  }
  return 0LL;
}
