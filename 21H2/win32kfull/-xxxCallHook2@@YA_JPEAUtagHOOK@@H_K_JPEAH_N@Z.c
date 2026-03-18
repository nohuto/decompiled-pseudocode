/*
 * XREFs of ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0053590
 * Callers:
 *     xxxCallMouseHook @ 0x1C0002CD4 (xxxCallMouseHook.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     xxxReceiveMessage @ 0x1C0058700 (xxxReceiveMessage.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C009B280 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     EditionLLMouseButtonHook @ 0x1C00EA420 (EditionLLMouseButtonHook.c)
 *     EditionKeyEventLLHook @ 0x1C00EA4C0 (EditionKeyEventLLHook.c)
 *     xxxCallNextHookEx @ 0x1C00EA54C (xxxCallNextHookEx.c)
 *     EditionLLMouseWheelHook @ 0x1C01D41E0 (EditionLLMouseWheelHook.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E0F20 (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01E1344 (xxxCallJournalRecordHook.c)
 *     xxxPointerCallHook @ 0x1C01EAF28 (xxxPointerCallHook.c)
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxInterSendMsgEx @ 0x1C00517B0 (xxxInterSendMsgEx.c)
 *     xxxHkCallHook @ 0x1C0053C4C (xxxHkCallHook.c)
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C00541E4 (IS_USERCRIT_OWNED_SHARED.c)
 *     xxxLoadHmodIndex @ 0x1C0054214 (xxxLoadHmodIndex.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     FreeHook @ 0x1C0070000 (FreeHook.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?IsThreadHung@@YAHPEBUtagTHREADINFO@@K@Z @ 0x1C00A93A4 (-IsThreadHung@@YAHPEBUtagTHREADINFO@@K@Z.c)
 *     PhkNextValid @ 0x1C00EA754 (PhkNextValid.c)
 *     ?IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C00F5D50 (-IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@$$V@?$UnlockDomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C014095C (--0-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@$$V@-$UnlockDomainShared@VDLT_HOOK@@@SharedUse.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C0159D38 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C015A05C (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly.c)
 *     ??1?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@$$V@?$UnlockDomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C015A1F8 (--1-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@$$V@-$UnlockDomainShared@VDLT_HOOK@@@SharedUse.c)
 */

__int64 __fastcall xxxCallHook2(
        struct tagHOOK *Valid,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        int *a5,
        bool a6)
{
  __int64 v6; // r15
  int *v8; // r12
  unsigned int v9; // r14d
  __int64 v10; // rbx
  __int64 *ThreadWin32Thread; // rax
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // rcx
  unsigned __int8 v16; // r12
  __int64 v17; // rcx
  BOOL v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 CurrentProcess; // rax
  unsigned int v22; // edi
  BOOL v23; // edi
  __int64 v24; // r15
  struct tagHOOK *v25; // rdi
  __int64 v26; // r14
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int16 ProcessMachine; // di
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  struct tagHOOK *v57; // rax
  __int64 v58; // r14
  _QWORD *v59; // rax
  __int64 v60; // rcx
  char v61; // di
  int SystemArgument2; // ecx
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  unsigned int v71; // [rsp+54h] [rbp-234h]
  __int64 v72; // [rsp+58h] [rbp-230h] BYREF
  __int64 v73; // [rsp+60h] [rbp-228h]
  __int64 v74; // [rsp+68h] [rbp-220h]
  _QWORD v75[6]; // [rsp+70h] [rbp-218h] BYREF
  __int64 ProcessInformation; // [rsp+A0h] [rbp-1E8h] BYREF
  _QWORD v77[2]; // [rsp+B0h] [rbp-1D8h] BYREF
  __int128 v78; // [rsp+C0h] [rbp-1C8h] BYREF
  __int64 v79; // [rsp+D0h] [rbp-1B8h]
  void *v80; // [rsp+D8h] [rbp-1B0h] BYREF
  unsigned int v81; // [rsp+E0h] [rbp-1A8h]
  int v82; // [rsp+E4h] [rbp-1A4h]
  __int64 v83; // [rsp+E8h] [rbp-1A0h]
  __int64 v84; // [rsp+F0h] [rbp-198h]
  __int64 v85; // [rsp+F8h] [rbp-190h]
  __int128 v86; // [rsp+110h] [rbp-178h] BYREF
  __int64 v87; // [rsp+120h] [rbp-168h]
  _QWORD v88[2]; // [rsp+130h] [rbp-158h] BYREF
  _QWORD v89[2]; // [rsp+140h] [rbp-148h] BYREF
  __int128 v90; // [rsp+150h] [rbp-138h] BYREF
  __int64 v91; // [rsp+160h] [rbp-128h]
  int v92; // [rsp+168h] [rbp-120h] BYREF
  __int128 v93; // [rsp+16Ch] [rbp-11Ch]
  __int64 v94; // [rsp+17Ch] [rbp-10Ch]
  int v95; // [rsp+184h] [rbp-104h]
  int v96; // [rsp+188h] [rbp-100h]
  int v97; // [rsp+18Ch] [rbp-FCh]
  __int64 *v98; // [rsp+190h] [rbp-F8h]
  __int64 v99[3]; // [rsp+1B8h] [rbp-D0h] BYREF
  unsigned int v100; // [rsp+1D0h] [rbp-B8h]
  int v101; // [rsp+1D4h] [rbp-B4h]
  _BYTE v102[56]; // [rsp+1D8h] [rbp-B0h] BYREF
  _BYTE v103[56]; // [rsp+210h] [rbp-78h] BYREF

  v6 = a4;
  v77[0] = a4;
  v73 = a3;
  v8 = a5;
  v75[0] = a5;
  v74 = 0LL;
  v72 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  if ( !gbInDestroyHandleTableObjects
    && ExIsResourceAcquiredExclusiveLite(gpresUser) != 1
    && (!(unsigned int)IS_USERCRIT_OWNED_SHARED()
     || ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainHookLock) != 1
     && !ExIsResourceAcquiredSharedLite((PERESOURCE)gDomainHookLock)) )
  {
    __int2c();
  }
  if ( !Valid )
    return 0LL;
  v9 = *((_DWORD *)Valid + 12);
  v71 = v9;
  v10 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v10 = *ThreadWin32Thread;
  if ( v10 == gptiRit && (v9 < 0xD || v9 > 0xE) )
    return 0LL;
  if ( (*(_DWORD *)(v10 + 488) & 0x10000001) != 0 || !*(_QWORD *)(v10 + 456) && *((_DWORD *)Valid + 12) != 14 )
    return dword_1C02E9CF0[v9 + 1];
  if ( v9 == 4 )
  {
    v12 = *(_DWORD *)(v6 + 16);
    v13 = *(_QWORD *)(v6 + 8);
  }
  else if ( v9 )
  {
    if ( v9 == 3 || v9 == -1 || v9 == 6 )
    {
      v12 = *(_DWORD *)(v6 + 8);
      v13 = *(_QWORD *)(v6 + 16);
    }
    else if ( v9 == 12 )
    {
      v12 = *(_DWORD *)(v6 + 24);
      v13 = *(_QWORD *)(v6 + 16);
    }
    else
    {
      v12 = 0;
      v13 = 0LL;
    }
  }
  else
  {
    v12 = *(_DWORD *)v6;
    v13 = 0LL;
  }
  if ( ((unsigned int)(v12 - 577) > 3 && ((unsigned int)(v12 - 581) > 0x12 || v12 == 589) || v12 == 595)
    && (v12 != 528 || (_WORD)v13 != 582)
    || v9 >= 3 && (v9 <= 4 || v9 == 12) )
  {
    v14 = v74;
    while ( 1 )
    {
      SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v102, v13);
      if ( (*(_BYTE *)(_HMPheFromObject(Valid) + 25) & 1) != 0 || (*((_DWORD *)Valid + 16) & 0x1000) != 0 )
      {
        Valid = (struct tagHOOK *)PhkNextValid(Valid);
        SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v102);
        goto LABEL_152;
      }
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v102);
      if ( v9 == 14 && *((_QWORD *)Valid + 2) && (unsigned __int8)IsSpatialDelegationEnabledForThread()
        || v9 == 13 && *((_QWORD *)Valid + 2) && (unsigned __int8)IsKeyboardDelegationEnabledForThread() )
      {
        Valid = (struct tagHOOK *)PhkNextValid(Valid);
        goto LABEL_152;
      }
      if ( v8 )
        *v8 = *((_DWORD *)Valid + 16) & 2;
      v15 = *((int *)Valid + 12);
      v16 = byte_1C02E8961[v15];
      if ( (_DWORD)v15 == 10 )
      {
        if ( (*(_DWORD *)(v10 + 488) & 8) != 0 && ((a2 - 4) & 0xFFFFFFF3) == 0 && a2 != 16 )
          v16 |= 0x10u;
        if ( (*(_DWORD *)(v10 + 488) & 4) != 0 && a2 == 11 )
          v16 |= 0x10u;
      }
      v17 = *((_QWORD *)Valid + 2);
      v18 = 0;
      if ( v17 != v10 )
      {
        if ( (v16 & 0x24) != 0
          || (ProcessMachine = PsGetProcessMachine(**(_QWORD **)(v17 + 424), a2),
              (unsigned __int16)PsGetProcessMachine(**(_QWORD **)(v10 + 424), v39) != ProcessMachine)
          || (*(_DWORD *)(v10 + 488) & 0xC) != 0
          && *(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL) != *(_QWORD *)(v10 + 424)
          || (unsigned int)IsProcessDwm(**(_QWORD **)(*((_QWORD *)Valid + 2) + 424LL))
          || !(unsigned __int8)Enforced(v40)
          && (*((_DWORD *)Valid + 16) & 1) != 0
          && ((v42 = *(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL),
               v43 = *(_QWORD *)(v10 + 424),
               v44 = *(_DWORD *)(v42 + 780),
               v44 != *(_DWORD *)(v43 + 780))
           || *(_DWORD *)(v42 + 784) != *(_DWORD *)(v43 + 784))
          && (*(_DWORD *)(v10 + 488) & 0x400000) == 0
          && (v44 != luidSystem[0] || *(_DWORD *)(v42 + 784) != luidSystem[1])
          || (v41 = (_QWORD *)*((_QWORD *)Valid + 2), v41[53] != *(_QWORD *)(v10 + 424))
          && (unsigned __int8)IsRestricted(*v41) )
        {
          v18 = 1;
        }
      }
      if ( (unsigned int)(*((_DWORD *)Valid + 12) - 13) <= 1 )
      {
        if ( a6
          || !gpqForeground
          || (unsigned __int8)CheckAccess(*(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL) + 880LL, gpqForeground + 424LL)
          || (unsigned int)IsForegroundShellFrameQueueAccessible(*((const struct tagTHREADINFO **)Valid + 2))
          || (v46 = *((_QWORD *)Valid + 2), *(int *)(*(_QWORD *)(v46 + 424) + 12LL) < 0) )
        {
          if ( *((_DWORD *)Valid + 12) == 14 )
          {
            if ( *(_DWORD *)(v10 + 1368) != -1
              && !(unsigned __int8)CheckAccess(*(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL) + 880LL, v10 + 1368) )
            {
              v47 = *((_QWORD *)Valid + 2);
              if ( *(int *)(*(_QWORD *)(v47 + 424) + 12LL) >= 0 )
              {
                EtwTraceUIPIInputError(v47, 0LL, 0LL, *(_QWORD *)(v10 + 1368), 6);
                v16 &= ~0x10u;
              }
            }
            v9 = v71;
          }
        }
        else
        {
          EtwTraceUIPIInputError(v46, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 424LL), 6);
          v16 &= ~0x10u;
        }
      }
      else if ( !(unsigned __int8)CheckAccess(
                                    *(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL) + 880LL,
                                    *(_QWORD *)(v10 + 424) + 880LL) )
      {
        v45 = *((_QWORD *)Valid + 2);
        if ( *(int *)(*(_QWORD *)(v45 + 424) + 12LL) >= 0 )
        {
          v16 &= ~0x10u;
          EtwTraceUIPIHookError(Valid, v16, v45, v10, v9, a2, v73, v6);
        }
        v18 = 1;
      }
      if ( !v18
        && (*((_DWORD *)Valid + 16) & 1) != 0
        && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL)) )
      {
        v48 = *(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL);
        if ( *(int *)(v48 + 12) >= 0 )
        {
          v49 = *(_QWORD *)(v10 + 424);
          if ( v48 != v49 && (*(_DWORD *)(v48 + 820) & 0x100) == 0 )
          {
            if ( (unsigned int)IsImmersiveAppRestricted(v49)
              || (ProcessInformation = 6LL,
                  ZwQueryInformationProcess(
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    ProcessCookie|ProcessUserModeIOPL,
                    &ProcessInformation,
                    8u,
                    0LL) < 0)
              || (ProcessInformation & 0x100000000LL) != 0 )
            {
              v18 = 1;
            }
          }
        }
      }
      *(_QWORD *)&v86 = *(_QWORD *)(v10 + 416);
      *(_QWORD *)(v10 + 416) = &v86;
      *((_QWORD *)&v86 + 1) = Valid;
      HMLockObject(Valid);
      if ( v18 )
      {
        if ( (v16 & 0x10) != 0 )
        {
          v82 = 0;
          v83 = v6;
          v80 = Valid;
          v81 = a2;
          v84 = -1LL;
          v85 = -1LL;
          if ( (*(_DWORD *)(*((_QWORD *)Valid + 2) + 1256LL) & 0x20) == 0 )
          {
            v58 = *(_QWORD *)(v10 + 688);
            *(_QWORD *)&v78 = *(_QWORD *)(v10 + 416);
            *(_QWORD *)(v10 + 416) = &v78;
            *((_QWORD *)&v78 + 1) = v58;
            if ( v58 )
              HMLockObject(v58);
            v77[0] = v10 + 688;
            v77[1] = Valid;
            HMAssignmentLock(v77, 0LL);
            if ( *(_QWORD *)(v10 + 480) )
            {
              v59 = (_QWORD *)PhkNextValid(Valid);
              v60 = *(_QWORD *)(v10 + 480);
              v14 = *(_QWORD *)(v60 + 48);
              v74 = v14;
              if ( v59 )
                v59 = (_QWORD *)*v59;
              *(_QWORD *)(v60 + 48) = v59;
            }
            v61 = v16 & 0x20;
            if ( (v16 & 0x20) != 0 )
            {
              SystemArgument2 = (int)WPP_MAIN_CB.Dpc.SystemArgument2;
              if ( (*((_BYTE *)Valid + 64) & 0x40) != 0 )
                SystemArgument2 = 30000;
              if ( *((char *)Valid + 88) < 0 )
                SystemArgument2 = 20;
            }
            else
            {
              SystemArgument2 = 200;
            }
            if ( v61 || ((unsigned __int8)~(v16 >> 2) & ((*(_DWORD *)(v10 + 488) & 0xC) != 0)) != 0 )
            {
              v93 = 0LL;
              v94 = 0LL;
              v95 = 0;
              v92 = 2;
              v96 = 2;
              v97 = SystemArgument2;
              v98 = &v72;
              if ( v61 )
              {
                v84 = *(_QWORD *)(v10 + 1360);
                v85 = *(_QWORD *)(v10 + 1368);
                v83 = *(_QWORD *)(v10 + 1376);
              }
              if ( (*(_DWORD *)(v10 + 488) & 0x20000) != 0
                || (unsigned int)IsThreadHung(*((const struct tagTHREADINFO **)Valid + 2), 0)
                || !xxxInterSendMsgEx(
                      0LL,
                      0x314u,
                      v73,
                      &v80,
                      1,
                      *((struct tagTHREADINFO **)Valid + 2),
                      (__int64)&v92,
                      1,
                      0) )
              {
                v65 = dword_1C02E9CF0[v71 + 1];
                v72 = v65;
              }
              else
              {
                v65 = v72;
              }
              if ( v61 && v65 )
              {
                _InterlockedExchange(
                  (volatile __int32 *)(*(_QWORD *)(*((_QWORD *)Valid + 2) + 448LL) + 20LL),
                  (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
                v14 = v74;
              }
            }
            else
            {
              v90 = 0LL;
              v91 = 0LL;
              v63 = PsChargeProcessWakeCounter(**(_QWORD **)(*((_QWORD *)Valid + 2) + 424LL), 0LL, 2LL);
              v64 = v63;
              if ( v63 )
                PushW32ThreadLock(v63, &v90, ReleaseWakeReference);
              v72 = xxxInterSendMsgEx(0LL, 0x314u, v73, &v80, 1, *((struct tagTHREADINFO **)Valid + 2), 0LL, 1, 0);
              if ( v64 )
                PopAndFreeAlwaysW32ThreadLock(&v90);
            }
            v75[0] = v10 + 688;
            v75[1] = v58;
            HMAssignmentLock(v75, 1LL);
            v69 = *(_QWORD *)(v10 + 480);
            if ( v69 )
              *(_QWORD *)(v69 + 48) = v14;
            ThreadUnlock1(v67, v66, v68);
            goto LABEL_52;
          }
        }
LABEL_143:
        Valid = (struct tagHOOK *)PhkNextValid(Valid);
        v53 = ThreadUnlock1(v51, v50, v52);
        if ( v53 && (*(_DWORD *)(v53 + 64) & 0x10) != 0 )
          FreeHook((struct tagHOOK *)v53);
        goto LABEL_151;
      }
      if ( *((_DWORD *)Valid + 17) != -1 )
      {
        CurrentProcess = PsGetCurrentProcess(v20, v19);
        if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) )
          goto LABEL_143;
        if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
          goto LABEL_143;
        v22 = *((_DWORD *)Valid + 17);
        SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::UnlockObjectLock<>(v103);
        v23 = xxxLoadHmodIndex(v22) != 0;
        SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::~UnlockObjectLock<>(v103);
        if ( !v23 )
          goto LABEL_143;
      }
      if ( ((*(_DWORD *)(**(_QWORD **)(v10 + 464) + 16LL) | *(_DWORD *)(v10 + 680)) & 0x400) != 0
        && *((_DWORD *)Valid + 12) != 9 )
      {
        v101 = 0;
        v99[0] = (unsigned int)PsGetThreadId(*(PETHREAD *)v10);
        v100 = a2;
        v99[2] = v73;
        v99[1] = v6;
        if ( (unsigned int)xxxCallHook(0, *((int *)Valid + 12), (__int64)v99, 9) )
          goto LABEL_143;
      }
      v24 = *(_QWORD *)(v10 + 688);
      *(_QWORD *)&v78 = *(_QWORD *)(v10 + 416);
      *(_QWORD *)(v10 + 416) = &v78;
      *((_QWORD *)&v78 + 1) = v24;
      if ( v24 )
        HMLockObject(v24);
      if ( !*(_QWORD *)(v10 + 480) )
        goto LABEL_49;
      v25 = Valid;
      if ( !gbInDestroyHandleTableObjects
        && ExIsResourceAcquiredExclusiveLite(gpresUser) != 1
        && (!(unsigned int)IS_USERCRIT_OWNED_SHARED()
         || ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainHookLock) != 1
         && !ExIsResourceAcquiredSharedLite((PERESOURCE)gDomainHookLock)) )
      {
        __int2c();
      }
      while ( *((_QWORD *)v25 + 5) )
      {
        v25 = (struct tagHOOK *)*((_QWORD *)v25 + 5);
LABEL_44:
        if ( !v25 || (*((_DWORD *)v25 + 16) & 0x80u) == 0 )
          goto LABEL_45;
      }
      if ( (*((_DWORD *)v25 + 16) & 1) == 0 )
        break;
      v25 = 0LL;
LABEL_45:
      v28 = *(_QWORD *)(v10 + 480);
      v14 = *(_QWORD *)(v28 + 48);
      v74 = v14;
      if ( v25 )
        v29 = *(_QWORD *)v25;
      else
        v29 = 0LL;
      *(_QWORD *)(v28 + 48) = v29;
      v9 = v71;
LABEL_49:
      v88[0] = v10 + 688;
      v88[1] = Valid;
      HMAssignmentLock(v88, 1LL);
      v72 = xxxHkCallHook(Valid, a2, v73, v77[0]);
      v89[0] = v10 + 688;
      v89[1] = v24;
      HMAssignmentLock(v89, 1LL);
      v33 = *(_QWORD *)(v10 + 480);
      if ( v33 )
        *(_QWORD *)(v33 + 48) = v14;
      ThreadUnlock1(v31, v30, v32);
      if ( (*((_DWORD *)Valid + 16) & 0x10) == 0 )
      {
LABEL_52:
        ThreadUnlock1(v35, v34, v36);
        return v72;
      }
      Valid = (struct tagHOOK *)PhkNextValid(Valid);
      v57 = (struct tagHOOK *)ThreadUnlock1(v55, v54, v56);
      if ( v57 )
        FreeHook(v57);
      v6 = v77[0];
LABEL_151:
      v8 = (int *)v75[0];
LABEL_152:
      if ( !Valid )
        return dword_1C02E9CF0[v9 + 1];
    }
    v26 = 0LL;
    v27 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v27 )
      v26 = *v27;
    v25 = *(struct tagHOOK **)(*(_QWORD *)(v26 + 464) + 8LL * *((int *)v25 + 12) + 48);
    goto LABEL_44;
  }
  return dword_1C02E9CF0[v9 + 1];
}
