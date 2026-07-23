/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x1406170D0
 * Callers:
 *     RtlpGetBootStatusPath @ 0x140399964 (RtlpGetBootStatusPath.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A39784 (CmFcManagerStartRuntimePhase.c)
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A4240C (BapdpProcessVsmKeyBlobs.c)
 *     PpDevCfgInit @ 0x140A53024 (PpDevCfgInit.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1402486E8 (CmIsStateSeparationEnabled.c)
 */

BOOLEAN RtlIsStateSeparationEnabled(void)
{
  return CmIsStateSeparationEnabled();
}
