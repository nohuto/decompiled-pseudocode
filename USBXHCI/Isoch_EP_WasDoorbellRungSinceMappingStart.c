/*
 * XREFs of Isoch_EP_WasDoorbellRungSinceMappingStart @ 0x1C0044320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall Isoch_EP_WasDoorbellRungSinceMappingStart(__int64 a1)
{
  return *(_BYTE *)(a1 + 328) & 1;
}
