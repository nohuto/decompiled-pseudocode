/*
 * XREFs of sub_18013A430 @ 0x18013A430
 * Callers:
 *     sub_180139250 @ 0x180139250 (sub_180139250.c)
 *     sub_18013B2C8 @ 0x18013B2C8 (sub_18013B2C8.c)
 * Callees:
 *     sub_180139510 @ 0x180139510 (sub_180139510.c)
 *     sub_180139790 @ 0x180139790 (sub_180139790.c)
 */

__int64 __fastcall sub_18013A430(__int64 a1, unsigned __int16 *a2, _DWORD *a3)
{
  __int64 v6; // r9
  unsigned int v8; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int16 *v9; // [rsp+38h] [rbp-10h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v6 = (__int64)sub_180139790(a1, a2, (int *)&v8, (unsigned int *)&v10, &v9);
  if ( !v6 )
  {
    v6 = sub_180139510(a1, (__int64)a2, v8, v10);
    v10 = v6;
  }
  *(_DWORD *)(v6 + 8) = *a3;
  return v6;
}
