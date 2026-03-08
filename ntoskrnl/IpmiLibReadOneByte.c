/*
 * XREFs of IpmiLibReadOneByte @ 0x14067568C
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x140675B3C (IpmiLibpKcsHandleError.c)
 *     IpmiLibpKcsReceiveResponseFromBmc @ 0x140675C88 (IpmiLibpKcsReceiveResponseFromBmc.c)
 *     IpmiLibpKcsSendRequestToBMC @ 0x140675EF8 (IpmiLibpKcsSendRequestToBMC.c)
 *     IpmiLibpKcsSpinRegister @ 0x1406760E0 (IpmiLibpKcsSpinRegister.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IpmiLibReadOneByte(__int64 a1, unsigned __int8 a2)
{
  if ( BYTE8(xmmword_140C2C7B0) )
    return __inbyte(xmmword_140C2C800 + a2 * BYTE8(WheaIpmiContext));
  else
    return *(_BYTE *)(xmmword_140C2C800 + BYTE8(WheaIpmiContext) * (unsigned int)a2);
}
