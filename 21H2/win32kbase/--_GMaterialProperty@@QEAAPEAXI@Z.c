/*
 * XREFs of ??_GMaterialProperty@@QEAAPEAXI@Z @ 0x1C00AB32C
 * Callers:
 *     FindOrCreateMaterialProperty @ 0x1C009D478 (FindOrCreateMaterialProperty.c)
 *     DCompositionSessionUninitialize @ 0x1C00AB0BC (DCompositionSessionUninitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 */

MaterialProperty *__fastcall MaterialProperty::`scalar deleting destructor'(MaterialProperty *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    ObfDereferenceObject(v2);
  Win32FreePool((__int64)this);
  return this;
}
