/*
 * XREFs of ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C005A850
 * Callers:
 *     <none>
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C00384C4 (isInputVirtualizationEnabled.c)
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x1C005A904 (--1CMouseProcessor@@QEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1C01F7658 (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 */

void __fastcall CMouseSensor::PreUninitialize(CMouseSensor *this)
{
  __int64 v2; // rcx
  void *v3; // rdi

  if ( isInputVirtualizationEnabled() )
    CIVChannel::Uninitialize((CIVChannel *)(v2 + 1264));
  v3 = (void *)*((_QWORD *)this + 223);
  if ( v3 )
  {
    CMouseProcessor::~CMouseProcessor(*((CMouseProcessor **)this + 223));
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v3);
  }
  *((_QWORD *)this + 223) = 0LL;
}
