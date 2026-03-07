char ***__fastcall DirectComposition::CGenericMarshaler::`scalar deleting destructor'(char ***this, char a2)
{
  DirectComposition::CGenericPropertyList::~CGenericPropertyList(this + 7);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
