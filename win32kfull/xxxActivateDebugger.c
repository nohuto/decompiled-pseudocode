_BOOL8 __fastcall xxxActivateDebugger(char a1)
{
  int v2; // edi
  __int64 v3; // rcx
  PETHREAD *v4; // rcx
  __int64 ProcessDebugPort; // rbx
  PVOID Object; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v8[10]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+58h] [rbp-A8h]
  int v10; // [rsp+60h] [rbp-A0h]
  HANDLE ProcessId; // [rsp+70h] [rbp-90h]
  HANDLE ThreadId; // [rsp+78h] [rbp-88h]

  memset_0(v8, 0, 0x3B8uLL);
  Object = 0LL;
  if ( (a1 & 2) != 0 )
    return 0LL;
  v2 = a1 & 4;
  if ( v2 )
  {
    if ( !PsGetProcessDebugPort(gpepCSRSS) )
      return 0LL;
    ProcessId = PsGetProcessId(gpepCSRSS);
  }
  else
  {
    if ( !gpqForeground )
      return 0LL;
    v4 = *(PETHREAD **)(gpqForeground + 104LL);
    if ( !v4 )
      return 0LL;
    ProcessId = PsGetThreadProcessId(*v4);
    ThreadId = PsGetThreadId(**(PETHREAD **)(gpqForeground + 104LL));
    if ( (int)LockProcessByClientId(ProcessId, (PEPROCESS *)&Object) < 0 )
      return 0LL;
    ProcessDebugPort = PsGetProcessDebugPort(Object);
    ObfDereferenceObject(Object);
    if ( !ProcessDebugPort )
      return 0LL;
  }
  if ( CsrApiPort )
  {
    v8[1] = 0;
    v9 = 0LL;
    v8[0] = 5242920;
    v10 = 197635;
    UserSessionSwitchLeaveCrit(v3);
    LpcRequestPort(CsrApiPort, v8);
    EnterCrit(1LL, 0LL);
  }
  return v2 != 0;
}
