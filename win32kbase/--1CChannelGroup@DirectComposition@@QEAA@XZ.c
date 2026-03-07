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
