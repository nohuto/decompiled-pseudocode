/*
 * XREFs of ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0052EC0
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C00517B0 (xxxInterSendMsgEx.c)
 *     xxxSleepThread2 @ 0x1C0052D3C (xxxSleepThread2.c)
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 * Callees:
 *     EditionxxxComputeInputSinkInfo @ 0x1C0002B80 (EditionxxxComputeInputSinkInfo.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     zzzWakeInputIdle @ 0x1C00534E4 (zzzWakeInputIdle.c)
 *     xxxReceiveMessage @ 0x1C0058700 (xxxReceiveMessage.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxDesktopThreadWaiter @ 0x1C00A4844 (xxxDesktopThreadWaiter.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00A5D18 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00A5F14 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     ClientDeliverUserApc @ 0x1C00EF4B0 (ClientDeliverUserApc.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0159AD4 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0159AFC (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxDoSysExpungeIfNeeded @ 0x1C015D208 (xxxDoSysExpungeIfNeeded.c)
 */

__int64 __fastcall xxxRealSleepThread(unsigned int a1, int a2, int a3, __int64 a4, enum SLEEP_STATUS *a5)
{
  unsigned int v5; // edi
  NTSTATUS v6; // r13d
  int v7; // r14d
  enum SLEEP_STATUS *v8; // r15
  unsigned int v9; // esi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r14d
  ULONG v16; // r14d
  char v17; // r12
  void *v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rcx
  int v21; // eax
  int v22; // r15d
  int v23; // r14d
  int v24; // r14d
  __int64 v25; // rax
  __int64 CurrentProcessWin32Process; // r14
  struct _KEVENT *v27; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // edx
  __int64 v32; // rdx
  BOOLEAN Alertable[4]; // [rsp+28h] [rbp-F0h]
  union _LARGE_INTEGER *Timeout; // [rsp+40h] [rbp-D8h]
  enum SLEEP_STATUS *v35; // [rsp+48h] [rbp-D0h]
  _DWORD v36[6]; // [rsp+50h] [rbp-C8h] BYREF
  int v37; // [rsp+68h] [rbp-B0h] BYREF
  int v38; // [rsp+6Ch] [rbp-ACh]
  int v39; // [rsp+70h] [rbp-A8h]
  __int64 v40; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+80h] [rbp-98h]
  PVOID Object[3]; // [rsp+88h] [rbp-90h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-78h]
  __int64 v44; // [rsp+A8h] [rbp-70h] BYREF
  _OWORD v45[6]; // [rsp+B0h] [rbp-68h] BYREF
  char v46; // [rsp+120h] [rbp+8h] BYREF
  __int32 v47; // [rsp+128h] [rbp+10h]
  int v48; // [rsp+130h] [rbp+18h]
  unsigned int v49; // [rsp+138h] [rbp+20h]

  v49 = a4;
  v48 = a3;
  v5 = 0;
  v40 = 0LL;
  v6 = 0;
  v7 = a1 & 0x8000;
  v39 = v7;
  v36[5] = 0;
  *(_OWORD *)Object = 0LL;
  v36[0] = 0;
  v8 = (enum SLEEP_STATUS *)v36;
  if ( a5 )
    v8 = a5;
  v35 = v8;
  *(_DWORD *)v8 = 0;
  v9 = a1 & 0xFFFF7FFF;
  if ( (a1 & 0x8000) == 0 )
    v9 = a1;
  if ( a2 )
  {
    v40 = -10000LL * a2;
    Timeout = (union _LARGE_INTEGER *)&v40;
  }
  else
  {
    Timeout = 0LL;
  }
  v43 = gptiCurrent;
  v47 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 16LL);
  v36[4] = v47;
LABEL_8:
  v10 = 0xFFFFF78000000004uLL;
  v11 = 0xFFFFF78000000320uLL;
  while ( 1 )
  {
    do
    {
      v12 = *(_QWORD *)(gptiCurrent + 448LL);
      if ( (v9 & *(_DWORD *)(v12 + 4)) != 0 || (_DWORD)a4 && (v9 & *(_DWORD *)(v12 + 8)) != 0 )
      {
        v5 = 1;
        goto LABEL_52;
      }
      if ( *(_DWORD *)v8 == 2 )
        goto LABEL_52;
      if ( !v7 && (*(_DWORD *)(v12 + 8) & 0x40) != 0 )
      {
        while ( 1 )
        {
          v30 = *(_QWORD *)(gptiCurrent + 448LL);
          v11 = *(unsigned int *)(v30 + 8);
          if ( (v11 & 0x40) == 0 )
            break;
          xxxReceiveMessage(gptiCurrent, v11, v10);
        }
        _InterlockedOr((volatile signed __int32 *)(v30 + 4), (unsigned __int16)v11 & *(_WORD *)(gptiCurrent + 872LL));
        *(_WORD *)(gptiCurrent + 872LL) = 0;
      }
      xxxDoSysExpungeIfNeeded(gptiCurrent, v11, v10);
      v13 = 0;
      if ( !v7 )
        v13 = 64;
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 16LL), (unsigned __int16)v9 | v13);
      KeClearEvent(*(PRKEVENT *)(gptiCurrent + 736LL));
      if ( v6 == 258 )
      {
        UserSetLastError(1460LL);
        *(_DWORD *)v8 = 1;
        goto LABEL_52;
      }
      if ( v6 == 192 )
      {
        ClientDeliverUserApc();
        goto LABEL_52;
      }
      v14 = *(_QWORD *)(gptiCurrent + 448LL);
      v11 = 0xFFFFF78000000320uLL;
      v10 = 0xFFFFF78000000004uLL;
      a4 = v49;
    }
    while ( (*(_DWORD *)(v14 + 16) & *(_DWORD *)(v14 + 4)) != 0 );
    if ( gptiCurrent != gTermIO[2] || (v9 & 0x200) == 0 || Timeout )
      break;
    v6 = xxxDesktopThreadWaiter(0LL, v9, 0xFFFFF78000000004uLL, v49);
    v11 = 0xFFFFF78000000320uLL;
    v10 = 0xFFFFF78000000004uLL;
    if ( v6 == -1073741790 )
      goto LABEL_52;
    LODWORD(a4) = v49;
  }
  v15 = v48;
  if ( !v48 )
    goto LABEL_25;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x400) == 0 || (int)CheckProcessForeground(gptiCurrent) >= 0 )
  {
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 8LL) = 0LL;
    if ( v15 )
    {
      if ( gptiCurrent == gptiForeground )
      {
        v11 = (unsigned int)(*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL));
        if ( ((*(_WORD *)(gptiCurrent + 680LL) | *(_WORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x1000) != 0 )
          xxxCallHook(0, 0LL, 0LL, 11);
      }
      zzzWakeInputIdle(gptiCurrent, v11, v10, a4);
    }
LABEL_25:
    Object[0] = *(PVOID *)(gptiCurrent + 1416LL);
    v16 = 1;
    LODWORD(a5) = 1;
    if ( (unsigned __int8)IsInputThread(v14, v11, v10, a4) && (v9 & 0x200) != 0 )
    {
      v17 = 1;
      Object[1] = gpkeComputeInputSinkInfo;
      v16 = 2;
      LODWORD(a5) = 2;
    }
    else
    {
      v17 = 0;
    }
    v18 = *(void **)(gptiCurrent + 1384LL);
    if ( v18 && (v9 & 0xFFFF7DFF) != 0 )
    {
      Object[v16++] = v18;
      LODWORD(a5) = v16;
    }
    if ( v17 )
      gfMITWaitingForLLHook = 1;
    v38 = 0;
    while ( 1 )
    {
      v19 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      v41 = v19;
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v46);
      v6 = KeWaitForMultipleObjects(v16, Object, WaitAny, WrUserRequest, 1, 0, Timeout, 0LL);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v46);
      if ( v6 )
        goto LABEL_37;
      memset(v45, 0, 32);
      v37 = 0;
      v44 = 0LL;
      Alertable[0] = 0;
      v21 = ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1424LL), v45, 1LL, &v37, &v44, *(_DWORD *)Alertable);
      v22 = 0;
      if ( v21 )
      {
        if ( v21 == 258 )
          break;
      }
      else if ( DWORD2(v45[0]) == 1 )
      {
        ZwAssociateWaitCompletionPacket(
          *(_QWORD *)(gptiCurrent + 1448LL),
          *(_QWORD *)(gptiCurrent + 1424LL),
          *(_QWORD *)(gptiCurrent + 1440LL),
          0LL,
          1LL,
          0,
          0LL,
          0LL);
        v22 = 3;
      }
      else
      {
        if ( DWORD2(v45[0]) == 2 )
          break;
        if ( !DWORD2(v45[0]) && *(_QWORD *)(gptiCurrent + 1464LL) )
        {
          v22 = DWORD2(v45[0]) + 4;
          xxxHandleCoreMessagingQueueCompletion(gptiCurrent, v45, (unsigned int)(DWORD2(v45[0]) + 1));
        }
      }
      if ( v22 != 4 )
        break;
      v29 = *(_QWORD *)(gptiCurrent + 448LL);
      v20 = v9 & *(_DWORD *)(v29 + 8);
      if ( ((unsigned __int8)v9 & *(_BYTE *)(v29 + 8) & 8) != 0 )
        break;
      v23 = 1;
      v19 = v41;
LABEL_38:
      if ( v6 == 1 )
      {
        if ( !v17 )
        {
          v8 = v35;
          *(_DWORD *)v35 = 2;
          v40 = -100000LL;
          goto LABEL_40;
        }
        if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                              - v19) >= 0x10 )
          v31 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
              - v19;
        else
          v31 = 16;
        v20 = -10000LL * v31;
        if ( v20 <= Timeout->QuadPart )
        {
          v6 = 258;
          v24 = 1;
          v8 = v35;
LABEL_43:
          if ( v17 )
          {
            gfMITWaitingForLLHook = 0;
            if ( gfAppWaitingForLLHookSignal )
            {
              WakeMIT(2LL);
              if ( !v24 )
                KeClearEvent(gpkeComputeInputSinkInfo);
            }
          }
          if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000) != 0 )
          {
            if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) )
            {
              EtwTraceSleepInputIdle(0LL, gptiCurrent);
              v32 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL);
              v27 = *(struct _KEVENT **)(v32 + 32);
              if ( v27 == (struct _KEVENT *)-1LL )
              {
                *(_QWORD *)(v32 + 32) = 0LL;
              }
              else if ( v27 )
              {
                goto LABEL_100;
              }
            }
LABEL_50:
            v7 = v39;
            LODWORD(a4) = v49;
          }
          else
          {
            v25 = *(_QWORD *)(gptiCurrent + 424LL);
            if ( !*(_QWORD *)(v25 + 328) )
            {
              *(_QWORD *)(v25 + 328) = gptiCurrent;
              v25 = *(_QWORD *)(gptiCurrent + 424LL);
            }
            if ( *(_QWORD *)(v25 + 328) != gptiCurrent )
              goto LABEL_50;
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
            EtwTraceSleepInputIdle(0LL, gptiCurrent);
            v27 = *(struct _KEVENT **)(CurrentProcessWin32Process + 16);
            if ( v27 != (struct _KEVENT *)-1LL )
            {
              if ( !v27 )
                goto LABEL_50;
LABEL_100:
              KeClearEvent(v27);
              goto LABEL_50;
            }
            *(_QWORD *)(CurrentProcessWin32Process + 16) = 0LL;
            v7 = v39;
            LODWORD(a4) = v49;
          }
          goto LABEL_8;
        }
        Timeout->QuadPart -= v20;
        gfAppWaitingForLLHookSignal = 0;
        EditionxxxComputeInputSinkInfo();
      }
      v8 = v35;
LABEL_40:
      if ( v6 != 1 && !v23 )
      {
        v24 = v38;
        goto LABEL_43;
      }
      v16 = (unsigned int)a5;
    }
    v19 = v41;
LABEL_37:
    v23 = 0;
    goto LABEL_38;
  }
LABEL_52:
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 16LL), v47);
  if ( v5 )
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  return v5;
}
