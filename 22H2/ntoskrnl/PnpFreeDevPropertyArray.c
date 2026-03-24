/*
 * XREFs of PnpFreeDevPropertyArray @ 0x1406AC460
 * Callers:
 *     PiDqActionDataFree @ 0x1406A8934 (PiDqActionDataFree.c)
 *     PiDqQueryEvaluateFilter @ 0x1406AC504 (PiDqQueryEvaluateFilter.c)
 *     PiSwProcessRemove @ 0x140732F28 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x1407342E0 (PiSwDeviceFree.c)
 *     PiSwInterfaceFree @ 0x140734E74 (PiSwInterfaceFree.c)
 *     PiSwIrpStartCreateWorker @ 0x14074CF08 (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x14074DC58 (PiSwCompleteCreate.c)
 *     PiSwQueuedCreateInfoFree @ 0x1408AEC98 (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     PnpFreeDevProperty @ 0x1406AC4C0 (PnpFreeDevProperty.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeDevPropertyArray(unsigned int a1, char *a2, ULONG a3)
{
  char *v5; // rbx
  __int64 v6; // rbp

  if ( a1 )
  {
    v5 = a2;
    v6 = a1;
    do
    {
      PnpFreeDevProperty(v5, a3);
      v5 += 48;
      --v6;
    }
    while ( v6 );
  }
  ExFreePoolWithTag(a2, a3);
}
