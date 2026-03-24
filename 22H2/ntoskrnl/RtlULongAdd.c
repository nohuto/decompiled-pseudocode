/*
 * XREFs of RtlULongAdd @ 0x140200578
 * Callers:
 *     VrpUpdateKeyInformation @ 0x1405D5B84 (VrpUpdateKeyInformation.c)
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     CmpCheckKey @ 0x1405F11F0 (CmpCheckKey.c)
 *     SepDuplicateToken @ 0x140651490 (SepDuplicateToken.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140662620 (MiCaptureRetpolineRelocationTables.c)
 *     sub_140667F34 @ 0x140667F34 (sub_140667F34.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406746F0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140675380 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     EtwpSetProviderTraitsCommon @ 0x1406BC01C (EtwpSetProviderTraitsCommon.c)
 *     sub_1406C612C @ 0x1406C612C (sub_1406C612C.c)
 *     WmipProbeWnodeWorker @ 0x14072B864 (WmipProbeWnodeWorker.c)
 *     EtwpGetTraceGuidInfo @ 0x14072EB7C (EtwpGetTraceGuidInfo.c)
 *     EtwpGetTraceGroupInfo @ 0x1409347A4 (EtwpGetTraceGroupInfo.c)
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
