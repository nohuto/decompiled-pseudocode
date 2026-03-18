/*
 * XREFs of UPDWORDValue @ 0x1C01CEE74
 * Callers:
 *     ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NXZ @ 0x1C00AFB0C (-ShouldStoreAfterProcessing@CRecalcState@@QEBA_NXZ.c)
 *     ?IsWindowEligibleForMinimize@CRecalcState@@CA_NPEBUtagWND@@@Z @ 0x1C011F5B4 (-IsWindowEligibleForMinimize@CRecalcState@@CA_NPEBUtagWND@@@Z.c)
 *     ?CreateFromRDPSnapshot@CRecalcProp@@SAXPEAUtagWND@@PEAVCMonitorTopology@@AEBUtagRECT@@PEBU4@@Z @ 0x1C023AB38 (-CreateFromRDPSnapshot@CRecalcProp@@SAXPEAUtagWND@@PEAVCMonitorTopology@@AEBUtagRECT@@PEBU4@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UPDWORDValue(__int64 a1)
{
  return *(unsigned int *)UPDWORDPointer(a1);
}
