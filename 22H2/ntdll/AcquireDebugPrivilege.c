/*
 * XREFs of AcquireDebugPrivilege @ 0x180117D50
 * Callers:
 *     GetProcessIptTrace @ 0x180117D84 (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x180117EE0 (GetProcessIptTraceSize.c)
 * Callees:
 *     RtlAcquirePrivilege @ 0x180078180 (RtlAcquirePrivilege.c)
 */

bool __fastcall AcquireDebugPrivilege(_QWORD *a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 20;
  return (int)RtlAcquirePrivilege(&v2, 1u, 0, a1) >= 0;
}
