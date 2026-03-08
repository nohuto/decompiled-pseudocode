/*
 * XREFs of ExStartRecordingIRTimerExpiries @ 0x140879C0C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C24C4 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void ExStartRecordingIRTimerExpiries()
{
  int v0; // edx
  __int64 *v1; // rcx
  __int64 v2; // r8
  int v3; // eax
  __int64 Pool2; // rax
  void *v5; // rcx

  v0 = 0;
  v1 = qword_140005ED0;
  v2 = 17LL;
  do
  {
    v3 = *(unsigned __int8 *)v1;
    v1 += 3;
    v0 += v3;
    --v2;
  }
  while ( v2 );
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(4 * v0), 1767143493LL);
  if ( Pool2 )
  {
    v5 = (void *)_InterlockedExchange64(&ExpIRTimerExpiryCounts, Pool2);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x69547845u);
  }
}
