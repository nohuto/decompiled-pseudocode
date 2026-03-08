/*
 * XREFs of ExpIsFastResourceOwned @ 0x14041057C
 * Callers:
 *     ExDeleteFastResource2 @ 0x14040DFE4 (ExDeleteFastResource2.c)
 *     ExIsFastResourceHeld2 @ 0x14040E5CC (ExIsFastResourceHeld2.c)
 *     ExReinitializeFastResource2 @ 0x14040E808 (ExReinitializeFastResource2.c)
 *     ExpFastResourceLegacyIsAcquiredShared2 @ 0x140410288 (ExpFastResourceLegacyIsAcquiredShared2.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpIsFastResourceOwned(__int64 *a1)
{
  __int64 v1; // rax
  char v2; // cl

  v1 = *a1;
  v2 = 1;
  if ( (v1 & 1) == 0 )
    return (v1 & 0xFFFFFFFFFFFFFFFCuLL) != 0;
  return v2;
}
