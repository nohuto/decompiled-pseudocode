/*
 * XREFs of PfTGenerateTrace @ 0x1407E5150
 * Callers:
 *     PfTLoggingWorker @ 0x140839670 (PfTLoggingWorker.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     PfTCreateTraceDump @ 0x1407E51A0 (PfTCreateTraceDump.c)
 *     PfTTraceListAdd @ 0x1407E797C (PfTTraceListAdd.c)
 */

__int64 PfTGenerateTrace()
{
  int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v0 = PfTCreateTraceDump(&v2);
  if ( v0 >= 0 )
  {
    ++dword_140C650F0;
    qword_140C64E80 = KiQueryUnbiasedInterruptTime();
    PfTTraceListAdd(v2);
  }
  return (unsigned int)v0;
}
