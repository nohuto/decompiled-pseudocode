/*
 * XREFs of NtUserLockWindowUpdate @ 0x1C0012A90
 * Callers:
 *     <none>
 * Callees:
 *     zzzLockWindowUpdate2 @ 0x1C00E51C8 (zzzLockWindowUpdate2.c)
 */

__int64 __fastcall NtUserLockWindowUpdate(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rcx

  EnterCrit(0LL, 0LL);
  v2 = 0;
  if ( !a1 )
  {
    v3 = 0LL;
    goto LABEL_3;
  }
  v3 = ValidateHwnd(a1);
  if ( v3 )
LABEL_3:
    v2 = zzzLockWindowUpdate2(v3, 0LL);
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
