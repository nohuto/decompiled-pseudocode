void __fastcall CCursorClip::DeadzoneJumping::Cleanup(CCursorClip::DeadzoneJumping *this)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rdx
  _QWORD *v3; // rbx
  _QWORD *v4; // rbx

  v1 = *(_QWORD **)this;
  if ( *(_QWORD *)this )
  {
    do
    {
      v2 = (_QWORD *)v1[3];
      if ( v2 )
      {
        do
        {
          v4 = (_QWORD *)*v2;
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
          v2 = v4;
        }
        while ( v4 );
      }
      v3 = (_QWORD *)*v1;
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
      v1 = v3;
    }
    while ( v3 );
  }
}
