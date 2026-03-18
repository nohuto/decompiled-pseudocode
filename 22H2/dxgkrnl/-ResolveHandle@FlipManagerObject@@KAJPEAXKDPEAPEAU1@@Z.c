/*
 * XREFs of ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0082498
 * Callers:
 *     NtFlipObjectAddContent @ 0x1C0080480 (NtFlipObjectAddContent.c)
 *     NtFlipObjectAddPoolBuffer @ 0x1C00805D0 (NtFlipObjectAddPoolBuffer.c)
 *     NtFlipObjectConsumerAcquirePresent @ 0x1C0080760 (NtFlipObjectConsumerAcquirePresent.c)
 *     NtFlipObjectConsumerAdjustUsageReference @ 0x1C00808C0 (NtFlipObjectConsumerAdjustUsageReference.c)
 *     NtFlipObjectConsumerBeginProcessPresent @ 0x1C00809C0 (NtFlipObjectConsumerBeginProcessPresent.c)
 *     NtFlipObjectConsumerEndProcessPresent @ 0x1C0080AF0 (NtFlipObjectConsumerEndProcessPresent.c)
 *     NtFlipObjectConsumerPostMessage @ 0x1C0080B90 (NtFlipObjectConsumerPostMessage.c)
 *     NtFlipObjectConsumerQueryBufferInfo @ 0x1C0080C70 (NtFlipObjectConsumerQueryBufferInfo.c)
 *     NtFlipObjectDisconnectEndpoint @ 0x1C0080EF0 (NtFlipObjectDisconnectEndpoint.c)
 *     NtFlipObjectEnablePresentStatisticsType @ 0x1C0080F90 (NtFlipObjectEnablePresentStatisticsType.c)
 *     NtFlipObjectOpen @ 0x1C0081030 (NtFlipObjectOpen.c)
 *     NtFlipObjectPresentCancel @ 0x1C0081180 (NtFlipObjectPresentCancel.c)
 *     NtFlipObjectQueryBufferAvailableEvent @ 0x1C0081260 (NtFlipObjectQueryBufferAvailableEvent.c)
 *     NtFlipObjectQueryEndpointConnected @ 0x1C00813B0 (NtFlipObjectQueryEndpointConnected.c)
 *     NtFlipObjectQueryLostEvent @ 0x1C00814A0 (NtFlipObjectQueryLostEvent.c)
 *     NtFlipObjectQueryNextMessageToProducer @ 0x1C00815A0 (NtFlipObjectQueryNextMessageToProducer.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x1C00816A0 (NtFlipObjectReadNextMessageToProducer.c)
 *     NtFlipObjectRemoveContent @ 0x1C00817A0 (NtFlipObjectRemoveContent.c)
 *     NtFlipObjectRemovePoolBuffer @ 0x1C00818A0 (NtFlipObjectRemovePoolBuffer.c)
 *     NtFlipObjectSetContent @ 0x1C0081990 (NtFlipObjectSetContent.c)
 *     ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z @ 0x1C0081D64 (-FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAX_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x1C0081E88 (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAX_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenI.c)
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C00105A8 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall FlipManagerObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        __int64 a3,
        struct FlipManagerObject **a4)
{
  __int64 result; // rax
  struct FlipManagerObject *v6; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  result = DxgkCompositionObject::ResolveHandle(a1, a2, 1, 4, &v6);
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
