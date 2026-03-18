/*
 * XREFs of ??1CChannelGroup@DirectComposition@@QEAA@XZ @ 0x1C00C559C
 * Callers:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C0059BAC (--1CConnection@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CChannelGroup::~CChannelGroup(DirectComposition::CChannelGroup *this)
{
  struct _ERESOURCE *v2; // rcx
  char *v3; // rdx

  v2 = (struct _ERESOURCE *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    ExDeleteResourceLite(v2);
    v3 = (char *)*((_QWORD *)this + 7);
    if ( v3 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v3);
  }
  if ( *(_QWORD *)this )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      *(char **)this);
}
