/*
 * XREFs of floorf @ 0x180074403
 * Callers:
 *     sub_1800BF670 @ 0x1800BF670 (sub_1800BF670.c)
 *     sub_1800C2150 @ 0x1800C2150 (sub_1800C2150.c)
 *     sub_1800C2280 @ 0x1800C2280 (sub_1800C2280.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf(float X)
{
  return __imp_floorf(X);
}
