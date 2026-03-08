/*
 * XREFs of HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange @ 0x1C0013A90
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_Get30PortChangeEvent @ 0x1C000569C (HUBHTX_Get30PortChangeEvent.c)
 */

__int64 __fastcall HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange(__int64 a1, __int64 a2, __int64 a3)
{
  return HUBHTX_Get30PortChangeEvent(*(_QWORD *)(a1 + 960), a2, a3);
}
