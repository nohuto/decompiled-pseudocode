/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x140601D90
 * Callers:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x14024EDC0 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     towupper @ 0x1403D3DD0 (towupper.c)
 *     ObpUseSystemDeviceMap @ 0x1405CF1CC (ObpUseSystemDeviceMap.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1405D683C (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpAllocateDiffHiveEntry @ 0x1405D69AC (VrpAllocateDiffHiveEntry.c)
 *     PfpRpFileKeyUpdate @ 0x140601860 (PfpRpFileKeyUpdate.c)
 *     VfUtilPrintCheckinString @ 0x1409C6900 (VfUtilPrintCheckinString.c)
 * Callees:
 *     <none>
 */

WCHAR __stdcall RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  if ( SourceCharacter < 0x61u )
    return SourceCharacter;
  if ( SourceCharacter <= 0x7Au )
    return SourceCharacter - 32;
  if ( !Nls844UnicodeUpcaseTable || SourceCharacter < 0xC0u )
    return SourceCharacter;
  return SourceCharacter
       + *(_WORD *)(Nls844UnicodeUpcaseTable
                  + 2LL
                  * ((SourceCharacter & 0xF)
                   + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                       + 2LL
                                                       * (((SourceCharacter >> 4) & 0xF)
                                                        + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                            + 2
                                                                                            * ((unsigned __int64)SourceCharacter >> 8))))));
}
