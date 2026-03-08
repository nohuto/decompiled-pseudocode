/*
 * XREFs of PsAssignProcessToJobObject @ 0x1406FF9A0
 * Callers:
 *     NtAssignProcessToJobObject @ 0x1406FF8A0 (NtAssignProcessToJobObject.c)
 *     PsCreateMinimalProcess @ 0x140817C28 (PsCreateMinimalProcess.c)
 *     PspAssignProcessToJobList @ 0x1409ADF10 (PspAssignProcessToJobList.c)
 *     PspSetJobMemoryPartition @ 0x1409AFC84 (PspSetJobMemoryPartition.c)
 * Callees:
 *     PspAssignProcessToJob @ 0x1406FFA20 (PspAssignProcessToJob.c)
 *     PspGetJobAssignmentDisposition @ 0x1406FFFD0 (PspGetJobAssignmentDisposition.c)
 */

__int64 __fastcall PsAssignProcessToJobObject(ULONG_PTR BugCheckParameter3, PEPROCESS Process, __int64 a3)
{
  unsigned int i; // ebx
  __int64 result; // rax
  int v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  for ( i = 0; i <= 0xA; ++i )
  {
    if ( (int)PspGetJobAssignmentDisposition(BugCheckParameter3, Process, a3, &v8) < 0 )
      return 3221225506LL;
    result = PspAssignProcessToJob(BugCheckParameter3, Process);
    if ( (_DWORD)result != -1073741267 )
      return result;
  }
  return 3221225473LL;
}
