/*
 * XREFs of UserIsUserCritSecInShared @ 0x1C00C4D90
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x1C0056F4C (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 */

__int64 __fastcall UserIsUserCritSecInShared(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (unsigned __int8)IS_USERCRIT_OWNED_SHAREDONLY(a1, a2, a3, a4);
}
