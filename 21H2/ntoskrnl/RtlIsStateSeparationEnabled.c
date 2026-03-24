/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x1406B7BC0
 * Callers:
 *     RtlpGetBootStatusPath @ 0x140399814 (RtlpGetBootStatusPath.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A38784 (CmFcManagerStartRuntimePhase.c)
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A4140C (BapdpProcessVsmKeyBlobs.c)
 *     PpDevCfgInit @ 0x140A52024 (PpDevCfgInit.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1402C9DF8 (CmIsStateSeparationEnabled.c)
 */

bool RtlIsStateSeparationEnabled()
{
  return CmIsStateSeparationEnabled();
}
