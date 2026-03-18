/*
 * XREFs of TtmpTraceLoggingCallback @ 0x1409AAE30
 * Callers:
 *     <none>
 * Callees:
 *     TtmiSessionsRundown @ 0x1409A4B8C (TtmiSessionsRundown.c)
 */

void __fastcall TtmpTraceLoggingCallback(__int64 a1, int a2)
{
  if ( a2 == 2 )
    TtmiSessionsRundown();
}
