/*
 * XREFs of RtlIsMultiSessionSku @ 0x1407F4B80
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x140372788 (OpenGlobalizationUserSettingsKey.c)
 *     RtlCapabilityCheck @ 0x140660AF0 (RtlCapabilityCheck.c)
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     NtSetDefaultLocale @ 0x1407F42D0 (NtSetDefaultLocale.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1407F4B20 (SepIsImpersonationAllowedDueToCapability.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14084C934 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1409B8F60 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x1409F8350 (NtSetSystemTime.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

char RtlIsMultiSessionSku()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_BYTE *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 165) + 28LL);
  else
    return MEMORY[0xFFFFF780000002F1] & 1;
}
