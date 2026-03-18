/*
 * XREFs of PpmWmiIdleAccountingWork @ 0x1409965E0
 * Callers:
 *     <none>
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x1402BFAEC (PopExecuteOnTargetProcessors.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmWmiIdleAccountingWork(void *a1)
{
  ExFreePoolWithTag(a1, 0x656C6469u);
  return PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmWmiFireIdleAccountingEvent, 0LL, 0LL);
}
