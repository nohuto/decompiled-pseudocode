/*
 * XREFs of ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C0080710
 * Callers:
 *     <none>
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C004FF0C (isInputVirtualizationEnabled.c)
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x1C0080B30 (--1CMouseProcessor@@QEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1C01F3B70 (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 */

void __fastcall CMouseSensor::PreUninitialize(CMouseSensor *this, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rdi

  if ( isInputVirtualizationEnabled((__int64)this, a2, a3, a4) )
    CIVChannel::Uninitialize((CMouseSensor *)((char *)this + 1288));
  v5 = (void *)*((_QWORD *)this + 168);
  if ( v5 )
  {
    CMouseProcessor::~CMouseProcessor(*((CMouseProcessor **)this + 168));
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
  }
  *((_QWORD *)this + 168) = 0LL;
}
