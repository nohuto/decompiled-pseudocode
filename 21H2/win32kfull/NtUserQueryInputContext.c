/*
 * XREFs of NtUserQueryInputContext @ 0x1C0105AB0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

HANDLE __fastcall NtUserQueryInputContext(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  HANDLE v9; // rbx
  int v10; // edi
  HANDLE ThreadProcessId; // rax
  int v13; // edi
  HANDLE *v14; // rax

  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL, v5);
    v9 = 0LL;
    goto LABEL_7;
  }
  v6 = HMValidateHandle(a1, 0x11u);
  v9 = 0LL;
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 16);
    if ( !v3 )
    {
      ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v8);
      goto LABEL_6;
    }
    v10 = v3 - 1;
    if ( !v10 )
    {
      ThreadProcessId = PsGetThreadId(*(PETHREAD *)v8);
LABEL_6:
      v9 = ThreadProcessId;
      goto LABEL_7;
    }
    v13 = v10 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
      {
        UserSetLastError(87LL, v7);
        goto LABEL_7;
      }
      v14 = *(HANDLE **)(v8 + 792);
    }
    else
    {
      v14 = *(HANDLE **)(v8 + 784);
    }
    if ( v14 )
      v9 = *v14;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
