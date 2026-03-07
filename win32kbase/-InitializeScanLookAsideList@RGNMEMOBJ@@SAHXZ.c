_BOOL8 __fastcall RGNMEMOBJ::InitializeScanLookAsideList(__int64 a1)
{
  __int64 v1; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v2; // rcx
  void *PagedLookasideList; // rax

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  PagedLookasideList = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                         v2,
                         0x70uLL,
                         0x73616C47u,
                         0x6E637347u,
                         0x60u);
  *(_QWORD *)(v1 + 6376) = PagedLookasideList;
  return PagedLookasideList != 0LL;
}
