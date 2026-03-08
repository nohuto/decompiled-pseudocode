/*
 * XREFs of IpmiLibWriteOneByte @ 0x1406756CC
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x140675B3C (IpmiLibpKcsHandleError.c)
 *     IpmiLibpKcsReceiveResponseFromBmc @ 0x140675C88 (IpmiLibpKcsReceiveResponseFromBmc.c)
 *     IpmiLibpKcsSendRequestToBMC @ 0x140675EF8 (IpmiLibpKcsSendRequestToBMC.c)
 *     IpmiLibpHandleReadInterrupt @ 0x14067627C (IpmiLibpHandleReadInterrupt.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IpmiLibWriteOneByte(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  unsigned __int8 result; // al
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( BYTE8(xmmword_140C2C7B0) )
  {
    result = a3;
    __outbyte(xmmword_140C2C800 + a2 * BYTE8(WheaIpmiContext), a3);
  }
  else
  {
    result = xmmword_140C2C800;
    *(_BYTE *)(BYTE8(WheaIpmiContext) * (unsigned int)a2 + (_QWORD)xmmword_140C2C800) = a3;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
  return result;
}
