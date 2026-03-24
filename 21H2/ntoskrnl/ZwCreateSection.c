/*
 * XREFs of ZwCreateSection @ 0x1403FACE0
 * Callers:
 *     CmSiCreateSectionForFile @ 0x140362A74 (CmSiCreateSectionForFile.c)
 *     LdrpMapResourceFile @ 0x1403806CC (LdrpMapResourceFile.c)
 *     RtlFileMapMapView @ 0x1403BD8C4 (RtlFileMapMapView.c)
 *     ExpGetGlobalLocaleSection @ 0x140612BDC (ExpGetGlobalLocaleSection.c)
 *     NtGetNlsSectionPtr @ 0x1406B9930 (NtGetNlsSectionPtr.c)
 *     KsepSdbMapToMemory @ 0x140755A54 (KsepSdbMapToMemory.c)
 *     PiInitializeDDB @ 0x14077E964 (PiInitializeDDB.c)
 *     ExInitializeLeapSecondData @ 0x1407A8EAC (ExInitializeLeapSecondData.c)
 *     SepRmLsaConnectRequest @ 0x1407AD3B0 (SepRmLsaConnectRequest.c)
 *     CmFcpManagerCreateSection @ 0x14087E570 (CmFcpManagerCreateSection.c)
 *     IopIsNotNativeDriverImage @ 0x140891924 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14094A69C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x14094A8D8 (ExpQueryElamCertInfo.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E290 (SLUpdateLicenseDataInternal.c)
 *     CMFReadCompressedSegment @ 0x140958EF0 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1409593D0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14095EDC4 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x14096C404 (AslpFileLargeMapCreate.c)
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle, *(_QWORD *)&DesiredAccess);
}
