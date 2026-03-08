/*
 * XREFs of HUBPSM20_GettingPortChangeEventInSuspended @ 0x1C0012D50
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_Get20PortChangeEvent @ 0x1C0004C30 (HUBHTX_Get20PortChangeEvent.c)
 */

__int64 __fastcall HUBPSM20_GettingPortChangeEventInSuspended(__int64 a1)
{
  return HUBHTX_Get20PortChangeEvent(*(_QWORD *)(a1 + 960));
}
