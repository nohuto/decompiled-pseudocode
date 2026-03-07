void __fastcall CIVSerializer::~CIVSerializer(CIVSerializer *this)
{
  char *v1; // rdx

  v1 = (char *)*((_QWORD *)this + 3);
  *(_QWORD *)this = &CIVSerializer::`vftable';
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
}
