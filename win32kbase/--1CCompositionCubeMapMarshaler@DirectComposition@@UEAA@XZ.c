void __fastcall DirectComposition::CCompositionCubeMapMarshaler::~CCompositionCubeMapMarshaler(
        DirectComposition::CCompositionCubeMapMarshaler *this)
{
  char *v1; // rdx

  v1 = (char *)*((_QWORD *)this + 7);
  *(_QWORD *)this = &DirectComposition::CCompositionCubeMapMarshaler::`vftable';
  if ( v1 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
    *((_QWORD *)this + 7) = 0LL;
  }
}
