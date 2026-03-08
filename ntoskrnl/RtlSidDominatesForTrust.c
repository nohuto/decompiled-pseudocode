/*
 * XREFs of RtlSidDominatesForTrust @ 0x140247D00
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x140247AA0 (SepReferenceTokenUsingPseudoHandle.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x140247C30 (SepReconcileTrustSidWithProcessProtection.c)
 *     SeAccessCheckWithHint @ 0x1402653A0 (SeAccessCheckWithHint.c)
 *     SepLocateTokenTrustLevel @ 0x14030FE50 (SepLocateTokenTrustLevel.c)
 *     SepTrustLevelCheck @ 0x14033DC28 (SepTrustLevelCheck.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x1405B6C40 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeTokenCanImpersonate @ 0x1406DA880 (SeTokenCanImpersonate.c)
 *     SepAdjustAccessStateForConstraints @ 0x1407582D0 (SepAdjustAccessStateForConstraints.c)
 *     SeIsTokenAssignableToProcess @ 0x140776104 (SeIsTokenAssignableToProcess.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x140796E30 (SeCreateClientSecurityFromSubjectContext.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1407C9300 (SeShouldCheckForAccessRightsFromParent.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1402480E0 (RtlIsValidProcessTrustLabelSid.c)
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
