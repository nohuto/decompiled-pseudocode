/*
 * XREFs of UserIsUserCritSecIn @ 0x1C00BCA90
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C004E3E0 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

_BOOL8 __fastcall UserIsUserCritSecIn(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return IS_USERCRIT_OWNED_AT_ALL(a1, a2, a3, a4);
}
