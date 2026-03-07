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
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 ProcessWin32Process; // rax
  __int64 i; // rcx
  __int64 v20; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  bool v31; // [rsp+B8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+18h] BYREF
  int v33; // [rsp+C8h] [rbp+20h]

  v2 = 0;
  v31 = 0;
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
    v31 = v5 >= 0;
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&Object, v22, v23, v24);
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    v5 = -1073741768;
  v33 = v5;
  if ( v5 < 0 )
    goto LABEL_27;
  if ( Handle )
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(Handle, 1u, LpcPortObjectType, 1, &Object, 0LL);
    v3 = Object;
    v33 = v5;
  }
  if ( v5 < 0 )
    goto LABEL_27;
  CurrentProcess = (void *)PsGetCurrentProcess(v7, v6, v8, v9);
  v5 = ObReferenceObjectByPointer(CurrentProcess, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  v33 = v5;
  if ( v5 < 0 )
    goto LABEL_27;
  v4 = (void *)PsGetCurrentProcess(v12, v11, v13, v14);
  GreLockDwmState();
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    v5 = -1073741768;
    v33 = -1073741768;
  }
  else
  {
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = v4;
    SetDwmApiPort(v3);
  }
  GreUnlockDwmState();
  if ( v5 < 0
    || (DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v16, v15),
        v5 = (*(__int64 (**)(void))(DxgkWin32kInterface + 464))(),
        v33 = v5,
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
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v31, v25, v26, v27);
      UserEnableConsoleMode(1LL);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v31, v28, v29, v30);
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
      v20 = *(_QWORD *)(i + 480);
      if ( v20 )
        *(_QWORD *)(v20 + 224) |= 1uLL;
    }
    xxxDwmControl(1037LL, 0LL);
  }
  return (unsigned int)v5;
}
