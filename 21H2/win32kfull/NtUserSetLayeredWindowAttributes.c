/*
 * XREFs of NtUserSetLayeredWindowAttributes @ 0x1C001F230
 * Callers:
 *     <none>
 * Callees:
 *     WindowHasShadow @ 0x1C001F374 (WindowHasShadow.c)
 *     _SetLayeredWindowAttributes @ 0x1C0020688 (_SetLayeredWindowAttributes.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     UserSetLastStatus @ 0x1C011A880 (UserSetLastStatus.c)
 *     zzzUpdateShadowAlpha @ 0x1C012E250 (zzzUpdateShadowAlpha.c)
 */

__int64 __fastcall NtUserSetLayeredWindowAttributes(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  struct tagWND *v9; // rsi
  NTSTATUS v10; // eax
  __int64 v11; // rdi
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = (struct tagWND *)v6;
  if ( v6 )
  {
    *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v13;
    *((_QWORD *)&v13 + 1) = v6;
    HMLockObject(v6);
    if ( (a4 & 0xFFFFFFFC) != 0
      || (unsigned int)IsWindowDesktopComposed(v9) && (*(_DWORD *)(*((_QWORD *)v9 + 5) + 232LL) & 2) != 0 )
    {
      UserSetLastError(87LL);
    }
    else
    {
      v10 = SetLayeredWindowAttributes(v9);
      if ( v10 >= 0 )
      {
        v11 = 1LL;
        if ( (a4 & 2) != 0 && (unsigned int)WindowHasShadow(v9) )
          zzzUpdateShadowAlpha(v9);
        goto LABEL_9;
      }
      UserSetLastStatus(v10);
    }
    v11 = 0LL;
LABEL_9:
    ThreadUnlock1();
    v8 = v11;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
