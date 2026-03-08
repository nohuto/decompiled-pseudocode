/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x1406EA4F0
 * Callers:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x140365960 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     towupper @ 0x1403D5C50 (towupper.c)
 *     ObpUseSystemDeviceMap @ 0x14067CA7C (ObpUseSystemDeviceMap.c)
 *     PfpRpFileKeyUpdate @ 0x140702E20 (PfpRpFileKeyUpdate.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x140737F24 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpAllocateDiffHiveEntry @ 0x140738368 (VrpAllocateDiffHiveEntry.c)
 *     VfUtilPrintCheckinString @ 0x140ABF804 (VfUtilPrintCheckinString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 */

WCHAR __stdcall RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int64 v2; // rdx
  struct _LIST_ENTRY *Flink; // r9

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( (unsigned int)v2 < 0x61 )
    return v2;
  if ( (unsigned int)v2 > 0x7A )
  {
    Flink = CurrentServerSiloGlobals[77].Flink;
    if ( Flink )
    {
      if ( (unsigned __int16)v2 >= 0xC0u )
        LOWORD(v2) = *((_WORD *)&Flink->Flink
                     + (v2 & 0xF)
                     + *((unsigned __int16 *)&Flink->Flink
                       + ((unsigned __int8)v2 >> 4)
                       + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v2 >> 8))))
                   + v2;
    }
    return v2;
  }
  return v2 - 32;
}
