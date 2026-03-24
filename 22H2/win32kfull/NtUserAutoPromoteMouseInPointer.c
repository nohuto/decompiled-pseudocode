/*
 * XREFs of NtUserAutoPromoteMouseInPointer @ 0x1C01F6680
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     IsMiPEnabledForThread @ 0x1C00C1220 (IsMiPEnabledForThread.c)
 *     SetMiPPromotion @ 0x1C01E1C0C (SetMiPPromotion.c)
 */

__int64 __fastcall NtUserAutoPromoteMouseInPointer(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _DWORD *v6; // rax
  __int64 v7; // rcx

  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  if ( IsMiPEnabledForThread(gptiCurrent) && (v6 = *(_DWORD **)(v4 + 1280)) != 0LL && (*v6 & 1) != 0 )
  {
    SetMiPPromotion(v4, a1);
  }
  else
  {
    UserSetLastError(5LL, v3, v5);
    v2 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v2;
}
