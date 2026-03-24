/*
 * XREFs of StringCchPrintfW @ 0x140323CD8
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C2834 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PfVerifyScenarioBuffer @ 0x14062C430 (PfVerifyScenarioBuffer.c)
 *     AdtpBuildMessageString @ 0x1407B9450 (AdtpBuildMessageString.c)
 *     AdtpBuildGuidString @ 0x14096CED0 (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x14096CFF8 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x14096D0BC (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x14096D214 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x14096D99C (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     _vsnwprintf @ 0x1403D0970 (_vsnwprintf.c)
 */

HRESULT StringCchPrintfW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszFormat, ...)
{
  HRESULT v4; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cchDest - 1;
    v4 = 0;
    v6 = vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147024774;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  return v4;
}
