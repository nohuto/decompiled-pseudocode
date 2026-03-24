/*
 * XREFs of TtmpTraceLoggingCallback @ 0x140905370
 * Callers:
 *     <none>
 * Callees:
 *     TtmiSessionsRundown @ 0x1408FF178 (TtmiSessionsRundown.c)
 */

void __fastcall TtmpTraceLoggingCallback(__int64 a1, int a2)
{
  if ( a2 == 2 )
    TtmiSessionsRundown();
}
