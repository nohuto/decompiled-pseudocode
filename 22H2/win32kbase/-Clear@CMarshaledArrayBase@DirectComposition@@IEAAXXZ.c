/*
 * XREFs of ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C009E150
 * Callers:
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C002C3A8 (-Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_KW4MIL_RESOURCE_TYPE@@@Z @ 0x1C002C410 (-Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResou.c)
 *     ??1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ @ 0x1C00303FC (--1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ.c)
 *     ??_GCRegionGeometryMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0080410 (--_GCRegionGeometryMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ?ReleaseAllReferences@CRegionGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00ADA80 (-ReleaseAllReferences@CRegionGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2.c)
 *     ??1CMeshGeometry2DMarshaler@DirectComposition@@UEAA@XZ @ 0x1C020DA2C (--1CMeshGeometry2DMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??_G?$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x1C020DC50 (--_G-$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@DirectCompositio.c)
 *     ??_ECAtlasedRectsMeshMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C020DDC0 (--_ECAtlasedRectsMeshMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCParticleVector4BehaviorMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C020DE10 (--_GCParticleVector4BehaviorMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C020DEB0 (--_GCLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ?ReleaseAllReferences@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C021CD40 (-ReleaseAllReferences@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel.c)
 *     ?ReleaseAllReferences@CParticleBaseBehaviorMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C021CD90 (-ReleaseAllReferences@CParticleBaseBehaviorMarshaler@DirectComposition@@UEAAXPEAVCApplicationCha.c)
 *     ?ReleaseAllReferences@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C021CDCC (-ReleaseAllReferences@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationC.c)
 *     ?ReleaseAllReferences@CMeshGeometry2DMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C021CF20 (-ReleaseAllReferences@CMeshGeometry2DMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
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
