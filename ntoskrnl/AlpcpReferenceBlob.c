/*
 * XREFs of AlpcpReferenceBlob @ 0x1407CAA30
 * Callers:
 *     AlpcpCreateRegion @ 0x1406A0608 (AlpcpCreateRegion.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1406A07CC (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x1406A0978 (AlpcpCreateView.c)
 *     AlpcReferenceBlobByHandle @ 0x1406D1E94 (AlpcReferenceBlobByHandle.c)
 *     AlpcpCreateSecurityContext @ 0x1406D45F8 (AlpcpCreateSecurityContext.c)
 *     AlpcpCleanupProcessViews @ 0x140704D30 (AlpcpCleanupProcessViews.c)
 *     AlpcpCreateSection @ 0x140712378 (AlpcpCreateSection.c)
 *     AlpcpFormatConnectionRequest @ 0x140712838 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x140713844 (AlpcpAcceptConnectPort.c)
 *     AlpcpPrepareViewForDelivery @ 0x140715128 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1407172DC (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFlushResourcesPort @ 0x1407175F8 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushQueue @ 0x1407178BC (AlpcpFlushQueue.c)
 *     AlpcpViewSearchCallbackFunction @ 0x140776A6C (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpExposeViewAttribute @ 0x14077E6DC (AlpcpExposeViewAttribute.c)
 *     AlpcpCreateReserve @ 0x140781384 (AlpcpCreateReserve.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140781C5C (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpLookupMessage @ 0x1407CA7C0 (AlpcpLookupMessage.c)
 *     AlpcpReceiveMessagePort @ 0x1407CD3A0 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x1407CDCB0 (AlpcpExposeAttributes.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x140976EA8 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  signed __int64 BugCheckParameter4; // rax
  bool v2; // zf
  signed __int64 v3; // r8

  _m_prefetchw((const void *)(BugCheckParameter2 - 24));
  BugCheckParameter4 = *(_QWORD *)(BugCheckParameter2 - 24);
  v2 = BugCheckParameter4 == 0;
  if ( BugCheckParameter4 > 0 )
  {
    do
    {
      v3 = BugCheckParameter4;
      BugCheckParameter4 = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)(BugCheckParameter2 - 24),
                             BugCheckParameter4 + 1,
                             BugCheckParameter4);
      if ( BugCheckParameter4 == v3 )
        return BugCheckParameter4 + 1;
    }
    while ( BugCheckParameter4 > 0 );
    v2 = BugCheckParameter4 == 0;
  }
  if ( !v2 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x20uLL, BugCheckParameter4);
  return 0LL;
}
