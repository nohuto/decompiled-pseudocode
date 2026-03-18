/*
 * XREFs of ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C0086004
 * Callers:
 *     NtUserRegisterSessionPort @ 0x1C0085F50 (NtUserRegisterSessionPort.c)
 * Callees:
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0065068 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C00850DC (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     IsUserEnableConsoleModeSupported @ 0x1C0086240 (IsUserEnableConsoleModeSupported.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x1C0086270 (CheckDwmProcessSecurityIdentifier.c)
 *     xxxDwmControl @ 0x1C00862F0 (xxxDwmControl.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C00863FC (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     GreLockDwmState @ 0x1C0087030 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C00870B0 (GreUnlockDwmState.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     UserEnableConsoleMode @ 0x1C023333C (UserEnableConsoleMode.c)
 */

__int64 __fastcall xxxDwmProcessStartup(HANDLE Handle)
{
  bool v2; // r15
  PVOID v3; // rsi
  void *v4; // rdi
  NTSTATUS v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void *CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 ProcessWin32Process; // rax
  __int64 i; // rcx
  __int64 v19; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  bool v30; // [rsp+B8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+18h] BYREF
  int v32; // [rsp+C8h] [rbp+20h]

  v2 = 0;
  v30 = 0;
  v3 = 0LL;
  v4 = 0LL;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    v5 = -1073741768;
  else
    v5 = CheckDwmProcessSecurityIdentifier();
  if ( (int)IsUserEnableConsoleModeSupported() >= 0 )
  {
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&Object, v6, v8, v9);
    v5 = UserEnableConsoleMode(0LL);
    v2 = v5 >= 0;
    v30 = v5 >= 0;
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&Object, v21, v22, v23);
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    v5 = -1073741768;
  v32 = v5;
  if ( v5 < 0 )
    goto LABEL_27;
  if ( Handle )
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(Handle, 1u, LpcPortObjectType, 1, &Object, 0LL);
    v3 = Object;
    v32 = v5;
  }
  if ( v5 < 0 )
    goto LABEL_27;
  CurrentProcess = (void *)PsGetCurrentProcess(v7, v6, v8);
  v5 = ObReferenceObjectByPointer(CurrentProcess, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  v32 = v5;
  if ( v5 < 0 )
    goto LABEL_27;
  v4 = (void *)PsGetCurrentProcess(v12, v11, v13);
  GreLockDwmState();
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    v5 = -1073741768;
    v32 = -1073741768;
  }
  else
  {
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = v4;
    SetDwmApiPort(v3);
  }
  GreUnlockDwmState();
  if ( v5 < 0
    || (DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v15, v14),
        v5 = (*(__int64 (**)(void))(DxgkWin32kInterface + 464))(),
        v32 = v5,
        v5 < 0) )
  {
LABEL_27:
    GreLockDwmState();
    if ( *(void **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == v4 )
    {
      SetDwmApiPort(0LL);
      *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
    }
    GreUnlockDwmState();
    if ( v3 )
      ObfDereferenceObject(v3);
    if ( v4 )
      ObfDereferenceObject(v4);
    if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels && v2 )
    {
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v30, v24, v25, v26);
      UserEnableConsoleMode(1LL);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v30, v27, v28, v29);
    }
  }
  else
  {
    ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    if ( ProcessWin32Process )
      ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    for ( i = *(_QWORD *)(ProcessWin32Process + 320); i; i = *(_QWORD *)(i + 664) )
    {
      *(_DWORD *)(i + 1272) |= 4u;
      v19 = *(_QWORD *)(i + 480);
      if ( v19 )
        *(_QWORD *)(v19 + 224) |= 1uLL;
    }
    xxxDwmControl(1037LL, 0LL);
  }
  return (unsigned int)v5;
}
