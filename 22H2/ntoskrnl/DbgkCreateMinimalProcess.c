/*
 * XREFs of DbgkCreateMinimalProcess @ 0x140799154
 * Callers:
 *     PsCreateMinimalProcess @ 0x140798E60 (PsCreateMinimalProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     DbgkpSendApiMessage @ 0x1408871A4 (DbgkpSendApiMessage.c)
 */

void *__fastcall DbgkCreateMinimalProcess(ULONG_PTR BugCheckParameter1)
{
  void *result; // rax
  _OWORD v3[17]; // [rsp+20h] [rbp-128h] BYREF

  result = memset(v3, 0, sizeof(v3));
  _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 1124), 0x400001u);
  if ( *(_QWORD *)(BugCheckParameter1 + 1400) )
  {
    *(_QWORD *)&v3[0] = 0x800600038LL;
    DWORD2(v3[2]) = 2;
    memset(&v3[3], 0, 48);
    return (void *)DbgkpSendApiMessage(BugCheckParameter1);
  }
  return result;
}
