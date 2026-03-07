__int64 __fastcall xxxRealSleepThread(unsigned int a1, union _LARGE_INTEGER *a2, int a3, int a4, enum SLEEP_STATUS *a5)
{
  int v5; // r11d
  unsigned int v6; // ebx
  NTSTATUS v7; // esi
  int v8; // r12d
  enum SLEEP_STATUS *v9; // r8
  unsigned int v10; // r13d
  __int64 v11; // r14
  unsigned __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // edx
  struct _KEVENT *v15; // rcx
  int v16; // esi
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v18; // rsi
  __int64 v19; // rax
  int v20; // eax
  ULONG v21; // esi
  char v22; // r15
  void *v23; // rcx
  NTSTATUS v24; // r12d
  __int64 v25; // rcx
  int v26; // eax
  int v27; // esi
  int v28; // esi
  int v29; // esi
  NTSTATUS v30; // r15d
  __int64 v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rsi
  struct _KEVENT *v34; // rcx
  struct _KEVENT **v36; // rax
  int v37; // edx
  BOOLEAN Alertable[4]; // [rsp+28h] [rbp-F0h]
  enum SLEEP_STATUS *v39; // [rsp+40h] [rbp-D8h]
  int v40; // [rsp+48h] [rbp-D0h]
  int v41; // [rsp+4Ch] [rbp-CCh]
  union _LARGE_INTEGER *Timeout; // [rsp+50h] [rbp-C8h]
  _DWORD v43[6]; // [rsp+58h] [rbp-C0h] BYREF
  int v44; // [rsp+70h] [rbp-A8h] BYREF
  int v45; // [rsp+74h] [rbp-A4h]
  __int64 v46; // [rsp+78h] [rbp-A0h] BYREF
  PVOID Object[3]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v48; // [rsp+98h] [rbp-80h]
  __int64 v49; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-70h]
  _OWORD v51[6]; // [rsp+B0h] [rbp-68h] BYREF
  char v52; // [rsp+120h] [rbp+8h]
  char v53; // [rsp+128h] [rbp+10h] BYREF
  int v54; // [rsp+130h] [rbp+18h]
  int v55; // [rsp+138h] [rbp+20h]

  v55 = a4;
  v54 = a3;
  v5 = a4;
  v6 = 0;
  v46 = 0LL;
  v7 = 0;
  v8 = a1 & 0x8000;
  v41 = v8;
  v43[5] = 0;
  *(_OWORD *)Object = 0LL;
  v43[0] = 0;
  v9 = (enum SLEEP_STATUS *)v43;
  if ( a5 )
    v9 = a5;
  v39 = v9;
  *(_DWORD *)v9 = 0;
  v10 = a1 & 0xFFFF7FFF;
  if ( (a1 & 0x8000) == 0 )
    v10 = a1;
  if ( (_DWORD)a2 )
  {
    v46 = -10000LL * (int)a2;
    Timeout = (union _LARGE_INTEGER *)&v46;
  }
  else
  {
    Timeout = 0LL;
  }
  v11 = gptiCurrent + 448LL;
  v48 = gptiCurrent + 448LL;
  LODWORD(a5) = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 16LL);
  v43[4] = (_DWORD)a5;
LABEL_8:
  v12 = 0xFFFFF78000000320uLL;
LABEL_9:
  while ( 2 )
  {
    v13 = *(_QWORD *)v11;
    if ( (v10 & *(_DWORD *)(*(_QWORD *)v11 + 4LL)) != 0 || v5 && (v10 & *(_DWORD *)(v13 + 8)) != 0 )
    {
      v6 = 1;
      goto LABEL_65;
    }
    if ( *(_DWORD *)v9 == 2 )
      goto LABEL_65;
    if ( !v8 && (*(_DWORD *)(v13 + 8) & 0x40) != 0 )
    {
      while ( 1 )
      {
        a2 = (union _LARGE_INTEGER *)*(unsigned int *)(*(_QWORD *)v11 + 8LL);
        if ( ((unsigned __int8)a2 & 0x40) == 0 )
          break;
        xxxReceiveMessage(gptiCurrent, a2, v9, v12);
      }
      _InterlockedOr(
        (volatile signed __int32 *)(*(_QWORD *)v11 + 4LL),
        (unsigned __int16)a2 & *(_WORD *)(gptiCurrent + 880LL));
      *(_WORD *)(gptiCurrent + 880LL) = 0;
    }
    xxxDoSysExpungeIfNeeded(gptiCurrent, a2, v9, v12);
    v14 = 0;
    if ( !v8 )
      v14 = 64;
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 16LL), (unsigned __int16)v10 | v14);
    KeClearEvent(*(PRKEVENT *)(gptiCurrent + 736LL));
    if ( v7 != 258 )
    {
      if ( v7 == 192 )
      {
        ClientDeliverUserApc();
        goto LABEL_65;
      }
      v15 = *(struct _KEVENT **)v11;
      v9 = v39;
      v12 = 0xFFFFF78000000320uLL;
      v5 = v55;
      if ( (*(_DWORD *)(*(_QWORD *)v11 + 16LL) & *(_DWORD *)(*(_QWORD *)v11 + 4LL)) != 0 )
        continue;
      if ( gptiCurrent == gTermIO[2] && (v10 & 0x200) != 0 && !Timeout )
      {
        v7 = xxxDesktopThreadWaiter(0LL, v10, v39, 0xFFFFF78000000320uLL);
        v12 = 0xFFFFF78000000320uLL;
        if ( v7 == -1073741790 )
          goto LABEL_65;
        v9 = v39;
        v5 = v55;
        continue;
      }
      v16 = v54;
      if ( !v54 )
        goto LABEL_32;
      if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x400) != 0 && (int)CheckProcessForeground(gptiCurrent) < 0 )
        goto LABEL_65;
      *(_QWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 8LL) = 0LL;
      if ( !v16 )
        goto LABEL_32;
      if ( gptiCurrent == gptiForeground )
      {
        v36 = *(struct _KEVENT ***)(gptiCurrent + 464LL);
        v15 = *v36;
        if ( ((*(_DWORD *)(gptiCurrent + 680LL) | LODWORD((*v36)->Header.WaitListHead.Blink)) & 0x1000) != 0 )
          xxxCallHook(0, 0LL, 0LL, 11);
      }
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v15);
      v18 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
        v18 = 0LL;
      v19 = *(_QWORD *)(gptiCurrent + 424LL);
      if ( !*(_QWORD *)(v19 + 328) )
        *(_QWORD *)(v19 + 328) = gptiCurrent;
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 328LL) != gptiCurrent )
      {
LABEL_30:
        v20 = *((_DWORD *)v18 + 3);
        if ( (v20 & 4) != 0 )
        {
          *((_DWORD *)v18 + 3) = v20 & 0xFFFFFFFB;
          zzzCalcStartCursorHide(0LL, 0LL);
        }
LABEL_32:
        Object[0] = *(PVOID *)(gptiCurrent + 1456LL);
        v21 = 1;
        v40 = 1;
        if ( (unsigned __int8)IsInputThread(v15, a2, v9) && (v10 & 0x200) != 0 )
        {
          v22 = 1;
          Object[1] = WPP_MAIN_CB.Dpc.DpcListEntry.Next;
          v21 = 2;
          v40 = 2;
        }
        else
        {
          v22 = 0;
        }
        v52 = v22;
        v23 = *(void **)(gptiCurrent + 1424LL);
        if ( v23 && (v10 & 0xFFFF7DFF) != 0 )
        {
          Object[v21++] = v23;
          v40 = v21;
        }
        if ( v22 )
          gfMITWaitingForLLHook = 1;
        v45 = 0;
        while ( 1 )
        {
          v50 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
          LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v53);
          v24 = KeWaitForMultipleObjects(v21, Object, WaitAny, WrUserRequest, 1, 0, Timeout, 0LL);
          LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v53);
          if ( v24 )
            goto LABEL_46;
          memset(v51, 0, 32);
          v44 = 0;
          v49 = 0LL;
          Alertable[0] = 0;
          v26 = ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1464LL), v51, 1LL, &v44, &v49, *(_DWORD *)Alertable);
          v27 = 0;
          if ( v26 )
          {
            v27 = v26 == 258;
          }
          else if ( DWORD2(v51[0]) == 1 )
          {
            v27 = 3;
          }
          else if ( DWORD2(v51[0]) == 2 )
          {
            v27 = 2;
          }
          else if ( !DWORD2(v51[0]) && *(_QWORD *)(gptiCurrent + 1504LL) )
          {
            v27 = DWORD2(v51[0]) + 4;
            xxxHandleCoreMessagingQueueCompletion(gptiCurrent, (ULONG64 *)v51, DWORD2(v51[0]) + 1);
          }
          if ( v27 == 3 )
            ZwAssociateWaitCompletionPacket(
              *(_QWORD *)(gptiCurrent + 1488LL),
              *(_QWORD *)(gptiCurrent + 1464LL),
              *(_QWORD *)(gptiCurrent + 1480LL),
              0LL,
              1LL,
              0,
              0LL,
              0LL);
          if ( v27 != 4 )
            break;
          v25 = v10 & *(_DWORD *)(*(_QWORD *)v11 + 8LL);
          if ( ((unsigned __int8)v10 & *(_BYTE *)(*(_QWORD *)v11 + 8LL) & 8) != 0 )
            break;
          v28 = 1;
          v22 = v52;
LABEL_47:
          if ( v24 == 1 )
          {
            if ( !v22 )
            {
              v9 = v39;
              *(_DWORD *)v39 = 2;
              v46 = -100000LL;
              goto LABEL_49;
            }
            v12 = 0xFFFFF78000000320uLL;
            if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                                  - v50) >= 0x10 )
              v37 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                  - v50;
            else
              v37 = 16;
            v25 = -10000LL * v37;
            a2 = Timeout;
            if ( v25 <= Timeout->QuadPart )
            {
              v29 = 1;
              v24 = 258;
              v9 = v39;
LABEL_52:
              if ( v22 )
              {
                gfMITWaitingForLLHook = 0;
                if ( gfAppWaitingForLLHookSignal )
                {
                  WakeMIT(2LL, a2, v9, 0xFFFFF78000000320uLL);
                  if ( !v29 )
                    KeClearEvent((PRKEVENT)WPP_MAIN_CB.Dpc.DpcListEntry.Next);
                  v12 = 0xFFFFF78000000320uLL;
                  v9 = v39;
                }
              }
              v7 = 0;
              if ( v24 )
                v7 = v24;
              v30 = v7;
              v31 = *(_QWORD *)(gptiCurrent + 424LL);
              if ( !*(_QWORD *)(v31 + 328) )
                *(_QWORD *)(v31 + 328) = gptiCurrent;
              v8 = v41;
              v5 = v55;
              if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 328LL) == gptiCurrent )
              {
                v32 = (_QWORD *)PsGetCurrentProcessWin32Process(v25);
                v33 = v32;
                if ( v32 )
                {
                  if ( !*v32 )
                    v33 = 0LL;
                }
                EtwTraceSleepInputIdle(0LL, gptiCurrent);
                v34 = (struct _KEVENT *)v33[2];
                if ( v34 == (struct _KEVENT *)-1LL )
                {
                  v33[2] = 0LL;
                  v7 = v30;
                  goto LABEL_63;
                }
                v7 = v30;
                v9 = v39;
                v12 = 0xFFFFF78000000320uLL;
                v5 = v55;
                if ( v34 )
                {
                  KeClearEvent(v34);
LABEL_63:
                  v9 = v39;
                  v5 = v55;
                  goto LABEL_8;
                }
              }
              goto LABEL_9;
            }
            Timeout->QuadPart -= v25;
            gfAppWaitingForLLHookSignal = 0;
            EditionxxxComputeInputSinkInfo();
          }
          v9 = v39;
LABEL_49:
          if ( v24 != 1 && !v28 )
          {
            v29 = v45;
            v12 = 0xFFFFF78000000320uLL;
            goto LABEL_52;
          }
          v21 = v40;
        }
        v22 = v52;
LABEL_46:
        v28 = 0;
        goto LABEL_47;
      }
      EtwTraceWakeInputIdle(0LL, gptiCurrent);
      v15 = (struct _KEVENT *)v18[2];
      if ( v15 )
      {
        if ( v15 == (struct _KEVENT *)-1LL )
          goto LABEL_30;
        KeSetEvent(v15, 1, 0);
        ObfDereferenceObject((PVOID)v18[2]);
      }
      v18[2] = -1LL;
      goto LABEL_30;
    }
    break;
  }
  UserSetLastError(1460);
  *(_DWORD *)v39 = 1;
LABEL_65:
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)v11 + 16LL), (__int32)a5);
  if ( v6 )
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)v11 + 20LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  return v6;
}
