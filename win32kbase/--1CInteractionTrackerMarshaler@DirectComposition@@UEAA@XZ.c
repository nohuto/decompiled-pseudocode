/*
 * XREFs of ??1CInteractionTrackerMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0266A98
 * Callers:
 *     ??_ECInteractionTrackerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0266AD0 (--_ECInteractionTrackerMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CInteractionTrackerMarshaler::~CInteractionTrackerMarshaler(
        DirectComposition::CInteractionTrackerMarshaler *this)
{
  char *v1; // rdx

  *(_QWORD *)this = &DirectComposition::CInteractionTrackerMarshaler::`vftable';
  v1 = (char *)*((_QWORD *)this + 46);
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
}
