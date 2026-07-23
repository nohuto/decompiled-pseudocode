/*
 * XREFs of RtlIsMultiSessionSku @ 0x1405FBEB0
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1403A499C (OpenGlobalizationUserSettingsKey.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405FBE44 (SepIsImpersonationAllowedDueToCapability.c)
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 *     NtSetDefaultLocale @ 0x14078C010 (NtSetDefaultLocale.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14079E2C8 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     RtlCapabilityCheck @ 0x1409134B0 (RtlCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140913890 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x14094BEE0 (NtSetSystemTime.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
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
