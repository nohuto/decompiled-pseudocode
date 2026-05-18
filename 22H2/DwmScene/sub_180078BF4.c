/*
 * XREFs of sub_180078BF4 @ 0x180078BF4
 * Callers:
 *     sub_1800165CC @ 0x1800165CC (sub_1800165CC.c)
 * Callees:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     unknown_libname_98 @ 0x180010B7C (unknown_libname_98.c)
 *     sub_1800206C4 @ 0x1800206C4 (sub_1800206C4.c)
 *     sub_180064680 @ 0x180064680 (sub_180064680.c)
 *     sub_18006CF10 @ 0x18006CF10 (sub_18006CF10.c)
 *     sub_180071490 @ 0x180071490 (sub_180071490.c)
 *     sub_18011BFD0 @ 0x18011BFD0 (sub_18011BFD0.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18011E0DC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall sub_180078BF4(__int64 a1, __int64 a2)
{
  void **v3; // r9
  void **v4; // rbx
  void **v5; // rbx
  size_t v6; // rbx
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __m128i v11; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v12; // [rsp+40h] [rbp-C0h]
  __int128 v13; // [rsp+50h] [rbp-B0h] BYREF
  __m128i v14; // [rsp+60h] [rbp-A0h]
  __int64 v15[2]; // [rsp+70h] [rbp-90h] BYREF
  __m128i si128; // [rsp+80h] [rbp-80h]
  __int128 v17; // [rsp+90h] [rbp-70h]
  __m128i v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+B0h] [rbp-50h] BYREF
  __m128i v20; // [rsp+C0h] [rbp-40h]
  __m128i v21; // [rsp+D0h] [rbp-30h]
  __m128i v22; // [rsp+E0h] [rbp-20h]
  __int128 v23; // [rsp+F0h] [rbp-10h] BYREF

  if ( *(_QWORD *)(a1 + 480) )
  {
    sub_18011BFD0();
    v23 = 0LL;
    sub_1800206C4((__int64 *)&v13, 1);
    si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
    LOBYTE(v15[0]) = 0;
    unknown_libname_98(v15, "Integer Result Code");
    v17 = v13;
    v18 = v14;
    v3 = &Src;
    v4 = &Src;
    if ( *((_QWORD *)&xmmword_1802085F8 + 1) >= 0x10uLL )
      v4 = (void **)Src;
    v5 = (void **)((char *)v4 + xmmword_1802085F8);
    if ( *((_QWORD *)&xmmword_1802085F8 + 1) >= 0x10uLL )
      v3 = (void **)Src;
    v12 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
    v11.m128i_i8[0] = 0;
    if ( v3 != v5 )
    {
      v6 = (char *)v5 - (char *)v3;
      if ( v6 > 0xF )
      {
        sub_18000FB34(v11.m128i_i64, v6, 0LL, v3);
      }
      else
      {
        v12.m128i_i64[0] = v6;
        memmove(&v11, v3, v6);
        v11.m128i_i8[v6] = 0;
      }
    }
    v20 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
    LOBYTE(v19) = 0;
    unknown_libname_98(&v19, "Hardware Version");
    v21 = v11;
    v22 = v12;
    v11.m128i_i64[0] = (__int64)v15;
    v11.m128i_i64[1] = (__int64)&v23;
    sub_180071490((__int64 *)&v23, &v11);
    `eh vector destructor iterator'(v15, 0x40uLL, 2uLL, (void (*)(void *))sub_1800721A0);
    v14 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
    LOBYTE(v13) = 0;
    sub_18000FB34((__int64 *)&v13, 0x1AuLL, 0LL, "Engine Initialized Success");
    v7 = *(_QWORD *)(a1 + 480);
    v11 = 0LL;
    v8 = operator new(0x48uLL);
    *v8 = v8;
    v8[1] = v8;
    v8[2] = v8;
    *((_WORD *)v8 + 12) = 257;
    v11.m128i_i64[0] = (__int64)v8;
    (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __m128i *))(*(_QWORD *)v7 + 40LL))(v7, &v13, &v23, &v11);
    sub_180064680(v11.m128i_i64, (__int64)&v11);
    if ( v14.m128i_i64[1] >= 0x10uLL )
    {
      v9 = v13;
      if ( (unsigned __int64)(v14.m128i_i64[1] + 1) >= 0x1000 )
      {
        v9 = *(_QWORD *)(v13 - 8);
        if ( (unsigned __int64)(v13 - v9 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v9, v14.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v9);
    }
    sub_18006CF10((__int64 *)&v23, (__int64)&v23);
  }
  v10 = *(_QWORD *)(a1 + 496);
  if ( v10 )
  {
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(__int64, __int64, char *, const char *))(*(_QWORD *)v10 + 24LL))(
      v10,
      a2,
      byte_180139BFA,
      "2.7.0.2");
  }
}
