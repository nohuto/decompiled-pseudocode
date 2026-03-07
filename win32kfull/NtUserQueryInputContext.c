HANDLE __fastcall NtUserQueryInputContext(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  HANDLE v7; // rbx
  int v8; // edi
  HANDLE ThreadProcessId; // rax
  int v11; // edi
  HANDLE *v12; // rax

  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120);
    v7 = 0LL;
    goto LABEL_7;
  }
  v5 = HMValidateHandle(a1, 0x11u);
  v7 = 0LL;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 16);
    if ( !v3 )
    {
      ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v6);
      goto LABEL_6;
    }
    v8 = v3 - 1;
    if ( !v8 )
    {
      ThreadProcessId = PsGetThreadId(*(PETHREAD *)v6);
LABEL_6:
      v7 = ThreadProcessId;
      goto LABEL_7;
    }
    v11 = v8 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
      {
        UserSetLastError(87);
        goto LABEL_7;
      }
      v12 = *(HANDLE **)(v6 + 792);
    }
    else
    {
      v12 = *(HANDLE **)(v6 + 784);
    }
    if ( v12 )
      v7 = *v12;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
