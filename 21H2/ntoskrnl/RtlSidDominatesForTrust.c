/*
 * XREFs of RtlSidDominatesForTrust @ 0x1402F8A20
 * Callers:
 *     SepLocateTokenTrustLevel @ 0x140232910 (SepLocateTokenTrustLevel.c)
 *     RtlpValidTrustSubjectContext @ 0x14025ACE4 (RtlpValidTrustSubjectContext.c)
 *     SepTrustLevelCheck @ 0x1402F9614 (SepTrustLevelCheck.c)
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x1405F5070 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeIsTokenAssignableToProcess @ 0x140695160 (SeIsTokenAssignableToProcess.c)
 *     SepAdjustAccessStateForConstraints @ 0x1406B539C (SepAdjustAccessStateForConstraints.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x1406DF7F0 (SeCreateClientSecurityFromSubjectContext.c)
 *     SeTokenCanImpersonate @ 0x1407AFBE0 (SeTokenCanImpersonate.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1407B3CD0 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x1407B4BA0 (SeAdjustAccessStateForAccessConstraints.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1402324B4 (RtlIsValidProcessTrustLabelSid.c)
 */

__int64 __fastcall RtlSidDominatesForTrust(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v3; // r9
  __int64 v4; // r10
  __int64 v6; // r10
  __int64 v7; // r11

  *a3 = 0;
  v3 = a3;
  v4 = a2;
  if ( a1 && !RtlIsValidProcessTrustLabelSid(a1) )
    return 3221225485LL;
  if ( !v4 )
  {
LABEL_3:
    *v3 = 1;
    return 0LL;
  }
  if ( !RtlIsValidProcessTrustLabelSid(v4) )
    return 3221225485LL;
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 8) >= *(_DWORD *)(v6 + 8) && *(_DWORD *)(v7 + 12) >= *(_DWORD *)(v6 + 12) )
      goto LABEL_3;
  }
  else if ( !*(_DWORD *)(v6 + 8) )
  {
    goto LABEL_3;
  }
  *v3 = 0;
  return 0LL;
}
