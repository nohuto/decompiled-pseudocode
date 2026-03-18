/*
 * XREFs of PnpFreeDevPropertyArray @ 0x140789BA8
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x140788864 (PiDqQueryEvaluateFilter.c)
 *     PiDqActionDataFree @ 0x1407FA1C4 (PiDqActionDataFree.c)
 *     PiSwIrpStartCreateWorker @ 0x14081B5CC (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x14081BD64 (PiSwCompleteCreate.c)
 *     PiSwDeviceFree @ 0x140967290 (PiSwDeviceFree.c)
 *     PiSwInterfaceFree @ 0x140967590 (PiSwInterfaceFree.c)
 *     PiSwProcessRemove @ 0x140967780 (PiSwProcessRemove.c)
 *     PiSwQueuedCreateInfoFree @ 0x140967BC0 (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     PnpFreeDevProperty @ 0x140789C08 (PnpFreeDevProperty.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
