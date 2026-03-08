/*
 * XREFs of ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C0094A90
 * Callers:
 *     <none>
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C0079014 (isInputVirtualizationEnabled.c)
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x1C0095570 (--1CMouseProcessor@@QEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1C022970C (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 */

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
