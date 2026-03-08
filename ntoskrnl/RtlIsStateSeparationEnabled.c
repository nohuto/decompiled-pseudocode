/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x140792EC0
 * Callers:
 *     RtlpGetBootStatusPath @ 0x1403C03F4 (RtlpGetBootStatusPath.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 *     BapdpProcessBCDCache @ 0x140B44668 (BapdpProcessBCDCache.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140B44AFC (BapdpProcessVsmKeyBlobs.c)
 *     PopInitializePowerButtonHold @ 0x140B47194 (PopInitializePowerButtonHold.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B53284 (CmFcManagerStartRuntimePhase.c)
 *     PpDevCfgInit @ 0x140B5ACF8 (PpDevCfgInit.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1402FBD38 (CmIsStateSeparationEnabled.c)
 */

bool RtlIsStateSeparationEnabled()
{
  return CmIsStateSeparationEnabled();
}
