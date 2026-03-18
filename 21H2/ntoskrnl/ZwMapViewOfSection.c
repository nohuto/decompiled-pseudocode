/*
 * XREFs of ZwMapViewOfSection @ 0x14041BC60
 * Callers:
 *     CmSiMapViewOfSection @ 0x14020B638 (CmSiMapViewOfSection.c)
 *     RtlFileMapMapView @ 0x1403CB4C0 (RtlFileMapMapView.c)
 *     DifZwMapViewOfSectionWrapper @ 0x140621100 (DifZwMapViewOfSectionWrapper.c)
 *     PiInitializeDDB @ 0x1407EC34C (PiInitializeDDB.c)
 *     IopIsNotNativeDriverImage @ 0x1409348AC (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1409F6A1C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409F6C5C (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x140A04C34 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140A05110 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140A0AA8C (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x140A1A2F8 (AslpFileLargeMapCreate.c)
 *     EmpMapPhysicalAddress @ 0x140B0DAC4 (EmpMapPhysicalAddress.c)
 *     CmpSetVideoBiosInformation @ 0x140B179D4 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140B17BA4 (CmpSetSystemBiosInformation.c)
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
