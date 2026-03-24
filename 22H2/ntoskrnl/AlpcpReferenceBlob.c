/*
 * XREFs of AlpcpReferenceBlob @ 0x1406D97D4
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x1405E033C (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1405E103C (AlpcpAcceptConnectPort.c)
 *     AlpcpFlushResourcesPort @ 0x1405E220C (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushQueue @ 0x1405E24D0 (AlpcpFlushQueue.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1405E2A50 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpExposeAttributes @ 0x1405E8380 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x1405E8BC0 (AlpcpReceiveMessagePort.c)
 *     AlpcpCleanupProcessViews @ 0x1406142CC (AlpcpCleanupProcessViews.c)
 *     AlpcpExposeViewAttribute @ 0x14067C218 (AlpcpExposeViewAttribute.c)
 *     AlpcpViewSearchCallbackFunction @ 0x14067F6B0 (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpCreateReserve @ 0x140693ED4 (AlpcpCreateReserve.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406971A4 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpCreateSecurityContext @ 0x1406D93AC (AlpcpCreateSecurityContext.c)
 *     AlpcReferenceBlobByHandle @ 0x1406D9700 (AlpcReferenceBlobByHandle.c)
 *     AlpcpCreateView @ 0x1406D9900 (AlpcpCreateView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1406DA940 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x1406DADA8 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpCreateRegion @ 0x1406FFF24 (AlpcpCreateRegion.c)
 *     AlpcpCreateSection @ 0x140701CAC (AlpcpCreateSection.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x1408C3994 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  __int64 v2; // r8

  _m_prefetchw((const void *)(BugCheckParameter2 - 24));
  result = *(_QWORD *)(BugCheckParameter2 - 24);
  while ( result > 0 )
  {
    v2 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 - 24), result + 1, result);
    if ( result == v2 )
      return ++result;
  }
  if ( result )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x20uLL, result);
  return result;
}
