/*
 * XREFs of SSHSupportQueryIsLibraryEnabled @ 0x1403D6B2C
 * Callers:
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     SleepstudyHelperCreateLibrary @ 0x140853600 (SleepstudyHelperCreateLibrary.c)
 * Callees:
 *     <none>
 */

bool SSHSupportQueryIsLibraryEnabled()
{
  return SleepstudyHelperAccountingEnabled != 0;
}
