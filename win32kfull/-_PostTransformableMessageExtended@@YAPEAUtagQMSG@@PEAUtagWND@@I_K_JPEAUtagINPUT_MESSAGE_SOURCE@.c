unsigned __int64 __fastcall _PostTransformableMessageExtended(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int128 *a4,
        struct tagINPUT_MESSAGE_SOURCE *a5,
        int a6)
{
  int v6; // r12d
  unsigned int v8; // r10d
  struct tagWND *v9; // r13
  __int64 v11; // rax
  int v12; // r14d
  __int64 v13; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rbx
  unsigned int v21; // r8d
  int v22; // ebx
  __int64 v23; // r15
  __int128 *v24; // rsi
  __int128 *v25; // rdi
  __int64 v26; // rbx
  unsigned int DLT; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // xmm1_8
  __int128 v32; // xmm0
  __int64 v33; // xmm1_8
  __int128 v34; // xmm0
  __int64 v35; // xmm1_8
  unsigned int i; // ebx
  unsigned int j; // ebx
  unsigned int v38; // edi
  char *v39; // rbx
  tagDomLock *v40; // rcx
  unsigned int v41; // edi
  tagObjLock **p_Base; // rbx
  __int64 v43; // rcx
  unsigned __int64 v44; // rsi
  __int64 v45; // rax
  _DWORD *v46; // rax
  _DWORD *v47; // rbx
  int v48; // edx
  int v49; // r8d
  int v50; // ecx
  _QWORD *v51; // rax
  int v52; // r9d
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rax
  int v57; // ebx
  tagObjLock **v58; // rdi
  char *v59; // rbx
  tagDomLock *v60; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  unsigned int v64; // ebx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  struct tagTHREADINFO *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rax
  struct _KEVENT *v74; // rcx
  unsigned int v75; // [rsp+70h] [rbp-90h] BYREF
  int v76; // [rsp+78h] [rbp-88h]
  __int64 v77; // [rsp+80h] [rbp-80h]
  unsigned __int64 v78; // [rsp+88h] [rbp-78h]
  unsigned __int64 v79; // [rsp+90h] [rbp-70h]
  __int64 v80; // [rsp+98h] [rbp-68h] BYREF
  struct tagINPUT_MESSAGE_SOURCE *v81; // [rsp+A0h] [rbp-60h]
  __int128 v82; // [rsp+A8h] [rbp-58h]
  __int64 v83; // [rsp+B8h] [rbp-48h]
  __int128 v84; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v85; // [rsp+D0h] [rbp-30h]
  __int64 DomainLockRef; // [rsp+E0h] [rbp-20h] BYREF
  char v87; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v88; // [rsp+F0h] [rbp-10h]
  char v89; // [rsp+F8h] [rbp-8h]
  __int64 v90; // [rsp+100h] [rbp+0h]
  char v91; // [rsp+108h] [rbp+8h] BYREF
  __int64 v92; // [rsp+110h] [rbp+10h]
  char v93; // [rsp+118h] [rbp+18h]
  __int128 Base; // [rsp+120h] [rbp+20h] BYREF
  __int128 v95; // [rsp+130h] [rbp+30h] BYREF
  char v96; // [rsp+140h] [rbp+40h]

  v75 = a2;
  v6 = 0;
  v85 = 0LL;
  v79 = a3;
  v77 = (__int64)a4;
  v8 = a2;
  v80 = 0LL;
  v9 = (struct tagWND *)a1;
  v81 = a5;
  v84 = 0LL;
  if ( !a5 )
  {
    SetUnavailableInputSource(&v80);
    v8 = v75;
    a4 = (__int128 *)v77;
    v81 = (struct tagINPUT_MESSAGE_SOURCE *)&v80;
  }
  if ( v8 < 0x400 && (_bittest16(&MessageTable[v8], 9u) || v8 == 537 && (a3 & 0x8000) != 0) )
    goto LABEL_120;
  if ( v8 != 536 )
  {
    if ( v8 - 577 <= 3 )
      goto LABEL_122;
    goto LABEL_10;
  }
  if ( (a3 & 0x8000) != 0 )
  {
LABEL_120:
    UserSetLastError(1159);
    return 0LL;
  }
LABEL_10:
  if ( v8 - 581 > 0x12 || v8 == 589 )
  {
    if ( v8 != 528 || (_WORD)a3 != 582 )
      goto LABEL_14;
    a1 = WORD1(a3) == 1;
    goto LABEL_13;
  }
LABEL_122:
  if ( (_WORD)a3 != 1 )
  {
    a1 = 0LL;
LABEL_13:
    if ( !(_DWORD)a1 )
      goto LABEL_14;
  }
  if ( !v9 )
    goto LABEL_15;
  if ( !(unsigned int)IsMiPEnabledForWindow(v9) )
  {
    v76 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3674LL);
    return 0LL;
  }
LABEL_14:
  if ( v9 == (struct tagWND *)-1LL )
  {
    xxxBroadcastMessageEx(0LL, v8, a3, a4, 2u, 0LL, 0, 0);
    return 1LL;
  }
LABEL_15:
  v11 = SGDGetUserSessionState(a1);
  v12 = 2;
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v11 + 8)) )
  {
    v76 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  }
  v13 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v13 = *ThreadWin32Thread;
  if ( !v9 )
    return (unsigned int)PostThreadMessage(v13, v75, v79) != 0;
  v16 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 424LL);
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v15);
  v20 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
    v20 = 0LL;
  if ( (_QWORD *)v16 == v20 )
    goto LABEL_24;
  v21 = v75;
  if ( v75 > 0x288 )
    goto LABEL_25;
  if ( v75 > 0xD0 )
  {
    if ( v75 == 272 )
    {
LABEL_137:
      UserSetLastError(5);
      return 0LL;
    }
    if ( v75 != 353 && v75 != 424 && v75 != 563 && v75 != 648 )
      goto LABEL_25;
  }
  else if ( v75 != 208 )
  {
    switch ( v75 )
    {
      case 0xCu:
      case 0xBCu:
        goto LABEL_133;
      case 0xDu:
      case 0xC4u:
      case 0xCCu:
        v18 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v9 + 17) + 8LL) + 2LL);
        if ( *(_WORD *)(gpsi + 870LL) != (_WORD)v18 || (*(_BYTE *)(*((_QWORD *)v9 + 5) + 28LL) & 0x20) == 0 )
          goto LABEL_25;
        UserSetLastError(5);
        break;
      case 0x4Eu:
        goto LABEL_137;
      default:
        goto LABEL_25;
    }
    goto LABEL_137;
  }
LABEL_133:
  if ( (!(unsigned __int8)Enforced(v19) || *(_QWORD *)v16 == gpepCSRSS)
    && (*(_DWORD *)(v16 + 772) != *((_DWORD *)v20 + 193) || *(_DWORD *)(v16 + 776) != *((_DWORD *)v20 + 194)) )
  {
    goto LABEL_137;
  }
LABEL_24:
  v21 = v75;
LABEL_25:
  v78 = v79;
  v22 = 0;
  v76 = 0;
  if ( v21 - 992 <= 8 )
  {
    *(_QWORD *)&v84 = *(_QWORD *)(v13 + 416);
    *(_QWORD *)(v13 + 416) = &v84;
    *((_QWORD *)&v84 + 1) = v9;
    HMLockObject(v9);
    v64 = xxxDDETrackPostHook(&v75, v9);
    if ( v64 != 2 )
    {
      ThreadUnlock1(v63, v18, v65);
      return v64;
    }
    v21 = v75;
    v22 = 1;
    v76 = 1;
  }
  v23 = *((_QWORD *)v9 + 2);
  if ( v21 - 256 <= 9 )
  {
    PostUpdateKeyStateEvent(*(_QWORD *)(v23 + 432));
  }
  else if ( v21 == 576 )
  {
    LOBYTE(v18) = 20;
    if ( !HMValidateHandle(v77, v18) )
    {
      if ( v22 )
        goto LABEL_146;
      return 0LL;
    }
  }
  else if ( v21 == 281 )
  {
    LOBYTE(v18) = 21;
    if ( !HMValidateHandle(v77, v18) )
    {
      if ( v22 )
LABEL_146:
        ThreadUnlock1(v67, v66, v68);
      return 0LL;
    }
  }
  v24 = *(__int128 **)(v23 + 432);
  v25 = (__int128 *)(v23 + 856);
  v26 = v23 + 392;
  DLT = DLT_THREADINFO::getDLT();
  DomainLockRef = GetDomainLockRef(DLT);
  v87 = 0;
  v28 = DLT_QUEUE::getDLT();
  v88 = GetDomainLockRef(v28);
  v89 = 0;
  v29 = DLT_POST::getDLT();
  v30 = GetDomainLockRef(v29);
  v91 = 0;
  v90 = v30;
  Base = 0LL;
  v92 = gDomainDummyLock;
  v95 = 0LL;
  v93 = 0;
  v96 = 0;
  v31 = *(_QWORD *)(v23 + 408);
  if ( v23 + 392 == gObjDummyLock )
    v26 = 0LL;
  v82 = *(_OWORD *)(v23 + 392);
  v32 = *v25;
  v83 = v31;
  v33 = *(_QWORD *)(v23 + 872);
  if ( v25 == (__int128 *)gObjDummyLock )
    v25 = 0LL;
  v82 = v32;
  v34 = *v24;
  v83 = v33;
  v35 = *((_QWORD *)v24 + 2);
  if ( v24 == (__int128 *)gObjDummyLock )
    v24 = 0LL;
  *(_QWORD *)&Base = v24;
  v82 = v34;
  *(_QWORD *)&v95 = v26;
  v83 = v35;
  *((_QWORD *)&Base + 1) = v25;
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
  if ( !v96 )
  {
    v38 = 0;
    v39 = &v87;
    do
    {
      v40 = (tagDomLock *)*((_QWORD *)v39 - 1);
      if ( v40 )
      {
        if ( *v39 )
          tagDomLock::LockExclusive(v40);
        else
          tagDomLock::LockShared(v40);
      }
      ++v38;
      v39 += 16;
    }
    while ( v38 < 3 );
    v41 = 0;
    p_Base = (tagObjLock **)&Base;
    do
    {
      if ( *p_Base )
        tagObjLock::LockExclusive(*p_Base);
      ++v41;
      ++p_Base;
    }
    while ( v41 < 3 );
    v96 = 1;
  }
  v43 = v75;
  if ( v75 == 30 || v75 - 912 <= 0xF )
  {
    v62 = *(_QWORD *)(v23 + 816);
    if ( v62 )
    {
      if ( *(_DWORD *)(v62 + 24) == v75 && *(_QWORD *)(v62 + 16) == *(_QWORD *)v9 )
        DelQEntry(v23 + 808, v62, 1);
    }
  }
  if ( (*(_DWORD *)(v23 + 1272) & 0x20) != 0 )
  {
    v69 = PtiCurrentShared(v43);
    v44 = v78;
    if ( (struct tagTHREADINFO *)v23 != v69 && !(unsigned int)ProcessSuspendedPostMessage(v23, v9, v75, v78, v77) )
    {
      if ( v76 )
        ThreadUnlock1(v71, v70, v72);
      DomainSharedBase<DLT_THREADINFO,DLT_QUEUE,DLT_POST>::DomainExclusiveBase<>::ObjectLockBase<tagObjLock,tagObjLock,tagObjLock>::unlock(&DomainLockRef);
      return 0LL;
    }
  }
  else
  {
    v44 = v78;
  }
  if ( *(_DWORD *)(v23 + 824) >= gUserPostMessageLimit )
  {
    UserSetLastError(1816);
    v47 = 0LL;
  }
  else
  {
    v45 = SGDGetUserSessionState(gUserPostMessageLimit);
    v46 = (_DWORD *)Win32AllocateFromPagedLookasideList(*(_QWORD *)(v45 + 16872));
    v47 = v46;
    if ( v46 )
    {
      memset_0(v46, 0, 0xA0uLL);
      v50 = v47[25] | 4;
      if ( *(_DWORD *)(v23 + 828) == 2 )
        v50 = v47[25] | 8;
      v47[25] = v50;
      v51 = *(_QWORD **)(v23 + 816);
      if ( v51 )
      {
        *v51 = v47;
        *((_QWORD *)v47 + 1) = *(_QWORD *)(v23 + 816);
      }
      else
      {
        *(_QWORD *)(v23 + 808) = v47;
        *(_QWORD *)(v23 + 840) = 0LL;
      }
      *(_QWORD *)(v23 + 816) = v47;
      v52 = *(_DWORD *)(v23 + 824) + 1;
      *(_DWORD *)(v23 + 824) = v52;
      LOBYTE(v48) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v48 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v49) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qqdd(WPP_GLOBAL_Control->AttachedDevice, v48, v49, v52);
      }
      if ( a6 && (unsigned int)IsWindowDesktopComposed(v9) )
        TransformMessageBetweenCoordinateSpaces(v75, (__int64)v9, 0LL);
      StoreQMessage(
        (struct tagQMSG *)v47,
        v9,
        v75,
        v44,
        v77,
        0,
        0LL,
        0,
        0LL,
        0,
        v81,
        *(_DWORD *)(*((_QWORD *)v9 + 5) + 288LL),
        0LL,
        0LL);
      if ( v75 == 576 || v75 == 281 )
      {
        v73 = _HMObjectFromHandle(v77);
        if ( v73 )
          HMChangeOwnerThread(v73, v23);
      }
      if ( (*(_DWORD *)(v23 + 488) & 1) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v23 + 448) + 8LL), 0x108u);
        _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v23 + 448) + 4LL), 0x108u);
        if ( (*(_DWORD *)(*(_QWORD *)(v23 + 448) + 16LL) & 0x108) != 0 )
          KeSetEvent(*(PRKEVENT *)(v23 + 736), 2, 0);
      }
      if ( v75 == 786 )
      {
        if ( (*(_DWORD *)(v23 + 1272) & 0x40000) != 0 )
        {
          v74 = *(struct _KEVENT **)(v23 + 1424);
          if ( v74 )
            KeSetEvent(v74, 1, 0);
        }
        SetWakeBit(v23, 0x80u);
      }
      v6 = 1;
    }
    else
    {
      UserSetLastError(8);
      v47 = 0LL;
    }
  }
  v56 = *(_QWORD *)(v23 + 432);
  if ( v23 == *(_QWORD *)(v56 + 72) )
    *(_QWORD *)(v56 + 80) = v47;
  if ( v76 )
    ThreadUnlock1(v54, v53, v55);
  if ( !v6 )
  {
    if ( v96 )
    {
      v57 = 2;
      v58 = (tagObjLock **)&v95;
      do
      {
        if ( *v58 )
          tagObjLock::UnLockExclusive(*v58);
        --v58;
        --v57;
      }
      while ( v57 >= 0 );
      v59 = &v91;
      do
      {
        v60 = (tagDomLock *)*((_QWORD *)v59 - 1);
        if ( v60 )
        {
          if ( *v59 )
            tagDomLock::UnLockExclusive(v60);
          else
            tagDomLock::UnLockShared(v60);
        }
        v59 -= 16;
        --v12;
      }
      while ( v12 >= 0 );
    }
    return 0LL;
  }
  DomainSharedBase<DLT_THREADINFO,DLT_QUEUE,DLT_POST>::DomainExclusiveBase<>::ObjectLockBase<tagObjLock,tagObjLock,tagObjLock>::unlock(&DomainLockRef);
  return (unsigned __int64)v47;
}
