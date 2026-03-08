/*
 * XREFs of NtUserSetImeOwnerWindow @ 0x1C0026AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ImeCheckTopmost@@YAXPEAUtagWND@@@Z @ 0x1C0026C08 (-ImeCheckTopmost@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0026E94 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     zzzEndDeferWinEventNotify @ 0x1C002EF28 (zzzEndDeferWinEventNotify.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x1C009EC08 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetImeOwnerWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  struct tagWND *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    if ( (*gpsi & 4) == 0 )
    {
      UserSetLastError(120LL);
      goto LABEL_19;
    }
    v5 = *(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x2FFF;
    if ( (_DWORD)v5 != 681 )
      goto LABEL_19;
    if ( a2 )
    {
      v8 = (struct tagWND *)ValidateHwnd(a2);
      if ( !v8 )
        goto LABEL_19;
    }
    else
    {
      v8 = 0LL;
    }
    ++gdwDeferWinEvent;
    if ( v8 )
      goto LABEL_15;
    v9 = *(_QWORD *)(v7 + 16);
    v8 = *(struct tagWND **)(*(_QWORD *)(v9 + 432) + 128LL);
    if ( !v8 )
      goto LABEL_16;
    if ( v8 == *(struct tagWND **)(v7 + 120) )
    {
LABEL_18:
      zzzEndDeferWinEventNotify(v5);
      v6 = 1LL;
      goto LABEL_19;
    }
    v10 = *(_QWORD *)(*((_QWORD *)v8 + 17) + 8LL);
    if ( *(_WORD *)v10 != *(_WORD *)(gpsi + 898LL) && (*(_BYTE *)(v10 + 10) & 1) == 0 && v9 == *((_QWORD *)v8 + 2) )
LABEL_15:
      zzzImeSetOwnerWindow((struct tagWND *)v7, v8);
    else
LABEL_16:
      zzzImeSetFutureOwner((struct tagWND *)v7, *(struct tagWND **)(v7 + 120));
    ImeCheckTopmost((struct tagWND *)v7);
    goto LABEL_18;
  }
LABEL_19:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
