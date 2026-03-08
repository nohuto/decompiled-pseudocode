/*
 * XREFs of RtlIsMultiSessionSku @ 0x1407447E0
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1402BEDA8 (OpenGlobalizationUserSettingsKey.c)
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     RtlCapabilityCheck @ 0x140741730 (RtlCapabilityCheck.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x140744780 (SepIsImpersonationAllowedDueToCapability.c)
 *     NtSetDefaultLocale @ 0x1407497C0 (NtSetDefaultLocale.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140841554 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1409B9140 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x1409F54B0 (NtSetSystemTime.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 */

char __fastcall RtlIsMultiSessionSku(__int64 a1, __int64 a2)
{
  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
    return BYTE4(PsGetCurrentServerSiloGlobals()[82].Blink[1].Blink);
  else
    return MEMORY[0xFFFFF780000002F1] & 1;
}
