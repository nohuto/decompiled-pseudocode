/*
 * XREFs of sub_180006430 @ 0x180006430
 * Callers:
 *     sub_180005564 @ 0x180005564 (sub_180005564.c)
 *     sub_1800CFC78 @ 0x1800CFC78 (sub_1800CFC78.c)
 * Callees:
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_18005248C @ 0x18005248C (sub_18005248C.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800CF858 @ 0x1800CF858 (sub_1800CF858.c)
 *     sub_1800CFB48 @ 0x1800CFB48 (sub_1800CFB48.c)
 */

__int64 __fastcall sub_180006430(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdx
  __int64 result; // rax
  unsigned int v6; // eax

  if ( !a2 )
    sub_1800B8610(2147500037LL);
  sub_180006A30(a2[9] - 24LL);
  sub_180006A30(a2[5] - 24LL);
  sub_180006A30(a2[2] - 24LL);
  sub_180006A30(a2[1] - 24LL);
  sub_180006A30(*a2 - 24LL);
  a2[11] = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 8) - 1LL;
  *(_QWORD *)(a1 + 64) = a2;
  result = v4;
  *(_QWORD *)(a1 + 8) = v4;
  if ( v4 < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
  {
    v6 = sub_1800CF858(a1);
    sub_1800CFB48(a1, v6);
    result = *(_QWORD *)(a1 + 8);
  }
  if ( !result )
    return sub_18005248C(a1);
  return result;
}
