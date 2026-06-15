/*
 * XREFs of sub_1800CD5C4 @ 0x1800CD5C4
 * Callers:
 *     sub_18002C2A0 @ 0x18002C2A0 (sub_18002C2A0.c)
 *     sub_18006F0C0 @ 0x18006F0C0 (sub_18006F0C0.c)
 *     sub_18006F250 @ 0x18006F250 (sub_18006F250.c)
 *     sub_1800E75B4 @ 0x1800E75B4 (sub_1800E75B4.c)
 *     sub_1800E7930 @ 0x1800E7930 (sub_1800E7930.c)
 *     sub_1800E7E80 @ 0x1800E7E80 (sub_1800E7E80.c)
 *     sub_1800E8030 @ 0x1800E8030 (sub_1800E8030.c)
 *     sub_1800E8240 @ 0x1800E8240 (sub_1800E8240.c)
 *     sub_1800E8450 @ 0x1800E8450 (sub_1800E8450.c)
 *     sub_1800E87A0 @ 0x1800E87A0 (sub_1800E87A0.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     sub_1800CD72C @ 0x1800CD72C (sub_1800CD72C.c)
 *     sub_1800D021C @ 0x1800D021C (sub_1800D021C.c)
 */

__int64 __fastcall sub_1800CD5C4(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  SIZE_T v11; // rcx
  __int64 *v12; // rsi
  __int64 *v13; // r12
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 v16; // rcx

  v5 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) >> 3;
  v9 = v8 >> 1;
  if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v6 + 1;
  }
  else
  {
    v10 = v6 + 1;
  }
  v11 = 8 * v10;
  if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
    v11 = -1LL;
  v12 = sub_180008EAC(v11);
  v13 = &v12[v5];
  *v13 = *a3;
  sub_180047458(v13);
  v14 = a1[1];
  v15 = v12;
  v16 = *a1;
  if ( a2 != v14 )
  {
    sub_1800CD72C(v16, a2, v12);
    v15 = v13 + 1;
    v14 = a1[1];
    v16 = a2;
  }
  sub_1800CD72C(v16, v14, v15);
  sub_1800D021C(a1, v12, v7, v10, v12);
  return *a1 + 8 * v5;
}
