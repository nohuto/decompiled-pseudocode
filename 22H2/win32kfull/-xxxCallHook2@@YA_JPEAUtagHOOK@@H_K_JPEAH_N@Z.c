/*
 * XREFs of ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C005BD10
 * Callers:
 *     EditionKeyEventLLHook @ 0x1C00201A0 (EditionKeyEventLLHook.c)
 *     xxxCallNextHookEx @ 0x1C0020274 (xxxCallNextHookEx.c)
 *     EditionLLMouseButtonHook @ 0x1C0023450 (EditionLLMouseButtonHook.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C00313BC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     xxxReceiveMessage @ 0x1C0058F60 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B860 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxCallMouseHook @ 0x1C012AC8C (xxxCallMouseHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01D9460 (EditionLLMouseWheelHook.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E6484 (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01E68A4 (xxxCallJournalRecordHook.c)
 *     xxxPointerCallHook @ 0x1C01EFECC (xxxPointerCallHook.c)
 * Callees:
 *     FreeHook @ 0x1C001FF90 (FreeHook.c)
 *     PhkNextValid @ 0x1C00202D0 (PhkNextValid.c)
 *     xxxLoadHmodIndex @ 0x1C00205DC (xxxLoadHmodIndex.c)
 *     IsThreadHung @ 0x1C003E0F4 (IsThreadHung.c)
 *     xxxInterSendMsgEx @ 0x1C005A250 (xxxInterSendMsgEx.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B860 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxHkCallHook @ 0x1C005CA10 (xxxHkCallHook.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BF9A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     ?IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C010FDB0 (-IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCallHook2(struct tagHOOK *a1, unsigned int a2, __int64 a3, __int64 a4, int *a5, bool a6)
{
  unsigned int v6; // ebx
  struct tagHOOK *Valid; // rdi
  int *v8; // r14
  __int64 v9; // r13
  unsigned int v10; // r15d
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int8 v15; // r12
  __int64 v16; // rdx
  int v17; // ecx
  __int16 ProcessMachine; // bx
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // ecx
  _QWORD *v22; // rcx
  BOOL v23; // r14d
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 CurrentProcess; // rax
  __int64 v34; // r12
  __int64 v35; // rbx
  __int64 v36; // r8
  struct tagHOOK *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  struct tagHOOK *v43; // rax
  __int64 v45; // r14
  _QWORD *v46; // rax
  __int64 v47; // r8
  char v48; // bl
  int ProcessorHistory; // ecx
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  PULONG ReturnLength; // [rsp+20h] [rbp-1F8h]
  __int64 v58; // [rsp+38h] [rbp-1E0h]
  __int64 v60; // [rsp+58h] [rbp-1C0h] BYREF
  __int64 v61; // [rsp+60h] [rbp-1B8h]
  _QWORD v62[2]; // [rsp+70h] [rbp-1A8h] BYREF
  _QWORD v63[5]; // [rsp+80h] [rbp-198h] BYREF
  unsigned int v64; // [rsp+A8h] [rbp-170h]
  __int64 ProcessInformation; // [rsp+B8h] [rbp-160h] BYREF
  __int64 v66; // [rsp+C0h] [rbp-158h]
  __int128 v67; // [rsp+C8h] [rbp-150h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-140h]
  struct tagHOOK *v69; // [rsp+E0h] [rbp-138h] BYREF
  unsigned int v70; // [rsp+E8h] [rbp-130h]
  int v71; // [rsp+ECh] [rbp-12Ch]
  __int64 v72; // [rsp+F0h] [rbp-128h]
  __int64 v73; // [rsp+F8h] [rbp-120h]
  __int64 v74; // [rsp+100h] [rbp-118h]
  __int128 v75; // [rsp+118h] [rbp-100h] BYREF
  __int64 v76; // [rsp+128h] [rbp-F0h]
  _QWORD v77[2]; // [rsp+130h] [rbp-E8h] BYREF
  _QWORD v78[2]; // [rsp+140h] [rbp-D8h] BYREF
  __int128 v79; // [rsp+150h] [rbp-C8h] BYREF
  __int64 v80; // [rsp+160h] [rbp-B8h]
  int v81; // [rsp+168h] [rbp-B0h] BYREF
  __int128 v82; // [rsp+16Ch] [rbp-ACh]
  __int64 v83; // [rsp+17Ch] [rbp-9Ch]
  int v84; // [rsp+184h] [rbp-94h]
  int v85; // [rsp+188h] [rbp-90h]
  int v86; // [rsp+18Ch] [rbp-8Ch]
  __int64 *v87; // [rsp+190h] [rbp-88h]
  __int64 v88[3]; // [rsp+1B8h] [rbp-60h] BYREF
  unsigned int v89; // [rsp+1D0h] [rbp-48h]
  int v90; // [rsp+1D4h] [rbp-44h]

  v61 = a4;
  v62[0] = a3;
  v6 = a2;
  Valid = a1;
  v8 = a5;
  v63[0] = a5;
  v9 = 0LL;
  v66 = 0LL;
  v60 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  if ( !a1 )
    return 0LL;
  v10 = *((_DWORD *)a1 + 12);
  v64 = v10;
  if ( gptiCurrent == gptiRit && v10 - 13 > 1 )
    return 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x10000001) != 0 || !*(_QWORD *)(gptiCurrent + 456LL) && v10 != 14 )
    return dword_1C02EC1A0[v10 + 1];
  if ( v10 > 6 )
  {
    if ( v10 == 12 )
    {
      v11 = *(_DWORD *)(a4 + 24);
      goto LABEL_19;
    }
    if ( v10 != -1 )
    {
LABEL_16:
      v11 = 0;
      LOWORD(v12) = 0;
      goto LABEL_20;
    }
  }
  else if ( v10 != 6 )
  {
    if ( !v10 )
    {
      v11 = *(_DWORD *)a4;
      LOWORD(v12) = 0;
      goto LABEL_20;
    }
    if ( v10 != 3 )
    {
      if ( v10 == 4 )
      {
        v11 = *(_DWORD *)(a4 + 16);
        v12 = *(_QWORD *)(a4 + 8);
        goto LABEL_20;
      }
      goto LABEL_16;
    }
  }
  v11 = *(_DWORD *)(a4 + 8);
LABEL_19:
  v12 = *(_QWORD *)(a4 + 16);
LABEL_20:
  if ( (((unsigned int)(v11 - 577) <= 3 || (unsigned int)(v11 - 581) <= 0x12 && v11 != 589) && v11 != 595
     || v11 == 528 && (_WORD)v12 == 582)
    && (((v10 - 3) & 0xFFFFFFF6) != 0 || v10 == 11) )
  {
    return dword_1C02EC1A0[v10 + 1];
  }
  while ( (*(_BYTE *)(_HMPheFromObject(Valid) + 25) & 1) != 0
       || v10 == 14 && (v13 = *((_QWORD *)Valid + 2)) != 0 && (unsigned __int8)IsSpatialDelegationEnabledForThread(v13)
       || v10 == 13 && *((_QWORD *)Valid + 2) && (unsigned __int8)IsKeyboardDelegationEnabledForThread() )
  {
    Valid = (struct tagHOOK *)PhkNextValid((__int64)Valid);
LABEL_127:
    if ( !Valid )
      return dword_1C02EC1A0[v10 + 1];
  }
  if ( v8 )
    *v8 = *((_DWORD *)Valid + 16) & 2;
  v14 = *((int *)Valid + 12);
  v15 = byte_1C02EA909[v14];
  if ( (_DWORD)v14 == 10 )
  {
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 8) != 0 && ((v6 - 4) & 0xFFFFFFF3) == 0 && v6 != 16 )
      v15 |= 0x10u;
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 && v6 == 11 )
      v15 |= 0x10u;
  }
  v16 = *((_QWORD *)Valid + 2);
  v23 = 0;
  if ( v16 != gptiCurrent )
  {
    if ( (v15 & 0x24) != 0
      || (v17 = *(_DWORD *)(gptiCurrent + 488LL) & 0x100, (*(_DWORD *)(v16 + 488) & 0x100) != v17)
      || v17
      && (ProcessMachine = PsWow64GetProcessMachine(**(_QWORD **)(v16 + 424)),
          (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(gptiCurrent + 424LL)) != ProcessMachine)
      || (*(_DWORD *)(gptiCurrent + 488LL) & 0xC) != 0
      && *(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL) != *(_QWORD *)(gptiCurrent + 424LL)
      || (unsigned int)IsProcessDwm(**(_QWORD **)(*((_QWORD *)Valid + 2) + 424LL))
      || !(unsigned __int8)Enforced()
      && (*((_DWORD *)Valid + 16) & 1) != 0
      && ((v19 = *(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL),
           v20 = *(_QWORD *)(gptiCurrent + 424LL),
           v21 = *(_DWORD *)(v19 + 780),
           v21 != *(_DWORD *)(v20 + 780))
       || *(_DWORD *)(v19 + 784) != *(_DWORD *)(v20 + 784))
      && (*(_DWORD *)(gptiCurrent + 488LL) & 0x400000) == 0
      && (v21 != luidSystem[0] || *(_DWORD *)(v19 + 784) != luidSystem[1])
      || (v22 = (_QWORD *)*((_QWORD *)Valid + 2), v22[53] != *(_QWORD *)(gptiCurrent + 424LL))
      && (unsigned __int8)IsRestricted(*v22) )
    {
      v23 = 1;
    }
  }
  if ( (unsigned int)(*((_DWORD *)Valid + 12) - 13) <= 1 )
  {
    if ( a6
      || !gpqForeground
      || (unsigned __int8)CheckAccess(*(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL) + 880LL, gpqForeground + 428LL)
      || (unsigned int)IsForegroundShellFrameQueueAccessible(*((const struct tagTHREADINFO **)Valid + 2))
      || (v25 = *((_QWORD *)Valid + 2), *(int *)(*(_QWORD *)(v25 + 424) + 12LL) < 0) )
    {
      if ( *((_DWORD *)Valid + 12) != 14 )
        goto LABEL_83;
      if ( *(_DWORD *)(gptiCurrent + 1368LL) == -1 )
        goto LABEL_83;
      if ( (unsigned __int8)CheckAccess(*(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL) + 880LL, gptiCurrent + 1368LL) )
        goto LABEL_83;
      v25 = *((_QWORD *)Valid + 2);
      if ( *(int *)(*(_QWORD *)(v25 + 424) + 12LL) < 0 )
        goto LABEL_83;
      v27 = *(_QWORD *)(gptiCurrent + 1368LL);
      v26 = 0LL;
    }
    else
    {
      v26 = gpqForeground;
      v27 = *(_QWORD *)(gpqForeground + 428LL);
    }
    EtwTraceUIPIInputError(v25, 0LL, v26, v27, 6);
    v15 &= ~0x10u;
    goto LABEL_83;
  }
  if ( !(unsigned __int8)CheckAccess(
                           *(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL) + 880LL,
                           *(_QWORD *)(gptiCurrent + 424LL) + 880LL) )
  {
    v24 = *((_QWORD *)Valid + 2);
    if ( *(int *)(*(_QWORD *)(v24 + 424) + 12LL) >= 0 )
    {
      v15 &= ~0x10u;
      EtwTraceUIPIHookError(Valid, v15, v24, gptiCurrent, v10, a2, v62[0], v61);
    }
    v23 = 1;
  }
LABEL_83:
  if ( !v23
    && (*((_DWORD *)Valid + 16) & 1) != 0
    && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL)) )
  {
    v28 = *(_QWORD *)(*((_QWORD *)Valid + 2) + 424LL);
    if ( *(int *)(v28 + 12) >= 0 )
    {
      v29 = *(_QWORD *)(gptiCurrent + 424LL);
      if ( v28 != v29 && (*(_DWORD *)(v28 + 820) & 0x100) == 0 )
      {
        if ( (unsigned int)IsImmersiveAppRestricted(v29)
          || (ProcessInformation = 6LL,
              ZwQueryInformationProcess(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                ProcessCookie|ProcessUserModeIOPL,
                &ProcessInformation,
                8u,
                0LL) < 0)
          || (ProcessInformation & 0x100000000LL) != 0 )
        {
          v23 = 1;
        }
      }
    }
  }
  *(_QWORD *)&v75 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v75;
  *((_QWORD *)&v75 + 1) = Valid;
  HMLockObject(Valid);
  if ( v23 )
  {
    v6 = a2;
    if ( (v15 & 0x10) != 0 )
    {
      v71 = 0;
      v72 = v61;
      v69 = Valid;
      v70 = a2;
      v73 = -1LL;
      v74 = -1LL;
      if ( (*(_DWORD *)(*((_QWORD *)Valid + 2) + 1232LL) & 0x20) == 0 )
      {
        v45 = *(_QWORD *)(gptiCurrent + 688LL);
        *(_QWORD *)&v67 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v67;
        *((_QWORD *)&v67 + 1) = v45;
        if ( v45 )
          HMLockObject(v45);
        v63[0] = gptiCurrent + 688LL;
        v63[1] = Valid;
        HMAssignmentLock(v63);
        if ( *(_QWORD *)(gptiCurrent + 480LL) )
        {
          v46 = (_QWORD *)PhkNextValid((__int64)Valid);
          v9 = *(_QWORD *)(v47 + 48);
          v66 = v9;
          if ( v46 )
            v46 = (_QWORD *)*v46;
          *(_QWORD *)(v47 + 48) = v46;
        }
        v48 = v15 & 0x20;
        if ( (v15 & 0x20) != 0 )
        {
          ProcessorHistory = WPP_MAIN_CB.Dpc.ProcessorHistory;
          if ( (*((_BYTE *)Valid + 64) & 0x40) != 0 )
            ProcessorHistory = 30000;
          if ( *((char *)Valid + 88) < 0 )
            ProcessorHistory = 20;
        }
        else
        {
          ProcessorHistory = 200;
        }
        if ( v48 || (v15 & 4) == 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 0xC) != 0 )
        {
          v82 = 0LL;
          v83 = 0LL;
          v84 = 0;
          v81 = 2;
          v85 = 2;
          v86 = ProcessorHistory;
          v87 = &v60;
          if ( v48 )
          {
            v73 = *(_QWORD *)(gptiCurrent + 1360LL);
            v74 = *(_QWORD *)(gptiCurrent + 1368LL);
            v72 = *(_QWORD *)(gptiCurrent + 1376LL);
          }
          if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000) != 0
            || (unsigned int)IsThreadHung(*((_QWORD **)Valid + 2), 0)
            || (LODWORD(v58) = 1,
                LODWORD(ReturnLength) = 1,
                !xxxInterSendMsgEx(0LL, 0x314u, v62[0], &v69, ReturnLength, *((_QWORD *)Valid + 2), &v81, v58, 0)) )
          {
            v52 = dword_1C02EC1A0[v64 + 1];
            v60 = v52;
          }
          else
          {
            v52 = v60;
          }
          if ( v48 && v52 )
          {
            _InterlockedExchange(
              (volatile __int32 *)(*(_QWORD *)(*((_QWORD *)Valid + 2) + 448LL) + 12LL),
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
            v9 = v66;
          }
        }
        else
        {
          v79 = 0LL;
          v80 = 0LL;
          v50 = PsChargeProcessWakeCounter(**(_QWORD **)(*((_QWORD *)Valid + 2) + 424LL), 0LL, 2LL, 2LL);
          v51 = v50;
          if ( v50 )
            PushW32ThreadLock(v50, &v79, ReleaseWakeReference);
          LODWORD(v58) = 1;
          LODWORD(ReturnLength) = 1;
          v60 = xxxInterSendMsgEx(0LL, 0x314u, v62[0], &v69, ReturnLength, *((_QWORD *)Valid + 2), 0LL, v58, 0);
          if ( v51 )
            PopAndFreeAlwaysW32ThreadLock(&v79);
        }
        v62[0] = gptiCurrent + 688LL;
        v62[1] = v45;
        HMAssignmentLock(v62);
        v54 = *(_QWORD *)(gptiCurrent + 480LL);
        if ( v54 )
          *(_QWORD *)(v54 + 48) = v9;
        ThreadUnlock1(v53);
        goto LABEL_164;
      }
    }
    goto LABEL_166;
  }
  v31 = *((unsigned int *)Valid + 17);
  if ( (_DWORD)v31 != -1 )
  {
    v32 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 424LL) + 404LL);
    if ( !_bittest((const int *)&v32, v31) )
    {
      CurrentProcess = PsGetCurrentProcess(v32, v31, v30);
      if ( (unsigned int)PsIsProtectedProcess(CurrentProcess)
        || (unsigned int)PsGetWin32KFilterSet() == 5
        || !xxxLoadHmodIndex(*((_DWORD *)Valid + 17)) )
      {
        v6 = a2;
LABEL_166:
        Valid = (struct tagHOOK *)PhkNextValid((__int64)Valid);
        v56 = ThreadUnlock1(v55);
        if ( v56 && (*(_DWORD *)(v56 + 64) & 0x10) != 0 )
          FreeHook((struct tagHOOK *)v56);
LABEL_126:
        v8 = (int *)v63[0];
        goto LABEL_127;
      }
    }
  }
  if ( ((*(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL) | *(_DWORD *)(gptiCurrent + 680LL)) & 0x400) != 0
    && *((_DWORD *)Valid + 12) != 9 )
  {
    v90 = 0;
    v88[0] = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
    v6 = a2;
    v89 = a2;
    v88[2] = v62[0];
    v34 = v61;
    v88[1] = v61;
    if ( !(unsigned int)xxxCallHook(0, *((int *)Valid + 12), (__int64)v88, 9) )
      goto LABEL_104;
    goto LABEL_166;
  }
  v34 = v61;
LABEL_104:
  v35 = *(_QWORD *)(gptiCurrent + 688LL);
  *(_QWORD *)&v67 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v67;
  *((_QWORD *)&v67 + 1) = v35;
  if ( v35 )
    HMLockObject(v35);
  v36 = *(_QWORD *)(gptiCurrent + 480LL);
  if ( !v36 )
    goto LABEL_120;
  v37 = Valid;
  while ( 2 )
  {
    if ( *((_QWORD *)v37 + 5) )
    {
      v37 = (struct tagHOOK *)*((_QWORD *)v37 + 5);
LABEL_112:
      if ( !v37 || (*((_DWORD *)v37 + 16) & 0x80u) == 0 )
        goto LABEL_116;
      continue;
    }
    break;
  }
  if ( (*((_DWORD *)v37 + 16) & 1) == 0 )
  {
    v37 = *(struct tagHOOK **)(*(_QWORD *)(gptiCurrent + 464LL) + 8LL * *((int *)v37 + 12) + 48);
    goto LABEL_112;
  }
  v37 = 0LL;
LABEL_116:
  v9 = *(_QWORD *)(v36 + 48);
  v66 = v9;
  if ( v37 )
    v38 = *(_QWORD *)v37;
  else
    v38 = 0LL;
  *(_QWORD *)(v36 + 48) = v38;
LABEL_120:
  v77[0] = gptiCurrent + 688LL;
  v77[1] = Valid;
  HMAssignmentLock(v77);
  v60 = xxxHkCallHook(Valid, a2, v62[0], v34);
  v78[0] = gptiCurrent + 688LL;
  v78[1] = v35;
  HMAssignmentLock(v78);
  v40 = *(_QWORD *)(gptiCurrent + 480LL);
  if ( v40 )
    *(_QWORD *)(v40 + 48) = v9;
  ThreadUnlock1(v39);
  if ( (*((_DWORD *)Valid + 16) & 0x10) != 0 )
  {
    Valid = (struct tagHOOK *)PhkNextValid((__int64)Valid);
    v43 = (struct tagHOOK *)ThreadUnlock1(v42);
    if ( v43 )
      FreeHook(v43);
    v6 = a2;
    goto LABEL_126;
  }
LABEL_164:
  ThreadUnlock1(v41);
  return v60;
}
