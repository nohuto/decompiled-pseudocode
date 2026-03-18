/*
 * XREFs of IpmiLibWriteOneByte @ 0x140677D1C
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x14067818C (IpmiLibpKcsHandleError.c)
 *     IpmiLibpKcsReceiveResponseFromBmc @ 0x1406782D8 (IpmiLibpKcsReceiveResponseFromBmc.c)
 *     IpmiLibpKcsSendRequestToBMC @ 0x140678548 (IpmiLibpKcsSendRequestToBMC.c)
 *     IpmiLibpHandleReadInterrupt @ 0x1406788CC (IpmiLibpHandleReadInterrupt.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IpmiLibWriteOneByte(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  unsigned __int8 result; // al
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( BYTE8(xmmword_140C2CC30) )
  {
    result = a3;
    __outbyte(xmmword_140C2CC80 + a2 * BYTE8(WheaIpmiContext), a3);
  }
  else
  {
    result = xmmword_140C2CC80;
    *(_BYTE *)(BYTE8(WheaIpmiContext) * (unsigned int)a2 + (_QWORD)xmmword_140C2CC80) = a3;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
  return result;
}
