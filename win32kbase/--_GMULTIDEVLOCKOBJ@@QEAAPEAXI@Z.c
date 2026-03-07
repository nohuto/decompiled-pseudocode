MULTIDEVLOCKOBJ *__fastcall MULTIDEVLOCKOBJ::`scalar deleting destructor'(MULTIDEVLOCKOBJ *this)
{
  MULTIDEVLOCKOBJ::~MULTIDEVLOCKOBJ(this);
  if ( this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
