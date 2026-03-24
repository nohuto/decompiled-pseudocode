/*
 * XREFs of CmpRecordParseCachedSymlinkKcb @ 0x140649710
 * Callers:
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRecordParseCachedSymlinkKcb(__int64 a1, __int64 a2)
{
  if ( a1 )
    *(_QWORD *)(a1 + 216) = a2;
}
