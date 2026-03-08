/*
 * XREFs of IopLiveDumpAddPoolTrackTables @ 0x140A970B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAddPrivateDataToCrashDump @ 0x1406047DC (ExAddPrivateDataToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpAddPoolTrackTables(__int64 a1, __int64 a2)
{
  return ExAddPrivateDataToCrashDump(a2);
}
