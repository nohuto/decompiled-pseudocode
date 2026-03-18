/*
 * XREFs of DbgkCreateMinimalThread @ 0x14093923C
 * Callers:
 *     PspUserThreadStartup @ 0x14076FBF0 (PspUserThreadStartup.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     DbgkpSendApiMessage @ 0x14093A100 (DbgkpSendApiMessage.c)
 */

void *__fastcall DbgkCreateMinimalThread(__int64 a1)
{
  void *result; // rax
  _QWORD *v3; // rdi
  _QWORD v4[34]; // [rsp+20h] [rbp-128h] BYREF

  result = memset(&v4[8], 0, 0xD0uLL);
  v3 = *(_QWORD **)(a1 + 184);
  if ( v3[175] )
  {
    memset(v4, 0, 0x40uLL);
    v4[7] = *(_QWORD *)(a1 + 1312);
    LODWORD(v4[5]) = 1;
    v4[0] = 0x800400018LL;
    return (void *)DbgkpSendApiMessage(v3);
  }
  return result;
}
