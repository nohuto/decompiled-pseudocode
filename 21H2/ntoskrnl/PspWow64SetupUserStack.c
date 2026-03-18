/*
 * XREFs of PspWow64SetupUserStack @ 0x1406C9C7C
 * Callers:
 *     PspAllocateThread @ 0x1407A34A0 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlpWow64CreateUserStack @ 0x1406C9D2C (RtlpWow64CreateUserStack.c)
 */

__int64 __fastcall PspWow64SetupUserStack(_KPROCESS *a1, __int64 a2, __int64 a3, char *a4, int a5)
{
  char v5; // al
  int UserStack; // edi
  char v9; // cl
  _OWORD v11[3]; // [rsp+30h] [rbp-48h] BYREF

  v5 = *a4;
  memset(v11, 0, sizeof(v11));
  if ( (v5 & 1) != 0 )
  {
    v9 = 0;
    goto LABEL_4;
  }
  KiStackAttachProcess(a1, 0LL, (__int64)v11, a4);
  UserStack = RtlpWow64CreateUserStack(*((_QWORD *)a4 + 2), *((_QWORD *)a4 + 3), *((_QWORD *)a4 + 1), a5, a3);
  if ( UserStack >= 0 )
  {
    KiUnstackDetachProcess((__int64)v11, 0LL);
    v5 = *a4;
    v9 = 4;
LABEL_4:
    *a4 = v9 | v5 & 0xFB;
    return 0LL;
  }
  KiUnstackDetachProcess((__int64)v11, 0LL);
  return (unsigned int)UserStack;
}
