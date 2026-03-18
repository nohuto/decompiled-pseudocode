/*
 * XREFs of PopInitializeDirectedDrips @ 0x140B0348C
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x1402501A0 (PopQueueDirectedDripsWork.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140B270C4 (PopDirectedDripsInitializePhase3.c)
 *     PopDirectedDripsInitializePhase0 @ 0x140B271D8 (PopDirectedDripsInitializePhase0.c)
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
