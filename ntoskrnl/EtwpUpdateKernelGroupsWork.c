/*
 * XREFs of EtwpUpdateKernelGroupsWork @ 0x140785F10
 * Callers:
 *     <none>
 * Callees:
 *     EtwpUpdateGlobalGroupMasks @ 0x140785F3C (EtwpUpdateGlobalGroupMasks.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateKernelGroupsWork(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return EtwpUpdateGlobalGroupMasks(EtwpHostSiloState, 0LL, 8LL);
}
