__int64 __fastcall NtUserQueryWindow(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagWND *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  __int64 *v17; // rdi
  bool v18; // al
  struct tagWND *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  struct tagWND *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r8
  HANDLE ThreadProcessId; // rax
  __int64 v29; // r8

  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  v5 = ValidateHwnd(a1);
  v7 = (struct tagWND *)v5;
  if ( !v5 )
    goto LABEL_2;
  v9 = *(_QWORD *)(v5 + 16);
  if ( !v3 )
  {
    v29 = *(_QWORD *)(v5 + 40);
    if ( (*(_DWORD *)(v29 + 232) & 0x10) != 0 && *(char *)(v29 + 19) >= 0 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 128LL);
      v8 = *(int *)(v6 + *(_QWORD *)(v29 + 296));
      goto LABEL_35;
    }
    goto LABEL_33;
  }
  v10 = v3 - 1;
  if ( !v10 )
  {
LABEL_33:
    ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v9);
    goto LABEL_34;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v27 = *(_QWORD *)(v5 + 40);
    if ( (*(_DWORD *)(v27 + 232) & 0x10) != 0 && *(char *)(v27 + 19) >= 0 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 128LL);
      v8 = *(int *)(v6 + *(_QWORD *)(v27 + 296) + 4);
      goto LABEL_35;
    }
    ThreadProcessId = PsGetThreadId(*(PETHREAD *)v9);
LABEL_34:
    v8 = (__int64)ThreadProcessId;
    goto LABEL_35;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v17 = *(__int64 **)(*(_QWORD *)(v9 + 432) + 128LL);
    goto LABEL_13;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v17 = *(__int64 **)(*(_QWORD *)(v9 + 432) + 120LL);
    goto LABEL_13;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 2;
    if ( !v15 )
    {
      v6 = gpqForeground;
      v8 = *(_QWORD *)(v9 + 432) == gpqForeground;
      goto LABEL_35;
    }
    v16 = v15 - 1;
    if ( v16 )
    {
      if ( v16 != 1 )
      {
LABEL_2:
        v8 = 0LL;
        goto LABEL_35;
      }
      v17 = *(__int64 **)(v9 + 792);
    }
    else
    {
      v17 = *(__int64 **)(v9 + 784);
    }
LABEL_13:
    if ( v17 )
    {
      v8 = *v17;
      goto LABEL_35;
    }
    goto LABEL_2;
  }
  v6 = *(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFF;
  if ( (_DWORD)v6 == 682 )
  {
    v8 = 1LL;
  }
  else
  {
    v18 = IsHungWindow((const struct tagTHREADINFO **)v5);
    v8 = v18;
    if ( v18 )
    {
      v19 = ShouldProcessHungWindow(v7);
      if ( v19 )
      {
        v20 = *(_QWORD *)v19;
        UserSessionSwitchLeaveCrit(v6);
        EnterCrit(1LL, 0LL);
        LOBYTE(v21) = 1;
        v22 = (struct tagWND *)HMValidateHandleNoSecure(v20, v21);
        if ( v22 )
          ProcessHungWindow(v22);
        UserSessionSwitchLeaveCrit(v23);
        EnterSharedCrit(v25, v24, v26);
      }
    }
  }
LABEL_35:
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
