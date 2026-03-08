/*
 * XREFs of NtUserChangeWindowMessageFilter @ 0x1C00CB760
 * Callers:
 *     <none>
 * Callees:
 *     _ChangeWindowMessageFilter @ 0x1C00CB7AC (_ChangeWindowMessageFilter.c)
 */

__int64 __fastcall NtUserChangeWindowMessageFilter(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)ChangeWindowMessageFilter(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
