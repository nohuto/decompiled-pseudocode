/*
 * XREFs of NtUserSetLayeredWindowAttributes @ 0x1C00BBD10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     WindowHasShadow @ 0x1C00BBE54 (WindowHasShadow.c)
 *     _SetLayeredWindowAttributes @ 0x1C00BD1E8 (_SetLayeredWindowAttributes.c)
 *     UserSetLastStatus @ 0x1C00EC46C (UserSetLastStatus.c)
 *     zzzUpdateShadowAlpha @ 0x1C013DE6C (zzzUpdateShadowAlpha.c)
 */

__int64 __fastcall NtUserSetLayeredWindowAttributes(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v6;
    HMLockObject(v6);
    if ( (a4 & 0xFFFFFFFC) != 0
      || (unsigned int)IsWindowDesktopComposed(v9) && (*(_DWORD *)(*(_QWORD *)(v9 + 40) + 232LL) & 0x20) != 0 )
    {
      UserSetLastError(87LL, v10, v11);
    }
    else
    {
      v12 = SetLayeredWindowAttributes((struct tagWND *)v9);
      if ( v12 >= 0 )
      {
        v14 = 1LL;
        if ( (a4 & 2) != 0 && (unsigned int)WindowHasShadow(v9) )
          zzzUpdateShadowAlpha(v9);
        goto LABEL_9;
      }
      UserSetLastStatus(v12);
    }
    v14 = 0LL;
LABEL_9:
    ThreadUnlock1(v13);
    v8 = v14;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
