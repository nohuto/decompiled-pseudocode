/*
 * XREFs of ??_GCSharedMatrixTransform3DMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0239060
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CSharedMatrixTransform3DMarshaler *__fastcall DirectComposition::CSharedMatrixTransform3DMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedMatrixTransform3DMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedMatrixTransform3DMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
