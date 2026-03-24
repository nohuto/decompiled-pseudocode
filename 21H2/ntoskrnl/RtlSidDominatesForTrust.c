/*
 * XREFs of RtlSidDominatesForTrust @ 0x14027DDE0
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x14027DC90 (SepReferenceTokenUsingPseudoHandle.c)
 *     SepTrustLevelCheck @ 0x14027E310 (SepTrustLevelCheck.c)
 *     SepLocateTokenTrustLevel @ 0x1402AAB88 (SepLocateTokenTrustLevel.c)
 *     RtlpValidTrustSubjectContext @ 0x1402D1560 (RtlpValidTrustSubjectContext.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x14034DCE0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x1405970C0 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeTokenCanImpersonate @ 0x14065B420 (SeTokenCanImpersonate.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x14065C780 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x14065EFE0 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x1406BE420 (SeCreateClientSecurityFromSubjectContext.c)
 *     SeIsTokenAssignableToProcess @ 0x14071694C (SeIsTokenAssignableToProcess.c)
 *     SepAdjustAccessStateForConstraints @ 0x14076EFC0 (SepAdjustAccessStateForConstraints.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x14027E770 (RtlIsValidProcessTrustLabelSid.c)
 */

__int64 __fastcall RtlSidDominatesForTrust(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // r9
  __int64 v5; // r9
  __int64 v6; // r10

  *a3 = 0;
  v3 = a2;
  if ( a1 && !(unsigned __int8)RtlIsValidProcessTrustLabelSid(a1, a2, a3, a2) )
    return 3221225485LL;
  if ( !v3 )
  {
LABEL_3:
    *a3 = 1;
    return 0LL;
  }
  if ( !(unsigned __int8)RtlIsValidProcessTrustLabelSid(v3, a2, a3, v3) )
    return 3221225485LL;
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 8) >= *(_DWORD *)(v5 + 8) && *(_DWORD *)(v6 + 12) >= *(_DWORD *)(v5 + 12) )
      goto LABEL_3;
  }
  else if ( !*(_DWORD *)(v5 + 8) )
  {
    goto LABEL_3;
  }
  *a3 = 0;
  return 0LL;
}
