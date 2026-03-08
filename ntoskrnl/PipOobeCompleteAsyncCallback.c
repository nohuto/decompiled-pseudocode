/*
 * XREFs of PipOobeCompleteAsyncCallback @ 0x14067C970
 * Callers:
 *     <none>
 * Callees:
 *     VhdDeferredAutoAttachVirtualDisks @ 0x1404119A4 (VhdDeferredAutoAttachVirtualDisks.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PipOobeCompleteAsyncCallback(PVOID P)
{
  VhdDeferredAutoAttachVirtualDisks();
  ExFreePoolWithTag(P, 0);
}
