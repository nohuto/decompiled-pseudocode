__int64 __fastcall xxxCallHook2(struct tagHOOK *a1, unsigned int a2, unsigned __int64 a3, __int64 a4, int *a5, bool a6)
{
  __int64 v6; // r15
  struct tagHOOK *Valid; // r14
  int *v8; // r12
  __int64 v9; // rax
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  BOOL v20; // eax
  __int64 v21; // r13
  __int64 v22; // rcx
  unsigned __int8 v23; // r12
  __int64 v24; // rcx
  BOOL v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 CurrentProcess; // rax
  unsigned int v30; // ebx
  BOOL v31; // ebx
  __int64 v32; // rcx
  __int64 v33; // r15
  struct tagHOOK *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v49; // rax
  char v50; // al
  __int64 v51; // rax
  char v52; // al
  __int16 ProcessMachine; // bx
  __int64 v54; // rcx
  _QWORD *v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // r8d
  _DWORD *v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  struct tagHOOK *v73; // rax
  __int64 v74; // rsi
  __int64 *v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  char v78; // bl
  int v79; // ecx
  __int64 v80; // rax
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rax
  int v88; // [rsp+54h] [rbp-244h]
  __int64 v89; // [rsp+60h] [rbp-238h] BYREF
  __int64 v90; // [rsp+68h] [rbp-230h]
  __int64 v91; // [rsp+70h] [rbp-228h]
  _QWORD v92[6]; // [rsp+80h] [rbp-218h] BYREF
  __int64 ProcessInformation; // [rsp+B0h] [rbp-1E8h] BYREF
  _QWORD v94[2]; // [rsp+C0h] [rbp-1D8h] BYREF
  __int128 v95; // [rsp+D0h] [rbp-1C8h] BYREF
  __int64 v96; // [rsp+E0h] [rbp-1B8h]
  struct tagHOOK *v97; // [rsp+E8h] [rbp-1B0h] BYREF
  unsigned int v98; // [rsp+F0h] [rbp-1A8h]
  int v99; // [rsp+F4h] [rbp-1A4h]
  __int64 v100; // [rsp+F8h] [rbp-1A0h]
  __int64 v101; // [rsp+100h] [rbp-198h]
  __int64 v102; // [rsp+108h] [rbp-190h]
  __int128 v103; // [rsp+120h] [rbp-178h] BYREF
  __int64 v104; // [rsp+130h] [rbp-168h]
  _QWORD v105[2]; // [rsp+140h] [rbp-158h] BYREF
  _QWORD v106[2]; // [rsp+150h] [rbp-148h] BYREF
  __int128 v107; // [rsp+160h] [rbp-138h] BYREF
  __int64 v108; // [rsp+170h] [rbp-128h]
  _DWORD v109[5]; // [rsp+178h] [rbp-120h] BYREF
  __int64 v110; // [rsp+18Ch] [rbp-10Ch]
  int v111; // [rsp+194h] [rbp-104h]
  int v112; // [rsp+198h] [rbp-100h]
  int v113; // [rsp+19Ch] [rbp-FCh]
  __int64 *v114; // [rsp+1A0h] [rbp-F8h]
  __int64 v115[3]; // [rsp+1C8h] [rbp-D0h] BYREF
  unsigned int v116; // [rsp+1E0h] [rbp-B8h]
  int v117; // [rsp+1E4h] [rbp-B4h]
  _BYTE v118[56]; // [rsp+1E8h] [rbp-B0h] BYREF
  _BYTE v119[56]; // [rsp+220h] [rbp-78h] BYREF

  v6 = a4;
  v94[0] = a4;
  v90 = a3;
  Valid = a1;
  v8 = a5;
  v92[0] = a5;
  v91 = 0LL;
  v89 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  if ( !gbInDestroyHandleTableObjects )
  {
    v9 = SGDGetUserSessionState(a1);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v9 + 8)) != 1 )
    {
      v49 = SGDGetUserSessionState(a1);
      if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v49 + 8))
        || (ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainHookLock) != 1
         && !ExIsResourceAcquiredSharedLite((PERESOURCE)gDomainHookLock)
          ? (v50 = 0)
          : (v50 = 1),
            !v50) )
      {
        __int2c();
      }
    }
  }
  if ( !Valid )
    return 0LL;
  v10 = *((_DWORD *)Valid + 12);
  v88 = v10;
  v11 = SGDGetUserSessionState(a1);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v11 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v12 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v12 = *ThreadWin32Thread;
  if ( v12 == gptiRit && v10 != 13 && v10 != 14 )
    return 0LL;
  if ( (*(_DWORD *)(v12 + 488) & 0x10000001) != 0 || !*(_QWORD *)(v12 + 456) && *((_DWORD *)Valid + 12) != 14 )
    return dword_1C031A900[v10 + 1];
  switch ( v10 )
  {
    case 4:
      v14 = *(_DWORD *)(v6 + 16);
      v15 = *(_QWORD *)(v6 + 8);
      break;
    case 0:
      v14 = *(_DWORD *)v6;
      v15 = 0LL;
      break;
    case 3:
    case 6:
      goto LABEL_84;
    case 12:
      v14 = *(_DWORD *)(v6 + 24);
      v15 = *(_QWORD *)(v6 + 16);
      break;
    case -1:
LABEL_84:
      v14 = *(_DWORD *)(v6 + 8);
      v15 = *(_QWORD *)(v6 + 16);
      break;
    default:
      v14 = 0;
      v15 = 0LL;
      break;
  }
  if ( v14 - 577 <= 3 )
    goto LABEL_114;
  if ( v14 < 0x245 || v14 > 0x257 || (v16 = 1, v14 == 589) )
    v16 = 0;
  if ( v16 )
LABEL_114:
    v17 = 1;
  else
    v17 = 0;
  if ( !v17 || (v18 = 1, v14 == 595) )
    v18 = 0;
  v20 = 1;
  if ( !v18 && (v14 != 528 || (_WORD)v15 != 582) )
    v20 = 0;
  if ( !v20 || v10 == 3 || v10 == 4 || v10 == 12 )
  {
    v21 = v91;
    while ( 1 )
    {
      SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v118, v15);
      if ( (*(_BYTE *)(_HMPheFromObject(Valid) + 25) & 1) != 0 || (*((_DWORD *)Valid + 16) & 0x1000) != 0 )
      {
        Valid = (struct tagHOOK *)PhkNextValid((__int64)Valid);
        SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v118);
        goto LABEL_179;
      }
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v118);
      if ( v10 == 14 && (v56 = *((_QWORD *)Valid + 2)) != 0 && (unsigned __int8)IsSpatialDelegationEnabledForThread(v56)
        || v10 == 13 && *((_QWORD *)Valid + 2) && (unsigned __int8)IsKeyboardDelegationEnabledForThread() )
      {
        Valid = (struct tagHOOK *)PhkNextValid((__int64)Valid);
        goto LABEL_179;
      }
      if ( v8 )
        *v8 = *((_DWORD *)Valid + 16) & 2;
      v22 = *((int *)Valid + 12);
      v23 = byte_1C0319261[v22];
      if ( (_DWORD)v22 == 10 )
      {
        if ( (*(_DWORD *)(v12 + 488) & 8) != 0 && ((a2 - 4) & 0xFFFFFFF3) == 0 && a2 != 16 )
          v23 |= 0x10u;
        if ( (*(_DWORD *)(v12 + 488) & 4) != 0 && a2 == 11 )
          v23 |= 0x10u;
      }
      v24 = *((_QWORD *)Valid + 2);
      v25 = 0;
      if ( v24 != v12 )
      {
        if ( (v23 & 0x24) != 0
          || (ProcessMachine = PsGetProcessMachine(**(_QWORD **)(v24 + 424)),
              (unsigned __int16)PsGetProcessMachine(**(_QWORD **)(v12 + 424)) != ProcessMachine)
          || (*(_DWORD *)(v12 + 488) & 0xC) != 0
          && *(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL) != *(_QWORD *)(v12 + 424)
          || (unsigned int)IsProcessDwm(**(_QWORD **)(*((_QWORD *)Valid + 2) + 424LL))
          || !(unsigned __int8)Enforced(v54)
          && (*((_DWORD *)Valid + 16) & 1) != 0
          && ((v57 = *(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL),
               v58 = *(_QWORD *)(v12 + 424),
               v59 = *(_DWORD *)(v57 + 772),
               v60 = (_DWORD *)(v57 + 776),
               v59 != *(_DWORD *)(v58 + 772))
           || *v60 != *(_DWORD *)(v58 + 776))
          && (*(_DWORD *)(v12 + 488) & 0x400000) == 0
          && (v59 != luidSystem[0] || *v60 != luidSystem[1])
          || (v55 = (_QWORD *)*((_QWORD *)Valid + 2), v55[53] != *(_QWORD *)(v12 + 424))
          && (unsigned __int8)IsRestricted(*v55) )
        {
          v25 = 1;
        }
      }
      if ( (unsigned int)(*((_DWORD *)Valid + 12) - 13) <= 1 )
      {
        if ( a6
          || !gpqForeground
          || (unsigned __int8)CheckAccess(*(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL) + 864LL, gpqForeground + 432LL)
          || (unsigned int)IsForegroundShellFrameQueueAccessible(*((const struct tagTHREADINFO **)Valid + 2))
          || (v62 = *((_QWORD *)Valid + 2), *(int *)(*(_QWORD *)(v62 + 424) + 12LL) < 0) )
        {
          if ( *((_DWORD *)Valid + 12) == 14 )
          {
            if ( *(_DWORD *)(v12 + 1408) != -1
              && !(unsigned __int8)CheckAccess(*(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL) + 864LL, v12 + 1408) )
            {
              v63 = *((_QWORD *)Valid + 2);
              if ( *(int *)(*(_QWORD *)(v63 + 424) + 12LL) >= 0 )
              {
                EtwTraceUIPIInputError(v63, 0LL, 0LL, *(_QWORD *)(v12 + 1408), 6);
                v23 &= ~0x10u;
              }
            }
            v10 = v88;
          }
        }
        else
        {
          EtwTraceUIPIInputError(v62, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 432LL), 6);
          v23 &= ~0x10u;
        }
      }
      else if ( !(unsigned __int8)CheckAccess(
                                    *(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL) + 864LL,
                                    *(_QWORD *)(v12 + 424) + 864LL) )
      {
        v61 = *((_QWORD *)Valid + 2);
        if ( *(int *)(*(_QWORD *)(v61 + 424) + 12LL) >= 0 )
        {
          v23 &= ~0x10u;
          EtwTraceUIPIHookError(Valid, v23, v61, v12, v10, a2, v90, v6);
        }
        v25 = 1;
      }
      if ( !v25
        && (*((_DWORD *)Valid + 16) & 1) != 0
        && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL)) )
      {
        v64 = *(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL);
        if ( *(int *)(v64 + 12) >= 0 )
        {
          v65 = *(_QWORD *)(v12 + 424);
          if ( v64 != v65 && (*(_DWORD *)(v64 + 812) & 0x100) == 0 )
          {
            if ( (unsigned int)IsImmersiveAppRestricted(v65)
              || (ProcessInformation = 6LL,
                  ZwQueryInformationProcess(
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    ProcessCookie|ProcessUserModeIOPL,
                    &ProcessInformation,
                    8u,
                    0LL) < 0)
              || (ProcessInformation & 0x100000000LL) != 0 )
            {
              v25 = 1;
            }
          }
        }
      }
      *(_QWORD *)&v103 = *(_QWORD *)(v12 + 416);
      *(_QWORD *)(v12 + 416) = &v103;
      *((_QWORD *)&v103 + 1) = Valid;
      HMLockObject(Valid);
      if ( v25 )
      {
        if ( (v23 & 0x10) != 0 )
        {
          v99 = 0;
          v100 = v6;
          v97 = Valid;
          v98 = a2;
          v101 = -1LL;
          v102 = -1LL;
          if ( (*(_DWORD *)(*((_QWORD *)Valid + 2) + 1272LL) & 0x20) == 0 )
          {
            v74 = *(_QWORD *)(v12 + 688);
            *(_QWORD *)&v95 = *(_QWORD *)(v12 + 416);
            *(_QWORD *)(v12 + 416) = &v95;
            *((_QWORD *)&v95 + 1) = v74;
            if ( v74 )
              HMLockObject(v74);
            v94[0] = v12 + 688;
            v94[1] = Valid;
            HMAssignmentLock(v94, 0LL);
            if ( *(_QWORD *)(v12 + 480) )
            {
              v75 = (__int64 *)PhkNextValid((__int64)Valid);
              v76 = *(_QWORD *)(v12 + 480);
              v21 = *(_QWORD *)(v76 + 48);
              v91 = v21;
              if ( v75 )
                v77 = *v75;
              else
                v77 = 0LL;
              *(_QWORD *)(v76 + 48) = v77;
            }
            v78 = v23 & 0x20;
            if ( (v23 & 0x20) != 0 )
            {
              v79 = gnllHooksTimeout;
              if ( (*((_BYTE *)Valid + 64) & 0x40) != 0 )
                v79 = 30000;
              if ( *((char *)Valid + 88) < 0 )
                v79 = 20;
            }
            else
            {
              v79 = 200;
            }
            if ( v78 || ((unsigned __int8)~(v23 >> 2) & ((*(_DWORD *)(v12 + 488) & 0xC) != 0)) != 0 )
            {
              *(_OWORD *)&v109[1] = 0LL;
              v110 = 0LL;
              v111 = 0;
              v109[0] = 2;
              v112 = 2;
              v113 = v79;
              v114 = &v89;
              if ( v78 )
              {
                v101 = *(_QWORD *)(v12 + 1400);
                v102 = *(_QWORD *)(v12 + 1408);
                v100 = *(_QWORD *)(v12 + 1416);
              }
              if ( (*(_DWORD *)(v12 + 488) & 0x20000) != 0
                || IsThreadHungTimeCheck(*((const struct tagTHREADINFO **)Valid + 2), gdwHungAppTimeout)
                || !xxxInterSendMsgEx(
                      0LL,
                      0x314u,
                      v90,
                      &v97,
                      1,
                      *((struct tagTHREADINFO **)Valid + 2),
                      (__int64)v109,
                      1,
                      0) )
              {
                v82 = dword_1C031A900[v88 + 1];
                v89 = v82;
              }
              else
              {
                v82 = v89;
              }
              if ( v78 && v82 )
              {
                _InterlockedExchange(
                  (volatile __int32 *)(*(_QWORD *)(*((_QWORD *)Valid + 2) + 448LL) + 20LL),
                  (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
                v21 = v91;
              }
            }
            else
            {
              v107 = 0LL;
              v108 = 0LL;
              v80 = PsChargeProcessWakeCounter(**(_QWORD **)(*((_QWORD *)Valid + 2) + 424LL), 0LL, 2LL, 2LL);
              v81 = v80;
              if ( v80 )
                PushW32ThreadLock(v80, &v107, ReleaseWakeReference);
              v89 = xxxInterSendMsgEx(0LL, 0x314u, v90, &v97, 1, *((struct tagTHREADINFO **)Valid + 2), 0LL, 1, 0);
              if ( v81 )
                PopAndFreeAlwaysW32ThreadLock((__int64)&v107);
            }
            v92[0] = v12 + 688;
            v92[1] = v74;
            HMAssignmentLock(v92, 1LL);
            v86 = *(_QWORD *)(v12 + 480);
            if ( v86 )
              *(_QWORD *)(v86 + 48) = v21;
            ThreadUnlock1(v84, v83, v85);
            goto LABEL_66;
          }
        }
LABEL_169:
        Valid = (struct tagHOOK *)PhkNextValid((__int64)Valid);
        v69 = ThreadUnlock1(v67, v66, v68);
        if ( v69 && (*(_DWORD *)(v69 + 64) & 0x10) != 0 )
          FreeHook((struct tagHOOK *)v69);
        goto LABEL_178;
      }
      if ( *((_DWORD *)Valid + 17) != -1 )
      {
        CurrentProcess = PsGetCurrentProcess(v27, v26, v28);
        if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) )
          goto LABEL_169;
        if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
          goto LABEL_169;
        v30 = *((_DWORD *)Valid + 17);
        SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::UnlockObjectLock<>(v119);
        v31 = xxxLoadHmodIndex(v30) != 0;
        SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::~UnlockObjectLock<>(v119);
        if ( !v31 )
          goto LABEL_169;
      }
      v32 = **(_QWORD **)(v12 + 464);
      if ( ((*(_DWORD *)(v12 + 680) | *(_DWORD *)(v32 + 16)) & 0x400) != 0 && *((_DWORD *)Valid + 12) != 9 )
      {
        v117 = 0;
        v115[0] = (unsigned int)PsGetThreadId(*(PETHREAD *)v12);
        v116 = a2;
        v115[2] = v90;
        v115[1] = v6;
        if ( (unsigned int)xxxCallHook(0, *((int *)Valid + 12), (__int64)v115, 9) )
          goto LABEL_169;
      }
      v33 = *(_QWORD *)(v12 + 688);
      *(_QWORD *)&v95 = *(_QWORD *)(v12 + 416);
      *(_QWORD *)(v12 + 416) = &v95;
      *((_QWORD *)&v95 + 1) = v33;
      if ( v33 )
        HMLockObject(v33);
      if ( !*(_QWORD *)(v12 + 480) )
        goto LABEL_63;
      v34 = Valid;
      if ( !gbInDestroyHandleTableObjects )
      {
        v35 = SGDGetUserSessionState(v32);
        if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v35 + 8)) != 1 )
        {
          v51 = SGDGetUserSessionState(v32);
          if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v51 + 8))
            || (ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainHookLock) != 1
             && !ExIsResourceAcquiredSharedLite((PERESOURCE)gDomainHookLock)
              ? (v52 = 0)
              : (v52 = 1),
                !v52) )
          {
            __int2c();
          }
        }
      }
      while ( *((_QWORD *)v34 + 5) )
      {
        v34 = (struct tagHOOK *)*((_QWORD *)v34 + 5);
LABEL_58:
        if ( !v34 || (*((_DWORD *)v34 + 16) & 0x80u) == 0 )
        {
          v39 = 0LL;
          goto LABEL_60;
        }
      }
      if ( (*((_DWORD *)v34 + 16) & 1) == 0 )
        break;
      v39 = 0LL;
      v34 = 0LL;
LABEL_60:
      v40 = *(_QWORD *)(v12 + 480);
      v21 = *(_QWORD *)(v40 + 48);
      v91 = v21;
      if ( v34 )
        v39 = *(_QWORD *)v34;
      *(_QWORD *)(v40 + 48) = v39;
      v10 = v88;
LABEL_63:
      v105[0] = v12 + 688;
      v105[1] = Valid;
      HMAssignmentLock(v105, 1LL);
      v89 = xxxHkCallHook(Valid, a2, v90, v94[0]);
      v106[0] = v12 + 688;
      v106[1] = v33;
      HMAssignmentLock(v106, 1LL);
      v44 = *(_QWORD *)(v12 + 480);
      if ( v44 )
        *(_QWORD *)(v44 + 48) = v21;
      ThreadUnlock1(v42, v41, v43);
      if ( (*((_DWORD *)Valid + 16) & 0x10) == 0 )
      {
LABEL_66:
        ThreadUnlock1(v46, v45, v47);
        return v89;
      }
      Valid = (struct tagHOOK *)PhkNextValid((__int64)Valid);
      v73 = (struct tagHOOK *)ThreadUnlock1(v71, v70, v72);
      if ( v73 )
        FreeHook(v73);
      v6 = v94[0];
LABEL_178:
      v8 = (int *)v92[0];
LABEL_179:
      if ( !Valid )
        return dword_1C031A900[v10 + 1];
    }
    v36 = SGDGetUserSessionState(v32);
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v36 + 8)) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
    v37 = 0LL;
    v38 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v38 )
      v37 = *v38;
    v32 = *((int *)v34 + 12);
    v34 = *(struct tagHOOK **)(*(_QWORD *)(v37 + 464) + 8 * v32 + 48);
    goto LABEL_58;
  }
  return dword_1C031A900[v10 + 1];
}
