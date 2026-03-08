/*
 * XREFs of NtUserHandleSystemThreadCreationFailure @ 0x1C01D5A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserHandleSystemThreadCreationFailure()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)HandleSystemThreadCreationFailure();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
