/*
 * XREFs of RtlIsImageFullyRetpolined @ 0x1402D9A20
 * Callers:
 *     MiLogRetpolineImageLoadEvents @ 0x1407615BC (MiLogRetpolineImageLoadEvents.c)
 *     MiIsImageFullyRetpolined @ 0x140970A74 (MiIsImageFullyRetpolined.c)
 *     MiReloadBootLoadedDrivers @ 0x140B04F8C (MiReloadBootLoadedDrivers.c)
 *     MiImportOptimizationCompatibleWithDriverRelocation @ 0x140B058D4 (MiImportOptimizationCompatibleWithDriverRelocation.c)
 *     MiInitializeRetpoline @ 0x140B0A4A8 (MiInitializeRetpoline.c)
 *     MiIsBootImageTargetFullyRetpolined @ 0x140B52040 (MiIsBootImageTargetFullyRetpolined.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075AEA4 (LdrImageDirectoryEntryToLoadConfig.c)
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
