/*
 * XREFs of ??1CChannelGroup@DirectComposition@@QEAA@XZ @ 0x1C0098658
 * Callers:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C009846C (--1CConnection@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CChannelGroup::~CChannelGroup(DirectComposition::CChannelGroup *this)
{
  struct _ERESOURCE *v2; // rcx
  void *v3; // rdx

  v2 = (struct _ERESOURCE *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    ExDeleteResourceLite(v2);
    v3 = (void *)*((_QWORD *)this + 7);
    if ( v3 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
  }
  if ( *(_QWORD *)this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *(void **)this);
}
