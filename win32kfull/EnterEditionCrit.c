/*
 * XREFs of EnterEditionCrit @ 0x1C00F34C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004A174 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

__int64 __fastcall EnterEditionCrit(__int64 a1)
{
  if ( IS_USERCRIT_OWNED_EXCLUSIVE(a1) )
    return 1LL;
  EnterCrit(1LL, 0LL);
  return 0LL;
}
