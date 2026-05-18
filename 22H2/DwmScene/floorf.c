/*
 * XREFs of floorf @ 0x18011F790
 * Callers:
 *     sub_1800FE448 @ 0x1800FE448 (sub_1800FE448.c)
 *     sub_1800FEFCC @ 0x1800FEFCC (sub_1800FEFCC.c)
 *     sub_180115178 @ 0x180115178 (sub_180115178.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf(float X)
{
  return __imp_floorf(X);
}
