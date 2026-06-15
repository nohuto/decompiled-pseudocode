/*
 * XREFs of sub_180139C34 @ 0x180139C34
 * Callers:
 *     sub_18013A5F8 @ 0x18013A5F8 (sub_18013A5F8.c)
 *     sub_18013B2C8 @ 0x18013B2C8 (sub_18013B2C8.c)
 *     sub_18013B62C @ 0x18013B62C (sub_18013B62C.c)
 * Callees:
 *     sub_180139790 @ 0x180139790 (sub_180139790.c)
 */

char __fastcall sub_180139C34(__int64 a1, unsigned __int16 *a2, _DWORD *a3)
{
  unsigned __int16 *v4; // rax
  int v6; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int16 *v7; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+20h] BYREF

  v4 = sub_180139790(a1, a2, &v6, &v8, &v7);
  if ( v4 )
  {
    *a3 = *((_DWORD *)v4 + 2);
    LOBYTE(v4) = 1;
  }
  return (char)v4;
}
