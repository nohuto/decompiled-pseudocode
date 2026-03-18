/*
 * XREFs of NtUserFrostCrashedWindow @ 0x1C01F35B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxFrostCrashedWindow @ 0x1C0211758 (xxxFrostCrashedWindow.c)
 */

__int64 __fastcall NtUserFrostCrashedWindow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdx

  EnterSharedCrit(a1, a2, a3);
  v5 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v5;
  if ( v5 )
  {
    if ( !a2 || ValidateHwnd(a2) )
      v7 = xxxFrostCrashedWindow(v8, a2);
    else
      UserSetLastError(1400LL, v9);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
