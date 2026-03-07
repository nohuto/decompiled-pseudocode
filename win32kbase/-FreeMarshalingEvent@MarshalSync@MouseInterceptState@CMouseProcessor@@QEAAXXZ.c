void __fastcall CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent(void **this)
{
  if ( *this )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *this);
    *this = 0LL;
  }
}
