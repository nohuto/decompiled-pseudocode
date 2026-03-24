/*
 * XREFs of HalpMiscIsLegacyPcType @ 0x140386324
 * Callers:
 *     HalMakeBeep @ 0x1404BD970 (HalMakeBeep.c)
 *     HalpPowerWriteResetCommand @ 0x1404BE25C (HalpPowerWriteResetCommand.c)
 *     HalpRestoreDmaControllerState @ 0x140995CE0 (HalpRestoreDmaControllerState.c)
 * Callees:
 *     <none>
 */

bool HalpMiscIsLegacyPcType()
{
  return !HalFirmwareTypeEfi
      || (HalpPlatformFlags & 1) != 0
      && (HalpPlatformFlags & 4) != 0
      && HalpVideoBiosPresent
      && (HalpPlatformFlags & 8) == 0;
}
