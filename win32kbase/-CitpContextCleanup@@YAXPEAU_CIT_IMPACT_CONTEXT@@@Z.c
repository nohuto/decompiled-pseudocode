/*
 * XREFs of ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00B0CD0
 * Callers:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00B0C84 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C00C5898 (-CitpStart@@YAJXZ.c)
 * Callees:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C00871BC (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00B0D10 (-CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

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
