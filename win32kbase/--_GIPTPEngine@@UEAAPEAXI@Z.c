IPTPEngine *__fastcall IPTPEngine::`scalar deleting destructor'(IPTPEngine *this, char a2)
{
  *(_QWORD *)this = &IPTPEngine::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
