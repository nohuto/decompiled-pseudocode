/*
 * XREFs of ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C00A2724
 * Callers:
 *     ??1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ @ 0x1C001626C (--1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ.c)
 *     ?Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_KW4MIL_RESOURCE_TYPE@@@Z @ 0x1C00941A0 (-Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResou.c)
 *     ??_GCRegionGeometryMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00AF3D0 (--_GCRegionGeometryMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ?ReleaseAllReferences@CRegionGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00B2310 (-ReleaseAllReferences@CRegionGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2.c)
 *     ?ReleaseAllReferences@CParticleBaseBehaviorMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0225A90 (-ReleaseAllReferences@CParticleBaseBehaviorMarshaler@DirectComposition@@UEAAXPEAVCApplicationCha.c)
 *     ??_GCParticleVector4BehaviorMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0238430 (--_GCParticleVector4BehaviorMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CMarshaledArrayBase::Clear(DirectComposition::CMarshaledArrayBase *this)
{
  char *v1; // rdx

  v1 = (char *)*((_QWORD *)this + 1);
  if ( v1 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v1);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *(_QWORD *)this = 0LL;
  }
}
