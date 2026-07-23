/*
 * XREFs of ExpReducedLicenseData @ 0x1406A67E0
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x14094E2E0 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     <none>
 */

char ExpReducedLicenseData()
{
  char result; // al

  result = 0;
  if ( InitSafeBootMode || InitIsWinPEMode )
    return 1;
  return result;
}
