/*
 * XREFs of sub_1801160F8 @ 0x1801160F8
 * Callers:
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 * Callees:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     unknown_libname_98 @ 0x180010B7C (unknown_libname_98.c)
 *     sub_180115820 @ 0x180115820 (sub_180115820.c)
 *     sub_180115AEC @ 0x180115AEC (sub_180115AEC.c)
 *     sub_180115C20 @ 0x180115C20 (sub_180115C20.c)
 *     sub_180115E98 @ 0x180115E98 (sub_180115E98.c)
 *     sub_18011C934 @ 0x18011C934 (sub_18011C934.c)
 *     memcpy @ 0x18011E094 (memcpy.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _alloca_probe @ 0x18011E680 (_alloca_probe.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     sub_18011F8B8 @ 0x18011F8B8 (sub_18011F8B8.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_1801160F8(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // rsi
  int v6; // r13d
  size_t v7; // rbx
  __int64 *v8; // r14
  __int64 *v9; // rdi
  const char *v10; // r15
  DWORD CurrentThreadId; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // [rsp+40h] [rbp-C0h]
  int v18; // [rsp+44h] [rbp-BCh]
  __int64 v19[2]; // [rsp+48h] [rbp-B8h] BYREF
  __m128i v20; // [rsp+58h] [rbp-A8h]
  __int64 v21[2]; // [rsp+68h] [rbp-98h] BYREF
  __m128i v22; // [rsp+78h] [rbp-88h]
  __int64 v23; // [rsp+88h] [rbp-78h] BYREF
  __m128i si128; // [rsp+98h] [rbp-68h]
  __int64 v25[3]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+C0h] [rbp-40h]
  CHAR Src[2112]; // [rsp+D0h] [rbp-30h] BYREF
  char v28[2048]; // [rsp+910h] [rbp+810h] BYREF

  v4 = a2;
  if ( dword_18021AB78 <= 0 )
  {
    v17 = *(_DWORD *)(a1 + 8);
    v6 = *(_DWORD *)(a1 + 4);
    v18 = *(_DWORD *)a1;
    v7 = -1LL;
    sub_18011F8B8((unsigned int)v28, 2048, -1, a3, a4);
    v8 = sub_180115AEC(a1, v25);
    v9 = sub_180115C20(&v23);
    if ( (unsigned __int64)v8[3] >= 0x10 )
      v8 = (__int64 *)*v8;
    v10 = (&off_18020DCD0)[3 * v4];
    if ( (unsigned __int64)v9[3] >= 0x10 )
      v9 = (__int64 *)*v9;
    CurrentThreadId = GetCurrentThreadId();
    sub_180115820(
      (__int64)Src,
      (__int64)"[%s][%s][%s][0x%.8x] %s\n",
      (const char *)v9,
      v10,
      (const char *)v8,
      CurrentThreadId,
      v28);
    if ( si128.m128i_i64[1] >= 0x10uLL )
    {
      v13 = v23;
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
      {
        v13 = *(_QWORD *)(v23 - 8);
        if ( (unsigned __int64)(v23 - v13 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v13, si128.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v13);
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
    LOBYTE(v23) = 0;
    if ( v26 >= 0x10 )
    {
      v14 = v25[0];
      if ( v26 + 1 >= 0x1000 )
      {
        v14 = *(_QWORD *)(v25[0] - 8);
        if ( (unsigned __int64)(v25[0] - v14 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v14, v26 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v14);
    }
    if ( (int)v4 >= v6 )
    {
      v20 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
      LOBYTE(v19[0]) = 0;
      do
        ++v7;
      while ( Src[v7] );
      if ( v7 > 0xF )
      {
        LOBYTE(v12) = 0;
        sub_18000FB34(v19, v7, v12, Src);
      }
      else
      {
        v20.m128i_i64[0] = v7;
        memcpy(v19, Src, v7);
        *((_BYTE *)v19 + v7) = 0;
      }
      v22 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
      LOBYTE(v21[0]) = 0;
      unknown_libname_98(v21, *(_BYTE **)(a1 + 16));
      sub_180115E98((__int64)v21, v4, (__int64)v19);
      if ( v22.m128i_i64[1] >= 0x10uLL )
      {
        v15 = v21[0];
        if ( (unsigned __int64)(v22.m128i_i64[1] + 1) >= 0x1000 )
        {
          v15 = *(_QWORD *)(v21[0] - 8);
          if ( (unsigned __int64)(v21[0] - v15 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v15, v22.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v15);
      }
      v22 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
      LOBYTE(v21[0]) = 0;
      if ( v20.m128i_i64[1] >= 0x10uLL )
      {
        v16 = v19[0];
        if ( (unsigned __int64)(v20.m128i_i64[1] + 1) >= 0x1000 )
        {
          v16 = *(_QWORD *)(v19[0] - 8);
          if ( (unsigned __int64)(v19[0] - v16 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v16, v20.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v16);
      }
    }
    if ( (int)v4 >= v17 )
      sub_18011C934(Src);
    OutputDebugStringA(Src);
    if ( (int)v4 >= v18 )
    {
      if ( !IsDebuggerPresent() )
        __fastfail(7u);
      __debugbreak();
    }
  }
}
