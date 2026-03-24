/*
 * XREFs of NtUserMsgWaitForMultipleObjectsEx @ 0x1C0052B00
 * Callers:
 *     <none>
 * Callees:
 *     xxxHandleHealthyThread @ 0x1C00034F0 (xxxHandleHealthyThread.c)
 *     xxxGetInputEvent @ 0x1C0053050 (xxxGetInputEvent.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x1C0166744 (xxxMsgWaitForMultipleObjectsEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     _CancelQueueEventCompletionPacket @ 0x1C01D2D20 (_CancelQueueEventCompletionPacket.c)
 *     _ReassociateQueueEventCompletionPacket @ 0x1C01D2DD0 (_ReassociateQueueEventCompletionPacket.c)
 *     _SetWaitForQueueAttach @ 0x1C01D2E80 (_SetWaitForQueueAttach.c)
 */

__int64 __fastcall NtUserMsgWaitForMultipleObjectsEx(unsigned int a1, volatile void *a2, int a3, int a4, int a5)
{
  unsigned __int16 v5; // r14
  volatile void *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 InputEvent; // r15
  __int64 CurrentProcess; // rax
  _OWORD *v15; // rax
  _OWORD *v16; // rcx
  __int64 v17; // rdx
  char *v18; // rax
  _OWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 CurrentProcessWow64Process; // rax
  ULONG v22; // r8d
  __int64 v23; // r14
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  int *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r10
  int v31; // eax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // rdi
  struct _KTHREAD *v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 *v44; // rax
  __int64 v46; // rax
  int ProcessSessionId; // ebx
  __int64 v48; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v50; // rax
  int v51; // ebx
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // [rsp+30h] [rbp-8F8h]
  void *v55; // [rsp+40h] [rbp-8E8h]
  __int64 v56; // [rsp+48h] [rbp-8E0h]
  __int64 v57; // [rsp+50h] [rbp-8D8h] BYREF
  void *v58; // [rsp+58h] [rbp-8D0h]
  void (*v59)(void *); // [rsp+60h] [rbp-8C8h]
  __int64 ProcessPeb; // [rsp+68h] [rbp-8C0h]
  char v61; // [rsp+70h] [rbp-8B8h] BYREF
  __int64 v62; // [rsp+90h] [rbp-898h]
  __int64 v63; // [rsp+98h] [rbp-890h]
  __int64 v64; // [rsp+A0h] [rbp-888h]
  _BYTE v65[1144]; // [rsp+4B0h] [rbp-478h] BYREF

  v5 = a4;
  v6 = a2;
  v7 = a1;
  EnterCrit(0LL, 1LL);
  v8 = 0LL;
  if ( (a5 & 0xFFFFFFE0) != 0 || (unsigned int)v7 > 0x3F )
  {
    LODWORD(v7) = -1;
    UserSetLastError(87LL);
    goto LABEL_56;
  }
  v9 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( !v9
    || (a5 & 1) != 0 && (_DWORD)v7
    || ((a5 & 4) == 0 ? (v10 = 0LL) : (v10 = *(unsigned __int16 *)(v9 + 6)),
        ((unsigned __int16)(v10 | *(_WORD *)(v9 + 4)) & v5) == 0) )
  {
    InputEvent = xxxGetInputEvent(v5 | ((unsigned __int16)a5 << 16));
    if ( InputEvent )
    {
      if ( (a5 & 1) != 0 )
      {
        v56 = 0LL;
        CancelQueueEventCompletionPacket();
LABEL_12:
        CurrentProcess = PsGetCurrentProcess(v10, v11, v12);
        ProcessPeb = PsGetProcessPeb(CurrentProcess);
        v15 = *(_OWORD **)(ProcessPeb + 32);
        if ( v15 + 68 < v15 || (unsigned __int64)(v15 + 68) > MmUserProbeAddress )
          v15 = (_OWORD *)MmUserProbeAddress;
        v16 = v65;
        v17 = 8LL;
        do
        {
          *v16 = *v15;
          v16[1] = v15[1];
          v16[2] = v15[2];
          v16[3] = v15[3];
          v16[4] = v15[4];
          v16[5] = v15[5];
          v16[6] = v15[6];
          v16 += 8;
          *(v16 - 1) = v15[7];
          v15 += 8;
          --v17;
        }
        while ( v17 );
        *v16 = *v15;
        v16[1] = v15[1];
        v16[2] = v15[2];
        v16[3] = v15[3];
        v18 = &v61;
        v19 = v65;
        v20 = 8LL;
        do
        {
          *(_OWORD *)v18 = *v19;
          *((_OWORD *)v18 + 1) = v19[1];
          *((_OWORD *)v18 + 2) = v19[2];
          *((_OWORD *)v18 + 3) = v19[3];
          *((_OWORD *)v18 + 4) = v19[4];
          *((_OWORD *)v18 + 5) = v19[5];
          *((_OWORD *)v18 + 6) = v19[6];
          v18 += 128;
          *((_OWORD *)v18 - 1) = v19[7];
          v19 += 8;
          --v20;
        }
        while ( v20 );
        *(_OWORD *)v18 = *v19;
        *((_OWORD *)v18 + 1) = v19[1];
        *((_OWORD *)v18 + 2) = v19[2];
        *((_OWORD *)v18 + 3) = v19[3];
        if ( (_DWORD)v7 )
        {
          CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v19);
          v22 = 4;
          if ( CurrentProcessWow64Process )
            v22 = 1;
          v23 = v7;
          ProbeForRead(v6, 8 * v7, v22);
        }
        else
        {
          v23 = 0LL;
        }
        v24 = (_QWORD *)Win32AllocPoolWithQuota(8LL * (unsigned int)(v7 + 1), 2037609301LL);
        v25 = v24;
        v55 = v24;
        if ( v24 )
        {
          memmove(v24, (const void *)a2, 8 * v23);
          v27 = 0LL;
          v28 = v64;
          v29 = v63;
          v30 = v62;
          while ( (unsigned int)v27 < (unsigned int)v7 )
          {
            v26 = (int *)&v25[(unsigned int)v27];
            v31 = *v26;
            if ( (unsigned int)*v26 >= 0xFFFFFFF4 )
            {
              switch ( v31 )
              {
                case -12:
                  *(_QWORD *)v26 = v28;
                  break;
                case -11:
                  *(_QWORD *)v26 = v29;
                  break;
                case -10:
                  *(_QWORD *)v26 = v30;
                  break;
              }
            }
            v27 = (unsigned int)(v27 + 1);
          }
          if ( (a5 & 8) != 0 )
            SetWaitForQueueAttach(1LL, v26, v28, v29);
          if ( (a5 & 1) == 0 )
            InputEvent = v56;
          v25[v7] = InputEvent;
          CurrentThread = KeGetCurrentThread();
          v33 = 0LL;
          if ( !(unsigned __int8)KeIsAttachedProcess(v27)
            || (v46 = PsGetCurrentProcess(v35, v34, v36),
                ProcessSessionId = PsGetProcessSessionIdEx(v46),
                CurrentThreadProcess = PsGetCurrentThreadProcess(v48),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v33 = *ThreadWin32Thread;
          }
          v57 = *(_QWORD *)(v33 + 16);
          *(_QWORD *)(v33 + 16) = &v57;
          v58 = v55;
          v59 = Win32FreePool;
          v54 = xxxMsgWaitForMultipleObjectsEx(v7, (_DWORD)v55, a3, a4, a5);
          v38 = (unsigned int)_InterlockedExchange(
                                (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 12LL),
                                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          if ( !*(_DWORD *)(gptiCurrent + 1176LL) )
          {
            v39 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            if ( !(_DWORD)v39 )
              LODWORD(v39) = -1;
            EtwTraceMessageCheckDelay(gptiCurrent);
            *(_DWORD *)(gptiCurrent + 1176LL) = v39;
            if ( *(int *)(gptiCurrent + 488LL) < 0 )
              xxxHandleHealthyThread(gptiCurrent);
            *(_QWORD *)(gptiCurrent + 1232LL) &= ~0x400000000uLL;
            EtwTraceProcessWindowInfo(gptiCurrent);
          }
          *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL) = 0;
          *(_DWORD *)(gptiCurrent + 1232LL) &= ~0x400u;
          v40 = KeGetCurrentThread();
          if ( !(unsigned __int8)KeIsAttachedProcess(v38)
            || (v50 = PsGetCurrentProcess(v42, v41, v43),
                v51 = PsGetProcessSessionIdEx(v50),
                v53 = PsGetCurrentThreadProcess(v52),
                v51 == (unsigned int)PsGetProcessSessionIdEx(v53)) )
          {
            v44 = (__int64 *)PsGetThreadWin32Thread(v40);
            if ( v44 )
              v8 = *v44;
          }
          *(_QWORD *)(v8 + 16) = v57;
          ((void (__fastcall *)(void *))v59)(v58);
          if ( (a5 & 1) != 0 )
            ReassociateQueueEventCompletionPacket();
          LODWORD(v7) = v54;
        }
        else
        {
          LODWORD(v7) = -1;
          UserSetLastError(8LL);
        }
        goto LABEL_56;
      }
      v10 = gptiCurrent;
      v56 = *(_QWORD *)(gptiCurrent + 1432LL);
      if ( v56 )
      {
        v6 = a2;
        goto LABEL_12;
      }
    }
    LODWORD(v7) = -1;
  }
LABEL_56:
  UserSessionSwitchLeaveCrit(v10);
  return (unsigned int)v7;
}
