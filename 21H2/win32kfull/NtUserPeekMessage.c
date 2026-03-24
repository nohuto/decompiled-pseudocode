/*
 * XREFs of NtUserPeekMessage @ 0x1C0055560
 * Callers:
 *     <none>
 * Callees:
 *     ClientGetMessageMPH @ 0x1C0054358 (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x1C0055720 (xxxRealInternalGetMessage.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall NtUserPeekMessage(_OWORD *a1, __int64 a2, int a3, int a4, int a5, char a6)
{
  _OWORD *v9; // r14
  int v10; // ebx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *ThreadWin32Thread; // rax
  int MessageMPH; // eax
  ULONG64 v18; // rcx
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v23; // rcx
  __int64 CurrentThreadProcess; // rax
  bool v25; // zf
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-70h]
  union _LARGE_INTEGER v28; // [rsp+50h] [rbp-68h] BYREF
  __int128 v29; // [rsp+58h] [rbp-60h] BYREF
  __int128 v30; // [rsp+68h] [rbp-50h]
  __int128 v31; // [rsp+78h] [rbp-40h]

  v9 = a1;
  v10 = 0;
  if ( (a6 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(a1)
      || (CurrentProcess = PsGetCurrentProcess(v13, v12, v14),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v23),
          v25 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
          v11 = 0LL,
          v25) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v11 = *ThreadWin32Thread;
    }
    v28.QuadPart = 0LL;
    if ( KeWaitForSingleObject(*(PVOID *)(v11 + 1416), WrUserRequest, 1, 0, &v28) == 258 )
      return 0LL;
    if ( (a6 & 2) != 0 )
      --*(_QWORD *)(*(_QWORD *)(v11 + 480) + 8LL);
  }
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004LL);
  }
  else
  {
    LODWORD(Timeout) = a5;
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL) > 0 )
      MessageMPH = ClientGetMessageMPH(&v29, a2, a3, a4, a5, 0);
    else
      MessageMPH = xxxRealInternalGetMessage((unsigned int)&v29, a2, a3, a4, (unsigned __int64)Timeout, 0);
    v10 = MessageMPH;
    if ( MessageMPH )
    {
      HIDWORD(v29) = 0;
      HIDWORD(v31) = 0;
      v19 = v30;
      v20 = v31;
      v18 = MmUserProbeAddress;
      if ( (unsigned __int64)v9 >= MmUserProbeAddress )
        v9 = (_OWORD *)MmUserProbeAddress;
      *v9 = v29;
      v9[1] = v19;
      v9[2] = v20;
    }
  }
  UserSessionSwitchLeaveCrit(v18);
  return v10;
}
