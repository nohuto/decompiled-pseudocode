/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x14071E9AC
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x140688B90 (AlpcpCleanupProcessViews.c)
 *     AlpcpDeletePort @ 0x140718780 (AlpcpDeletePort.c)
 *     AlpcpFlushCancelQueue @ 0x140718CC0 (AlpcpFlushCancelQueue.c)
 *     AlpcpFlushResourcesPort @ 0x140719580 (AlpcpFlushResourcesPort.c)
 *     AlpcpPrepareViewForDelivery @ 0x14071A2D8 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpLocateSectionView @ 0x14071A3C0 (AlpcpLocateSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14071A76C (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14071A8C8 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpDeleteView @ 0x14071C158 (AlpcpDeleteView.c)
 *     AlpcpCreateView @ 0x14071C394 (AlpcpCreateView.c)
 *     NtAlpcCreateSecurityContext @ 0x14071C5F0 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14071C8B8 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpCreateSecurityContext @ 0x14071CA38 (AlpcpCreateSecurityContext.c)
 *     NtAlpcDeleteSecurityContext @ 0x14071E8B0 (NtAlpcDeleteSecurityContext.c)
 *     AlpcViewDestroyProcedure @ 0x14071ED50 (AlpcViewDestroyProcedure.c)
 *     AlpcpReleaseAttributes @ 0x140738D44 (AlpcpReleaseAttributes.c)
 *     AlpcpLookupMessage @ 0x140738DC0 (AlpcpLookupMessage.c)
 *     AlpcpExposeAttributes @ 0x14073C2B0 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x14073C944 (AlpcpExposeHandleAttribute.c)
 *     NtAlpcCreatePortSection @ 0x14076C740 (NtAlpcCreatePortSection.c)
 *     AlpcpCreateSection @ 0x14076C8D8 (AlpcpCreateSection.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140779CD0 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcMessageDestroyProcedure @ 0x1407B66F0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpMapLegacyPortView @ 0x1407B9EC0 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreateSectionView @ 0x1407BA080 (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSectionView @ 0x1407BA274 (AlpcpCreateSectionView.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1407BD478 (AlpcpCaptureHandleAttributeInternal.c)
 *     NtSecureConnectPort @ 0x1407C43C0 (NtSecureConnectPort.c)
 *     NtAlpcDeletePortSection @ 0x1407C55C0 (NtAlpcDeletePortSection.c)
 *     AlpcConnectionDestroyProcedure @ 0x1407C8B20 (AlpcConnectionDestroyProcedure.c)
 *     NtAlpcDeleteSectionView @ 0x1407CB5C0 (NtAlpcDeleteSectionView.c)
 *     AlpcpExposeViewAttribute @ 0x1407CE0B4 (AlpcpExposeViewAttribute.c)
 *     AlpcpCreateReserve @ 0x1407D03D4 (AlpcpCreateReserve.c)
 *     AlpcRegionDestroyProcedure @ 0x1407D1390 (AlpcRegionDestroyProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x1407DC078 (AlpcpReleaseViewAttribute.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408A5370 (NtAlpcDeleteResourceReserve.c)
 *     AlpcCreateSecurityContext @ 0x140978970 (AlpcCreateSecurityContext.c)
 *     NtAlpcRevokeSecurityContext @ 0x140978DA0 (NtAlpcRevokeSecurityContext.c)
 *     AlpcpForceUnlinkSecureView @ 0x14097958C (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x14071E9E4 (AlpcpDestroyBlob.c)
 */

unsigned __int64 __fastcall AlpcpDereferenceBlobEx(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int64 result; // rax
  signed __int64 BugCheckParameter4; // rdx

  result = -a2;
  BugCheckParameter4 = result + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), result);
  if ( BugCheckParameter4 <= 0 )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, BugCheckParameter4);
    return AlpcpDestroyBlob(BugCheckParameter2, 0LL);
  }
  return result;
}
