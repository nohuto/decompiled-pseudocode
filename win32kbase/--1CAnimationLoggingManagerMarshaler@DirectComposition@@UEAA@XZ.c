/*
 * XREFs of ??1CAnimationLoggingManagerMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00BED24
 * Callers:
 *     ??_GCAnimationLoggingManagerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00BECE0 (--_GCAnimationLoggingManagerMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::~CAnimationLoggingManagerMarshaler(
        DirectComposition::CAnimationLoggingManagerMarshaler *this)
{
  char *v1; // rdx
  char *v3; // rdx
  char *v4; // rdx
  char *v5; // rdx

  v1 = (char *)*((_QWORD *)this + 25);
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
  v3 = (char *)*((_QWORD *)this + 19);
  if ( v3 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
  v4 = (char *)*((_QWORD *)this + 13);
  if ( v4 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
  v5 = (char *)*((_QWORD *)this + 7);
  if ( v5 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
}
