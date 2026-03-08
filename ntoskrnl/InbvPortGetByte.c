/*
 * XREFs of InbvPortGetByte @ 0x140676FBC
 * Callers:
 *     HdlspDispatch @ 0x140AE6EB0 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140AE7690 (HdlspGetLine.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char __fastcall InbvPortGetByte(unsigned int a1, _BYTE *a2)
{
  __int64 v2; // rcx

  if ( a1 < 4 )
  {
    v2 = 5LL * a1;
    if ( *((_QWORD *)&Ports + v2) )
    {
      if ( *((_BYTE *)&Ports + 8 * v2 + 33) )
      {
        *a2 = *((_BYTE *)&Ports + 8 * v2 + 32);
        *((_BYTE *)&Ports + 8 * v2 + 33) = 0;
        return 1;
      }
      if ( !(*(unsigned int (__fastcall **)(char *))(UartHardwareDriver + 16))((char *)&Ports + 8 * v2) )
        return 1;
    }
  }
  return 0;
}
