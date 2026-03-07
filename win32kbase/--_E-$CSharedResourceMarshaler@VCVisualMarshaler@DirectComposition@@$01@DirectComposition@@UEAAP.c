DirectComposition::CVisualMarshaler *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>::`vector deleting destructor'(
        DirectComposition::CVisualMarshaler *a1,
        char a2)
{
  *(_QWORD *)a1 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>::`vftable';
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(a1);
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a1);
  return a1;
}
