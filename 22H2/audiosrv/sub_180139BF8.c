/*
 * XREFs of sub_180139BF8 @ 0x180139BF8
 * Callers:
 *     sub_180139880 @ 0x180139880 (sub_180139880.c)
 *     sub_18013A54C @ 0x18013A54C (sub_18013A54C.c)
 *     sub_18013B62C @ 0x18013B62C (sub_18013B62C.c)
 * Callees:
 *     sub_180139698 @ 0x180139698 (sub_180139698.c)
 */

char __fastcall sub_180139BF8(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v4; // rax
  unsigned int v6; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+20h] BYREF

  v4 = sub_180139698(a1, a2, &v6, &v8, &v7);
  if ( v4 )
  {
    *a3 = *(_QWORD *)(v4 + 8);
    LOBYTE(v4) = 1;
  }
  return v4;
}
