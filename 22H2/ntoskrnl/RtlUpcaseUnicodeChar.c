/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x1406DA330
 * Callers:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x14022D1B0 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     towupper @ 0x1403DB170 (towupper.c)
 *     ObpUseSystemDeviceMap @ 0x14067EA7C (ObpUseSystemDeviceMap.c)
 *     PfpRpFileKeyUpdate @ 0x1406D98E0 (PfpRpFileKeyUpdate.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14077C904 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpAllocateDiffHiveEntry @ 0x14077CD48 (VrpAllocateDiffHiveEntry.c)
 *     VfUtilPrintCheckinString @ 0x140AC3804 (VfUtilPrintCheckinString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 */

WCHAR __stdcall RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int64 v2; // rdx
  __int64 v4; // r9

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( (unsigned int)v2 < 0x61 )
    return v2;
  if ( (unsigned int)v2 > 0x7A )
  {
    v4 = CurrentServerSiloGlobals[154];
    if ( v4 )
    {
      if ( (unsigned __int16)v2 >= 0xC0u )
        LOWORD(v2) = *(_WORD *)(v4
                              + 2
                              * ((v2 & 0xF)
                               + *(unsigned __int16 *)(v4
                                                     + 2LL
                                                     * (((unsigned __int8)v2 >> 4)
                                                      + (unsigned int)*(unsigned __int16 *)(v4 + 2 * (v2 >> 8))))))
                   + v2;
    }
    return v2;
  }
  return v2 - 32;
}
