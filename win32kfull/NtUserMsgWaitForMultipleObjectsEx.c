__int64 __fastcall NtUserMsgWaitForMultipleObjectsEx(unsigned int a1, volatile void *a2, int a3, int a4, int a5)
{
  unsigned __int16 v5; // r14
  volatile void *v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // r12d
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 CurrentProcess; // rax
  _OWORD *v18; // rax
  _OWORD *v19; // rdx
  __int64 v20; // rcx
  char *v21; // rcx
  _OWORD *v22; // rax
  __int64 v23; // rdx
  ULONG v24; // r8d
  __int64 v25; // r14
  char *v26; // rax
  char *v27; // rdi
  size_t v28; // r14
  char *v29; // rdx
  unsigned int v30; // ecx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r10
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 *v37; // rax
  unsigned __int64 v38; // rdi
  __int64 *v39; // rax
  int v41; // [rsp+30h] [rbp-928h]
  char *v42; // [rsp+40h] [rbp-918h]
  __int64 v43; // [rsp+48h] [rbp-910h]
  __int64 v44; // [rsp+50h] [rbp-908h] BYREF
  char *v45; // [rsp+58h] [rbp-900h]
  void (*v46)(void *); // [rsp+60h] [rbp-8F8h]
  __int64 InputEvent; // [rsp+68h] [rbp-8F0h]
  __int64 ProcessPeb; // [rsp+70h] [rbp-8E8h]
  char v49; // [rsp+80h] [rbp-8D8h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-8B8h]
  __int64 v51; // [rsp+A8h] [rbp-8B0h]
  __int64 v52; // [rsp+B0h] [rbp-8A8h]
  _BYTE v53[1160]; // [rsp+4D0h] [rbp-488h] BYREF

  v5 = a4;
  v6 = a2;
  v7 = a1;
  v8 = -1;
  v41 = -1;
  EnterCrit(0LL, 0LL);
  v9 = 0LL;
  if ( (a5 & 0xFFFFFFE0) != 0 || (unsigned int)v7 > 0x3F )
  {
    UserSetLastError(87);
    goto LABEL_59;
  }
  v10 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v10 && ((a5 & 1) == 0 || !(_DWORD)v7) )
  {
    v11 = (a5 & 4) != 0 ? *(_WORD *)(v10 + 8) : 0;
    if ( ((unsigned __int16)(*(_WORD *)(v10 + 4) | v11) & v5) != 0 )
    {
      v8 = v7;
      goto LABEL_59;
    }
  }
  InputEvent = xxxGetInputEvent(v5 | ((unsigned __int16)a5 << 16));
  if ( InputEvent )
  {
    if ( (a5 & 1) != 0 )
    {
      v43 = 0LL;
      CancelQueueEventCompletionPacket();
    }
    else
    {
      v12 = SGDGetUserSessionState(v10);
      if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v12 + 8)) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
      v13 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v13 = *ThreadWin32Thread;
      v43 = *(_QWORD *)(v13 + 1472);
      if ( !v43 )
        goto LABEL_58;
      v6 = a2;
    }
    CurrentProcess = PsGetCurrentProcess(v10, v15, v16);
    ProcessPeb = PsGetProcessPeb(CurrentProcess);
    v18 = *(_OWORD **)(ProcessPeb + 32);
    if ( (_OWORD *)((char *)v18 + 1096) < v18 || (unsigned __int64)v18 + 1096 > MmUserProbeAddress )
      v18 = (_OWORD *)MmUserProbeAddress;
    v19 = v53;
    v20 = 8LL;
    do
    {
      *v19 = *v18;
      v19[1] = v18[1];
      v19[2] = v18[2];
      v19[3] = v18[3];
      v19[4] = v18[4];
      v19[5] = v18[5];
      v19[6] = v18[6];
      v19 += 8;
      *(v19 - 1) = v18[7];
      v18 += 8;
      --v20;
    }
    while ( v20 );
    *v19 = *v18;
    v19[1] = v18[1];
    v19[2] = v18[2];
    v19[3] = v18[3];
    *((_QWORD *)v19 + 8) = *((_QWORD *)v18 + 8);
    v21 = &v49;
    v22 = v53;
    v23 = 8LL;
    do
    {
      *(_OWORD *)v21 = *v22;
      *((_OWORD *)v21 + 1) = v22[1];
      *((_OWORD *)v21 + 2) = v22[2];
      *((_OWORD *)v21 + 3) = v22[3];
      *((_OWORD *)v21 + 4) = v22[4];
      *((_OWORD *)v21 + 5) = v22[5];
      *((_OWORD *)v21 + 6) = v22[6];
      v21 += 128;
      *((_OWORD *)v21 - 1) = v22[7];
      v22 += 8;
      --v23;
    }
    while ( v23 );
    *(_OWORD *)v21 = *v22;
    *((_OWORD *)v21 + 1) = v22[1];
    *((_OWORD *)v21 + 2) = v22[2];
    *((_OWORD *)v21 + 3) = v22[3];
    *((_QWORD *)v21 + 8) = *((_QWORD *)v22 + 8);
    if ( (_DWORD)v7 )
    {
      if ( PsGetCurrentProcessWow64Process(v21) )
        v24 = 1;
      else
        v24 = 4;
      v25 = v7;
      ProbeForRead(v6, 8 * v7, v24);
    }
    else
    {
      v25 = v7;
    }
    v26 = (char *)Win32AllocPoolWithQuotaZInit(8LL * (unsigned int)(v7 + 1), 2037609301LL);
    v27 = v26;
    v42 = v26;
    if ( v26 )
    {
      v28 = 8 * v25;
      memmove(v26, (const void *)a2, v28);
      v30 = 0;
      v31 = v52;
      v32 = v51;
      v33 = v50;
      while ( v30 < (unsigned int)v7 )
      {
        v29 = &v27[8 * v30];
        v34 = *(_DWORD *)v29;
        if ( *(_DWORD *)v29 >= 0xFFFFFFF4 )
        {
          switch ( v34 )
          {
            case -12:
              *(_QWORD *)v29 = v31;
              break;
            case -11:
              *(_QWORD *)v29 = v32;
              break;
            case -10:
              *(_QWORD *)v29 = v33;
              break;
          }
        }
        ++v30;
      }
      if ( (a5 & 8) != 0 )
        SetWaitForQueueAttach(1LL, v29, v31, v32);
      if ( (a5 & 1) != 0 )
        v35 = InputEvent;
      else
        v35 = v43;
      *(_QWORD *)&v27[v28] = v35;
      v36 = 0LL;
      v37 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v37 )
        v36 = *v37;
      v44 = *(_QWORD *)(v36 + 16);
      *(_QWORD *)(v36 + 16) = &v44;
      v45 = v42;
      v46 = Win32FreePool;
      v41 = xxxMsgWaitForMultipleObjectsEx(v7, (_DWORD)v42, a3, a4, a5);
      _InterlockedExchange(
        (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      if ( !*(_DWORD *)(gptiCurrent + 1216LL) )
      {
        v38 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( !(_DWORD)v38 )
          LODWORD(v38) = -1;
        EtwTraceMessageCheckDelay(gptiCurrent);
        *(_DWORD *)(gptiCurrent + 1216LL) = v38;
        if ( *(int *)(gptiCurrent + 488LL) < 0 )
          xxxHandleHealthyThread(gptiCurrent);
        *(_QWORD *)(gptiCurrent + 1272LL) &= ~0x200000000uLL;
        EtwTraceProcessWindowInfo(gptiCurrent);
      }
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 16LL), 0);
      *(_DWORD *)(gptiCurrent + 1272LL) &= ~0x400u;
      v39 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v39 )
        v9 = *v39;
      *(_QWORD *)(v9 + 16) = v44;
      ((void (__fastcall *)(char *))v46)(v45);
      if ( (a5 & 1) != 0 )
        ReassociateQueueEventCompletionPacket();
LABEL_58:
      v8 = v41;
      goto LABEL_59;
    }
    UserSetLastError(8);
  }
LABEL_59:
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}
