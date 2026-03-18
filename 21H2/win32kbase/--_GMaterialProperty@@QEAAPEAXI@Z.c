/*
 * XREFs of ??_GMaterialProperty@@QEAAPEAXI@Z @ 0x1C0057A18
 * Callers:
 *     FindOrCreateMaterialProperty @ 0x1C0057BB8 (FindOrCreateMaterialProperty.c)
 *     DCompositionSessionUninitialize @ 0x1C0059A70 (DCompositionSessionUninitialize.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

MaterialProperty *__fastcall MaterialProperty::`scalar deleting destructor'(MaterialProperty *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    ObfDereferenceObject(v2);
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    this);
  return this;
}
