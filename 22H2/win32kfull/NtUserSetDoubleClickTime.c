/*
 * XREFs of NtUserSetDoubleClickTime @ 0x1C01DBA20
 * Callers:
 *     <none>
 * Callees:
 *     _SetDoubleClickTime @ 0x1C001C0AC (_SetDoubleClickTime.c)
 */

__int64 __fastcall NtUserSetDoubleClickTime(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 0LL);
  v2 = (int)SetDoubleClickTime(a1);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v2;
}
