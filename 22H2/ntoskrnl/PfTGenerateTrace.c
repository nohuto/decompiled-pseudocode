/*
 * XREFs of PfTGenerateTrace @ 0x14079D0B4
 * Callers:
 *     PfTLoggingWorker @ 0x14083A720 (PfTLoggingWorker.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402E7464 (KiQueryUnbiasedInterruptTime.c)
 *     PfTTraceListAdd @ 0x14075F1E8 (PfTTraceListAdd.c)
 *     PfTCreateTraceDump @ 0x14079D100 (PfTCreateTraceDump.c)
 */

__int64 PfTGenerateTrace()
{
  int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v0 = PfTCreateTraceDump(&v2);
  if ( v0 >= 0 )
  {
    ++dword_140C65570;
    qword_140C65300 = KiQueryUnbiasedInterruptTime();
    PfTTraceListAdd(v2);
  }
  return (unsigned int)v0;
}
