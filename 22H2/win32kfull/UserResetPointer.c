/*
 * XREFs of UserResetPointer @ 0x1C005B590
 * Callers:
 *     <none>
 * Callees:
 *     SetPointer @ 0x1C005CFA0 (SetPointer.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

__int64 UserResetPointer()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  char v3; // bl
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  if ( IS_USERCRIT_OWNED_AT_ALL() )
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
    return UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return result;
}
