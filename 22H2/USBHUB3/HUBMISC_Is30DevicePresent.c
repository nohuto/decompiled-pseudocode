/*
 * XREFs of HUBMISC_Is30DevicePresent @ 0x1C00310F8
 * Callers:
 *     HUBPSM30_CheckingIfDeviceIsConnectedOnPortChangeInD3Cold @ 0x1C0012D70 (HUBPSM30_CheckingIfDeviceIsConnectedOnPortChangeInD3Cold.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_Is30DevicePresent(__int64 a1)
{
  __int16 v1; // ax
  __int16 v2; // ax
  bool v3; // zf
  __int64 result; // rax

  v1 = *(_WORD *)(a1 + 184);
  if ( (v1 & 1) != 0 )
    return 3089LL;
  v2 = v1 & 0x1E0;
  if ( v2 == 320 )
    return 3089LL;
  v3 = v2 == 192;
  result = 3005LL;
  if ( v3 )
    return 3089LL;
  return result;
}
