/*
 * XREFs of RtlULongAdd @ 0x140200578
 * Callers:
 *     VrpUpdateKeyInformation @ 0x1405D5B84 (VrpUpdateKeyInformation.c)
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     CmpCheckKey @ 0x1405F11F0 (CmpCheckKey.c)
 *     EtwpSetProviderTraitsCommon @ 0x14064323C (EtwpSetProviderTraitsCommon.c)
 *     sub_14064D36C @ 0x14064D36C (sub_14064D36C.c)
 *     sub_140688274 @ 0x140688274 (sub_140688274.c)
 *     FsRtlNotifyFilterReportChange @ 0x14068FB50 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406907E0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     SepDuplicateToken @ 0x140703E00 (SepDuplicateToken.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140712C50 (MiCaptureRetpolineRelocationTables.c)
 *     WmipProbeWnodeWorker @ 0x14072A9A4 (WmipProbeWnodeWorker.c)
 *     EtwpGetTraceGuidInfo @ 0x14072E6C8 (EtwpGetTraceGuidInfo.c)
 *     EtwpGetTraceGroupInfo @ 0x140934754 (EtwpGetTraceGroupInfo.c)
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
