/*
 * XREFs of MiGetSessionIdForVa @ 0x140343520
 * Callers:
 *     MiResolveMappedFileFault @ 0x14028A780 (MiResolveMappedFileFault.c)
 *     MiCompleteRestrictedImageFault @ 0x14028D690 (MiCompleteRestrictedImageFault.c)
 *     MiCopyDataPageToImagePage @ 0x140334490 (MiCopyDataPageToImagePage.c)
 *     MiIssueHardFault @ 0x140342F00 (MiIssueHardFault.c)
 *     MiFaultGetFileExtents @ 0x1406438D0 (MiFaultGetFileExtents.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 */

__int64 __fastcall MiGetSessionIdForVa(__int64 a1, unsigned __int64 a2)
{
  if ( a2 < 0xFFFF800000000000uLL || (unsigned int)MiGetSystemRegionType(a2) == 1 )
    return MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  else
    return 0xFFFFFFFFLL;
}
