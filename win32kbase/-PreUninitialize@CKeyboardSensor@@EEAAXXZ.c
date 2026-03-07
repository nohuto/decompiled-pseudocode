void __fastcall CKeyboardSensor::PreUninitialize(CKeyboardSensor *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v6; // rcx

  if ( isInputVirtualizationEnabled((__int64)this, a2, a3, a4) )
    CIVChannel::Uninitialize((CKeyboardSensor *)((char *)this + 1352));
  v5 = (_QWORD *)*((_QWORD *)this + 176);
  if ( v5 )
  {
    v6 = gpLeakTrackingAllocator;
    *v5 = &CBaseProcessor::`vftable';
    NSInstrumentation::CLeakTrackingAllocator::Free(v6, v5);
  }
  *((_QWORD *)this + 176) = 0LL;
}
