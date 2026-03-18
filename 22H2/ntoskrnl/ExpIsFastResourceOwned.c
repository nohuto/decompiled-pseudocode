/*
 * XREFs of ExpIsFastResourceOwned @ 0x1404153AC
 * Callers:
 *     ExDeleteFastResource2 @ 0x140412DE4 (ExDeleteFastResource2.c)
 *     ExIsFastResourceHeld2 @ 0x1404133CC (ExIsFastResourceHeld2.c)
 *     ExReinitializeFastResource2 @ 0x140413608 (ExReinitializeFastResource2.c)
 *     ExpFastResourceLegacyIsAcquiredShared2 @ 0x1404150B8 (ExpFastResourceLegacyIsAcquiredShared2.c)
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
