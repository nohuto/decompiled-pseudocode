/*
 * XREFs of ResFwFindMessage @ 0x1409F47C0
 * Callers:
 *     BcpFindMessage @ 0x140A96E2C (BcpFindMessage.c)
 * Callees:
 *     RtlFindMessage @ 0x1406724A0 (RtlFindMessage.c)
 */

unsigned __int16 *__fastcall ResFwFindMessage(unsigned int a1)
{
  unsigned __int16 *v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( qword_140C135A8
    && *(_QWORD *)qword_140C135A8
    && (int)RtlFindMessage(*(_QWORD *)qword_140C135A8, 0xBu, 0, a1, &v2) >= 0
    && (v2[1] & 1) != 0 )
  {
    return v2 + 2;
  }
  else
  {
    return 0LL;
  }
}
