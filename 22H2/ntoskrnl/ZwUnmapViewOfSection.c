/*
 * XREFs of ZwUnmapViewOfSection @ 0x1403F9F60
 * Callers:
 *     CmSiUnmapViewOfSection @ 0x1403634A4 (CmSiUnmapViewOfSection.c)
 *     RtlFileMapFree @ 0x140371CCC (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x1403BD264 (RtlFileMapMapView.c)
 *     PiInitializeDDB @ 0x14077E864 (PiInitializeDDB.c)
 *     PiReleaseDDB @ 0x14077EA38 (PiReleaseDDB.c)
 *     IopIsNotNativeDriverImage @ 0x140891974 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14094A6EC (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x14094A928 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x140958F40 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140959420 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x14095E904 (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x14096C72C (AslpFilePartialViewFree.c)
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
  return KiServiceInternal(ProcessHandle);
}
