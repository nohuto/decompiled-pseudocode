/*
 * XREFs of ??_ECInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024A950
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CInteractionTrackerBindingManagerMarshaler *__fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::`vector deleting destructor'(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        char a2)
{
  char *v4; // rdx

  v4 = (char *)*((_QWORD *)this + 9);
  if ( v4 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
