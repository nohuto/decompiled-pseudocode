/*
 * XREFs of ExpReturnPoolQuota @ 0x140294F44
 * Callers:
 *     ExFreeHeapPool @ 0x1402B61C0 (ExFreeHeapPool.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsReturnPoolQuota @ 0x140294F80 (PsReturnPoolQuota.c)
 */

void __fastcall ExpReturnPoolQuota(struct _KPROCESS *Object, ULONG_PTR Amount, char a3, ULONG a4)
{
  PsReturnPoolQuota(Object, (POOL_TYPE)(a3 & 1), Amount);
  ObDereferenceObjectDeferDeleteWithTag(Object, a4);
}
