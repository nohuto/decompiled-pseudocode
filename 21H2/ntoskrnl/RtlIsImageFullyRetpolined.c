/*
 * XREFs of RtlIsImageFullyRetpolined @ 0x140371978
 * Callers:
 *     MiLogRetpolineImageLoadEvents @ 0x14075CE80 (MiLogRetpolineImageLoadEvents.c)
 *     MiIsImageFullyRetpolined @ 0x1408D0C14 (MiIsImageFullyRetpolined.c)
 *     MiReloadBootLoadedDrivers @ 0x140A509F0 (MiReloadBootLoadedDrivers.c)
 *     MiImportOptimizationCompatibleWithDriverRelocation @ 0x140A513EC (MiImportOptimizationCompatibleWithDriverRelocation.c)
 *     MiInitializeRetpoline @ 0x140A57538 (MiInitializeRetpoline.c)
 *     MiIsBootImageTargetFullyRetpolined @ 0x140A934F0 (MiIsBootImageTargetFullyRetpolined.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075D09C (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlIsImageFullyRetpolined(void *a1)
{
  _DWORD *Config; // rax

  Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfig(a1);
  if ( Config && *Config >= 0x94u )
    return (Config[36] >> 20) & 1;
  else
    return 0LL;
}
