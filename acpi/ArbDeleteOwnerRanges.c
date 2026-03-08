/*
 * XREFs of ArbDeleteOwnerRanges @ 0x1C00A18A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ArbDeleteOwnerRanges(__int64 a1, void *a2)
{
  return RtlDeleteOwnersRanges(*(PRTL_RANGE_LIST *)(a1 + 48), a2);
}
