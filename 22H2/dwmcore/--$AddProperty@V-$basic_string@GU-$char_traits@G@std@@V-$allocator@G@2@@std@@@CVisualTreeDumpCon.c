/*
 * XREFs of ??$AddProperty@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180196364
 * Callers:
 *     ?DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z @ 0x18019769C (-DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180035058 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050D58 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800D8DEC (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800F400B (memcpy_0.c)
 *     ??$emplace_back@UProperty@CTreeDumpNodeData@@@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@QEAAAEAUProperty@CTreeDumpNodeData@@$$QEAU23@@Z @ 0x180154A20 (--$emplace_back@UProperty@CTreeDumpNodeData@@@-$vector@UProperty@CTreeDumpNodeData@@V-$allocator.c)
 *     ??0?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180197438 (--0-$wstring_convert@V-$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@.c)
 *     ??1?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@UEAA@XZ @ 0x1801974E8 (--1-$wstring_convert@V-$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@.c)
 *     ?_Construct_lv_contents@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXAEBV12@@Z @ 0x180197EA8 (-_Construct_lv_contents@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXAEBV12.c)
 *     ?to_bytes@?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBG0@Z @ 0x180198A20 (-to_bytes@-$wstring_convert@V-$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$alloc.c)
 */

__int64 __fastcall CVisualTreeDumpContext::AddProperty<std::wstring>(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int128 *v6; // r8
  __int128 v7; // xmm0
  __m128i v8; // xmm1
  unsigned __int64 v9; // rdi
  __int128 v10; // xmm0
  __int64 v11; // rbx
  void **v12; // rsi
  __int64 v13; // rdi
  __int128 v14; // xmm0
  __int64 v15; // rbx
  __int128 v17; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v18; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v19; // [rsp+38h] [rbp-C8h]
  __int128 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-A8h]
  void *Src[2]; // [rsp+60h] [rbp-A0h] BYREF
  __m128i si128; // [rsp+70h] [rbp-90h]
  __int128 v25; // [rsp+80h] [rbp-80h] BYREF
  __m128i v26; // [rsp+90h] [rbp-70h]
  _BYTE v27[128]; // [rsp+A0h] [rbp-60h] BYREF

  LOBYTE(Src[0]) = 0;
  v18 = 0LL;
  v19 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  std::wstring::_Construct_lv_contents(&v17, a3);
  std::wstring_convert<std::codecvt_utf8_utf16<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::wstring_convert<std::codecvt_utf8_utf16<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>(v27);
  v6 = &v17;
  if ( v19 >= 8 )
    v6 = (__int128 *)v17;
  std::wstring_convert<std::codecvt_utf8_utf16<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::to_bytes(
    v27,
    &v25,
    v6,
    (char *)v6 + 2 * v18);
  std::string::_Tidy_deallocate((__int64)Src);
  v7 = v25;
  LOBYTE(v25) = 0;
  v8 = v26;
  *(_OWORD *)Src = v7;
  v26 = _mm_load_si128((const __m128i *)&_xmm);
  si128 = v8;
  std::string::_Tidy_deallocate((__int64)&v25);
  std::wstring_convert<std::codecvt_utf8_utf16<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::~wstring_convert<std::codecvt_utf8_utf16<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>(v27);
  std::wstring::_Tidy_deallocate(&v17);
  v9 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  if ( v9 >= 0x10 )
  {
    v11 = v9 | 0xF;
    if ( (v9 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
      v11 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v17 = std::_Allocate<16,std::_Default_allocate_traits,0>(v11 + 1);
    memcpy_0((void *)v17, a2, v9 + 1);
    v19 = v11;
  }
  else
  {
    v10 = *(_OWORD *)a2;
    v19 = 15LL;
    v17 = v10;
  }
  v12 = Src;
  v18 = v9;
  v13 = si128.m128i_i64[0];
  if ( si128.m128i_i64[1] >= 0x10uLL )
    v12 = (void **)Src[0];
  if ( si128.m128i_i64[0] >= 0x10uLL )
  {
    v15 = si128.m128i_i64[0] | 0xF;
    if ( (si128.m128i_i64[0] | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
      v15 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v20 = std::_Allocate<16,std::_Default_allocate_traits,0>(v15 + 1);
    memcpy_0((void *)v20, v12, v13 + 1);
    v22 = v15;
  }
  else
  {
    v14 = *(_OWORD *)v12;
    v22 = 15LL;
    v20 = v14;
  }
  v21 = v13;
  std::vector<CTreeDumpNodeData::Property>::emplace_back<CTreeDumpNodeData::Property>(
    (__int64 *)(a1 + 64),
    (__int64)&v17);
  std::string::_Tidy_deallocate((__int64)&v20);
  std::string::_Tidy_deallocate((__int64)&v17);
  std::string::_Tidy_deallocate((__int64)Src);
  return std::wstring::_Tidy_deallocate(a3);
}
