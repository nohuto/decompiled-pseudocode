/*
 * XREFs of sub_18009EB14 @ 0x18009EB14
 * Callers:
 *     sub_180070F74 @ 0x180070F74 (sub_180070F74.c)
 * Callees:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_18008D6CC @ 0x18008D6CC (sub_18008D6CC.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18011EB10 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall sub_18009EB14(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 *v12; // rcx
  _BYTE *v13; // rbx
  _QWORD v15[4]; // [rsp+30h] [rbp-38h] BYREF

  v15[2] = a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v4 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v5 = operator new(0x48uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *v4 = v5;
  `eh vector constructor iterator'(
    (void *)(a1 + 32),
    0x20uLL,
    0x40uLL,
    (void (*)(void *))unknown_libname_102,
    (void (*)(void *))std::string::_Tidy_deallocate);
  *(_DWORD *)(a1 + 2080) = 0;
  *(_QWORD *)(a1 + 2088) = 0LL;
  *(_QWORD *)(a1 + 2096) = 0LL;
  v6 = operator new(0x48uLL);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  *(_QWORD *)(a1 + 2088) = v6;
  `eh vector constructor iterator'(
    (void *)(a1 + 2104),
    0x20uLL,
    0x200uLL,
    (void (*)(void *))unknown_libname_102,
    (void (*)(void *))std::string::_Tidy_deallocate);
  *(_DWORD *)(a1 + 18488) = 0;
  *(_QWORD *)(a1 + 18512) = 0LL;
  *(_QWORD *)(a1 + 18520) = 0LL;
  sub_18001CDF8((_QWORD *)(a1 + 18496), (__int64)&qword_18020D398);
  *(_QWORD *)(a1 + 18544) = 0LL;
  *(_QWORD *)(a1 + 18552) = 0LL;
  sub_18001CDF8((_QWORD *)(a1 + 18528), (__int64)&qword_18020D3D8);
  *(_QWORD *)(a1 + 18560) = 0LL;
  *(_QWORD *)(a1 + 18568) = 0LL;
  v7 = operator new(0x50uLL);
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 12) = 257;
  *(_QWORD *)(a1 + 18560) = v7;
  *(_QWORD *)(a1 + 18576) = 0LL;
  *(_QWORD *)(a1 + 18584) = 0LL;
  v8 = operator new(0x68uLL);
  *v8 = v8;
  v8[1] = v8;
  v8[2] = v8;
  *((_WORD *)v8 + 12) = 257;
  *(_QWORD *)(a1 + 18576) = v8;
  *(_QWORD *)(a1 + 18592) = 0LL;
  *(_QWORD *)(a1 + 18600) = 0LL;
  v9 = operator new(0x50uLL);
  *v9 = v9;
  v9[1] = v9;
  v9[2] = v9;
  *((_WORD *)v9 + 12) = 257;
  *(_QWORD *)(a1 + 18592) = v9;
  v15[0] = a1 + 18608;
  *(_QWORD *)(a1 + 18608) = 0LL;
  *(_QWORD *)(a1 + 18616) = 0LL;
  v10 = operator new(0x38uLL);
  *v10 = v10;
  v10[1] = v10;
  v10[2] = v10;
  *((_WORD *)v10 + 12) = 257;
  *(_QWORD *)(a1 + 18608) = v10;
  *(_BYTE *)(a1 + 18624) = 1;
  *(_QWORD *)(a1 + 18632) = 0LL;
  *(_QWORD *)(a1 + 18640) = 0LL;
  *(_QWORD *)(a1 + 18648) = 0LL;
  *(_QWORD *)(a1 + 18656) = 0LL;
  LODWORD(v15[0]) = 3;
  *(_QWORD *)(a1 + 18664) = 0LL;
  *(_QWORD *)(a1 + 18672) = 0LL;
  *(_QWORD *)(a1 + 18680) = 0LL;
  sub_18008D6CC((_QWORD *)(a1 + 18664), v15, (__int64)v15 + 4);
  *(_QWORD *)(a1 + 18688) = a2;
  v12 = (__int64 *)(a1 + 18456);
  if ( *(_QWORD *)(a1 + 18480) < 9uLL )
  {
    LOBYTE(v11) = 0;
    sub_18000FB34(v12, 9uLL, v11, "<invalid>");
  }
  else
  {
    v13 = (_BYTE *)(a1 + 18456);
    if ( *(_QWORD *)(a1 + 18480) >= 0x10uLL )
      v13 = (_BYTE *)*v12;
    *(_QWORD *)(a1 + 18472) = 9LL;
    memmove(v13, "<invalid>", 9uLL);
    v13[9] = 0;
  }
  return a1;
}
