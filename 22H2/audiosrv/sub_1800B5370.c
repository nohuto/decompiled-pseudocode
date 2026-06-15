/*
 * XREFs of sub_1800B5370 @ 0x1800B5370
 * Callers:
 *     sub_1800B5EF4 @ 0x1800B5EF4 (sub_1800B5EF4.c)
 *     sub_1800DD894 @ 0x1800DD894 (sub_1800DD894.c)
 * Callees:
 *     sub_18004BE0C @ 0x18004BE0C (sub_18004BE0C.c)
 *     sub_1800B4DB8 @ 0x1800B4DB8 (sub_1800B4DB8.c)
 */

__int64 __fastcall sub_1800B5370(int a1, int a2, int a3, __int64 a4, int a5, __int64 a6, int a7)
{
  signed int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // r8d
  int v14; // [rsp+20h] [rbp-38h]

  v10 = sub_1800B4DB8(a1, a2, a3, a4, v14, a6);
  v11 = v10;
  if ( v10 > 0 )
    v12 = (unsigned __int16)v10 | 0x80070000;
  else
    v12 = v10;
  sub_18004BE0C(a1, a2, a3, 0, 0LL, a6, a7, v12, 0LL, 0);
  return v11;
}
