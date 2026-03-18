/*
 * XREFs of NtUserScheduleDispatchNotification @ 0x1C011CF40
 * Callers:
 *     <none>
 * Callees:
 *     ProcessSuspendedEventMessage @ 0x1C004F2B4 (ProcessSuspendedEventMessage.c)
 *     vOLOrderCompare @ 0x1C00902B0 (vOLOrderCompare.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C011D3D8 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ??$SortAndRemoveDupesExcludingLastElement@UCDomLockDisposition@@$02@@YAXAEAY02UCDomLockDisposition@@P6AHPEBX1@ZP6AXAEAU0@@Z@Z @ 0x1C011D40C (--$SortAndRemoveDupesExcludingLastElement@UCDomLockDisposition@@$02@@YAXAEAY02UCDomLockDispositi.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x1C011E31C (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C011F1F0 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ??$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z @ 0x1C013100C (--$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$ObjectLock@UtagObjLock@@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@@@QEAA@XZ @ 0x1C01B4F14 (--1-$ObjectLock@UtagObjLock@@U1@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@VDLT_QUEU.c)
 */

__int64 __fastcall NtUserScheduleDispatchNotification(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct tagWND *v6; // r13
  unsigned int v7; // edi
  __int64 v8; // r15
  __int64 v9; // rcx
  tagDomLock *CurrentProcessWin32Process; // rax
  tagDomLock *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int128 *v15; // r12
  unsigned int DLT; // eax
  unsigned int v17; // eax
  __int64 v18; // rax
  __int128 *v19; // rax
  __int64 v20; // xmm1_8
  __int128 v21; // xmm0
  __int64 v22; // xmm1_8
  int v23; // esi
  unsigned int i; // ebx
  __int64 v25; // rdx
  unsigned int v26; // r14d
  char *v27; // rbx
  tagDomLock *v28; // rcx
  unsigned int v29; // r14d
  tagObjLock **p_Base; // rbx
  struct tagQMSG *v31; // rax
  struct tagQMSG *v32; // rbx
  int v33; // ebx
  tagObjLock **v34; // rdi
  char *v35; // rbx
  __int128 v37; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h]
  __int128 v39; // [rsp+88h] [rbp-78h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  __int64 DomainLockRef; // [rsp+A0h] [rbp-60h] BYREF
  char v42; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-50h]
  char v44; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-40h]
  char v46; // [rsp+C8h] [rbp-38h]
  __int128 Base; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v48; // [rsp+E0h] [rbp-20h]
  char v49; // [rsp+E8h] [rbp-18h]

  v38 = 0LL;
  v37 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = (struct tagWND *)ValidateHwnd(a1);
  if ( v6 )
  {
    *(_QWORD *)&v37 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v37;
    *((_QWORD *)&v37 + 1) = v6;
    HMLockObject(v6);
    v8 = *((_QWORD *)v6 + 2);
    CurrentProcessWin32Process = (tagDomLock *)PsGetCurrentProcessWin32Process(v9);
    v7 = 0;
    v11 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process && !*(_QWORD *)CurrentProcessWin32Process )
      v11 = 0LL;
    if ( *(tagDomLock **)(v8 + 424) == v11 )
    {
      if ( v8 == gptiCurrent || (unsigned __int8)CheckAccess((char *)v11 + 888, *(_QWORD *)(v8 + 432) + 432LL) )
      {
        v14 = v8 + 392;
        v15 = *(__int128 **)(v8 + 432);
        DLT = DLT_THREADINFO::getDLT(v11);
        DomainLockRef = GetDomainLockRef(DLT);
        v42 = 0;
        v17 = DLT_QUEUE::getDLT();
        v18 = GetDomainLockRef(v17);
        v44 = 0;
        v43 = v18;
        v45 = gDomainDummyLock;
        v46 = 0;
        Base = 0LL;
        v48 = 0LL;
        v49 = 0;
        v19 = v15;
        v20 = *(_QWORD *)(v8 + 408);
        if ( v8 + 392 == gObjDummyLock )
          v14 = 0LL;
        v39 = *(_OWORD *)(v8 + 392);
        if ( v15 == (__int128 *)gObjDummyLock )
          v19 = 0LL;
        *((_QWORD *)&Base + 1) = v14;
        v21 = *v15;
        *(_QWORD *)&Base = v19;
        v40 = v20;
        v22 = *((_QWORD *)v15 + 2);
        v39 = v21;
        v40 = v22;
        qsort(&Base, 2uLL, 8uLL, (int (__cdecl *)(const void *, const void *))vOLOrderCompare);
        v23 = 1;
        for ( i = 1; i < 2; ++i )
        {
          if ( !(unsigned int)vOLOrderCompare((_QWORD *)&Base + (int)i, (_QWORD *)&Base + (int)(i - 1)) )
            ClearCObjLock<tagObjLock *>((char *)&Base + 8 * (int)(i - 1));
        }
        SortAndRemoveDupesExcludingLastElement<CDomLockDisposition,3>(&DomainLockRef);
        if ( !v49 )
        {
          v26 = 0;
          v27 = &v42;
          do
          {
            v28 = (tagDomLock *)*((_QWORD *)v27 - 1);
            if ( v28 )
            {
              if ( *v27 )
                tagDomLock::LockExclusive(v28);
              else
                tagDomLock::LockShared(v28);
            }
            ++v26;
            v27 += 16;
          }
          while ( v26 < 2 );
          v29 = 0;
          p_Base = (tagObjLock **)&Base;
          do
          {
            if ( *p_Base )
              tagObjLock::LockExclusive(*p_Base);
            ++v29;
            ++p_Base;
          }
          while ( v29 < 2 );
          v49 = 1;
        }
        if ( (*(_DWORD *)(v8 + 488) & 1) != 0
          || (vAdjustDelegatePriority((struct tagTHREADINFO *)v8), (*(_DWORD *)(v8 + 1272) & 0x20) != 0)
          && !(unsigned int)ProcessSuspendedEventMessage(v8, 9, (HWND *)v6, 0x60u, 0LL, 0LL)
          || (v31 = (struct tagQMSG *)AllocQEntryEx((char *)v15 + 24, 0LL, 1LL), (v32 = v31) == 0LL) )
        {
          DomainShared<DLT_THREADINFO,DLT_QUEUE>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock>::~ObjectLock<tagObjLock,tagObjLock>(
            &DomainLockRef,
            v25);
        }
        else
        {
          StoreQMessage(
            v31,
            v6,
            0x60u,
            0LL,
            0LL,
            0,
            0LL,
            9u,
            0LL,
            0,
            0LL,
            *(_DWORD *)(*((_QWORD *)v6 + 5) + 288LL),
            0LL,
            0LL);
          *((_QWORD *)v32 + 13) = v8;
          if ( (*(_DWORD *)(v8 + 488) & 1) == 0 )
          {
            _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v8 + 448) + 8LL), 0x2040u);
            _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v8 + 448) + 4LL), 0x2040u);
            if ( (*(_DWORD *)(*(_QWORD *)(v8 + 448) + 16LL) & 0x2040) != 0 )
              KeSetEvent(*(PRKEVENT *)(v8 + 736), 2, 0);
          }
          if ( v49 )
          {
            v33 = 1;
            v34 = (tagObjLock **)&Base + 1;
            do
            {
              if ( *v34 )
                tagObjLock::UnLockExclusive(*v34);
              --v34;
              --v33;
            }
            while ( v33 >= 0 );
            v35 = &v44;
            do
            {
              v11 = (tagDomLock *)*((_QWORD *)v35 - 1);
              if ( v11 )
              {
                if ( *v35 )
                  tagDomLock::UnLockExclusive(v11);
                else
                  tagDomLock::UnLockShared(v11);
              }
              v35 -= 16;
              --v23;
            }
            while ( v23 >= 0 );
          }
          v7 = 2;
        }
      }
      else
      {
        v7 = 1;
      }
    }
    else
    {
      UserSetLastError(5);
    }
    ThreadUnlock1(v11, v12, v13);
  }
  else
  {
    v7 = 0;
  }
  UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  return v7;
}
