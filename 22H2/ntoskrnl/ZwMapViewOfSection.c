/*
 * XREFs of ZwMapViewOfSection @ 0x1403F9F20
 * Callers:
 *     CmSiMapViewOfSection @ 0x140361FF8 (CmSiMapViewOfSection.c)
 *     RtlFileMapMapView @ 0x1403BD264 (RtlFileMapMapView.c)
 *     PiInitializeDDB @ 0x14077E864 (PiInitializeDDB.c)
 *     IopIsNotNativeDriverImage @ 0x140891974 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14094A6EC (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x14094A928 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x140958F40 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140959420 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14095EE14 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x14096C454 (AslpFileLargeMapCreate.c)
 *     EmpMapPhysicalAddress @ 0x140A477DC (EmpMapPhysicalAddress.c)
 *     CmpSetVideoBiosInformation @ 0x140A592D0 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A594A0 (CmpSetSystemBiosInformation.c)
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
  return KiServiceInternal(SectionHandle);
}
