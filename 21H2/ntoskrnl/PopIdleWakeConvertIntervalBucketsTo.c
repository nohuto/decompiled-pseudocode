/*
 * XREFs of PopIdleWakeConvertIntervalBucketsTo @ 0x1408F42A4
 * Callers:
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14057BC50 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopIdleWakeSourceAccountingToDiagnostic @ 0x1408F4740 (PopIdleWakeSourceAccountingToDiagnostic.c)
 * Callees:
 *     PpmConvertTimeTo @ 0x1405771D8 (PpmConvertTimeTo.c)
 */

void __fastcall PopIdleWakeConvertIntervalBucketsTo(unsigned int a1, __int64 a2, ULONGLONG *a3, ULONGLONG a4)
{
  ULONGLONG *v4; // rbx
  __int64 v5; // rsi
  __int64 v7; // rdi

  if ( a1 )
  {
    v4 = a3;
    v5 = a1;
    v7 = a2 - (_QWORD)a3;
    do
    {
      *v4 = PpmConvertTimeTo(*(ULONGLONG *)((char *)v4 + v7), a4);
      ++v4;
      --v5;
    }
    while ( v5 );
  }
}
