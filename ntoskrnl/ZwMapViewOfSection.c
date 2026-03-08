/*
 * XREFs of ZwMapViewOfSection @ 0x140412810
 * Callers:
 *     CmSiMapViewOfSection @ 0x1402B2C30 (CmSiMapViewOfSection.c)
 *     RtlFileMapMapView @ 0x1403ABF40 (RtlFileMapMapView.c)
 *     DifZwMapViewOfSectionWrapper @ 0x1405EEB70 (DifZwMapViewOfSectionWrapper.c)
 *     PiInitializeDDB @ 0x14079CD80 (PiInitializeDDB.c)
 *     IopIsNotNativeDriverImage @ 0x1409420DC (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1409F3A80 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409F3CC0 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1409FF980 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1409FFE80 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140A075CC (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x140A56DFC (AslpFileLargeMapCreate.c)
 *     EmpMapPhysicalAddress @ 0x140B8FC4C (EmpMapPhysicalAddress.c)
 *     CmpSetSystemBiosInformation @ 0x140B9565C (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140B959FC (CmpSetVideoBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle, ProcessHandle);
}
