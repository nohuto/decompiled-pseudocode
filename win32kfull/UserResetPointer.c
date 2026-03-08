/*
 * XREFs of UserResetPointer @ 0x1C001DE40
 * Callers:
 *     <none>
 * Callees:
 *     SetPointer @ 0x1C00219A0 (SetPointer.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

__int64 UserResetPointer()
{
  char v0; // bl
  __int64 result; // rax
  __int64 v2; // rcx

  if ( IS_USERCRIT_OWNED_AT_ALL() )
  {
    v0 = 0;
  }
  else
  {
    v0 = 1;
    EnterSharedCrit();
  }
  SetPointer(0LL);
  result = SetPointer(1LL);
  if ( v0 )
    return UserSessionSwitchLeaveCrit(v2);
  return result;
}
