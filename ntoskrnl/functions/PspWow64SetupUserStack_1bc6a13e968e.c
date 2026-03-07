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
