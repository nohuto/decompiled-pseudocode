/*
 * XREFs of ZwUnmapViewOfSection @ 0x1403FA8E0
 * Callers:
 *     CmSiUnmapViewOfSection @ 0x140363DD4 (CmSiUnmapViewOfSection.c)
 *     RtlFileMapFree @ 0x1403714EC (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x1403BD8C4 (RtlFileMapMapView.c)
 *     PiInitializeDDB @ 0x14077E964 (PiInitializeDDB.c)
 *     PiReleaseDDB @ 0x14077EB38 (PiReleaseDDB.c)
 *     IopIsNotNativeDriverImage @ 0x140891924 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14094A69C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x14094A8D8 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x140958EF0 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1409593D0 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x14095E8B4 (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x14096C6DC (AslpFilePartialViewFree.c)
 *     EmpCacheBiosDate @ 0x140A4768C (EmpCacheBiosDate.c)
 *     CmpSetVideoBiosInformation @ 0x140A592D0 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A594A0 (CmpSetSystemBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress);
}
