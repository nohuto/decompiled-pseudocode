DirectComposition::CPropertySetMarshaler *__fastcall DirectComposition::CPropertySetMarshaler::`scalar deleting destructor'(
        DirectComposition::CPropertySetMarshaler *this,
        char a2)
{
  void *v4; // rdx
  void *v5; // rdx

  v4 = (void *)*((_QWORD *)this + 11);
  if ( v4 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 24) = 0;
  v5 = (void *)*((_QWORD *)this + 9);
  if ( v5 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 20) = 0;
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
