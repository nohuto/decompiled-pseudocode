/*
 * XREFs of NtUserSetWindowsHookEx @ 0x1C001FBA0
 * Callers:
 *     <none>
 * Callees:
 *     zzzSetWindowsHookEx @ 0x1C001FCE8 (zzzSetWindowsHookEx.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetWindowsHookEx(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, int a6)
{
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 CurrentProcess; // rax
  _QWORD *ProcessPeb; // r15
  __int64 *v14; // rax
  __int64 v15; // rcx

  EnterCrit(0LL, 1LL);
  v10 = 0LL;
  if ( a3 )
  {
    v11 = PtiFromThreadId(a3);
    if ( !v11 )
    {
      UserSetLastError(87LL);
      goto LABEL_9;
    }
  }
  else
  {
    LODWORD(v11) = 0;
  }
  if ( a1 )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessPeb = (_QWORD *)PsGetProcessPeb(CurrentProcess);
    ProbeForRead(ProcessPeb, 0x7C8uLL, 1u);
    if ( ProcessPeb[2] == a1 )
    {
      a1 = 0LL;
      a2 = 0LL;
    }
  }
  v14 = (__int64 *)zzzSetWindowsHookEx(a1, a2, v11, a4, a5, a6);
  if ( v14 )
    v10 = *v14;
  EtwTraceAuditApiSetWindowsHookEx(a4, a2, a1, a5, v10);
LABEL_9:
  UserSessionSwitchLeaveCrit(v15);
  return v10;
}
