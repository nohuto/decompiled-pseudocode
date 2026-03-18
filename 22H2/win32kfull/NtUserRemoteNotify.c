/*
 * XREFs of NtUserRemoteNotify @ 0x1C00BA780
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteNotify @ 0x1C00BA7C0 (xxxRemoteNotify.c)
 */

__int64 __fastcall NtUserRemoteNotify(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  EnterCrit(0LL, 0LL);
  LODWORD(a1) = xxxRemoteNotify(a1);
  UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  return (unsigned int)a1;
}
