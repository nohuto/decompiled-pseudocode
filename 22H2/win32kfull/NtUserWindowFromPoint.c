/*
 * XREFs of NtUserWindowFromPoint @ 0x1C00C0E20
 * Callers:
 *     <none>
 * Callees:
 *     xxxWindowFromPoint @ 0x1C00C0E6C (xxxWindowFromPoint.c)
 */

__int64 __fastcall NtUserWindowFromPoint(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx

  EnterCrit(0LL, 1LL);
  v2 = (__int64 *)xxxWindowFromPoint(a1);
  v4 = 0LL;
  if ( v2 )
    v4 = *v2;
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
