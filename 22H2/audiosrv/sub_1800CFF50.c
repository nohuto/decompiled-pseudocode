/*
 * XREFs of sub_1800CFF50 @ 0x1800CFF50
 * Callers:
 *     sub_180019EA0 @ 0x180019EA0 (sub_180019EA0.c)
 *     sub_1800CDB10 @ 0x1800CDB10 (sub_1800CDB10.c)
 *     sub_1800CE044 @ 0x1800CE044 (sub_1800CE044.c)
 * Callees:
 *     sub_180005564 @ 0x180005564 (sub_180005564.c)
 *     sub_1800CF4A4 @ 0x1800CF4A4 (sub_1800CF4A4.c)
 */

char __fastcall sub_1800CFF50(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+60h] [rbp+18h] BYREF
  int v7; // [rsp+68h] [rbp+20h] BYREF

  v5[0] = 0LL;
  v3 = sub_1800CF4A4(a1, a2, &v7, &v6, v5);
  if ( v3 )
  {
    sub_180005564(a1, v3, v5[0]);
    LOBYTE(v3) = 1;
  }
  return v3;
}
