/*
 * XREFs of RtlIsMultiSessionSku @ 0x1406816A0
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1403A414C (OpenGlobalizationUserSettingsKey.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x140681634 (SepIsImpersonationAllowedDueToCapability.c)
 *     PopPowerInformationInternal @ 0x1406F1BE4 (PopPowerInformationInternal.c)
 *     NtSetDefaultLocale @ 0x14078BD50 (NtSetDefaultLocale.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14079E4F8 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     RtlCapabilityCheck @ 0x1409133A0 (RtlCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140913780 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x14094BD60 (NtSetSystemTime.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( PsIsCurrentThreadInServerSilo(v1, v0) )
    return *(_BYTE *)(*((_QWORD *)PsGetCurrentServerSiloGlobals(v3, v2) + 141) + 28LL);
  else
    return MEMORY[0xFFFFF780000002F1] & 1;
}
