/*
 * XREFs of ?SetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAEBUDynamicNodeInfo@Holographic@34@@Z @ 0x1800D8B80
 * Callers:
 *     ?EnsureDynamicNodeInfo@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@IEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@@Z @ 0x1800D7554 (-EnsureDynamicNodeInfo@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@IEAA.c)
 *     ?EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@PEAK@Z @ 0x18016C05C (-EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SetDynamicNodeInfo(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *this,
        const struct Windows::Internal::Holographic::DynamicNodeInfo *a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = (RTL_SRWLOCK *)((char *)this + 48);
  AcquireSRWLockExclusive((PSRWLOCK)this + 6);
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)a2;
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 4);
  (*(void (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))(*(_QWORD *)this + 88LL))(this);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
