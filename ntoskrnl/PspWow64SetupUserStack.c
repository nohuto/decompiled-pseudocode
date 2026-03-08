/*
 * XREFs of PspWow64SetupUserStack @ 0x14078F944
 * Callers:
 *     PspAllocateThread @ 0x1406B00F4 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlpWow64CreateUserStack @ 0x14078F9F0 (RtlpWow64CreateUserStack.c)
 */

__int64 __fastcall PspWow64SetupUserStack(struct _KPROCESS *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  bool v5; // zf
  int UserStack; // edi
  char v9; // cl
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  v5 = (*(_BYTE *)a4 & 1) == 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( !v5 )
  {
    v9 = 0;
    goto LABEL_4;
  }
  KeStackAttachProcess(a1, &ApcState);
  UserStack = RtlpWow64CreateUserStack(*(_QWORD *)(a4 + 16), *(_QWORD *)(a4 + 24), *(_QWORD *)(a4 + 8), a5, a3);
  if ( UserStack >= 0 )
  {
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
    v9 = 4;
LABEL_4:
    *(_BYTE *)a4 = v9 | *(_BYTE *)a4 & 0xFB;
    return 0LL;
  }
  KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  return (unsigned int)UserStack;
}
