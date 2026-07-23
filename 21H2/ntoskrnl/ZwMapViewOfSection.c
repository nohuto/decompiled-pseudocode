/*
 * XREFs of ZwMapViewOfSection @ 0x1403FAA80
 * Callers:
 *     CmSiMapViewOfSection @ 0x1402F7B18 (CmSiMapViewOfSection.c)
 *     RtlFileMapMapView @ 0x1403BDA34 (RtlFileMapMapView.c)
 *     PiInitializeDDB @ 0x14077EB24 (PiInitializeDDB.c)
 *     IopIsNotNativeDriverImage @ 0x140891A84 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14094A86C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x14094AAA8 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1409590C0 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1409595A0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14095EFA4 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x14096C5E4 (AslpFileLargeMapCreate.c)
 *     EmpMapPhysicalAddress @ 0x140A487DC (EmpMapPhysicalAddress.c)
 *     CmpSetVideoBiosInformation @ 0x140A5A2D0 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A5A4A0 (CmpSetSystemBiosInformation.c)
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
