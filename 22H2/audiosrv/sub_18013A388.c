/*
 * XREFs of sub_18013A388 @ 0x18013A388
 * Callers:
 *     sub_180139164 @ 0x180139164 (sub_180139164.c)
 *     sub_18013B62C @ 0x18013B62C (sub_18013B62C.c)
 * Callees:
 *     sub_1801394A4 @ 0x1801394A4 (sub_1801394A4.c)
 *     sub_180139698 @ 0x180139698 (sub_180139698.c)
 */

__int64 __fastcall sub_18013A388(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v6; // r9
  unsigned int v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v6 = sub_180139698(a1, a2, &v8, (unsigned int *)&v10, &v9);
  if ( !v6 )
  {
    v6 = sub_1801394A4(a1, (__int64)a2, v8, v10);
    v10 = v6;
  }
  *(_QWORD *)(v6 + 8) = *a3;
  return v6;
}
