/*
 * XREFs of StringCchPrintfW @ 0x1402511F0
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14064B9D8 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PfVerifyScenarioBuffer @ 0x1407D8870 (PfVerifyScenarioBuffer.c)
 *     AdtpBuildMessageString @ 0x140845214 (AdtpBuildMessageString.c)
 *     AdtpBuildGuidString @ 0x140A1ACFC (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x140A1AE24 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x140A1AEE8 (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x140A1B050 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140A1B7E4 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     _vsnwprintf @ 0x1403E0440 (_vsnwprintf.c)
 */

HRESULT StringCchPrintfW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszFormat, ...)
{
  size_t v4; // rsi
  HRESULT v5; // edi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v5 = -2147024809;
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v4 = cchDest - 1;
    v5 = 0;
    v6 = vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147024774;
      goto LABEL_5;
    }
    if ( v6 == v4 )
LABEL_5:
      pszDest[v4] = 0;
  }
  return v5;
}
