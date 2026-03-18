/*
 * XREFs of ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C011F720
 * Callers:
 *     xxxCallNextHookEx @ 0x1C000A1E4 (xxxCallNextHookEx.c)
 *     xxxCallMouseHook @ 0x1C000E574 (xxxCallMouseHook.c)
 *     EditionKeyEventLLHook @ 0x1C00718F0 (EditionKeyEventLLHook.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxReceiveMessage @ 0x1C01267C0 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C014F34E (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     EditionLLMouseButtonHook @ 0x1C01AC290 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01AC470 (EditionLLMouseWheelHook.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01BB72C (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01BBB54 (xxxCallJournalRecordHook.c)
 *     xxxPointerCallHook @ 0x1C01C4E30 (xxxPointerCallHook.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0024460 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxInterSendMsgEx @ 0x1C004D920 (xxxInterSendMsgEx.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     FreeHook @ 0x1C00704F0 (FreeHook.c)
 *     PhkNextValid @ 0x1C00719E4 (PhkNextValid.c)
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1C0071E94 (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 *     ?IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C00A6FF0 (-IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C012077C (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly.c)
 *     xxxHkCallHook @ 0x1C0120850 (xxxHkCallHook.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C0122370 (--1-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly.c)
 *     xxxLoadHmodIndex @ 0x1C01223C0 (xxxLoadHmodIndex.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@$$V@?$UnlockDomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C013A4FC (--0-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@$$V@-$UnlockDomainShared@VDLT_HOOK@@@SharedUse.c)
 *     ??1?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@$$V@?$UnlockDomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C013A58C (--1-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@$$V@-$UnlockDomainShared@VDLT_HOOK@@@SharedUse.c)
 *     Feature_HandleHookDestroyedDuringCallout__private_IsEnabledDeviceUsage @ 0x1C013A5EC (Feature_HandleHookDestroyedDuringCallout__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxCallHook2(struct tagHOOK *a1, __int64 a2, unsigned __int64 a3, __int64 a4, int *a5, bool a6)
{
  __int64 v6; // r14
  unsigned int v7; // esi
  struct tagHOOK *Valid; // rdi
  PERESOURCE *v9; // rax
  PERESOURCE *v10; // rax
  bool v11; // al
  unsigned int v12; // ebx
  PERESOURCE *v13; // rax
  __int64 v14; // r12
  __int64 *ThreadWin32Thread; // rax
  int v16; // ecx
  __int64 v17; // rdx
  int v18; // eax
  bool v19; // zf
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v25; // r13
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned __int8 v29; // r15
  __int64 v30; // rcx
  __int16 ProcessMachine; // bx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // r8d
  _DWORD *v36; // rdx
  _QWORD *v37; // rcx
  int v38; // esi
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 CurrentProcess; // rax
  __int64 v50; // rcx
  unsigned int v51; // ebx
  BOOL v52; // ebx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rcx
  int IsEnabledDeviceUsage; // eax
  unsigned __int64 v61; // rdx
  __int64 v62; // r14
  struct tagHOOK *v63; // rbx
  PERESOURCE *v64; // rax
  PERESOURCE *v65; // rax
  bool v66; // al
  PERESOURCE *v67; // rax
  __int64 v68; // rsi
  __int64 *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  struct tagHOOK *v82; // rax
  __int64 v83; // rsi
  __int64 *v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rax
  char v87; // bl
  int v88; // ecx
  __int64 v89; // rax
  __int64 v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // rax
  int ReturnLength; // [rsp+20h] [rbp-2D8h]
  unsigned int v97; // [rsp+50h] [rbp-2A8h]
  unsigned int v98; // [rsp+54h] [rbp-2A4h]
  __int64 v99; // [rsp+60h] [rbp-298h] BYREF
  unsigned __int64 v100; // [rsp+68h] [rbp-290h]
  __int64 v101; // [rsp+70h] [rbp-288h]
  __int64 ProcessInformation; // [rsp+98h] [rbp-260h] BYREF
  _QWORD v103[2]; // [rsp+A0h] [rbp-258h] BYREF
  __int128 v104; // [rsp+B0h] [rbp-248h] BYREF
  __int64 v105; // [rsp+C0h] [rbp-238h]
  struct tagHOOK *v106; // [rsp+C8h] [rbp-230h] BYREF
  unsigned int v107; // [rsp+D0h] [rbp-228h]
  int v108; // [rsp+D4h] [rbp-224h]
  __int64 v109; // [rsp+D8h] [rbp-220h]
  __int64 v110; // [rsp+E0h] [rbp-218h]
  __int64 v111; // [rsp+E8h] [rbp-210h]
  _QWORD v112[4]; // [rsp+F0h] [rbp-208h] BYREF
  __int128 v113; // [rsp+110h] [rbp-1E8h] BYREF
  __int64 v114; // [rsp+120h] [rbp-1D8h]
  _QWORD v115[2]; // [rsp+130h] [rbp-1C8h] BYREF
  _QWORD v116[2]; // [rsp+140h] [rbp-1B8h] BYREF
  __int128 v117; // [rsp+150h] [rbp-1A8h] BYREF
  __int64 v118; // [rsp+160h] [rbp-198h]
  int v119; // [rsp+168h] [rbp-190h] BYREF
  __int128 v120; // [rsp+16Ch] [rbp-18Ch]
  __int64 v121; // [rsp+17Ch] [rbp-17Ch]
  int v122; // [rsp+184h] [rbp-174h]
  int v123; // [rsp+188h] [rbp-170h]
  int v124; // [rsp+18Ch] [rbp-16Ch]
  __int64 *v125; // [rsp+190h] [rbp-168h]
  __int64 v126[2]; // [rsp+1B8h] [rbp-140h] BYREF
  __int128 v127; // [rsp+1C8h] [rbp-130h]
  _BYTE v128[56]; // [rsp+1D8h] [rbp-120h] BYREF
  _BYTE v129[56]; // [rsp+210h] [rbp-E8h] BYREF
  _BYTE v130[56]; // [rsp+248h] [rbp-B0h] BYREF
  _BYTE v131[56]; // [rsp+280h] [rbp-78h] BYREF

  v6 = a4;
  v103[0] = a4;
  v100 = a3;
  v7 = a2;
  v98 = a2;
  Valid = a1;
  v112[0] = a5;
  v101 = 0LL;
  v99 = 0LL;
  v113 = 0LL;
  v114 = 0LL;
  v104 = 0LL;
  v105 = 0LL;
  if ( !gbInDestroyHandleTableObjects )
  {
    v9 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
    if ( ExIsResourceAcquiredExclusiveLite(*v9) != 1 )
    {
      v10 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
      if ( !ExIsResourceAcquiredSharedLite(*v10) )
        goto LABEL_8;
      if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainHookLock) == 1
        || (v11 = ExIsResourceAcquiredSharedLite((PERESOURCE)gDomainHookLock) != 0) )
      {
        v11 = 1;
      }
      if ( !v11 )
LABEL_8:
        __int2c();
    }
  }
  if ( !Valid )
    return 0LL;
  v12 = *((_DWORD *)Valid + 12);
  v97 = v12;
  v13 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  if ( !ExIsResourceAcquiredSharedLite(*v13) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v14 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v14 = *ThreadWin32Thread;
  if ( v14 == gptiRit && v12 != 13 && v12 != 14 )
    return 0LL;
  if ( (*(_DWORD *)(v14 + 488) & 0x10000001) != 0 || !*(_QWORD *)(v14 + 456) && *((_DWORD *)Valid + 12) != 14 )
    return dword_1C0318FD0[v12 + 1];
  if ( v12 > 6 )
  {
    if ( v12 == 12 )
    {
      v16 = *(_DWORD *)(v6 + 24);
      goto LABEL_32;
    }
    if ( v12 != -1 )
    {
LABEL_29:
      v16 = 0;
      LOWORD(v17) = 0;
      goto LABEL_33;
    }
  }
  else if ( v12 != 6 )
  {
    if ( !v12 )
    {
      v16 = *(_DWORD *)v6;
      LOWORD(v17) = 0;
      goto LABEL_33;
    }
    if ( v12 != 3 )
    {
      if ( v12 == 4 )
      {
        v16 = *(_DWORD *)(v6 + 16);
        v17 = *(_QWORD *)(v6 + 8);
        goto LABEL_33;
      }
      goto LABEL_29;
    }
  }
  v16 = *(_DWORD *)(v6 + 8);
LABEL_32:
  v17 = *(_QWORD *)(v6 + 16);
LABEL_33:
  if ( (unsigned int)(v16 - 577) <= 3 )
    goto LABEL_38;
  if ( (unsigned int)(v16 - 581) > 0x12 || (v18 = 1, v16 == 589) )
    v18 = 0;
  v19 = v18 == 0;
  v20 = 0;
  if ( !v19 )
LABEL_38:
    v20 = 1;
  if ( !v20 || (v21 = 1, v16 == 595) )
    v21 = 0;
  if ( v21 )
    goto LABEL_47;
  if ( v16 != 528 || (v22 = 1, (_WORD)v17 != 582) )
    v22 = 0;
  v19 = v22 == 0;
  v23 = 0;
  if ( !v19 )
LABEL_47:
    v23 = 1;
  if ( v23 && v12 != 3 && v12 != 4 && v12 != 12 )
    return dword_1C0318FD0[v12 + 1];
  v25 = v101;
  while ( 1 )
  {
    SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v130);
    if ( (*(_BYTE *)(_HMPheFromObject(Valid) + 25) & 1) != 0 || (*((_DWORD *)Valid + 16) & 0x1000) != 0 )
    {
      Valid = (struct tagHOOK *)PhkNextValid((__int64)Valid);
      SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::~ObjectLock<>(v130);
      goto LABEL_180;
    }
    SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::~ObjectLock<>(v130);
    if ( v12 != 14 || (v26 = *((_QWORD *)Valid + 2)) == 0 || !(unsigned __int8)IsSpatialDelegationEnabledForThread(v26) )
    {
      if ( v12 != 13 )
        break;
      v27 = *((_QWORD *)Valid + 2);
      if ( !v27 || !(unsigned __int8)IsKeyboardDelegationEnabledForThread(v27) )
        break;
    }
    Valid = (struct tagHOOK *)PhkNextValid((__int64)Valid);
LABEL_180:
    if ( !Valid )
      return dword_1C0318FD0[v12 + 1];
  }
  if ( v112[0] )
    *(_DWORD *)v112[0] = *((_DWORD *)Valid + 16) & 2;
  v28 = *((int *)Valid + 12);
  v29 = byte_1C0317021[v28];
  if ( (_DWORD)v28 == 10 )
  {
    if ( (*(_DWORD *)(v14 + 488) & 8) != 0 && ((v7 - 4) & 0xFFFFFFF3) == 0 && v7 != 16 )
      v29 |= 0x10u;
    if ( (*(_DWORD *)(v14 + 488) & 4) != 0 && v7 == 11 )
      v29 |= 0x10u;
  }
  v30 = *((_QWORD *)Valid + 2);
  if ( v30 == v14 )
    goto LABEL_92;
  if ( (v29 & 0x24) != 0 )
    goto LABEL_90;
  ProcessMachine = PsGetProcessMachine(**(_QWORD **)(v30 + 424));
  if ( (unsigned __int16)PsGetProcessMachine(**(_QWORD **)(v14 + 424)) != ProcessMachine
    || (*(_DWORD *)(v14 + 488) & 0xC) != 0 && *(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL) != *(_QWORD *)(v14 + 424)
    || (unsigned int)IsProcessDwm(**(_QWORD **)(*((_QWORD *)Valid + 2) + 424LL))
    || !(unsigned __int8)Enforced(v32)
    && (*((_DWORD *)Valid + 16) & 1) != 0
    && ((v33 = *(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL),
         v34 = *(_QWORD *)(v14 + 424),
         v35 = *(_DWORD *)(v33 + 772),
         v36 = (_DWORD *)(v33 + 776),
         v35 != *(_DWORD *)(v34 + 772))
     || *v36 != *(_DWORD *)(v34 + 776))
    && (*(_DWORD *)(v14 + 488) & 0x400000) == 0
    && (v35 != luidSystem[0] || *v36 != luidSystem[1]) )
  {
    v12 = v97;
LABEL_90:
    v38 = 1;
    goto LABEL_93;
  }
  v37 = (_QWORD *)*((_QWORD *)Valid + 2);
  if ( v37[53] == *(_QWORD *)(v14 + 424) )
  {
    v12 = v97;
  }
  else
  {
    v12 = v97;
    if ( (unsigned __int8)IsRestricted(*v37) )
    {
      v38 = 1;
      goto LABEL_93;
    }
  }
LABEL_92:
  v38 = 0;
LABEL_93:
  if ( (unsigned int)(*((_DWORD *)Valid + 12) - 13) <= 1 )
  {
    if ( a6
      || !gpqForeground
      || (unsigned __int8)CheckAccess(*(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL) + 888LL, gpqForeground + 432LL)
      || (unsigned int)IsForegroundShellFrameQueueAccessible(*((const struct tagTHREADINFO **)Valid + 2))
      || (v40 = *((_QWORD *)Valid + 2), *(int *)(*(_QWORD *)(v40 + 424) + 12LL) < 0) )
    {
      if ( *((_DWORD *)Valid + 12) != 14 )
        goto LABEL_110;
      if ( *(_DWORD *)(v14 + 1408) == -1 )
        goto LABEL_110;
      if ( (unsigned __int8)CheckAccess(*(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL) + 888LL, v14 + 1408) )
        goto LABEL_110;
      v40 = *((_QWORD *)Valid + 2);
      if ( *(int *)(*(_QWORD *)(v40 + 424) + 12LL) < 0 )
        goto LABEL_110;
      v42 = *(_QWORD *)(v14 + 1408);
      v41 = 0LL;
    }
    else
    {
      v41 = gpqForeground;
      v42 = *(_QWORD *)(gpqForeground + 432LL);
    }
    ReturnLength = 6;
    EtwTraceUIPIInputError(v40, 0LL, v41, v42);
    v29 &= ~0x10u;
    goto LABEL_110;
  }
  if ( !(unsigned __int8)CheckAccess(
                           *(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL) + 888LL,
                           *(_QWORD *)(v14 + 424) + 888LL) )
  {
    v39 = *((_QWORD *)Valid + 2);
    if ( *(int *)(*(_QWORD *)(v39 + 424) + 12LL) >= 0 )
    {
      v29 &= ~0x10u;
      EtwTraceUIPIHookError(Valid, v29, v39, v14, v12, v98, v100, v6);
    }
    v38 = 1;
  }
LABEL_110:
  if ( !v38
    && (*((_DWORD *)Valid + 16) & 1) != 0
    && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL)) )
  {
    v43 = *(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL);
    if ( *(int *)(v43 + 12) >= 0 )
    {
      v44 = *(_QWORD *)(v14 + 424);
      if ( v43 != v44 && (*(_DWORD *)(v43 + 816) & 0x100) == 0 )
      {
        if ( (unsigned int)IsImmersiveAppRestricted(v44) )
        {
          v38 = 1;
        }
        else
        {
          ProcessInformation = 6LL;
          if ( ZwQueryInformationProcess(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 ProcessCookie|ProcessUserModeIOPL,
                 &ProcessInformation,
                 8u,
                 0LL) < 0
            || (ProcessInformation & 0x100000000LL) != 0 )
          {
            v38 = 1;
          }
        }
      }
    }
  }
  *(_QWORD *)&v113 = *(_QWORD *)(v14 + 416);
  *(_QWORD *)(v14 + 416) = &v113;
  *((_QWORD *)&v113 + 1) = Valid;
  HMLockObject(Valid);
  if ( v38 )
  {
    if ( (v29 & 0x10) == 0 )
      goto LABEL_131;
    v108 = 0;
    v109 = v6;
    v106 = Valid;
    v7 = v98;
    v107 = v98;
    v110 = -1LL;
    v111 = -1LL;
    if ( (*(_DWORD *)(*((_QWORD *)Valid + 2) + 1272LL) & 0x20) == 0 )
    {
      v83 = *(_QWORD *)(v14 + 688);
      *(_QWORD *)&v104 = *(_QWORD *)(v14 + 416);
      *(_QWORD *)(v14 + 416) = &v104;
      *((_QWORD *)&v104 + 1) = v83;
      if ( v83 )
        HMLockObject(v83);
      v112[0] = v14 + 688;
      v112[1] = Valid;
      HMAssignmentLock(v112, 0LL);
      if ( *(_QWORD *)(v14 + 480) )
      {
        v84 = (__int64 *)PhkNextValid((__int64)Valid);
        v85 = *(_QWORD *)(v14 + 480);
        v25 = *(_QWORD *)(v85 + 48);
        v101 = v25;
        if ( v84 )
          v86 = *v84;
        else
          v86 = 0LL;
        *(_QWORD *)(v85 + 48) = v86;
      }
      v87 = v29 & 0x20;
      if ( (v29 & 0x20) != 0 )
      {
        v88 = gnllHooksTimeout;
        if ( (*((_BYTE *)Valid + 64) & 0x40) != 0 )
          v88 = 30000;
        if ( *((char *)Valid + 88) < 0 )
          v88 = 20;
      }
      else
      {
        v88 = 200;
      }
      if ( v87 || (v29 & 4) == 0 && (*(_DWORD *)(v14 + 488) & 0xC) != 0 )
      {
        v120 = 0LL;
        v121 = 0LL;
        v122 = 0;
        v119 = 2;
        v123 = 2;
        v124 = v88;
        v125 = &v99;
        if ( v87 )
        {
          v110 = *(_QWORD *)(v14 + 1400);
          v111 = *(_QWORD *)(v14 + 1408);
          v109 = *(_QWORD *)(v14 + 1416);
        }
        if ( (*(_DWORD *)(v14 + 488) & 0x20000) != 0
          || IsThreadHungTimeCheck(*((const struct tagTHREADINFO **)Valid + 2), gdwHungAppTimeout)
          || !xxxInterSendMsgEx(
                0LL,
                0x314u,
                v100,
                (void **)&v106,
                1,
                *((struct tagTHREADINFO **)Valid + 2),
                (__int64)&v119,
                1,
                0) )
        {
          v91 = dword_1C0318FD0[v97 + 1];
          v99 = v91;
        }
        else
        {
          v91 = v99;
        }
        if ( v87 && v91 )
        {
          _InterlockedExchange(
            (volatile __int32 *)(*(_QWORD *)(*((_QWORD *)Valid + 2) + 448LL) + 20LL),
            (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          v25 = v101;
        }
      }
      else
      {
        v117 = 0LL;
        v118 = 0LL;
        v89 = PsChargeProcessWakeCounter(**(_QWORD **)(*((_QWORD *)Valid + 2) + 424LL), 0LL, 2LL, 2LL);
        v90 = v89;
        if ( v89 )
          PushW32ThreadLock(v89, &v117, (__int64)ReleaseWakeReference);
        v99 = xxxInterSendMsgEx(0LL, 0x314u, v100, (void **)&v106, 1, *((struct tagTHREADINFO **)Valid + 2), 0LL, 1, 0);
        if ( v90 )
          PopAndFreeAlwaysW32ThreadLock((__int64)&v117);
      }
      v103[0] = v14 + 688;
      v103[1] = v83;
      HMAssignmentLock(v103, 1LL);
      v95 = *(_QWORD *)(v14 + 480);
      if ( v95 )
        *(_QWORD *)(v95 + 48) = v25;
      ThreadUnlock1(v93, v92, v94);
      goto LABEL_218;
    }
LABEL_132:
    Valid = (struct tagHOOK *)PhkNextValid((__int64)Valid);
    v57 = ThreadUnlock1(v55, v54, v56);
    if ( v57 && (*(_DWORD *)(v57 + 64) & 0x10) != 0 )
      FreeHook((struct tagHOOK *)v57);
LABEL_179:
    v12 = v97;
    goto LABEL_180;
  }
  if ( *((_DWORD *)Valid + 17) != -1 )
  {
    CurrentProcess = PsGetCurrentProcess(v46, v45, v47);
    if ( !(unsigned int)PsIsProtectedProcess(CurrentProcess) && (unsigned int)PsGetWin32KFilterSet(v50) != 5 )
    {
      v51 = *((_DWORD *)Valid + 17);
      SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::UnlockObjectLock<>(v131);
      v52 = xxxLoadHmodIndex(v51) != 0;
      SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::~UnlockObjectLock<>(v131);
      if ( (unsigned int)Feature_HandleHookDestroyedDuringCallout__private_IsEnabledDeviceUsage(v53) )
      {
        if ( v52 )
        {
          SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v128);
          if ( (*(_BYTE *)(_HMPheFromObject(Valid) + 25) & 1) == 0 && (*((_DWORD *)Valid + 16) & 0x1000) == 0 )
          {
            SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::~ObjectLock<>(v128);
            goto LABEL_136;
          }
          SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::~ObjectLock<>(v128);
        }
      }
      else if ( v52 )
      {
        goto LABEL_136;
      }
    }
LABEL_131:
    v7 = v98;
    goto LABEL_132;
  }
LABEL_136:
  v58 = **(_QWORD **)(v14 + 464);
  if ( ((*(_DWORD *)(v14 + 680) | *(_DWORD *)(v58 + 16)) & 0x400) != 0 && *((_DWORD *)Valid + 12) != 9 )
  {
    *(_OWORD *)v126 = 0LL;
    v127 = 0LL;
    v126[0] = (unsigned int)PsGetThreadId(*(PETHREAD *)v14);
    v7 = v98;
    DWORD2(v127) = v98;
    *(_QWORD *)&v127 = v100;
    v126[1] = v6;
    IsEnabledDeviceUsage = Feature_HandleHookDestroyedDuringCallout__private_IsEnabledDeviceUsage(v59);
    v61 = *((int *)Valid + 12);
    if ( IsEnabledDeviceUsage )
    {
      if ( !(unsigned int)xxxCallHook(0LL, v61, (__int64)v126, 9LL) )
      {
        SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v129);
        if ( (*(_BYTE *)(_HMPheFromObject(Valid) + 25) & 1) == 0 && (*((_DWORD *)Valid + 16) & 0x1000) == 0 )
        {
          SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::~ObjectLock<>(v129);
          goto LABEL_147;
        }
        SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::~ObjectLock<>(v129);
      }
    }
    else if ( !(unsigned int)xxxCallHook(0LL, v61, (__int64)v126, 9LL) )
    {
      goto LABEL_147;
    }
    goto LABEL_132;
  }
  v7 = v98;
LABEL_147:
  v62 = *(_QWORD *)(v14 + 688);
  *(_QWORD *)&v104 = *(_QWORD *)(v14 + 416);
  *(_QWORD *)(v14 + 416) = &v104;
  *((_QWORD *)&v104 + 1) = v62;
  if ( v62 )
    HMLockObject(v62);
  if ( !*(_QWORD *)(v14 + 480) )
    goto LABEL_173;
  v63 = Valid;
  if ( !gbInDestroyHandleTableObjects )
  {
    v64 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v58, v45, v47, v48);
    if ( ExIsResourceAcquiredExclusiveLite(*v64) != 1 )
    {
      v65 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v58, v45, v47, v48);
      if ( !ExIsResourceAcquiredSharedLite(*v65) )
        goto LABEL_157;
      if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainHookLock) == 1
        || (v66 = ExIsResourceAcquiredSharedLite((PERESOURCE)gDomainHookLock) != 0) )
      {
        v66 = 1;
      }
      if ( !v66 )
LABEL_157:
        __int2c();
    }
  }
  while ( 2 )
  {
    if ( *((_QWORD *)v63 + 5) )
    {
      v63 = (struct tagHOOK *)*((_QWORD *)v63 + 5);
      goto LABEL_166;
    }
    if ( (*((_DWORD *)v63 + 16) & 1) == 0 )
    {
      v67 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v58, v45, v47, v48);
      if ( !ExIsResourceAcquiredSharedLite(*v67) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
      v68 = 0LL;
      v69 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v69 )
        v68 = *v69;
      v58 = *((int *)v63 + 12);
      v63 = *(struct tagHOOK **)(*(_QWORD *)(v68 + 464) + 8 * v58 + 48);
LABEL_166:
      if ( !v63 || (*((_DWORD *)v63 + 16) & 0x80u) == 0 )
      {
        v70 = 0LL;
        goto LABEL_170;
      }
      continue;
    }
    break;
  }
  v70 = 0LL;
  v63 = 0LL;
LABEL_170:
  v71 = *(_QWORD *)(v14 + 480);
  v25 = *(_QWORD *)(v71 + 48);
  v101 = v25;
  if ( v63 )
    v70 = *(_QWORD *)v63;
  *(_QWORD *)(v71 + 48) = v70;
  v7 = v98;
LABEL_173:
  v115[0] = v14 + 688;
  v115[1] = Valid;
  HMAssignmentLock(v115, 1LL);
  v99 = xxxHkCallHook(Valid, v7, v100, v103[0], ReturnLength);
  v116[0] = v14 + 688;
  v116[1] = v62;
  HMAssignmentLock(v116, 1LL);
  v75 = *(_QWORD *)(v14 + 480);
  if ( v75 )
    *(_QWORD *)(v75 + 48) = v25;
  ThreadUnlock1(v73, v72, v74);
  if ( (*((_DWORD *)Valid + 16) & 0x10) != 0 )
  {
    Valid = (struct tagHOOK *)PhkNextValid((__int64)Valid);
    v82 = (struct tagHOOK *)ThreadUnlock1(v80, v79, v81);
    if ( v82 )
      FreeHook(v82);
    v6 = v103[0];
    goto LABEL_179;
  }
LABEL_218:
  ThreadUnlock1(v77, v76, v78);
  return v99;
}
