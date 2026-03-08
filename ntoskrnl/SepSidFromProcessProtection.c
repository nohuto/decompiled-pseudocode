/*
 * XREFs of SepSidFromProcessProtection @ 0x140247C8C
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x140247AA0 (SepReferenceTokenUsingPseudoHandle.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x140247C30 (SepReconcileTrustSidWithProcessProtection.c)
 *     SepSetTrustLevelForProcessToken @ 0x140296E90 (SepSetTrustLevelForProcessToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSidFromProcessProtection(_BYTE *a1)
{
  __int64 v1; // r8

  v1 = 0LL;
  switch ( *a1 )
  {
    case 0x12:
      return SeProcTrustAuthenticodeSid;
    case 0x31:
      return SeProcTrustLiteAntimalwareSid;
    case 0x51:
      return SeProcTrustLiteWinSid;
    case 0x52:
      return SeProcTrustWinSid;
    case 0x61:
      return SeProcTrustLiteWinTcbSid;
    case 0x62:
    case 0x72:
      return SeProcTrustWinTcbSid;
  }
  if ( (unsigned __int8)*a1 == 129 )
    return SeProcTrustLiteAppSid;
  return v1;
}
