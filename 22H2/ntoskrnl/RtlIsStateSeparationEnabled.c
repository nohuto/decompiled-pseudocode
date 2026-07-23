/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x14069AC30
 * Callers:
 *     RtlpGetBootStatusPath @ 0x140399114 (RtlpGetBootStatusPath.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A38784 (CmFcManagerStartRuntimePhase.c)
 *     IoInitSystemPreDrivers @ 0x140A3DF90 (IoInitSystemPreDrivers.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A4083C (BapdpProcessVsmKeyBlobs.c)
 *     PpDevCfgInit @ 0x140A52024 (PpDevCfgInit.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x140323318 (CmIsStateSeparationEnabled.c)
 */

BOOLEAN RtlIsStateSeparationEnabled(void)
{
  return CmIsStateSeparationEnabled();
}
