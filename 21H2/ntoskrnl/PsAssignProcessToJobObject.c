/*
 * XREFs of PsAssignProcessToJobObject @ 0x14071F3B0
 * Callers:
 *     NtAssignProcessToJobObject @ 0x14071F2B0 (NtAssignProcessToJobObject.c)
 *     PsCreateMinimalProcess @ 0x1407C6284 (PsCreateMinimalProcess.c)
 *     PspSetJobMemoryPartition @ 0x14090953C (PspSetJobMemoryPartition.c)
 *     PspAssignProcessToJobList @ 0x140909EEC (PspAssignProcessToJobList.c)
 * Callees:
 *     PspAssignProcessToJob @ 0x14071F430 (PspAssignProcessToJob.c)
 *     PspGetJobAssignmentDisposition @ 0x140720678 (PspGetJobAssignmentDisposition.c)
 */

__int64 __fastcall PsAssignProcessToJobObject(__int64 a1, PEPROCESS Process, __int64 a3)
{
  unsigned int i; // ebx
  __int64 result; // rax
  int v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  for ( i = 0; i <= 0xA; ++i )
  {
    if ( (int)PspGetJobAssignmentDisposition(a1, Process, a3, &v8) < 0 )
      return 3221225506LL;
    result = PspAssignProcessToJob(a1, Process, a3);
    if ( (_DWORD)result != -1073741267 )
      return result;
  }
  return 3221225473LL;
}
