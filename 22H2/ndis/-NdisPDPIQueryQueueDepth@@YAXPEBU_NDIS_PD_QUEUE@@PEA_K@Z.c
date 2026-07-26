/*
 * XREFs of ?NdisPDPIQueryQueueDepth@@YAXPEBU_NDIS_PD_QUEUE@@PEA_K@Z @ 0x1C007D920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NdisPDPIQueryQueueDepth(const struct _NDIS_PD_QUEUE *a1, unsigned __int64 *a2)
{
  (*((void (__fastcall **)(const struct _NDIS_PD_QUEUE *, unsigned __int64 *))a1->PDPlatformReserved[0] + 2))(a1, a2);
}
