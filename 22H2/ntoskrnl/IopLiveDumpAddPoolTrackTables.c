/*
 * XREFs of IopLiveDumpAddPoolTrackTables @ 0x140A9A1F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAddPrivateDataToCrashDump @ 0x140606C2C (ExAddPrivateDataToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpAddPoolTrackTables(__int64 a1, __int64 a2)
{
  return ExAddPrivateDataToCrashDump(a2);
}
