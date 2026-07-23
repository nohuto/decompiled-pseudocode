/*
 * XREFs of RtlSidDominatesForTrust @ 0x140346DF0
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1402CE470 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepLocateTokenTrustLevel @ 0x1403034A8 (SepLocateTokenTrustLevel.c)
 *     RtlpValidTrustSubjectContext @ 0x14032A870 (RtlpValidTrustSubjectContext.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x140346CA0 (SepReferenceTokenUsingPseudoHandle.c)
 *     SepTrustLevelCheck @ 0x140347320 (SepTrustLevelCheck.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x140597000 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x1406A1230 (SeCreateClientSecurityFromSubjectContext.c)
 *     SeTokenCanImpersonate @ 0x1406D41E0 (SeTokenCanImpersonate.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1406D5540 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x1406D7DA0 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeIsTokenAssignableToProcess @ 0x14070DAF4 (SeIsTokenAssignableToProcess.c)
 *     SepAdjustAccessStateForConstraints @ 0x14076EC80 (SepAdjustAccessStateForConstraints.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x140347780 (RtlIsValidProcessTrustLabelSid.c)
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
