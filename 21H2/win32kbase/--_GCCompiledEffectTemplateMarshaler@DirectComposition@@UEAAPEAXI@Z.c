/*
 * XREFs of ??_GCCompiledEffectTemplateMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00BB990
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CCompiledEffectTemplateMarshaler *__fastcall DirectComposition::CCompiledEffectTemplateMarshaler::`scalar deleting destructor'(
        DirectComposition::CCompiledEffectTemplateMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CCompiledEffectTemplateMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
