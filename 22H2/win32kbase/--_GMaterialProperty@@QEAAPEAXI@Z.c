/*
 * XREFs of ??_GMaterialProperty@@QEAAPEAXI@Z @ 0x1C0083ED4
 * Callers:
 *     DCompositionSessionUninitialize @ 0x1C0083D38 (DCompositionSessionUninitialize.c)
 *     FindOrCreateMaterialProperty @ 0x1C00AF3B8 (FindOrCreateMaterialProperty.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

MaterialProperty *__fastcall MaterialProperty::`scalar deleting destructor'(MaterialProperty *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    ObfDereferenceObject(v2);
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
