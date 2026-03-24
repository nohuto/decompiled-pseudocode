/*
 * XREFs of ?FindThreadPointerData@CTouchProcessor@@AEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C018E934
 * Callers:
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0195DD0 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct _LIST_ENTRY *__fastcall CTouchProcessor::FindThreadPointerData(
        CTouchProcessor *this,
        struct _LIST_ENTRY *a2,
        __int16 a3)
{
  struct _LIST_ENTRY *Flink; // rax
  __int16 v4; // cx
  struct _LIST_ENTRY *v5; // rbx

  Flink = a2->Flink;
  if ( a2->Flink == a2 )
    return 0LL;
  do
  {
    v4 = (__int16)Flink[1].Flink;
    v5 = Flink;
    if ( v4 == a3 )
      break;
    Flink = Flink->Flink;
  }
  while ( Flink != a2 );
  if ( Flink == a2 )
    return 0LL;
  if ( v4 != a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 13654);
  return v5;
}
