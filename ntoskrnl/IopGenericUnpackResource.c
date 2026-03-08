/*
 * XREFs of IopGenericUnpackResource @ 0x140956F10
 * Callers:
 *     <none>
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x1403706C0 (RtlCmDecodeMemIoResource.c)
 */

__int64 __fastcall IopGenericUnpackResource(struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a1, ULONGLONG *a2, ULONGLONG *a3)
{
  *a3 = RtlCmDecodeMemIoResource(a1, a2);
  return 0LL;
}
