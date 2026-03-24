/*
 * XREFs of NtUserFindWindowEx @ 0x1C00F7B30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     _FindWindowEx @ 0x1C008C110 (_FindWindowEx.c)
 *     LeaveEditionCrit @ 0x1C0132580 (LeaveEditionCrit.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserFindWindowEx(__int64 a1, __int64 a2, ULONG64 a3, ULONG64 a4)
{
  ULONG64 v4; // r15
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r14
  struct _KTHREAD *CurrentThread; // r12
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v20; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v23; // rax
  int v24; // edx
  unsigned __int16 *v25; // r12
  ULONG64 v26; // rax
  int v27; // r15d
  const wchar_t *v28; // r13
  ULONG64 v29; // rcx
  ULONG64 v30; // rcx
  __int64 *Window; // rax
  __int64 v32; // rbx
  int v34; // [rsp+30h] [rbp-78h]
  int v35; // [rsp+34h] [rbp-74h]
  __int64 v36; // [rsp+48h] [rbp-60h]
  int v37; // [rsp+B0h] [rbp+8h]

  v4 = a3;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive(v7) )
    {
      ++gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v35 = ++gdwAtomicCheckSerial;
        v7 = 0LL;
        if ( gdwAtomicCheckLogSize )
        {
          while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v7 << 6) + gpAtomickCheckStacks) )
          {
            v7 = (unsigned int)(v7 + 1);
            if ( (unsigned int)v7 >= gdwAtomicCheckLogSize )
              goto LABEL_9;
          }
          v8 = (unsigned __int64)(unsigned int)v7 << 6;
          *(_DWORD *)(v8 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
          *(_DWORD *)(gpAtomickCheckStacks + v8 + 4) = (unsigned int)PsGetCurrentThreadId();
          *(_DWORD *)(gpAtomickCheckStacks + v8 + 8) = (MEMORY[0xFFFFF78000000320]
                                                      * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          RtlWalkFrameChain((PVOID *)(v8 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
        }
      }
    }
  }
LABEL_9:
  if ( a1 == -3 )
  {
    v12 = 0LL;
    CurrentThread = KeGetCurrentThread();
    v14 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v7)
      || (CurrentProcess = PsGetCurrentProcess(v16, v15, v17),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v20),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v14 = *ThreadWin32Thread;
    }
    if ( v14 )
    {
      v23 = *(_QWORD *)(v14 + 456);
      if ( v23 )
        v12 = *(_QWORD *)(v23 + 104);
    }
    v4 = a3;
  }
  else if ( a1 )
  {
    v12 = ValidateHwnd(a1);
    if ( !v12 )
      goto LABEL_50;
  }
  else
  {
    v12 = 0LL;
  }
  if ( a2 )
  {
    v36 = ValidateHwnd(a2);
    if ( !v36 )
      goto LABEL_50;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  v24 = *(_DWORD *)v4;
  v37 = *(_DWORD *)v4;
  v25 = *(unsigned __int16 **)(v4 + 8);
  v26 = a4;
  if ( a4 >= MmUserProbeAddress )
    v26 = MmUserProbeAddress;
  v27 = *(_DWORD *)v26;
  v34 = *(_DWORD *)v26;
  v28 = *(const wchar_t **)(v26 + 8);
  if ( ((unsigned __int64)v25 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v25 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v29 = (ULONG64)v25 + (unsigned __int16)v24 + 2;
    if ( v29 < MmUserProbeAddress && (unsigned __int16)v24 <= HIWORD(v37) )
    {
      if ( (v24 & 1) != 0 )
        goto LABEL_38;
      if ( v29 > (unsigned __int64)v25 )
        goto LABEL_40;
    }
    if ( (v24 & 1) == 0 )
    {
LABEL_39:
      *(_BYTE *)MmUserProbeAddress = 0;
      goto LABEL_40;
    }
LABEL_38:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9431LL);
    goto LABEL_39;
  }
LABEL_40:
  if ( ((unsigned __int8)v28 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v30 = (ULONG64)v28 + (unsigned __int16)v27 + 2;
  if ( v30 < MmUserProbeAddress && (unsigned __int16)v27 <= HIWORD(v34) )
  {
    if ( (v27 & 1) != 0 )
    {
LABEL_47:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9432LL);
      goto LABEL_48;
    }
    if ( v30 > (unsigned __int64)v28 )
      goto LABEL_49;
  }
  if ( (v27 & 1) != 0 )
    goto LABEL_47;
LABEL_48:
  *(_BYTE *)MmUserProbeAddress = 0;
LABEL_49:
  Window = FindWindowEx(v12, v36, v25, v28);
  if ( Window )
  {
    v32 = *Window;
    goto LABEL_52;
  }
LABEL_50:
  v32 = 0LL;
LABEL_52:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive(v10) )
    {
      --gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v11 = 0LL;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v9 = (unsigned int)v11;
            v10 = (unsigned __int64)(unsigned int)v11 << 6;
            if ( *(_DWORD *)(v10 + gpAtomickCheckStacks) == v35 )
              break;
            v11 = (unsigned int)(v11 + 1);
            if ( (unsigned int)v11 >= gdwAtomicCheckLogSize )
              goto LABEL_60;
          }
          v9 = (unsigned __int64)(unsigned int)v11 << 6;
          *(_DWORD *)(v9 + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_60:
  LeaveEditionCrit(v10, v9, v11);
  return v32;
}
