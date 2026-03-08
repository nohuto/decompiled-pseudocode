/*
 * XREFs of HUBPSM20_CheckingIfDeviceIsConnectedOnPortChangeInD3Cold @ 0x1C0011B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM20_CheckingIfDeviceIsConnectedOnPortChangeInD3Cold(__int64 a1)
{
  return (*(_BYTE *)(*(_QWORD *)(a1 + 960) + 184LL) & 1) != 0 ? 3089 : 3005;
}
