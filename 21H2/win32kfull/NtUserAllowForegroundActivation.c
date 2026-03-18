/*
 * XREFs of NtUserAllowForegroundActivation @ 0x1C01F1520
 * Callers:
 *     <none>
 * Callees:
 *     _AllowForegroundActivation @ 0x1C01D9DA8 (_AllowForegroundActivation.c)
 */

__int64 NtUserAllowForegroundActivation()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)AllowForegroundActivation();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
