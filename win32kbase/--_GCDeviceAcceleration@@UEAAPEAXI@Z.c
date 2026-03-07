CDeviceAcceleration *__fastcall CDeviceAcceleration::`scalar deleting destructor'(CDeviceAcceleration *this, char a2)
{
  *(_QWORD *)this = &CDeviceAcceleration::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
