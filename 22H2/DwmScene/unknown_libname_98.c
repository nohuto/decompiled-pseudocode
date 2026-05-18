/*
 * XREFs of unknown_libname_98 @ 0x180010B7C
 * Callers:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_18002C1D0 @ 0x18002C1D0 (sub_18002C1D0.c)
 *     sub_180078BF4 @ 0x180078BF4 (sub_180078BF4.c)
 *     sub_180079020 @ 0x180079020 (sub_180079020.c)
 *     sub_1800A2EB8 @ 0x1800A2EB8 (sub_1800A2EB8.c)
 *     sub_1800BB10C @ 0x1800BB10C (sub_1800BB10C.c)
 *     sub_1800CBA98 @ 0x1800CBA98 (sub_1800CBA98.c)
 *     sub_18011584C @ 0x18011584C (sub_18011584C.c)
 *     sub_180115AEC @ 0x180115AEC (sub_180115AEC.c)
 *     sub_1801160F8 @ 0x1801160F8 (sub_1801160F8.c)
 *     sub_180125B82 @ 0x180125B82 (sub_180125B82.c)
 * Callees:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 *__fastcall unknown_libname_98(__int64 *a1, _BYTE *a2)
{
  __int64 *v2; // rbx
  size_t v3; // rdi
  void *v4; // rsi

  v2 = a1;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( v3 > a1[3] )
    return sub_18000FB34(a1, v3, 0LL, a2);
  v4 = a1;
  if ( (unsigned __int64)a1[3] >= 0x10 )
    v4 = (void *)*a1;
  a1[2] = v3;
  memmove(v4, a2, v3);
  *((_BYTE *)v4 + v3) = 0;
  return v2;
}
