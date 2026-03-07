void __fastcall CMouseSensor::PreUninitialize(CMouseSensor *this, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rdi

  if ( isInputVirtualizationEnabled((__int64)this, a2, a3, a4) )
    CIVChannel::Uninitialize((CMouseSensor *)((char *)this + 1352));
  v5 = (void *)*((_QWORD *)this + 234);
  if ( v5 )
  {
    CMouseProcessor::~CMouseProcessor(*((CMouseProcessor **)this + 234));
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
  }
  *((_QWORD *)this + 234) = 0LL;
}
