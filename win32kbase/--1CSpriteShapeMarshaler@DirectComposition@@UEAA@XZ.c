/*
 * XREFs of ??1CSpriteShapeMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00B8A14
 * Callers:
 *     ??_ECSpriteShapeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00B89D0 (--_ECSpriteShapeMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CSpriteShapeMarshaler::~CSpriteShapeMarshaler(
        DirectComposition::CSpriteShapeMarshaler *this)
{
  char *v1; // rdx

  v1 = (char *)*((_QWORD *)this + 11);
  *(_QWORD *)this = &DirectComposition::CSpriteShapeMarshaler::`vftable';
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
}
