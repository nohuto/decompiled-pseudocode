void __fastcall CitpCleanupGlobalImpactContext(struct _CIT_IMPACT_CONTEXT **a1)
{
  if ( xmmword_1C02D4DA0 )
  {
    CitpContextCleanup(xmmword_1C02D4DA0);
    if ( xmmword_1C02D4DA0 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)xmmword_1C02D4DA0);
    xmmword_1C02D4DA0 = 0LL;
  }
  *a1 = 0LL;
}
