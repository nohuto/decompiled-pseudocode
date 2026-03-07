void __fastcall CHwndTargetProp::Delete(CHwndTargetProp *this)
{
  int i; // edi
  void *v3; // rcx

  for ( i = 0; i < 3; ++i )
    CHwndTargetProp::ClearSystemVisual(this, (unsigned int)i);
  v3 = (void *)*((_QWORD *)this + 9);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *((_QWORD *)this + 9) = 0LL;
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
}
