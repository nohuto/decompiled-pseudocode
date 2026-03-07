void __fastcall XEPALOBJ::vMakeNoXlate(XEPALOBJ *this)
{
  void *v2; // rdx
  void *v3; // rdx
  void *v4; // rdx

  v2 = *(void **)(*(_QWORD *)this + 88LL);
  if ( v2 )
  {
    if ( v2 != *(void **)(*(_QWORD *)this + 72LL) )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
    *(_QWORD *)(*(_QWORD *)this + 88LL) = 0LL;
  }
  v3 = *(void **)(*(_QWORD *)this + 80LL);
  if ( v3 )
  {
    if ( v3 != *(void **)(*(_QWORD *)this + 72LL) )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
    *(_QWORD *)(*(_QWORD *)this + 80LL) = 0LL;
  }
  v4 = *(void **)(*(_QWORD *)this + 72LL);
  if ( v4 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
    *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
  }
}
