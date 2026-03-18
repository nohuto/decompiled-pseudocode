/*
 * XREFs of NtUserDestroyCaret @ 0x1C00C3270
 * Callers:
 *     <none>
 * Callees:
 *     zzzDestroyCaret @ 0x1C00C32AC (zzzDestroyCaret.c)
 */

__int64 NtUserDestroyCaret()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rcx

  EnterCrit(0LL, 0LL);
  v3 = (int)zzzDestroyCaret(v1, v0, v2);
  UserSessionSwitchLeaveCrit(v4);
  return v3;
}
