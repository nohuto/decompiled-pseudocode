/*
 * XREFs of PpmWmiIdleAccountingWork @ 0x140998440
 * Callers:
 *     <none>
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140293A88 (PopExecuteOnTargetProcessors.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmWmiIdleAccountingWork(void *a1)
{
  ExFreePoolWithTag(a1, 0x656C6469u);
  return PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmWmiFireIdleAccountingEvent, 0LL, 0LL);
}
