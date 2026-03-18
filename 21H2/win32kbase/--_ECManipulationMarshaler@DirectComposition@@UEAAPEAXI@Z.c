/*
 * XREFs of ??_ECManipulationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0214510
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1?$CStructDynamicArray@UInjectManipulationArgs@@@@QEAA@XZ @ 0x1C0213F24 (--1-$CStructDynamicArray@UInjectManipulationArgs@@@@QEAA@XZ.c)
 */

DirectComposition::CManipulationMarshaler *__fastcall DirectComposition::CManipulationMarshaler::`vector deleting destructor'(
        DirectComposition::CManipulationMarshaler *this,
        char a2)
{
  CStructDynamicArray<InjectManipulationArgs>::~CStructDynamicArray<InjectManipulationArgs>((__int64)this + 136);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
