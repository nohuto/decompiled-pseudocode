CInputManager *__fastcall CInputManager::`scalar deleting destructor'(CInputManager *this)
{
  CInputManager::~CInputManager(this);
  if ( this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
