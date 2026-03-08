/*
 * XREFs of BiExportStoreAlterationsToFirmware @ 0x140A59FB0
 * Callers:
 *     BiCloseStore @ 0x14082BD84 (BiCloseStore.c)
 *     BcdForciblyUnloadStore @ 0x140A5964C (BcdForciblyUnloadStore.c)
 * Callees:
 *     BiGetFirmwareType @ 0x14082D7AC (BiGetFirmwareType.c)
 *     BiExportStoreAlterationsToEfi @ 0x140A5BC98 (BiExportStoreAlterationsToEfi.c)
 */

__int64 __fastcall BiExportStoreAlterationsToFirmware(__int64 a1)
{
  int v2; // eax
  int v3; // eax

  v2 = BiGetFirmwareType() - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
      return BiExportStoreAlterationsToEfi(a1);
    if ( v3 != 1 )
      return 3221225659LL;
  }
  return 0LL;
}
