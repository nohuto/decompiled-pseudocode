/*
 * XREFs of EtwpUpdateKernelGroupsWork @ 0x1407D53D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpUpdateGlobalGroupMasks @ 0x1407D53FC (EtwpUpdateGlobalGroupMasks.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateKernelGroupsWork(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return EtwpUpdateGlobalGroupMasks(EtwpHostSiloState, 0LL, 8LL);
}
