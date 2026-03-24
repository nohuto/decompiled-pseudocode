/*
 * XREFs of NtUserInheritWindowMonitor @ 0x1C01597C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     xxxInheritWindowMonitor @ 0x1C006C7D8 (xxxInheritWindowMonitor.c)
 */

__int64 __fastcall NtUserInheritWindowMonitor(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v5 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = v6;
  if ( v6 )
  {
    v7 = (*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v7 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v14;
      *((_QWORD *)&v14 + 1) = v6;
      HMLockObject(v6);
      if ( PsGetCurrentProcessWin32Process(v9) == *(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL) )
      {
        if ( !a2 || (v5 = (__int64 *)ValidateHwnd(a2)) != 0LL )
          v2 = xxxInheritWindowMonitor((struct tagWND *)v8, v5, 1);
      }
      else
      {
        UserSetLastError(5LL, v10, v11);
      }
      ThreadUnlock1(v12);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v2;
}
