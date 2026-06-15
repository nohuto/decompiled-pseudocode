/*
 * XREFs of sub_180028F24 @ 0x180028F24
 * Callers:
 *     sub_180029348 @ 0x180029348 (sub_180029348.c)
 *     sub_180119090 @ 0x180119090 (sub_180119090.c)
 *     sub_1801191A4 @ 0x1801191A4 (sub_1801191A4.c)
 * Callees:
 *     sub_180028DAC @ 0x180028DAC (sub_180028DAC.c)
 *     sub_18002903C @ 0x18002903C (sub_18002903C.c)
 *     sub_1800291D4 @ 0x1800291D4 (sub_1800291D4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180028F24(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  int v8; // r14d
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r9d
  int v17; // eax
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+38h] [rbp-38h]
  __int64 v20; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+48h] [rbp-28h]
  __int64 v22; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+58h] [rbp-18h]
  __int64 v24; // [rsp+60h] [rbp-10h] BYREF
  __int64 v25; // [rsp+68h] [rbp-8h]
  void *retaddr; // [rsp+88h] [rbp+18h]

  v8 = a2;
  v24 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  sub_1800291D4(a1, a2, &v24, &v22);
  v20 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  sub_180028DAC(a1, a3, a4, a5, (__int64)&v20, (__int64)&v18);
  if ( (int)v25 > 0 && (v10 = sub_18002903C(v8, v19, v18, 0, 0LL), v11 = v10, v10 < 0) )
  {
    sub_18004BD84(
      retaddr,
      393LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (unsigned int)v10);
    v12 = v20;
  }
  else
  {
    v12 = v20;
    if ( (int)v23 <= 0
      || (a6 != 1 || (v14 = *(_QWORD *)(a1 + 16)) == 0
        ? (v15 = 0LL, v16 = 0)
        : (v15 = *(_QWORD *)(v14 + 56), v16 = *(_DWORD *)(v14 + 64)),
          v17 = sub_18002903C(v8, v21, v20, v16, v15),
          v11 = v17,
          v17 >= 0) )
    {
      v11 = 0;
    }
    else
    {
      sub_18004BD84(
        retaddr,
        400LL,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (unsigned int)v17);
    }
  }
  if ( v18 )
    _o_free(v18);
  if ( v12 )
    _o_free(v12);
  if ( v22 )
    _o_free(v22);
  if ( v24 )
    _o_free(v24);
  return v11;
}
