VPTPContact ***__fastcall VPTPContact::`scalar deleting destructor'(
        VPTPContact ***this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  VPTPContact::~VPTPContact(this, a2, a3, a4);
  if ( this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
