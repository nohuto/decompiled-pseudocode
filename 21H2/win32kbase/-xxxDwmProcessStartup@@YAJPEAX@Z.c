/*
 * XREFs of ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00594C8
 * Callers:
 *     NtUserRegisterSessionPort @ 0x1C00598B0 (NtUserRegisterSessionPort.c)
 * Callees:
 *     GreLockDwmState @ 0x1C0030A10 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C0030A50 (GreUnlockDwmState.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x1C0057840 (CheckDwmProcessSecurityIdentifier.c)
 *     xxxDwmControl @ 0x1C00596E0 (xxxDwmControl.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C005983C (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     IsUserEnableConsoleModeSupported @ 0x1C0059878 (IsUserEnableConsoleModeSupported.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C005A46C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C005A64C (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     UserEnableConsoleMode @ 0x1C023E464 (UserEnableConsoleMode.c)
 */

__int64 __fastcall xxxDwmProcessStartup(HANDLE Handle)
{
  bool v2; // r14
  PVOID v3; // rsi
  PVOID v4; // rdi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void *CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 i; // rcx
  __int64 v16; // rax
  bool v18; // [rsp+B8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+18h] BYREF
  int v20; // [rsp+C8h] [rbp+20h]

  v2 = 0;
  v18 = 0;
  v3 = 0LL;
  v4 = 0LL;
  if ( g_pepDwm )
    v5 = -1073741768;
  else
    v5 = CheckDwmProcessSecurityIdentifier();
  if ( (int)IsUserEnableConsoleModeSupported() >= 0 )
  {
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&Object);
    v5 = UserEnableConsoleMode(0LL);
    v2 = v5 >= 0;
    v18 = v5 >= 0;
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&Object);
  }
  if ( g_pepDwm )
    v5 = -1073741768;
  v20 = v5;
  if ( v5 < 0 )
    goto LABEL_25;
  if ( Handle )
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(Handle, 1u, LpcPortObjectType, 1, &Object, 0LL);
    v3 = Object;
    v20 = v5;
  }
  if ( v5 < 0 )
    goto LABEL_25;
  CurrentProcess = (void *)PsGetCurrentProcess(v7, v6, v8, v9);
  v5 = ObReferenceObjectByPointer(CurrentProcess, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  v20 = v5;
  if ( v5 < 0 )
    goto LABEL_25;
  v4 = (PVOID)PsGetCurrentProcess(v12, v11, v13, v14);
  GreLockDwmState();
  if ( g_pepDwm )
  {
    v5 = -1073741768;
    v20 = -1073741768;
  }
  else
  {
    g_pepDwm = v4;
    SetDwmApiPort(v3);
  }
  GreUnlockDwmState();
  if ( v5 < 0 || (v5 = ((__int64 (*)(void))qword_1C0296830)(), v20 = v5, v5 < 0) )
  {
LABEL_25:
    GreLockDwmState();
    if ( g_pepDwm == v4 )
    {
      SetDwmApiPort(0LL);
      g_pepDwm = 0LL;
    }
    GreUnlockDwmState();
    if ( v3 )
      ObfDereferenceObject(v3);
    if ( v4 )
      ObfDereferenceObject(v4);
    if ( !g_pepDwm && v2 )
    {
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v18);
      UserEnableConsoleMode(1LL);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v18);
    }
  }
  else
  {
    for ( i = *(_QWORD *)(PsGetProcessWin32Process(g_pepDwm) + 320); i; i = *(_QWORD *)(i + 664) )
    {
      *(_DWORD *)(i + 1256) |= 4u;
      v16 = *(_QWORD *)(i + 480);
      if ( v16 )
        *(_QWORD *)(v16 + 224) |= 1uLL;
    }
    xxxDwmControl(1037LL, 0LL);
  }
  return (unsigned int)v5;
}
