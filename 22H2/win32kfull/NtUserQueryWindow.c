/*
 * XREFs of NtUserQueryWindow @ 0x1C0092D80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x1C0092F94 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F3C68 (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01F3E38 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

__int64 __fastcall NtUserQueryWindow(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  struct tagWND *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagWND *v10; // rbx
  __int64 v11; // rdi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  __int64 *v19; // rdi
  bool v20; // al
  struct tagWND *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rdx
  struct tagWND *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  HANDLE ThreadProcessId; // rax

  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  v5 = (struct tagWND *)ValidateHwnd(a1);
  v10 = v5;
  if ( !v5 )
    goto LABEL_2;
  v6 = *((_QWORD *)v5 + 2);
  if ( !v3 )
  {
    v8 = *((_QWORD *)v5 + 5);
    if ( (*(_DWORD *)(v8 + 232) & 0x10) != 0 && *(char *)(v8 + 19) >= 0 )
    {
      v7 = *(_QWORD *)(*((_QWORD *)v5 + 3) + 136LL);
      v11 = *(int *)(v7 + *(_QWORD *)(v8 + 296));
      goto LABEL_35;
    }
    goto LABEL_33;
  }
  v12 = v3 - 1;
  if ( !v12 )
  {
LABEL_33:
    ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v6);
    goto LABEL_34;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v8 = *((_QWORD *)v5 + 5);
    if ( (*(_DWORD *)(v8 + 232) & 0x10) != 0 && *(char *)(v8 + 19) >= 0 )
    {
      v7 = *(_QWORD *)(*((_QWORD *)v5 + 3) + 136LL);
      v11 = *(int *)(v7 + *(_QWORD *)(v8 + 296) + 4);
      goto LABEL_35;
    }
    ThreadProcessId = PsGetThreadId(*(PETHREAD *)v6);
LABEL_34:
    v11 = (__int64)ThreadProcessId;
    goto LABEL_35;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v19 = *(__int64 **)(*(_QWORD *)(v6 + 432) + 128LL);
    goto LABEL_13;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v19 = *(__int64 **)(*(_QWORD *)(v6 + 432) + 120LL);
    goto LABEL_13;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    v17 = v16 - 2;
    if ( !v17 )
    {
      v7 = gpqForeground;
      v11 = *(_QWORD *)(v6 + 432) == gpqForeground;
      goto LABEL_35;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
      if ( v18 != 1 )
      {
LABEL_2:
        v11 = 0LL;
        goto LABEL_35;
      }
      v19 = *(__int64 **)(v6 + 792);
    }
    else
    {
      v19 = *(__int64 **)(v6 + 784);
    }
LABEL_13:
    if ( v19 )
    {
      v11 = *v19;
      goto LABEL_35;
    }
    goto LABEL_2;
  }
  v7 = *(_WORD *)(*((_QWORD *)v5 + 5) + 42LL) & 0x2FFF;
  if ( (_DWORD)v7 == 682 )
  {
    v11 = 1LL;
  }
  else
  {
    v20 = IsHungWindow(v5);
    v11 = v20;
    if ( v20 )
    {
      v21 = ShouldProcessHungWindow(v10);
      if ( v21 )
      {
        v22 = *(_QWORD *)v21;
        UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
        EnterCrit(1LL, 0LL);
        LOBYTE(v23) = 1;
        v24 = (struct tagWND *)HMValidateHandleNoSecure(v22, v23);
        if ( v24 )
          ProcessHungWindow(v24);
        UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
        EnterSharedCrit(v30, v29, v31);
      }
    }
  }
LABEL_35:
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v11;
}
