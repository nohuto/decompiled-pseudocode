/*
 * XREFs of PfTGenerateTrace @ 0x14062F29C
 * Callers:
 *     PfTLoggingWorker @ 0x1407AD3A0 (PfTLoggingWorker.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140253F54 (KiQueryUnbiasedInterruptTime.c)
 *     PfTCreateTraceDump @ 0x14062F2F0 (PfTCreateTraceDump.c)
 *     PfTTraceListAdd @ 0x14062FFAC (PfTTraceListAdd.c)
 */

__int64 PfTGenerateTrace()
{
  int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v0 = PfTCreateTraceDump(&v2);
  if ( v0 >= 0 )
  {
    ++dword_140C4FEF0;
    qword_140C4FC80 = KiQueryUnbiasedInterruptTime();
    PfTTraceListAdd(v2);
  }
  return (unsigned int)v0;
}
