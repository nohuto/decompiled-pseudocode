/*
 * XREFs of SepLocateTokenTrustLevel @ 0x14030FE50
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140206FC0 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x1402653A0 (SeAccessCheckWithHint.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 *     SepAdjustAccessStateForConstraints @ 0x1407582D0 (SepAdjustAccessStateForConstraints.c)
 *     RtlpNewSecurityObject @ 0x1407BD790 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1407BF100 (RtlpSetSecurityObject.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1407C9300 (SeShouldCheckForAccessRightsFromParent.c)
 *     SepGetDefaultsSubjectContext @ 0x1409CADF0 (SepGetDefaultsSubjectContext.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x140247D00 (RtlSidDominatesForTrust.c)
 */

__int64 __fastcall SepLocateTokenTrustLevel(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r11
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = a1[2];
  v4 = 0;
  if ( v1 && (RtlSidDominatesForTrust(*(_QWORD *)(v2 + 1104), *(_QWORD *)(v1 + 1104), &v4), v4) )
    return *(_QWORD *)(v1 + 1104);
  else
    return *(_QWORD *)(v2 + 1104);
}
