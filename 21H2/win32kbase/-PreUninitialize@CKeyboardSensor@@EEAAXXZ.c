/*
 * XREFs of ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1C005A980
 * Callers:
 *     <none>
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C00384C4 (isInputVirtualizationEnabled.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1C01F7658 (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 */

void __fastcall CKeyboardSensor::PreUninitialize(CKeyboardSensor *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v4; // rcx

  if ( isInputVirtualizationEnabled() )
    CIVChannel::Uninitialize((CIVChannel *)(v2 + 1264));
  v3 = (_QWORD *)*((_QWORD *)this + 165);
  if ( v3 )
  {
    v4 = (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator;
    *v3 = &CBaseProcessor::`vftable';
    NSInstrumentation::CLeakTrackingAllocator::Free(v4, v3);
  }
  *((_QWORD *)this + 165) = 0LL;
}
