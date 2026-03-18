/*
 * XREFs of PipOobeCompleteAsyncCallback @ 0x14067E970
 * Callers:
 *     <none>
 * Callees:
 *     VhdDeferredAutoAttachVirtualDisks @ 0x140419D38 (VhdDeferredAutoAttachVirtualDisks.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PipOobeCompleteAsyncCallback(PVOID P)
{
  VhdDeferredAutoAttachVirtualDisks();
  ExFreePoolWithTag(P, 0);
}
