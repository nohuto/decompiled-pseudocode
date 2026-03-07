__int64 __fastcall NtUserScheduleDispatchNotification(__int64 a1)
{
  __int64 v2; // rcx
  struct tagWND *v3; // r13
  unsigned int v4; // edi
  __int64 v5; // r15
  __int64 v6; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  tagDomLock *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int128 *v13; // r12
  unsigned int DLT; // eax
  unsigned int v15; // eax
  __int64 v16; // rax
  __int128 *v17; // rax
  __int64 v18; // xmm1_8
  __int128 v19; // xmm0
  __int64 v20; // xmm1_8
  int v21; // esi
  unsigned int i; // ebx
  __int64 v23; // rdx
  unsigned int v24; // r14d
  char *v25; // rbx
  tagDomLock *v26; // rcx
  unsigned int v27; // r14d
  tagObjLock **p_Base; // rbx
  struct tagQMSG *v29; // rax
  struct tagQMSG *v30; // rbx
  int v31; // ebx
  tagObjLock **v32; // rdi
  char *v33; // rbx
  __int128 v35; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h]
  __int128 v37; // [rsp+88h] [rbp-78h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  __int64 DomainLockRef; // [rsp+A0h] [rbp-60h] BYREF
  char v40; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-50h]
  char v42; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v43; // [rsp+C0h] [rbp-40h]
  char v44; // [rsp+C8h] [rbp-38h]
  __int128 Base; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v46; // [rsp+E0h] [rbp-20h]
  char v47; // [rsp+E8h] [rbp-18h]

  v36 = 0LL;
  v35 = 0LL;
  EnterCrit(0LL, 0LL);
  v3 = (struct tagWND *)ValidateHwnd(a1);
  if ( v3 )
  {
    *(_QWORD *)&v35 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v35;
    *((_QWORD *)&v35 + 1) = v3;
    HMLockObject(v3);
    v5 = *((_QWORD *)v3 + 2);
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v6);
    v4 = 0;
    v8 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
      v8 = 0LL;
    if ( *(_QWORD **)(v5 + 424) == v8 )
    {
      if ( v5 == gptiCurrent || (unsigned __int8)CheckAccess(v8 + 108, *(_QWORD *)(v5 + 432) + 432LL) )
      {
        v12 = v5 + 392;
        v13 = *(__int128 **)(v5 + 432);
        DLT = DLT_THREADINFO::getDLT();
        DomainLockRef = GetDomainLockRef(DLT);
        v40 = 0;
        v15 = DLT_QUEUE::getDLT();
        v16 = GetDomainLockRef(v15);
        v42 = 0;
        v41 = v16;
        v43 = gDomainDummyLock;
        v44 = 0;
        Base = 0LL;
        v46 = 0LL;
        v47 = 0;
        v17 = v13;
        v18 = *(_QWORD *)(v5 + 408);
        if ( v5 + 392 == gObjDummyLock )
          v12 = 0LL;
        v37 = *(_OWORD *)(v5 + 392);
        if ( v13 == (__int128 *)gObjDummyLock )
          v17 = 0LL;
        *((_QWORD *)&Base + 1) = v12;
        v19 = *v13;
        *(_QWORD *)&Base = v17;
        v38 = v18;
        v20 = *((_QWORD *)v13 + 2);
        v37 = v19;
        v38 = v20;
        qsort(&Base, 2uLL, 8uLL, vOLOrderCompare);
        v21 = 1;
        for ( i = 1; i < 2; ++i )
        {
          if ( !vOLOrderCompare((char *)&Base + 8 * (int)i, (char *)&Base + 8 * (int)(i - 1)) )
            ClearCObjLock<tagObjLock *>((char *)&Base + 8 * (int)(i - 1));
        }
        SortAndRemoveDupesExcludingLastElement<CDomLockDisposition,3>(&DomainLockRef);
        if ( !v47 )
        {
          v24 = 0;
          v25 = &v40;
          do
          {
            v26 = (tagDomLock *)*((_QWORD *)v25 - 1);
            if ( v26 )
            {
              if ( *v25 )
                tagDomLock::LockExclusive(v26);
              else
                tagDomLock::LockShared(v26);
            }
            ++v24;
            v25 += 16;
          }
          while ( v24 < 2 );
          v27 = 0;
          p_Base = (tagObjLock **)&Base;
          do
          {
            if ( *p_Base )
              tagObjLock::LockExclusive(*p_Base);
            ++v27;
            ++p_Base;
          }
          while ( v27 < 2 );
          v47 = 1;
        }
        if ( (*(_DWORD *)(v5 + 488) & 1) != 0
          || (vAdjustDelegatePriority((struct tagTHREADINFO *)v5), (*(_DWORD *)(v5 + 1272) & 0x20) != 0)
          && !(unsigned int)ProcessSuspendedEventMessage(v5, 9LL, v3, 96LL, 0LL, 0LL)
          || (v29 = (struct tagQMSG *)AllocQEntryEx((char *)v13 + 24, 0LL, 1LL), (v30 = v29) == 0LL) )
        {
          DomainShared<DLT_THREADINFO,DLT_QUEUE>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock>::~ObjectLock<tagObjLock,tagObjLock>(
            &DomainLockRef,
            v23);
        }
        else
        {
          StoreQMessage(
            v29,
            v3,
            0x60u,
            0LL,
            0LL,
            0,
            0LL,
            9u,
            0LL,
            0,
            0LL,
            *(_DWORD *)(*((_QWORD *)v3 + 5) + 288LL),
            0LL,
            0LL);
          *((_QWORD *)v30 + 13) = v5;
          if ( (*(_DWORD *)(v5 + 488) & 1) == 0 )
          {
            _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v5 + 448) + 8LL), 0x2040u);
            _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v5 + 448) + 4LL), 0x2040u);
            if ( (*(_DWORD *)(*(_QWORD *)(v5 + 448) + 16LL) & 0x2040) != 0 )
              KeSetEvent(*(PRKEVENT *)(v5 + 736), 2, 0);
          }
          if ( v47 )
          {
            v31 = 1;
            v32 = (tagObjLock **)&Base + 1;
            do
            {
              if ( *v32 )
                tagObjLock::UnLockExclusive(*v32);
              --v32;
              --v31;
            }
            while ( v31 >= 0 );
            v33 = &v42;
            do
            {
              v10 = (tagDomLock *)*((_QWORD *)v33 - 1);
              if ( v10 )
              {
                if ( *v33 )
                  tagDomLock::UnLockExclusive(v10);
                else
                  tagDomLock::UnLockShared(v10);
              }
              v33 -= 16;
              --v21;
            }
            while ( v21 >= 0 );
          }
          v4 = 2;
        }
      }
      else
      {
        v4 = 1;
      }
    }
    else
    {
      UserSetLastError(5);
    }
    ThreadUnlock1(v10, v9, v11);
  }
  else
  {
    v4 = 0;
  }
  UserSessionSwitchLeaveCrit(v2);
  return v4;
}
