/*
 * XREFs of ZwUnmapViewOfSection @ 0x1403FAAC0
 * Callers:
 *     CmSiUnmapViewOfSection @ 0x14024A6A8 (CmSiUnmapViewOfSection.c)
 *     RtlFileMapFree @ 0x14037103C (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x1403BDA34 (RtlFileMapMapView.c)
 *     PiInitializeDDB @ 0x14077EB24 (PiInitializeDDB.c)
 *     PiReleaseDDB @ 0x14077ECF8 (PiReleaseDDB.c)
 *     IopIsNotNativeDriverImage @ 0x140891A84 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14094A86C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x14094AAA8 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1409590C0 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1409595A0 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x14095EA94 (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x14096C8BC (AslpFilePartialViewFree.c)
 *     EmpCacheBiosDate @ 0x140A4868C (EmpCacheBiosDate.c)
 *     CmpSetVideoBiosInformation @ 0x140A5A2D0 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A5A4A0 (CmpSetSystemBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
