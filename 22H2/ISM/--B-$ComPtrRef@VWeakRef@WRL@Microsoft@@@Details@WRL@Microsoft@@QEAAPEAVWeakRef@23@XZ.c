/*
 * XREFs of ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800D61D8
 * Callers:
 *     ?RuntimeClassInitialize@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEAAJPEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_WPEAUISpatialObjectDevice@734@@Z @ 0x1800D89A8 (-RuntimeClassInitialize@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEA.c)
 *     ??$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@CAJPEAPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@W4Behavior@012@@Z @ 0x180151510 (--$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@-$Singleton@VSpatia.c)
 *     ?AddNodePoseValidityChangedCallback@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJPEAUISpatialGraphNodePoseValidityChangedCallback@234@@Z @ 0x180159444 (-AddNodePoseValidityChangedCallback@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows.c)
 *     ?AddNodePropertiesUpdatedCallback@DynamicNodeSourceBase@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphNodePropertiesUpdatedCallback@234@@Z @ 0x1801595C0 (-AddNodePropertiesUpdatedCallback@DynamicNodeSourceBase@Holographic@Internal@Windows@@UEAAJAEBUS.c)
 *     ?RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUISpatialGraphPropertiesUpdatedCallback@234@@Z @ 0x1801632F0 (-RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJP.c)
 *     ?RemoveNodePropertiesUpdatedCallback@DynamicNodeSourceBase@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphNodePropertiesUpdatedCallback@234@@Z @ 0x1801637E0 (-RemoveNodePropertiesUpdatedCallback@DynamicNodeSourceBase@Holographic@Internal@Windows@@UEAAJAE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(
        __int64 **a1)
{
  __int64 *v1; // rax
  __int64 v3; // rcx

  v1 = *a1;
  v3 = **a1;
  *v1 = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return *a1;
}
