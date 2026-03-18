/*
 * XREFs of PsAssignProcessToJobObject @ 0x140688050
 * Callers:
 *     NtAssignProcessToJobObject @ 0x1406880D0 (NtAssignProcessToJobObject.c)
 *     PspAssignProcessToJobList @ 0x1406E2E48 (PspAssignProcessToJobList.c)
 *     PsCreateMinimalProcess @ 0x140831810 (PsCreateMinimalProcess.c)
 *     PspSetJobMemoryPartition @ 0x1409B08E8 (PspSetJobMemoryPartition.c)
 * Callees:
 *     PspAssignProcessToJob @ 0x1406879B8 (PspAssignProcessToJob.c)
 *     PspGetJobAssignmentDisposition @ 0x140687EEC (PspGetJobAssignmentDisposition.c)
 */

__int64 __fastcall PsAssignProcessToJobObject(PVOID Object, __int64 BugCheckParameter1, __int64 a3)
{
  unsigned int i; // ebx
  __int64 result; // rax
  int v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  for ( i = 0; i <= 0xA; ++i )
  {
    if ( (int)PspGetJobAssignmentDisposition((__int64)Object, BugCheckParameter1, a3, &v8) < 0 )
      return 3221225506LL;
    result = PspAssignProcessToJob(Object, BugCheckParameter1, a3, v8);
    if ( (_DWORD)result != -1073741267 )
      return result;
  }
  return 3221225473LL;
}
