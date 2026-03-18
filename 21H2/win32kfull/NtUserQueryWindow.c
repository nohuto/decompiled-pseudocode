/*
 * XREFs of NtUserQueryWindow @ 0x1C00E1170
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     IsHungWindow @ 0x1C0076670 (IsHungWindow.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00E1344 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?ProcessHungWindow@@YAHPEAUtagWND@@@Z @ 0x1C0144840 (-ProcessHungWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserQueryWindow(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  struct tagWND *v5; // rax
  __int64 v6; // rcx
  struct tagWND *v7; // rbx
  __int64 v8; // rdx
  int v9; // edi
  int v10; // edi
  __int64 v11; // r8
  HANDLE ThreadProcessId; // rax
  __int64 v13; // rdi
  __int64 v15; // r8
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  __int64 *v21; // rdi
  int v22; // eax
  struct tagWND *v23; // rax
  __int64 v24; // rbx
  struct tagWND *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8

  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  v5 = (struct tagWND *)ValidateHwnd(a1);
  v7 = v5;
  if ( !v5 )
    goto LABEL_29;
  v8 = *((_QWORD *)v5 + 2);
  if ( !v3 )
  {
    v15 = *((_QWORD *)v5 + 5);
    if ( (*(_DWORD *)(v15 + 232) & 0x10) != 0 && *(char *)(v15 + 19) >= 0 )
    {
      v6 = *(_QWORD *)(*((_QWORD *)v5 + 3) + 128LL);
      v13 = *(int *)(v6 + *(_QWORD *)(v15 + 296));
      goto LABEL_8;
    }
    goto LABEL_10;
  }
  v9 = v3 - 1;
  if ( !v9 )
  {
LABEL_10:
    ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v8);
LABEL_7:
    v13 = (__int64)ThreadProcessId;
    goto LABEL_8;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v11 = *((_QWORD *)v5 + 5);
    if ( (*(_DWORD *)(v11 + 232) & 0x10) != 0 && *(char *)(v11 + 19) >= 0 )
    {
      v6 = *(_QWORD *)(*((_QWORD *)v5 + 3) + 128LL);
      v13 = *(int *)(v6 + *(_QWORD *)(v11 + 296) + 4);
      goto LABEL_8;
    }
    ThreadProcessId = PsGetThreadId(*(PETHREAD *)v8);
    goto LABEL_7;
  }
  v16 = v10 - 1;
  if ( !v16 )
  {
    v21 = *(__int64 **)(*(_QWORD *)(v8 + 432) + 120LL);
    goto LABEL_17;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v21 = *(__int64 **)(*(_QWORD *)(v8 + 432) + 112LL);
    goto LABEL_17;
  }
  v18 = v17 - 1;
  if ( v18 )
  {
    v19 = v18 - 2;
    if ( !v19 )
    {
      v6 = gpqForeground;
      v13 = *(_QWORD *)(v8 + 432) == gpqForeground;
      goto LABEL_8;
    }
    v20 = v19 - 1;
    if ( v20 )
    {
      if ( v20 != 1 )
        goto LABEL_29;
      v21 = *(__int64 **)(v8 + 792);
    }
    else
    {
      v21 = *(__int64 **)(v8 + 784);
    }
LABEL_17:
    if ( v21 )
    {
      v13 = *v21;
      goto LABEL_8;
    }
LABEL_29:
    v13 = 0LL;
    goto LABEL_8;
  }
  v6 = *(_WORD *)(*((_QWORD *)v5 + 5) + 42LL) & 0x2FFF;
  if ( (_DWORD)v6 == 682 )
  {
    v13 = 1LL;
  }
  else
  {
    v22 = IsHungWindow(v5);
    v13 = v22;
    if ( v22 )
    {
      v23 = ShouldProcessHungWindow(v7);
      if ( v23 )
      {
        v24 = *(_QWORD *)v23;
        UserSessionSwitchLeaveCrit(v6);
        EnterCrit(1LL, 0LL);
        v25 = (struct tagWND *)HMValidateHandleNoSecure(v24, 1);
        if ( v25 )
          ProcessHungWindow(v25);
        UserSessionSwitchLeaveCrit(v26);
        EnterSharedCrit(v28, v27, v29);
      }
    }
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v6);
  return v13;
}
