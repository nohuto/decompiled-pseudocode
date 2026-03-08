/*
 * XREFs of NtUserRemoteNotify @ 0x1C00F25B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteNotify @ 0x1C00F25F0 (xxxRemoteNotify.c)
 */

__int64 __fastcall NtUserRemoteNotify(__int64 a1)
{
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  LODWORD(a1) = xxxRemoteNotify(a1);
  UserSessionSwitchLeaveCrit(v2);
  return (unsigned int)a1;
}
