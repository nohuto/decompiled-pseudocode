/*
 * XREFs of ??1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ @ 0x1C0068D5C
 * Callers:
 *     ??_GCTransformGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C000C9F0 (--_GCTransformGroupMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0068CC8 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??_ECVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0068D00 (--_ECVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECAnimationTriggerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D27A0 (--_ECAnimationTriggerMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??1CSceneNodeMarshaler@DirectComposition@@UEAA@XZ @ 0x1C024C3C8 (--1CSceneNodeMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1CTextVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C024C3F0 (--1CTextVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??_ECAtlasedRectsGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024C6E0 (--_ECAtlasedRectsGroupMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCGeometry2DGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024C7D0 (--_GCGeometry2DGroupMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECParticleEmitterVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024C8C0 (--_ECParticleEmitterVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECTransform3DGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024C9C0 (--_ECTransform3DGroupMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase(
        DirectComposition::CResourceMarshalerArrayBase *this)
{
  unsigned __int64 i; // rcx
  void *v3; // rdx
  __int64 v4; // rdx

  for ( i = 0LL; i < *((_QWORD *)this + 2); ++i )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * i);
    --*(_QWORD *)(v4 + 24);
  }
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *(_QWORD *)this = 0LL;
  }
}
