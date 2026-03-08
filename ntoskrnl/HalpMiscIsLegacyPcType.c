/*
 * XREFs of HalpMiscIsLegacyPcType @ 0x140508E18
 * Callers:
 *     HalMakeBeep @ 0x140504630 (HalMakeBeep.c)
 *     HalpPowerWriteResetCommand @ 0x140504AEC (HalpPowerWriteResetCommand.c)
 *     HalpRestoreDmaControllerState @ 0x140A92288 (HalpRestoreDmaControllerState.c)
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
