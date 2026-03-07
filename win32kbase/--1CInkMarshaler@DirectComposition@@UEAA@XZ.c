void __fastcall DirectComposition::CInkMarshaler::~CInkMarshaler(DirectComposition::CInkMarshaler *this)
{
  char *v1; // rdx

  *(_QWORD *)this = &DirectComposition::CInkMarshaler::`vftable';
  v1 = (char *)*((_QWORD *)this + 14);
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
}
