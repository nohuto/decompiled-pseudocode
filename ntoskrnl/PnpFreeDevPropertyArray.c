/*
 * XREFs of PnpFreeDevPropertyArray @ 0x1406CC480
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x1406CC524 (PiDqQueryEvaluateFilter.c)
 *     PiDqActionDataFree @ 0x1407468D4 (PiDqActionDataFree.c)
 *     PiSwIrpStartCreateWorker @ 0x140806A2C (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x1408071C4 (PiSwCompleteCreate.c)
 *     PiSwDeviceFree @ 0x140964270 (PiSwDeviceFree.c)
 *     PiSwInterfaceFree @ 0x140964570 (PiSwInterfaceFree.c)
 *     PiSwProcessRemove @ 0x140964760 (PiSwProcessRemove.c)
 *     PiSwQueuedCreateInfoFree @ 0x140964BA0 (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     PnpFreeDevProperty @ 0x1406CC4E0 (PnpFreeDevProperty.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
