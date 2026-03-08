/*
 * XREFs of RtlUnicodeStringExHandleOtherFlags @ 0x14055D498
 * Callers:
 *     RtlUnicodeStringPrintfEx @ 0x1403C1A7C (RtlUnicodeStringPrintfEx.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140874BA8 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140875198 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

NTSTATUS __stdcall RtlUnicodeStringExHandleOtherFlags(
        wchar_t *pszDest,
        size_t cchDest,
        size_t cchOriginalDestLength,
        size_t *pcchNewDestLength,
        wchar_t **ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  if ( (dwFlags & 0x1000) != 0 )
  {
    *pcchNewDestLength = 0LL;
    *ppszDestEnd = pszDest;
    *pcchRemaining = cchDest;
  }
  if ( (dwFlags & 0x400) != 0 )
  {
    memset(pszDest, (unsigned __int8)dwFlags, 2 * cchDest);
    *pcchNewDestLength = 0LL;
    *ppszDestEnd = pszDest;
    *pcchRemaining = cchDest;
  }
  if ( (dwFlags & 0x800) != 0 )
  {
    *pcchNewDestLength = 0LL;
    *ppszDestEnd = pszDest;
    *pcchRemaining = cchDest;
  }
  return 0;
}
