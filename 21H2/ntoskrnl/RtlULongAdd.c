/*
 * XREFs of RtlULongAdd @ 0x140200578
 * Callers:
 *     VrpUpdateKeyInformation @ 0x1405D5B84 (VrpUpdateKeyInformation.c)
 *     sub_1405E73D4 @ 0x1405E73D4 (sub_1405E73D4.c)
 *     FsRtlNotifyFilterReportChange @ 0x1405EF9C0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1405F0650 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     SeValidSecurityDescriptor @ 0x1405F1FD0 (SeValidSecurityDescriptor.c)
 *     EtwpSetProviderTraitsCommon @ 0x14063804C (EtwpSetProviderTraitsCommon.c)
 *     sub_14064218C @ 0x14064218C (sub_14064218C.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406C12A0 (MiCaptureRetpolineRelocationTables.c)
 *     SepFilterToken @ 0x1406CA87C (SepFilterToken.c)
 *     CmpCheckKey @ 0x1406E0950 (CmpCheckKey.c)
 *     SepDuplicateToken @ 0x14071B1E0 (SepDuplicateToken.c)
 *     WmipProbeWnodeWorker @ 0x14072AE54 (WmipProbeWnodeWorker.c)
 *     EtwpGetTraceGuidInfo @ 0x14072E894 (EtwpGetTraceGuidInfo.c)
 *     EtwpGetTraceGroupInfo @ 0x140934924 (EtwpGetTraceGroupInfo.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongAdd(ULONG ulAugend, ULONG ulAddend, ULONG *pulResult)
{
  ULONG v3; // eax
  ULONG v4; // edx
  NTSTATUS result; // eax

  v3 = ulAugend + ulAddend;
  v4 = -1;
  if ( v3 >= ulAugend )
    v4 = v3;
  result = v3 < ulAugend ? 0xC0000095 : 0;
  *pulResult = v4;
  return result;
}
