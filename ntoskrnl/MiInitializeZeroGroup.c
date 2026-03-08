/*
 * XREFs of MiInitializeZeroGroup @ 0x1402F4E60
 * Callers:
 *     MiZeroInParallel @ 0x140242EB8 (MiZeroInParallel.c)
 *     MiZeroHugeRangeCore @ 0x140A2B20C (MiZeroHugeRangeCore.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeZeroGroup(_WORD *a1, __int64 a2, int a3, unsigned int a4, int a5)
{
  if ( a3
    || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0
    || KeGetCurrentIrql() == 2
    || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0
    || (*(_DWORD *)(a2 + 4) & 0x10) != 0
    || (MiFlags & 0x30) == 0 )
  {
    a4 = 1;
    *a1 = 1;
  }
  else if ( KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] == a5 )
  {
    *a1 = 1;
  }
  else if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 )
  {
    *a1 = 257;
  }
  else
  {
    *a1 = 0;
  }
  return a4;
}
