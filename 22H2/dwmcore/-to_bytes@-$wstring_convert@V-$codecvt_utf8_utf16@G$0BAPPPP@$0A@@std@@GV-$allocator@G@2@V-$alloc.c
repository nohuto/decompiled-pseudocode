/*
 * XREFs of ?to_bytes@?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBG0@Z @ 0x180198A20
 * Callers:
 *     ??$AddProperty@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180196364 (--$AddProperty@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@CVisualTreeDumpCon.c)
 * Callees:
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x18004D444 (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050D58 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800D8DEC (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800F400B (memcpy_0.c)
 *     ?_Raise@exception@stdext@@QEBAXXZ @ 0x1801980C4 (-_Raise@exception@stdext@@QEBAXXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1801981A8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180198224 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 */

__int64 __fastcall std::wstring_convert<std::codecvt_utf8_utf16<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::to_bytes(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        _BYTE *a4)
{
  __int64 v8; // rdi
  _BYTE *v9; // rcx
  _QWORD *v10; // r15
  int v11; // eax
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __m128i v14; // xmm1
  _QWORD *v16; // rsi
  unsigned __int64 v17; // r14
  void *v18; // rax
  _BYTE *v19; // [rsp+40h] [rbp-59h] BYREF
  void **v20; // [rsp+48h] [rbp-51h] BYREF
  const char *v21; // [rsp+50h] [rbp-49h]
  unsigned __int64 v22; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v23[2]; // [rsp+60h] [rbp-39h] BYREF
  unsigned __int64 v24; // [rsp+70h] [rbp-29h]
  unsigned __int64 v25; // [rsp+78h] [rbp-21h]
  __int128 Src; // [rsp+80h] [rbp-19h] BYREF
  __m128i si128; // [rsp+90h] [rbp-9h]

  v19 = a3;
  v8 = 15LL;
  v24 = 0LL;
  v25 = 15LL;
  LOBYTE(v23[0]) = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOBYTE(Src) = 0;
  if ( !*(_BYTE *)(a1 + 104) )
    *(_QWORD *)(a1 + 96) = 0LL;
  std::string::append((__int64)v23);
  v9 = v19;
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( v9 == a4 )
  {
LABEL_19:
    v13 = Src;
    LOBYTE(Src) = 0;
    v14 = si128;
    *(_OWORD *)a2 = v13;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    *(__m128i *)(a2 + 16) = v14;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v10 = v23;
    if ( v25 >= 0x10 )
      v10 = (_QWORD *)v23[0];
    v11 = std::codecvt<unsigned short,char,_Mbstatet>::out(
            *(_QWORD *)(a1 + 8),
            a1 + 96,
            v9,
            a4,
            &v19,
            v10,
            (char *)v10 + v24,
            &v22);
    if ( v11 < 0 )
    {
LABEL_31:
      if ( !*(_BYTE *)(a1 + 105) )
      {
        v21 = "bad conversion";
        v20 = &std::range_error::`vftable';
        stdext::exception::_Raise((stdext::exception *)&v20);
      }
      goto LABEL_22;
    }
    if ( v11 <= 1 )
      break;
    if ( v11 != 3 )
      goto LABEL_31;
    v9 = v19;
    while ( v9 != a4 )
    {
      LOBYTE(v12) = *v9;
      std::string::push_back((const void **)&Src, v12);
      v9 = v19 + 2;
      v19 += 2;
    }
LABEL_18:
    *(_QWORD *)(a1 + 112) = (v9 - a3) >> 1;
    if ( v9 == a4 )
      goto LABEL_19;
  }
  if ( (unsigned __int64)v10 < v22 )
  {
    std::string::append((void **)&Src, v10, v22 - (_QWORD)v10);
LABEL_17:
    v9 = v19;
    goto LABEL_18;
  }
  if ( v24 < 0x10 )
  {
    std::string::append((__int64)v23);
    goto LABEL_17;
  }
  if ( !*(_BYTE *)(a1 + 105) )
  {
    v21 = "bad conversion";
    v20 = &std::range_error::`vftable';
    stdext::exception::_Raise((stdext::exception *)&v20);
  }
LABEL_22:
  *(_QWORD *)(a2 + 16) = 0LL;
  v16 = (_QWORD *)(a1 + 32);
  *(_QWORD *)(a2 + 24) = 0LL;
  v17 = v16[2];
  if ( v16[3] >= 0x10uLL )
    v16 = (_QWORD *)*v16;
  if ( v17 >= 0x10 )
  {
    v8 = v17 | 0xF;
    if ( (v17 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    v18 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(v8 + 1);
    *(_QWORD *)a2 = v18;
    memcpy_0(v18, v16, v17 + 1);
  }
  else
  {
    *(_OWORD *)a2 = *(_OWORD *)v16;
  }
  *(_QWORD *)(a2 + 16) = v17;
  *(_QWORD *)(a2 + 24) = v8;
LABEL_20:
  std::string::_Tidy_deallocate((__int64)&Src);
  std::string::_Tidy_deallocate((__int64)v23);
  return a2;
}
