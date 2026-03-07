void __fastcall DirectComposition::CSpriteShapeMarshaler::~CSpriteShapeMarshaler(
        DirectComposition::CSpriteShapeMarshaler *this)
{
  char *v1; // rdx

  v1 = (char *)*((_QWORD *)this + 11);
  *(_QWORD *)this = &DirectComposition::CSpriteShapeMarshaler::`vftable';
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
}
