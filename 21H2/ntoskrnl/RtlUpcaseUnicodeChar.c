/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x1407CD620
 * Callers:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x14021984C (AuthzBasepUnicodeStringFromOperandValue.c)
 *     towupper @ 0x1403E3180 (towupper.c)
 *     ObpUseSystemDeviceMap @ 0x140659150 (ObpUseSystemDeviceMap.c)
 *     PfpRpFileKeyUpdate @ 0x140675300 (PfpRpFileKeyUpdate.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1406915F0 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpAllocateDiffHiveEntry @ 0x14069175C (VrpAllocateDiffHiveEntry.c)
 *     VfUtilPrintCheckinString @ 0x140A81E94 (VfUtilPrintCheckinString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

WCHAR __stdcall RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int64 v2; // r8
  __int64 v4; // r9

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( (unsigned int)v2 < 0x61 )
    return v2;
  if ( (unsigned int)v2 <= 0x7A )
    return v2 - 32;
  v4 = CurrentServerSiloGlobals[154];
  if ( !v4 || (unsigned __int16)v2 < 0xC0u )
    return v2;
  return v2
       + *(_WORD *)(v4
                  + 2
                  * ((v2 & 0xF)
                   + *(unsigned __int16 *)(v4
                                         + 2LL
                                         * (((unsigned __int8)v2 >> 4)
                                          + (unsigned int)*(unsigned __int16 *)(v4 + 2 * (v2 >> 8))))));
}
