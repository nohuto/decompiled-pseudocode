/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x140699680
 * Callers:
 *     RtlpGetBootStatusPath @ 0x1403A6B24 (RtlpGetBootStatusPath.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 *     PopInitializePowerButtonHold @ 0x140B034C0 (PopInitializePowerButtonHold.c)
 *     PpDevCfgInit @ 0x140B0ED44 (PpDevCfgInit.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B156F8 (CmFcManagerStartRuntimePhase.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140B1C49C (BapdpProcessVsmKeyBlobs.c)
 *     BapdpProcessBCDCache @ 0x140B1C78C (BapdpProcessBCDCache.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1402201F8 (CmIsStateSeparationEnabled.c)
 */

bool RtlIsStateSeparationEnabled()
{
  return CmIsStateSeparationEnabled();
}
