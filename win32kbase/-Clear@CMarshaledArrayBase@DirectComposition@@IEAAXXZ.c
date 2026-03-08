/*
 * XREFs of ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C00B9868
 * Callers:
 *     ??_GCRegionGeometryMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C000F070 (--_GCRegionGeometryMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0064E68 (-Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_KW4MIL_RESOURCE_TYPE@@@Z @ 0x1C00AA160 (-Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResou.c)
 *     ?ReleaseAllReferences@CRegionGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BD830 (-ReleaseAllReferences@CRegionGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2.c)
 *     ??1CMeshGeometry2DMarshaler@DirectComposition@@UEAA@XZ @ 0x1C024C394 (--1CMeshGeometry2DMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??_G?$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x1C024C5C0 (--_G-$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@DirectCompositio.c)
 *     ??_ECAtlasedRectsMeshMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024C730 (--_ECAtlasedRectsMeshMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCParticleVector4BehaviorMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024C780 (--_GCParticleVector4BehaviorMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024C820 (--_GCLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ?ReleaseAllReferences@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025B670 (-ReleaseAllReferences@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel.c)
 *     ?ReleaseAllReferences@CParticleBaseBehaviorMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025B6C0 (-ReleaseAllReferences@CParticleBaseBehaviorMarshaler@DirectComposition@@UEAAXPEAVCApplicationCha.c)
 *     ?ReleaseAllReferences@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025B6FC (-ReleaseAllReferences@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationC.c)
 *     ?ReleaseAllReferences@CMeshGeometry2DMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025B840 (-ReleaseAllReferences@CMeshGeometry2DMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CMarshaledArrayBase::Clear(DirectComposition::CMarshaledArrayBase *this)
{
  char *v1; // rdx

  v1 = (char *)*((_QWORD *)this + 1);
  if ( v1 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *(_QWORD *)this = 0LL;
  }
}
