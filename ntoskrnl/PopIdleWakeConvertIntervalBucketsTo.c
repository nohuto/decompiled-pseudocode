/*
 * XREFs of PopIdleWakeConvertIntervalBucketsTo @ 0x140997348
 * Callers:
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140997860 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets @ 0x140998098 (PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets.c)
 * Callees:
 *     PpmConvertTimeTo @ 0x1403A1D04 (PpmConvertTimeTo.c)
 */

void __fastcall PopIdleWakeConvertIntervalBucketsTo(unsigned int a1, __int64 a2, _QWORD *a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  _QWORD *v7; // r11
  unsigned __int64 v8; // rax
  unsigned __int64 *v9; // r11

  if ( a1 )
  {
    v4 = a1;
    v5 = a2 - (_QWORD)a3;
    v7 = a3;
    do
    {
      v8 = PpmConvertTimeTo(*(_QWORD *)((char *)v7 + v5), a4);
      *v9 = v8;
      v7 = v9 + 1;
      --v4;
    }
    while ( v4 );
  }
}
