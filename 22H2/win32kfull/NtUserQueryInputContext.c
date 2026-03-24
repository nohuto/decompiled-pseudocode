/*
 * XREFs of NtUserQueryInputContext @ 0x1C0116FB0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067040 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

HANDLE __fastcall NtUserQueryInputContext(unsigned __int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  HANDLE v9; // rbx
  int v10; // edi
  HANDLE ThreadProcessId; // rax
  int v13; // edi
  HANDLE *v14; // rax

  EnterSharedCrit(0LL, 1LL);
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL, v4, gpsi);
    v9 = 0LL;
    goto LABEL_7;
  }
  v5 = HMValidateHandle(a1, 0x11u);
  v9 = 0LL;
  if ( v5 )
  {
    v7 = *(_QWORD *)(v5 + 16);
    if ( !a2 )
    {
      ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v7);
      goto LABEL_6;
    }
    v10 = a2 - 1;
    if ( !v10 )
    {
      ThreadProcessId = PsGetThreadId(*(PETHREAD *)v7);
LABEL_6:
      v9 = ThreadProcessId;
      goto LABEL_7;
    }
    v13 = v10 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
      {
        UserSetLastError(87LL, v6, v8);
        goto LABEL_7;
      }
      v14 = *(HANDLE **)(v7 + 792);
    }
    else
    {
      v14 = *(HANDLE **)(v7 + 784);
    }
    if ( v14 )
      v9 = *v14;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v7);
  return v9;
}
