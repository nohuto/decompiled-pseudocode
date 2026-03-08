/*
 * XREFs of ??_GCDesktopTreeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D32F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CDesktopTreeMarshaler *__fastcall DirectComposition::CDesktopTreeMarshaler::`scalar deleting destructor'(
        DirectComposition::CDesktopTreeMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CDesktopTreeMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
