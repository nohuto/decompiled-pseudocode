/*
 * XREFs of EtwpCreateActivityId @ 0x1402068CC
 * Callers:
 *     NtTraceControl @ 0x140694040 (NtTraceControl.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall EtwpCreateActivityId(volatile signed __int64 *a1)
{
  volatile signed __int64 *EtwSupport; // rdx
  volatile signed __int64 result; // rax

  EtwSupport = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
  *((_QWORD *)a1 + 1) = _InterlockedIncrement64(EtwSupport + 1);
  result = *EtwSupport;
  *a1 = *EtwSupport;
  return result;
}
