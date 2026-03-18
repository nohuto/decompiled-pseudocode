/*
 * XREFs of ??1CInteractionTrackerMarshaler@DirectComposition@@UEAA@XZ @ 0x1C022ED38
 * Callers:
 *     ??_ECInteractionTrackerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C022ED70 (--_ECInteractionTrackerMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CInteractionTrackerMarshaler::~CInteractionTrackerMarshaler(
        DirectComposition::CInteractionTrackerMarshaler *this)
{
  char *v1; // rdx

  *(_QWORD *)this = &DirectComposition::CInteractionTrackerMarshaler::`vftable';
  v1 = (char *)*((_QWORD *)this + 47);
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v1);
}
