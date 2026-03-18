/*
 * XREFs of NtUserSetImeOwnerWindow @ 0x1C0080DD0
 * Callers:
 *     <none>
 * Callees:
 *     zzzEndDeferWinEventNotify @ 0x1C0048944 (zzzEndDeferWinEventNotify.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?ImeCheckTopmost@@YAXPEAUtagWND@@@Z @ 0x1C0080F08 (-ImeCheckTopmost@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0080F68 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x1C00F4EEC (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetImeOwnerWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi
  struct tagWND *v9; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v4;
  if ( v4 )
  {
    if ( (*gpsi & 4) == 0 )
    {
      UserSetLastError(120LL, v5);
      goto LABEL_10;
    }
    v6 = *(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x2FFF;
    if ( (_DWORD)v6 == 681 )
    {
      if ( !a2 )
      {
        v9 = 0LL;
        goto LABEL_6;
      }
      v9 = (struct tagWND *)ValidateHwnd(a2);
      if ( v9 )
      {
LABEL_6:
        ++gdwDeferWinEvent;
        if ( v9 )
          goto LABEL_7;
        v11 = *(_QWORD *)(v8 + 16);
        v9 = *(struct tagWND **)(*(_QWORD *)(v11 + 432) + 120LL);
        if ( !v9 )
          goto LABEL_17;
        if ( v9 == *(struct tagWND **)(v8 + 120) )
          goto LABEL_9;
        v12 = *(_QWORD *)(*((_QWORD *)v9 + 17) + 8LL);
        if ( *(_WORD *)v12 != *(_WORD *)(gpsi + 898LL) && (*(_BYTE *)(v12 + 10) & 1) == 0 && v11 == *((_QWORD *)v9 + 2) )
LABEL_7:
          zzzImeSetOwnerWindow((struct tagWND *)v8, v9);
        else
LABEL_17:
          zzzImeSetFutureOwner((struct tagWND *)v8, *(struct tagWND **)(v8 + 120));
        ImeCheckTopmost((struct tagWND *)v8);
LABEL_9:
        zzzEndDeferWinEventNotify();
        v7 = 1LL;
      }
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
