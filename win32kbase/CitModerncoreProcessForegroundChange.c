__int64 __fastcall CitModerncoreProcessForegroundChange(int a1, int a2)
{
  struct tagPROCESSINFO *v2; // rbx
  void *v3; // rsi
  struct tagPROCESSINFO *v4; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rax
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF
  PEPROCESS Process; // [rsp+48h] [rbp+20h] BYREF

  v2 = 0LL;
  v3 = (void *)a2;
  Object = 0LL;
  v4 = 0LL;
  Process = 0LL;
  if ( a1 && PsLookupProcessByProcessId((HANDLE)a1, (PEPROCESS *)&Object) >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    v4 = (struct tagPROCESSINFO *)ProcessWin32Process;
    if ( ProcessWin32Process )
      v4 = (struct tagPROCESSINFO *)(-(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process);
    ObfDereferenceObject(Object);
  }
  if ( (_DWORD)v3 && PsLookupProcessByProcessId(v3, &Process) >= 0 )
  {
    v6 = PsGetProcessWin32Process(Process);
    if ( v6 )
      v6 &= -(__int64)(*(_QWORD *)v6 != 0LL);
    v2 = (struct tagPROCESSINFO *)v6;
    ObfDereferenceObject(Process);
  }
  return CitpProcessForegroundChange(v2, 0LL, v4, 0LL);
}
