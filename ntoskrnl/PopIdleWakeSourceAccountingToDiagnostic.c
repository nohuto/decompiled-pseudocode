/*
 * XREFs of PopIdleWakeSourceAccountingToDiagnostic @ 0x140998254
 * Callers:
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140997860 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x14099739C (PopIdleWakeGenerateDescriptionString.c)
 *     PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets @ 0x140998098 (PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets.c)
 */

signed int __fastcall PopIdleWakeSourceAccountingToDiagnostic(__int64 a1, _DWORD *a2)
{
  unsigned __int16 v4; // dx
  __int64 v5; // rax
  __int64 v6; // rcx
  signed int result; // eax

  memset(a2, 0, 0x490uLL);
  *a2 = *(_DWORD *)a1;
  v4 = 0;
  a2[1] = *(_DWORD *)(a1 + 408);
  do
  {
    v5 = *((unsigned __int16 *)a2 + 420);
    *((_WORD *)a2 + 5 * v5 + 421) = v4;
    if ( v4 >= *(_WORD *)(a1 + 144) )
      v6 = 0LL;
    else
      v6 = *(_QWORD *)(a1 + 8LL * v4 + 152);
    *(_QWORD *)((char *)a2 + 10 * v5 + 844) = v6;
    if ( v6 )
      ++*((_WORD *)a2 + 420);
    ++v4;
  }
  while ( v4 < 0x20u );
  PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets(a1 + 416, (__int64)(a2 + 2));
  PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets(a1 + 800, (__int64)(a2 + 96));
  result = PopIdleWakeGenerateDescriptionString((const wchar_t *)a1, (__int64)a2);
  if ( result >= 0 )
    return 0;
  return result;
}
