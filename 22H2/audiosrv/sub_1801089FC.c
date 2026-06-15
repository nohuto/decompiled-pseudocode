/*
 * XREFs of sub_1801089FC @ 0x1801089FC
 * Callers:
 *     sub_180105D90 @ 0x180105D90 (sub_180105D90.c)
 * Callees:
 *     sub_180105BEC @ 0x180105BEC (sub_180105BEC.c)
 *     sub_1801062A0 @ 0x1801062A0 (sub_1801062A0.c)
 *     sub_180106B20 @ 0x180106B20 (sub_180106B20.c)
 */

__int64 __fastcall sub_1801089FC(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v9; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v6 = sub_180106B20(a1, a2, (int *)&v9, (unsigned int *)&v11, v10);
  v7 = v6;
  if ( v6 )
  {
    sub_180105BEC(v6 + 8, a3);
  }
  else
  {
    v7 = sub_1801062A0(a1, (__int64)a2, v9, v11);
    v11 = v7;
    sub_180105BEC(v7 + 8, a3);
  }
  return v7;
}
