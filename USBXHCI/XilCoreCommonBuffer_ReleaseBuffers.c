/*
 * XREFs of XilCoreCommonBuffer_ReleaseBuffers @ 0x1C000E848
 * Callers:
 *     TR_Disable_Internal @ 0x1C0008044 (TR_Disable_Internal.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C0039EC0 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C003A180 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C003D100 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     TR_ReAllocateTransferRingSegmentsForOffload @ 0x1C0041B80 (TR_ReAllocateTransferRingSegmentsForOffload.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C0052EE4 (XilCoreDeviceSlot_FreeResources.c)
 * Callees:
 *     XilCoreCommonBuffer_ReleaseBufferInternal @ 0x1C0013390 (XilCoreCommonBuffer_ReleaseBufferInternal.c)
 */

void __fastcall XilCoreCommonBuffer_ReleaseBuffers(__int64 a1, _QWORD **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rcx

  *(_BYTE *)(a1 + 25) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  while ( 1 )
  {
    v4 = *a2;
    if ( *a2 == a2 )
      break;
    if ( (_QWORD **)v4[1] != a2 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *a2 = v5;
    v5[1] = a2;
    if ( *((_DWORD *)v4 + 20) == 2 )
      ExFreePoolWithTag(v4, 0x49434858u);
    else
      XilCoreCommonBuffer_ReleaseBufferInternal(a1, v4);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), *(_BYTE *)(a1 + 25));
}
