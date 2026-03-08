/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x14071550C
 * Callers:
 *     AlpcpCreateSectionView @ 0x1406A050C (AlpcpCreateSectionView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1406A07CC (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x1406A0978 (AlpcpCreateView.c)
 *     AlpcViewDestroyProcedure @ 0x1406A2290 (AlpcViewDestroyProcedure.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1406D3584 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpCreateSecurityContext @ 0x1406D45F8 (AlpcpCreateSecurityContext.c)
 *     AlpcpCleanupProcessViews @ 0x140704D30 (AlpcpCleanupProcessViews.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x140710ED0 (AlpcpCaptureHandleAttributeInternal.c)
 *     NtAlpcDeletePortSection @ 0x140711AE0 (NtAlpcDeletePortSection.c)
 *     NtAlpcCreatePortSection @ 0x140711C20 (NtAlpcCreatePortSection.c)
 *     NtAlpcCreateSectionView @ 0x140712140 (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSection @ 0x140712378 (AlpcpCreateSection.c)
 *     AlpcpDeletePort @ 0x140714C40 (AlpcpDeletePort.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140714E74 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpLocateSectionView @ 0x140714FD0 (AlpcpLocateSectionView.c)
 *     AlpcpPrepareViewForDelivery @ 0x140715128 (AlpcpPrepareViewForDelivery.c)
 *     NtAlpcCreateSecurityContext @ 0x140715210 (NtAlpcCreateSecurityContext.c)
 *     NtAlpcDeleteSecurityContext @ 0x140715410 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpDeleteView @ 0x1407155FC (AlpcpDeleteView.c)
 *     AlpcpFlushResourcesPort @ 0x1407175F8 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushCancelQueue @ 0x140717A60 (AlpcpFlushCancelQueue.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140717C30 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcMessageDestroyProcedure @ 0x140760CB0 (AlpcMessageDestroyProcedure.c)
 *     NtSecureConnectPort @ 0x140774850 (NtSecureConnectPort.c)
 *     AlpcConnectionDestroyProcedure @ 0x140778C90 (AlpcConnectionDestroyProcedure.c)
 *     NtAlpcDeleteSectionView @ 0x14077A830 (NtAlpcDeleteSectionView.c)
 *     AlpcpExposeViewAttribute @ 0x14077E6DC (AlpcpExposeViewAttribute.c)
 *     AlpcpCreateReserve @ 0x140781384 (AlpcpCreateReserve.c)
 *     AlpcRegionDestroyProcedure @ 0x140782200 (AlpcRegionDestroyProcedure.c)
 *     AlpcpMapLegacyPortView @ 0x1407829D0 (AlpcpMapLegacyPortView.c)
 *     AlpcpReleaseViewAttribute @ 0x14078CD78 (AlpcpReleaseViewAttribute.c)
 *     AlpcpReleaseAttributes @ 0x1407CA744 (AlpcpReleaseAttributes.c)
 *     AlpcpLookupMessage @ 0x1407CA7C0 (AlpcpLookupMessage.c)
 *     AlpcpExposeAttributes @ 0x1407CDCB0 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x1407CE344 (AlpcpExposeHandleAttribute.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408A04F0 (NtAlpcDeleteResourceReserve.c)
 *     AlpcCreateSecurityContext @ 0x1409758D0 (AlpcCreateSecurityContext.c)
 *     NtAlpcRevokeSecurityContext @ 0x140975D00 (NtAlpcRevokeSecurityContext.c)
 *     AlpcpForceUnlinkSecureView @ 0x1409764EC (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140715544 (AlpcpDestroyBlob.c)
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
