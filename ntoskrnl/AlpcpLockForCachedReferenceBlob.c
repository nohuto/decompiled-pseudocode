/*
 * XREFs of AlpcpLockForCachedReferenceBlob @ 0x1407CBD44
 * Callers:
 *     AlpcSectionDeleteProcedure @ 0x1406A04A0 (AlpcSectionDeleteProcedure.c)
 *     AlpcpCreateSectionView @ 0x1406A050C (AlpcpCreateSectionView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1406A07CC (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x1406A0978 (AlpcpCreateView.c)
 *     AlpcViewDestroyProcedure @ 0x1406A2290 (AlpcViewDestroyProcedure.c)
 *     AlpcpAllocateMessage @ 0x140712E84 (AlpcpAllocateMessage.c)
 *     AlpcpSendCloseMessage @ 0x140714B20 (AlpcpSendCloseMessage.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140714E74 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x140715128 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140715930 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpDisconnectPort @ 0x140716FA8 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1407172DC (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFlushQueue @ 0x1407178BC (AlpcpFlushQueue.c)
 *     AlpcpQueryRemoteView @ 0x140774F54 (AlpcpQueryRemoteView.c)
 *     AlpcpExposeViewAttribute @ 0x14077E6DC (AlpcpExposeViewAttribute.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140781C5C (AlpcpFlushMessagesByRequestor.c)
 *     AlpcRegionDestroyProcedure @ 0x140782200 (AlpcRegionDestroyProcedure.c)
 *     AlpcpMapLegacyPortView @ 0x1407829D0 (AlpcpMapLegacyPortView.c)
 *     AlpcpReleaseViewAttribute @ 0x14078CD78 (AlpcpReleaseViewAttribute.c)
 *     AlpcReserveDestroyProcedure @ 0x140794020 (AlpcReserveDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14079A3A0 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpLookupMessage @ 0x1407CA7C0 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x1407CAFB0 (AlpcpSendMessage.c)
 *     AlpcpReceiveMessagePort @ 0x1407CD3A0 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x1407CDCB0 (AlpcpExposeAttributes.c)
 *     AlpcpPortQueryServerInfo @ 0x1409760D8 (AlpcpPortQueryServerInfo.c)
 *     AlpcpForceUnlinkSecureView @ 0x1409764EC (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpLockForCachedReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  ExAcquirePushLockExclusiveEx(BugCheckParameter2 - 16, 0LL);
  *(_BYTE *)(BugCheckParameter2 - 32) |= 1u;
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0x10000uLL) + 0x10000;
  if ( result <= 0 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x26uLL, result);
  return result;
}
