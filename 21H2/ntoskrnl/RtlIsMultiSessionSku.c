/*
 * XREFs of RtlIsMultiSessionSku @ 0x14069CDE0
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1403A484C (OpenGlobalizationUserSettingsKey.c)
 *     PopPowerInformationInternal @ 0x140678DF4 (PopPowerInformationInternal.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x14069CD74 (SepIsImpersonationAllowedDueToCapability.c)
 *     NtSetDefaultLocale @ 0x14078BE50 (NtSetDefaultLocale.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14079E0C8 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     RtlCapabilityCheck @ 0x140913350 (RtlCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140913730 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x14094BD10 (NtSetSystemTime.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140351230 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 */

char __fastcall RtlIsMultiSessionSku(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
    return *(_BYTE *)(*((_QWORD *)PsGetCurrentServerSiloGlobals(v3, v2) + 141) + 28LL);
  else
    return MEMORY[0xFFFFF780000002F1] & 1;
}
