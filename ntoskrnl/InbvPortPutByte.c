/*
 * XREFs of InbvPortPutByte @ 0x1406771D8
 * Callers:
 *     HdlspPutData @ 0x140AE8068 (HdlspPutData.c)
 *     HdlspSendStringAtBaud @ 0x140AE8474 (HdlspSendStringAtBaud.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void *__fastcall InbvPortPutByte(unsigned int a1, __int64 a2, __int64 a3)
{
  void *result; // rax
  _QWORD *v4; // rcx

  if ( a1 < 4 )
  {
    result = &Ports;
    v4 = (_QWORD *)((char *)&Ports + 40 * a1);
    if ( *v4 )
    {
      LOBYTE(a3) = 1;
      return (void *)(*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(UartHardwareDriver + 24))(v4, a2, a3);
    }
  }
  return result;
}
