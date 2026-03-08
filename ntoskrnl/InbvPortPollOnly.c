/*
 * XREFs of InbvPortPollOnly @ 0x140677170
 * Callers:
 *     HdlspDispatch @ 0x140AE6EB0 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140AE7690 (HdlspGetLine.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char __fastcall InbvPortPollOnly(unsigned int a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rcx
  char result; // al

  if ( a1 >= 4 )
    return 0;
  v1 = 5LL * a1;
  v2 = (_QWORD *)((char *)&Ports + 40 * a1);
  if ( !*v2 )
    return 0;
  result = *((_BYTE *)&Ports + 8 * v1 + 33);
  if ( !result )
  {
    result = (*(unsigned int (__fastcall **)(_QWORD *, char *))(UartHardwareDriver + 16))(
               v2,
               (char *)&Ports + 8 * v1 + 32) == 0;
    *((_BYTE *)&Ports + 8 * v1 + 33) = result;
  }
  return result;
}
