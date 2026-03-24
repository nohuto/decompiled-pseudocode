/*
 * XREFs of PsAssignProcessToJobObject @ 0x14071E780
 * Callers:
 *     NtAssignProcessToJobObject @ 0x14071E680 (NtAssignProcessToJobObject.c)
 *     PsCreateMinimalProcess @ 0x140798E60 (PsCreateMinimalProcess.c)
 *     PspSetJobMemoryPartition @ 0x14090958C (PspSetJobMemoryPartition.c)
 *     PspAssignProcessToJobList @ 0x140909F3C (PspAssignProcessToJobList.c)
 * Callees:
 *     PspAssignProcessToJob @ 0x14071E800 (PspAssignProcessToJob.c)
 *     PspGetJobAssignmentDisposition @ 0x14071FA48 (PspGetJobAssignmentDisposition.c)
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
