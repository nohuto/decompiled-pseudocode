/*
 * XREFs of ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C004BBA0
 * Callers:
 *     CitProcessCallout @ 0x1C0016FF0 (CitProcessCallout.c)
 *     ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A2EAC (-CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C023FEBC (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C024043C (-CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 *     ?CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z @ 0x1C02404A4 (-CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall CitpProgramIdCleanup(void **a1)
{
  void *v2; // rdx

  if ( *a1 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      *a1);
    *a1 = 0LL;
  }
  v2 = a1[1];
  if ( v2 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v2);
    a1[1] = 0LL;
  }
}
