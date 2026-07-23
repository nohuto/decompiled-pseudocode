/*
 * XREFs of PsAssignProcessToJobObject @ 0x1406F6D10
 * Callers:
 *     NtAssignProcessToJobObject @ 0x1406F6D90 (NtAssignProcessToJobObject.c)
 *     PsCreateMinimalProcess @ 0x1407C65A4 (PsCreateMinimalProcess.c)
 *     PspSetJobMemoryPartition @ 0x14090969C (PspSetJobMemoryPartition.c)
 *     PspAssignProcessToJobList @ 0x14090A04C (PspAssignProcessToJobList.c)
 * Callees:
 *     PspAssignProcessToJob @ 0x1406F5FF0 (PspAssignProcessToJob.c)
 *     PspGetJobAssignmentDisposition @ 0x1406F6B28 (PspGetJobAssignmentDisposition.c)
 */

__int64 __fastcall PsAssignProcessToJobObject(_QWORD *Object, PEPROCESS Process, __int64 a3)
{
  unsigned int i; // ebx
  __int64 result; // rax
  int v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  for ( i = 0; i <= 0xA; ++i )
  {
    if ( (int)PspGetJobAssignmentDisposition((__int64)Object, (__int64)Process, a3, &v8) < 0 )
      return 3221225506LL;
    result = PspAssignProcessToJob(Object, Process, a3, v8);
    if ( (_DWORD)result != -1073741267 )
      return result;
  }
  return 3221225473LL;
}
