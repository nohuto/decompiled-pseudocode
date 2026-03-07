void __fastcall FreeQueue(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  NSInstrumentation::CLeakTrackingAllocator *v6; // rcx

  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(v6, *(void **)(v5 + 16864), a1);
}
