/*
 * XREFs of UserResetPointer @ 0x1C011F200
 * Callers:
 *     <none>
 * Callees:
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C00541E4 (IS_USERCRIT_OWNED_SHARED.c)
 *     SetPointer @ 0x1C00B2D10 (SetPointer.c)
 */

__int64 UserResetPointer()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  char v3; // bl
  __int64 result; // rax
  __int64 v5; // rcx

  if ( IS_USERCRIT_OWNED_SHARED() )
  {
    v3 = 0;
  }
  else
  {
    v3 = 1;
    EnterSharedCrit(v1, v0, v2);
  }
  SetPointer(0LL);
  result = SetPointer(1LL);
  if ( v3 )
    return UserSessionSwitchLeaveCrit(v5);
  return result;
}
