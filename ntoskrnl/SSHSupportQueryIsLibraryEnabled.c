/*
 * XREFs of SSHSupportQueryIsLibraryEnabled @ 0x14039EB70
 * Callers:
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     SleepstudyHelperCreateLibrary @ 0x140847520 (SleepstudyHelperCreateLibrary.c)
 * Callees:
 *     <none>
 */

bool SSHSupportQueryIsLibraryEnabled()
{
  return SleepstudyHelperAccountingEnabled != 0;
}
