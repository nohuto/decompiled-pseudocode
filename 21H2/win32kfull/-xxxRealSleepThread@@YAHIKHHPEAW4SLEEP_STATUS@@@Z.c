/*
 * XREFs of ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00588D0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055720 (xxxRealInternalGetMessage.c)
 *     xxxSleepThread2 @ 0x1C0058750 (xxxSleepThread2.c)
 *     xxxInterSendMsgEx @ 0x1C005A2F0 (xxxInterSendMsgEx.c)
 * Callees:
 *     xxxComputeInputSinkInfo @ 0x1C0005EBC (xxxComputeInputSinkInfo.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C0038F48 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0054100 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     IsMulDestroyBrushInternalSupported @ 0x1C0058FF0 (IsMulDestroyBrushInternalSupported.c)
 *     xxxReceiveMessage @ 0x1C0059000 (xxxReceiveMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B900 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     zzzCalcStartCursorHide @ 0x1C007FC90 (zzzCalcStartCursorHide.c)
 *     xxxDesktopThreadWaiter @ 0x1C00D9FF4 (xxxDesktopThreadWaiter.c)
 *     WakeDIT @ 0x1C010BDD4 (WakeDIT.c)
 *     xxxDoSysExpunge @ 0x1C011D6C8 (xxxDoSysExpunge.c)
 *     ClientDeliverUserApc @ 0x1C01246D0 (ClientDeliverUserApc.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0136788 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C01367B0 (--1LeaveEnterCrit@@QEAA@XZ.c)
 */

__int64 __fastcall xxxRealSleepThread(unsigned int a1, int a2, int a3, __int64 a4, enum SLEEP_STATUS *a5)
{
  int v5; // r13d
  unsigned int v6; // edi
  NTSTATUS v7; // r12d
  int v8; // esi
  enum SLEEP_STATUS *v9; // r14
  unsigned int v10; // r15d
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int16 v13; // dx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v18; // rax
  int v19; // eax
  ULONG v20; // esi
  char v21; // r13
  void *v22; // rcx
  __int64 v23; // r14
  LeaveEnterCrit *v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  int v27; // r14d
  int v28; // esi
  int v29; // esi
  __int64 v30; // rax
  __int64 v32; // rsi
  struct _KEVENT *v33; // rcx
  __int64 *v34; // rax
  __int64 v35; // rcx
  __int16 v36; // dx
  int v37; // edx
  __int64 v38; // rdx
  BOOLEAN Alertable[4]; // [rsp+28h] [rbp-F0h]
  int v40; // [rsp+40h] [rbp-D8h]
  union _LARGE_INTEGER *Timeout; // [rsp+48h] [rbp-D0h]
  enum SLEEP_STATUS *v42; // [rsp+50h] [rbp-C8h]
  _DWORD v43[5]; // [rsp+58h] [rbp-C0h] BYREF
  int v44; // [rsp+6Ch] [rbp-ACh] BYREF
  int v45; // [rsp+70h] [rbp-A8h]
  _BYTE v46[12]; // [rsp+74h] [rbp-A4h] BYREF
  __int64 v47; // [rsp+80h] [rbp-98h]
  PVOID Object[3]; // [rsp+88h] [rbp-90h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-78h]
  __int64 v50; // [rsp+A8h] [rbp-70h] BYREF
  _OWORD v51[6]; // [rsp+B0h] [rbp-68h] BYREF
  char v52; // [rsp+120h] [rbp+8h] BYREF
  __int16 v53; // [rsp+128h] [rbp+10h]
  int v54; // [rsp+130h] [rbp+18h]
  unsigned int v55; // [rsp+138h] [rbp+20h]

  v55 = a4;
  v54 = a3;
  v5 = a3;
  v6 = 0;
  *(_DWORD *)&v46[8] = 0;
  v7 = 0;
  v8 = a1 & 0x8000;
  *(_QWORD *)v46 = (unsigned __int16)a1 & 0x8000;
  v43[4] = 0;
  *(_OWORD *)Object = 0LL;
  v43[0] = 0;
  v9 = (enum SLEEP_STATUS *)v43;
  if ( a5 )
    v9 = a5;
  v42 = v9;
  *(_DWORD *)v9 = 0;
  v10 = a1 & 0xFFFF7FFF;
  if ( (a1 & 0x8000) == 0 )
    v10 = a1;
  if ( a2 )
  {
    *(_QWORD *)&v46[4] = -10000LL * a2;
    Timeout = (union _LARGE_INTEGER *)&v46[4];
  }
  else
  {
    Timeout = 0LL;
  }
  v49 = gptiCurrent;
  v53 = *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL);
  LOWORD(a5) = v53;
  while ( 1 )
  {
LABEL_8:
    v11 = *(_QWORD *)(gptiCurrent + 448LL);
    if ( (*(_WORD *)(v11 + 4) & (unsigned __int16)v10) != 0
      || (_DWORD)a4 && (*(_WORD *)(v11 + 6) & (unsigned __int16)v10) != 0 )
    {
      v6 = 1;
      goto LABEL_57;
    }
    if ( *(_DWORD *)v9 == 2 )
      goto LABEL_57;
    if ( !v8 && (*(_BYTE *)(v11 + 6) & 0x40) != 0 )
    {
      while ( 1 )
      {
        v35 = *(_QWORD *)(gptiCurrent + 448LL);
        v36 = *(_WORD *)(v35 + 6);
        if ( (v36 & 0x40) == 0 )
          break;
        xxxReceiveMessage(gptiCurrent);
      }
      *(_WORD *)(v35 + 4) |= v36 & *(_WORD *)(gptiCurrent + 872LL);
      *(_WORD *)(gptiCurrent + 872LL) = 0;
    }
    v12 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( *(_DWORD *)(v12 + 400) != gcSysExpunge )
    {
      *(_DWORD *)(v12 + 400) = gcSysExpunge;
      if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 404LL) & *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy) != 0 )
        xxxDoSysExpunge(gptiCurrent);
    }
    v13 = 0;
    if ( !v8 )
      v13 = 64;
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL) = v10 | v13;
    KeClearEvent(*(PRKEVENT *)(gptiCurrent + 736LL));
    if ( v7 == 258 )
    {
      UserSetLastError(1460LL);
      *(_DWORD *)v9 = 1;
      goto LABEL_57;
    }
    if ( v7 == 192 )
    {
      ClientDeliverUserApc();
      goto LABEL_57;
    }
    v14 = *(_QWORD *)(gptiCurrent + 448LL);
    v15 = 0xFFFFF78000000320uLL;
    v16 = 0xFFFFF78000000004uLL;
    a4 = v55;
    if ( (*(_WORD *)(v14 + 10) & *(_WORD *)(v14 + 4)) != 0 )
      continue;
    if ( gptiCurrent == gTermIO[2] && (v10 & 0x200) != 0 && !Timeout )
      break;
    if ( v5 )
    {
      if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x400) != 0 && (int)CheckProcessForeground(gptiCurrent) < 0 )
        goto LABEL_57;
      *(_QWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 8LL) = 0LL;
      if ( gptiCurrent == gptiForeground )
      {
        v34 = *(__int64 **)(gptiCurrent + 464LL);
        v14 = *v34;
        if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(*v34 + 16)) & 0x1000) != 0 )
          xxxCallHook(0, 0LL, 0LL, 11);
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x2000u;
      if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000) != 0 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) )
        {
          EtwTraceWakeInputIdle(0LL, gptiCurrent);
          v15 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL);
          v14 = *(_QWORD *)(v15 + 32);
          if ( v14 )
          {
            if ( v14 != -1 )
            {
              KeSetEvent((PRKEVENT)v14, 1, 0);
              ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) + 32LL));
              v14 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL);
              *(_QWORD *)(v14 + 32) = -1LL;
            }
          }
          else
          {
            *(_QWORD *)(v15 + 32) = -1LL;
          }
        }
        goto LABEL_29;
      }
      v18 = *(_QWORD *)(gptiCurrent + 424LL);
      if ( !*(_QWORD *)(v18 + 328) )
      {
        *(_QWORD *)(v18 + 328) = gptiCurrent;
        v18 = *(_QWORD *)(gptiCurrent + 424LL);
      }
      if ( *(_QWORD *)(v18 + 328) == gptiCurrent )
      {
        EtwTraceWakeInputIdle(0LL, gptiCurrent);
        v14 = *(_QWORD *)(CurrentProcessWin32Process + 16);
        if ( v14 )
        {
          if ( v14 == -1 )
            goto LABEL_29;
          KeSetEvent((PRKEVENT)v14, 1, 0);
          ObfDereferenceObject(*(PVOID *)(CurrentProcessWin32Process + 16));
        }
        *(_QWORD *)(CurrentProcessWin32Process + 16) = -1LL;
      }
LABEL_29:
      v19 = *(_DWORD *)(CurrentProcessWin32Process + 12);
      if ( (v19 & 4) != 0 )
      {
        *(_DWORD *)(CurrentProcessWin32Process + 12) = v19 & 0xFFFFFFFB;
        zzzCalcStartCursorHide(0LL, 0LL);
      }
    }
    IsMulDestroyBrushInternalSupported(v14, v15, v16, a4);
    Object[0] = *(PVOID *)(gptiCurrent + 1416LL);
    v20 = 1;
    v40 = 1;
    if ( (unsigned __int8)IsInputThread() && (v10 & 0x200) != 0 )
    {
      v21 = 1;
      Object[1] = (PVOID)WPP_MAIN_CB.DeviceQueue.Lock;
      v20 = 2;
      v40 = 2;
    }
    else
    {
      v21 = 0;
    }
    v22 = *(void **)(gptiCurrent + 1384LL);
    if ( v22 && (v10 & 0xFFFF7DFF) != 0 )
    {
      Object[v20++] = v22;
      v40 = v20;
    }
    if ( v21 )
      gfMITWaitingForLLHook = 1;
    v45 = 0;
    while ( 1 )
    {
      v23 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      v47 = v23;
      if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v52);
      v7 = KeWaitForMultipleObjects(v20, Object, WaitAny, WrUserRequest, 1, 0, Timeout, 0LL);
      LeaveEnterCrit::~LeaveEnterCrit(v24);
      if ( v7 )
        goto LABEL_44;
      memset(v51, 0, 32);
      v44 = 0;
      v50 = 0LL;
      Alertable[0] = 0;
      v26 = ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1424LL), v51, 1LL, &v44, &v50, *(_DWORD *)Alertable);
      v27 = 0;
      if ( v26 )
      {
        if ( v26 == 258 )
          goto LABEL_43;
      }
      else if ( DWORD2(v51[0]) == 1 )
      {
        v27 = 3;
        ZwAssociateWaitCompletionPacket(
          *(_QWORD *)(gptiCurrent + 1448LL),
          *(_QWORD *)(gptiCurrent + 1424LL),
          *(_QWORD *)(gptiCurrent + 1440LL),
          0LL,
          1LL,
          0,
          0LL,
          0LL);
      }
      else
      {
        if ( DWORD2(v51[0]) == 2 )
          goto LABEL_43;
        if ( !DWORD2(v51[0]) && *(_QWORD *)(gptiCurrent + 1464LL) )
        {
          v27 = DWORD2(v51[0]) + 4;
          xxxHandleCoreMessagingQueueCompletion(gptiCurrent, (ULONG64 *)v51, DWORD2(v51[0]) + 1);
        }
      }
      if ( v27 != 4
        || (v25 = 3LL,
            LOBYTE(v25) = (*(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) & 8) != 0,
            ((unsigned __int8)v25 & ((v10 & 8) != 0)) != 0) )
      {
LABEL_43:
        v23 = v47;
LABEL_44:
        v28 = 0;
        goto LABEL_45;
      }
      v28 = 1;
      v23 = v47;
LABEL_45:
      if ( v7 == 1 )
        break;
LABEL_46:
      v9 = v42;
LABEL_47:
      if ( v7 != 1 && !v28 )
      {
        v29 = v45;
        goto LABEL_50;
      }
      v20 = v40;
    }
    if ( !v21 )
    {
      v9 = v42;
      *(_DWORD *)v42 = 2;
      *(_QWORD *)&v46[4] = -100000LL;
      goto LABEL_47;
    }
    if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                          - v23) >= 0x10 )
      v37 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
          - v23;
    else
      v37 = 16;
    v25 = -10000LL * v37;
    if ( v25 > Timeout->QuadPart )
    {
      Timeout->QuadPart -= v25;
      LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = 0;
      xxxComputeInputSinkInfo();
      goto LABEL_46;
    }
    v29 = 1;
    v7 = 258;
    v9 = v42;
LABEL_50:
    if ( v21 )
    {
      gfMITWaitingForLLHook = 0;
      if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
      {
        WakeDIT(2LL);
        if ( !v29 )
          KeClearEvent((PRKEVENT)WPP_MAIN_CB.DeviceQueue.Lock);
      }
    }
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000) == 0 )
    {
      v30 = *(_QWORD *)(gptiCurrent + 424LL);
      if ( !*(_QWORD *)(v30 + 328) )
      {
        *(_QWORD *)(v30 + 328) = gptiCurrent;
        v30 = *(_QWORD *)(gptiCurrent + 424LL);
      }
      if ( *(_QWORD *)(v30 + 328) != gptiCurrent )
        goto LABEL_55;
      v32 = PsGetCurrentProcessWin32Process(v25);
      EtwTraceSleepInputIdle(0LL, gptiCurrent);
      v33 = *(struct _KEVENT **)(v32 + 16);
      if ( v33 == (struct _KEVENT *)-1LL )
      {
        *(_QWORD *)(v32 + 16) = 0LL;
        v8 = *(_DWORD *)v46;
        v5 = v54;
        LODWORD(a4) = v55;
        continue;
      }
      if ( !v33 )
        goto LABEL_55;
LABEL_119:
      KeClearEvent(v33);
      goto LABEL_55;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) )
      goto LABEL_55;
    EtwTraceSleepInputIdle(0LL, gptiCurrent);
    v38 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL);
    v33 = *(struct _KEVENT **)(v38 + 32);
    if ( v33 == (struct _KEVENT *)-1LL )
    {
      *(_QWORD *)(v38 + 32) = 0LL;
      goto LABEL_55;
    }
    if ( v33 )
      goto LABEL_119;
LABEL_55:
    v8 = *(_DWORD *)v46;
    v5 = v54;
    LODWORD(a4) = v55;
  }
  v7 = xxxDesktopThreadWaiter(0LL, v10, 0xFFFFF78000000004uLL, v55);
  if ( v7 != -1073741790 )
  {
    LODWORD(a4) = v55;
    goto LABEL_8;
  }
LABEL_57:
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL) = v53;
  if ( v6 )
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 12LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  return v6;
}
