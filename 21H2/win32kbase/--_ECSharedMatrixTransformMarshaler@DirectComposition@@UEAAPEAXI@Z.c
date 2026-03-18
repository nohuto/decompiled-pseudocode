/*
 * XREFs of ??_ECSharedMatrixTransformMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C02390A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CSharedMatrixTransformMarshaler *__fastcall DirectComposition::CSharedMatrixTransformMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedMatrixTransformMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedMatrixTransformMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
