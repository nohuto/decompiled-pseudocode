/*
 * XREFs of ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C0058820
 * Callers:
 *     ?OpenSharedHandle@CSharedCompositionAmbientLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C00578C0 (-OpenSharedHandle@CSharedCompositionAmbientLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedCompositionDistantLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0057900 (-OpenSharedHandle@CSharedCompositionDistantLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedCompositionSpotLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0057940 (-OpenSharedHandle@CSharedCompositionSpotLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedWriteLegacyAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0057980 (-OpenSharedHandle@CSharedWriteLegacyAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     NtDCompositionGetMaterialProperty @ 0x1C0057CE0 (NtDCompositionGetMaterialProperty.c)
 *     ?OpenSharedHandle@CSharedInteractionMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0057E00 (-OpenSharedHandle@CSharedInteractionMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedManipulationTransformMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0058340 (-OpenSharedHandle@CSharedManipulationTransformMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CVisualTargetMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0058530 (-OpenSharedHandle@CVisualTargetMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CHostVisualMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C00585B0 (-OpenSharedHandle@CHostVisualMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     NtDCompositionCreateSharedResourceHandle @ 0x1C0058750 (NtDCompositionCreateSharedResourceHandle.c)
 *     ?OpenSharedHandle@CSharedVisualReferenceControllerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0238F40 (-OpenSharedHandle@CSharedVisualReferenceControllerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C02394F0 (-OpenSharedHandle@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedHolographicInteropTextureMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0239530 (-OpenSharedHandle@CSharedHolographicInteropTextureMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0239A30 (-OpenSharedHandle@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedHostProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C023A5C0 (-OpenSharedHandle@CSharedHostProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedWriteCaptureControllerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C023AD50 (-OpenSharedHandle@CSharedWriteCaptureControllerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedCompositionPointLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C023B330 (-OpenSharedHandle@CSharedCompositionPointLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C023B5A0 (-OpenSharedHandle@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CompositionObject::CreateHandle(
        CompositionObject *this,
        ACCESS_MASK a2,
        unsigned __int8 a3,
        KPROCESSOR_MODE AccessMode,
        void **Handle)
{
  *Handle = (void *)-1LL;
  return ObOpenObjectByPointer(this, 2 * a3 + 64, 0LL, a2, ExCompositionObjectType, AccessMode, Handle);
}
