/*
 * XREFs of RtlSidDominatesForTrust @ 0x14026BD80
 * Callers:
 *     SepLocateTokenTrustLevel @ 0x140228CC8 (SepLocateTokenTrustLevel.c)
 *     RtlpValidTrustSubjectContext @ 0x14024F9F0 (RtlpValidTrustSubjectContext.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x14026BC30 (SepReferenceTokenUsingPseudoHandle.c)
 *     SepTrustLevelCheck @ 0x14026C2B0 (SepTrustLevelCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140358A30 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x1405972F0 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x14061D680 (SeCreateClientSecurityFromSubjectContext.c)
 *     SeTokenCanImpersonate @ 0x140650240 (SeTokenCanImpersonate.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1406515A0 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x140653E00 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeIsTokenAssignableToProcess @ 0x1406C4F9C (SeIsTokenAssignableToProcess.c)
 *     SepAdjustAccessStateForConstraints @ 0x14076F180 (SepAdjustAccessStateForConstraints.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x14026C710 (RtlIsValidProcessTrustLabelSid.c)
 */

NTSTATUS __cdecl RtlSidDominatesForTrust(PSID Sid1, PSID Sid2, PBOOLEAN DominatesTrust)
{
  PSID v3; // r9
  __int64 v5; // r9
  __int64 v6; // r10

  *DominatesTrust = 0;
  v3 = Sid2;
  if ( Sid1 && !RtlIsValidProcessTrustLabelSid(Sid1) )
    return -1073741811;
  if ( !v3 )
  {
LABEL_3:
    *DominatesTrust = 1;
    return 0;
  }
  if ( !RtlIsValidProcessTrustLabelSid(v3) )
    return -1073741811;
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 8) >= *(_DWORD *)(v5 + 8) && *(_DWORD *)(v6 + 12) >= *(_DWORD *)(v5 + 12) )
      goto LABEL_3;
  }
  else if ( !*(_DWORD *)(v5 + 8) )
  {
    goto LABEL_3;
  }
  *DominatesTrust = 0;
  return 0;
}
