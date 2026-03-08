/*
 * XREFs of ExpReducedLicenseData @ 0x14079C520
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x1409F78B4 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     <none>
 */

char ExpReducedLicenseData()
{
  char result; // al

  result = 0;
  if ( (_DWORD)InitSafeBootMode || InitIsWinPEMode )
    return 1;
  return result;
}
