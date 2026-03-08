/*
 * XREFs of RtlStringCchCopyNW @ 0x140303EF8
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14055FD1C (PiDevCfgParsePropertyKeyName.c)
 *     AslPathSplit @ 0x1407A1568 (AslPathSplit.c)
 *     WmipBuildInstanceSet @ 0x140867C6C (WmipBuildInstanceSet.c)
 *     IopErrorLogThread @ 0x1408704E0 (IopErrorLogThread.c)
 *     PiUEventHandleVetoEvent @ 0x14087E074 (PiUEventHandleVetoEvent.c)
 *     EtwpCoverageSamplerQuery @ 0x1408A55B8 (EtwpCoverageSamplerQuery.c)
 *     IopLogBlockedDriverEvent @ 0x1409422E4 (IopLogBlockedDriverEvent.c)
 *     PoQueryProcessEnergyTrackingState @ 0x1409955A8 (PoQueryProcessEnergyTrackingState.c)
 *     SdbGetMergeRedirectPath @ 0x140A4B4A0 (SdbGetMergeRedirectPath.c)
 *     SdbQueryDataExTagID @ 0x140A4C328 (SdbQueryDataExTagID.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyNW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  size_t v4; // r10
  size_t v5; // r9
  signed __int64 v6; // r8
  wchar_t v7; // ax
  NTSTRSAFE_PWSTR v8; // rax
  NTSTATUS result; // eax

  v4 = cchDest;
  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
    if ( !cchDest )
      return result;
LABEL_13:
    *pszDest = 0;
    return result;
  }
  if ( cchToCopy > 0x7FFFFFFE )
  {
    result = -1073741811;
    goto LABEL_13;
  }
  v5 = cchToCopy - cchDest;
  v6 = (char *)pszSrc - (char *)pszDest;
  do
  {
    if ( !(v5 + v4) )
      break;
    v7 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v6);
    if ( !v7 )
      break;
    *pszDest++ = v7;
    --v4;
  }
  while ( v4 );
  v8 = pszDest - 1;
  if ( v4 )
    v8 = pszDest;
  *v8 = 0;
  return v4 == 0 ? 0x80000005 : 0;
}
