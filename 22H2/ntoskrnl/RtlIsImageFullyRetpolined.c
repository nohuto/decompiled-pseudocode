/*
 * XREFs of RtlIsImageFullyRetpolined @ 0x140372608
 * Callers:
 *     MiLogRetpolineImageLoadEvents @ 0x14075C4B0 (MiLogRetpolineImageLoadEvents.c)
 *     MiIsImageFullyRetpolined @ 0x1408D0B04 (MiIsImageFullyRetpolined.c)
 *     MiReloadBootLoadedDrivers @ 0x140A4F9F0 (MiReloadBootLoadedDrivers.c)
 *     MiImportOptimizationCompatibleWithDriverRelocation @ 0x140A503EC (MiImportOptimizationCompatibleWithDriverRelocation.c)
 *     MiInitializeRetpoline @ 0x140A56538 (MiInitializeRetpoline.c)
 *     MiIsBootImageTargetFullyRetpolined @ 0x140A924F0 (MiIsBootImageTargetFullyRetpolined.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075C6CC (LdrImageDirectoryEntryToLoadConfig.c)
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
