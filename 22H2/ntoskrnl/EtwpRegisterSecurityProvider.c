/*
 * XREFs of EtwpRegisterSecurityProvider @ 0x1407D5180
 * Callers:
 *     NtTraceControl @ 0x1405EAF60 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1402D2070 (PsGetCurrentThreadProcessId.c)
 */

__int64 __fastcall EtwpRegisterSecurityProvider(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 4072) )
    return (unsigned int)-1073741790;
  else
    *(_DWORD *)(a1 + 4072) = PsGetCurrentThreadProcessId();
  return v1;
}
