/*
 * XREFs of ZwUnmapViewOfSection @ 0x140412850
 * Callers:
 *     CmSiUnmapViewOfSection @ 0x1402C0A9C (CmSiUnmapViewOfSection.c)
 *     RtlFileMapFree @ 0x140303F60 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x1403ABF40 (RtlFileMapMapView.c)
 *     PiReleaseDDB @ 0x14079C824 (PiReleaseDDB.c)
 *     PiInitializeDDB @ 0x14079CD80 (PiInitializeDDB.c)
 *     IopIsNotNativeDriverImage @ 0x1409420DC (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1409F3A80 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409F3CC0 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1409FF980 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1409FFE80 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x140A070AC (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x140A570D4 (AslpFilePartialViewFree.c)
 *     EmpCacheBiosDate @ 0x140B4EDC8 (EmpCacheBiosDate.c)
 *     CmpSetSystemBiosInformation @ 0x140B9565C (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140B959FC (CmpSetVideoBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress);
}
