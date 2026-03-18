/*
 * XREFs of IvtGetPasidGranularTranslationType @ 0x14052CD44
 * Callers:
 *     IvtUpdateScalableModeTranslationStructures @ 0x14052DFBC (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtInitializeIommu @ 0x140A8A670 (IvtInitializeIommu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtGetPasidGranularTranslationType(__int64 a1, char a2, char a3)
{
  if ( a2 )
    return 1LL;
  else
    return a3 != 0 ? 2 : 4;
}
