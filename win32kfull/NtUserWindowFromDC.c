/*
 * XREFs of NtUserWindowFromDC @ 0x1C00D4E10
 * Callers:
 *     <none>
 * Callees:
 *     ?PwndFromHDC@@YAPEBUtagWND@@QEAUHDC__@@@Z @ 0x1C00D4E94 (-PwndFromHDC@@YAPEBUtagWND@@QEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtUserWindowFromDC(HDC a1, __int64 a2, __int64 a3)
{
  const struct tagWND *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx

  EnterSharedCrit(a1, a2, a3);
  GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
  v4 = PwndFromHDC(a1);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v6 = 0LL;
  if ( v4 )
    v6 = *(_QWORD *)v4;
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
