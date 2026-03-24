/*
 * XREFs of EtwpGetCurrentSiloState @ 0x1405AA664
 * Callers:
 *     NtTraceControl @ 0x1405EAF60 (NtTraceControl.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409385B0 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093F200 (EtwpGetPrivateSessionTraceHandle.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall EtwpGetCurrentSiloState(__int64 a1, __int64 a2)
{
  return *((_QWORD *)PsGetCurrentServerSiloGlobals(a1, a2) + 108);
}
