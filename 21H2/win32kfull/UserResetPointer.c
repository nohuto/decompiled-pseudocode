/*
 * XREFs of UserResetPointer @ 0x1C0029280
 * Callers:
 *     <none>
 * Callees:
 *     SetPointer @ 0x1C002A4C0 (SetPointer.c)
 */

__int64 UserResetPointer()
{
  char v0; // bl
  __int64 result; // rax
  __int64 v2; // rcx

  if ( ExIsResourceAcquiredSharedLite(gpresUser) )
  {
    v0 = 0;
  }
  else
  {
    v0 = 1;
    EnterSharedCrit(0LL, 1LL);
  }
  SetPointer(0LL);
  result = SetPointer(1LL);
  if ( v0 )
    return UserSessionSwitchLeaveCrit(v2);
  return result;
}
