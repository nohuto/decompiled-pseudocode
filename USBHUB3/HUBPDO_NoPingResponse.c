/*
 * XREFs of HUBPDO_NoPingResponse @ 0x1C001CDB0
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBPDO_NoPingResponse(__int64 a1, __int64 a2)
{
  return HUBSM_AddEvent(a2 + 504, 4059);
}
