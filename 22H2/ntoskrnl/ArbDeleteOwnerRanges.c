/*
 * XREFs of ArbDeleteOwnerRanges @ 0x1408179B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteOwnersRanges @ 0x140817AA0 (RtlDeleteOwnersRanges.c)
 */

__int64 __fastcall ArbDeleteOwnerRanges(__int64 a1)
{
  return RtlDeleteOwnersRanges(*(_QWORD *)(a1 + 48));
}
