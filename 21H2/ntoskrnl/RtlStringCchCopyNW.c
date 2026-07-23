/*
 * XREFs of RtlStringCchCopyNW @ 0x1403710C0
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14036D198 (PiDevCfgParsePropertyKeyName.c)
 *     IopErrorLogThread @ 0x140755930 (IopErrorLogThread.c)
 *     WmipBuildInstanceSet @ 0x140756D98 (WmipBuildInstanceSet.c)
 *     PiUEventHandleVetoEvent @ 0x14076E8D8 (PiUEventHandleVetoEvent.c)
 *     AslPathSplit @ 0x14077F888 (AslPathSplit.c)
 *     SdbQueryDataExTagID @ 0x1407C1C88 (SdbQueryDataExTagID.c)
 *     IopLogBlockedDriverEvent @ 0x140891C8C (IopLogBlockedDriverEvent.c)
 *     PoQueryProcessEnergyTrackingState @ 0x1408F2A48 (PoQueryProcessEnergyTrackingState.c)
 *     EtwpCoverageSamplerQuery @ 0x1409465F4 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     RtlStringCopyWorkerW_2 @ 0x14026D648 (RtlStringCopyWorkerW_2.c)
 */

NTSTATUS __stdcall RtlStringCchCopyNW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  NTSTATUS v4; // r10d

  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( !cchDest )
      return v4;
LABEL_9:
    *pszDest = 0;
    return v4;
  }
  if ( cchToCopy > 0x7FFFFFFE )
  {
    v4 = -1073741811;
    goto LABEL_9;
  }
  return RtlStringCopyWorkerW_2(pszDest, cchDest, (size_t *)pszSrc, pszSrc, cchToCopy);
}
