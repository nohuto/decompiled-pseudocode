/*
 * XREFs of PopInitializeDirectedDrips @ 0x140B46FF8
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x1402F3054 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140B698FC (PopDirectedDripsInitializePhase3.c)
 *     PopDirectedDripsInitializePhase0 @ 0x140B6E9FC (PopDirectedDripsInitializePhase0.c)
 */

void __fastcall PopInitializeDirectedDrips(int a1)
{
  __int64 v1; // rcx

  if ( a1 )
  {
    if ( a1 == 3 && (int)PopDirectedDripsInitializePhase3() >= 0 )
      PopQueueDirectedDripsWork(v1, 2uLL);
  }
  else
  {
    PopDirectedDripsInitializePhase0();
  }
}
