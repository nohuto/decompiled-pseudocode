/*
 * XREFs of RtlIsImageFullyRetpolined @ 0x1402F4538
 * Callers:
 *     MiLogRetpolineImageLoadEvents @ 0x140784A44 (MiLogRetpolineImageLoadEvents.c)
 *     MiIsImageFullyRetpolined @ 0x140A315C8 (MiIsImageFullyRetpolined.c)
 *     MiInitializeRetpoline @ 0x140B39F78 (MiInitializeRetpoline.c)
 *     MiApplyBootLoadedDriversFixups @ 0x140B3ACB4 (MiApplyBootLoadedDriversFixups.c)
 *     MiImportOptimizationCompatibleWithDriverRelocation @ 0x140B3C2F8 (MiImportOptimizationCompatibleWithDriverRelocation.c)
 *     MiIsBootImageTargetFullyRetpolined @ 0x140B96790 (MiIsBootImageTargetFullyRetpolined.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140784BDC (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlIsImageFullyRetpolined(__int64 a1)
{
  _DWORD *Config; // rax

  Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfig(a1);
  if ( Config && *Config >= 0x94u )
    return (Config[36] >> 20) & 1;
  else
    return 0LL;
}
