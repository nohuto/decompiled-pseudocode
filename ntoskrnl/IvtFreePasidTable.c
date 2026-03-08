/*
 * XREFs of IvtFreePasidTable @ 0x14052A340
 * Callers:
 *     <none>
 * Callees:
 *     IvtFreeScalableModePasidTables @ 0x14052A358 (IvtFreeScalableModePasidTables.c)
 */

__int64 __fastcall IvtFreePasidTable(__int64 a1, __int64 a2, __int64 a3)
{
  return IvtFreeScalableModePasidTables(a1, a3);
}
