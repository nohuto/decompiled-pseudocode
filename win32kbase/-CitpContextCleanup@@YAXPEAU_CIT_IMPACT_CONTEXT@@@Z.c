void __fastcall CitpContextCleanup(struct _CIT_IMPACT_CONTEXT *a1)
{
  char *v2; // rdx

  CitpInteractionSummariesFlush(a1, 1);
  CitpContextTrackingDataCleanup(a1);
  v2 = (char *)*((_QWORD *)a1 + 12);
  if ( v2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
  *((_QWORD *)a1 + 12) = 0LL;
}
