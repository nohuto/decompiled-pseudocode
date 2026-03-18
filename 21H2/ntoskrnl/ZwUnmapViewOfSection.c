/*
 * XREFs of ZwUnmapViewOfSection @ 0x14041BCA0
 * Callers:
 *     CmSiUnmapViewOfSection @ 0x140254F78 (CmSiUnmapViewOfSection.c)
 *     RtlFileMapFree @ 0x1402D89E8 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x1403CB4C0 (RtlFileMapMapView.c)
 *     PiReleaseDDB @ 0x1406E09A4 (PiReleaseDDB.c)
 *     PiInitializeDDB @ 0x1407EC34C (PiInitializeDDB.c)
 *     IopIsNotNativeDriverImage @ 0x1409348AC (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1409F6A1C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409F6C5C (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x140A04C34 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140A05110 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x140A0A574 (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x140A1A5D0 (AslpFilePartialViewFree.c)
 *     EmpCacheBiosDate @ 0x140B0D974 (EmpCacheBiosDate.c)
 *     CmpSetVideoBiosInformation @ 0x140B179D4 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140B17BA4 (CmpSetSystemBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress);
}
