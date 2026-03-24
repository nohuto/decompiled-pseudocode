/*
 * XREFs of ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x18004C610
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x18004B9C4 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBE@?$vector@EV?$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z @ 0x18004B7DC (--$_Emplace_reallocate@AEBE@-$vector@EV-$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z.c)
 *     ?EncodeBlock@Base853Encoder@@AEAAXXZ @ 0x18004D1AC (-EncodeBlock@Base853Encoder@@AEAAXXZ.c)
 *     ?AppendByte@Base853Encoder@@QEAAXE@Z @ 0x18004D394 (-AppendByte@Base853Encoder@@QEAAXE@Z.c)
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x18004D3E8 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800D42BC (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800D5B3C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@V-$basic_string@GU-$char_.c)
 *     _anonymous_namespace_::Compressor::Compress @ 0x1800D6480 (_anonymous_namespace_--Compressor--Compress.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800D8DEC (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E666C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 */

_OWORD *__fastcall EncodeStringsList(_OWORD *a1, __int64 a2)
{
  _OWORD *v2; // r14
  __int64 *v3; // rbx
  _BYTE *v4; // r10
  _BYTE *v5; // r11
  __int64 v6; // rax
  int v7; // r15d
  unsigned __int16 *v8; // rdi
  int *v9; // r13
  _BYTE *v10; // r10
  _BYTE *v11; // r10
  int v12; // r12d
  unsigned __int16 *v13; // rsi
  unsigned __int16 *v14; // r13
  unsigned __int16 v15; // di
  _BYTE *v16; // r10
  __int16 v17; // di
  unsigned __int8 *v18; // rbx
  unsigned __int8 *v19; // rsi
  __m128i si128; // xmm0
  unsigned __int8 *v21; // rdi
  __int128 v22; // xmm0
  __m128i v23; // xmm1
  char v25[8]; // [rsp+28h] [rbp-59h] BYREF
  __int128 v26; // [rsp+30h] [rbp-51h] BYREF
  _BYTE *v27; // [rsp+40h] [rbp-41h]
  __int64 v28; // [rsp+48h] [rbp-39h] BYREF
  __int128 *v29; // [rsp+50h] [rbp-31h] BYREF
  __int64 v30; // [rsp+58h] [rbp-29h]
  int v31; // [rsp+60h] [rbp-21h]
  _OWORD *v32; // [rsp+68h] [rbp-19h]
  unsigned __int8 *v33; // [rsp+70h] [rbp-11h] BYREF
  unsigned __int64 v34; // [rsp+78h] [rbp-9h]
  __int128 v35; // [rsp+88h] [rbp+7h] BYREF
  __m128i v36; // [rsp+98h] [rbp+17h]

  v32 = a1;
  v2 = a1;
  if ( *(_QWORD *)(a2 + 8) )
  {
    v3 = *(__int64 **)a2;
    v27 = 0LL;
    v26 = 0LL;
    v4 = 0LL;
    v5 = 0LL;
    v6 = *v3;
    v28 = *v3;
    while ( (__int64 *)v6 != v3 )
    {
      v7 = 0xFFFF;
      v8 = (unsigned __int16 *)(v6 + 32);
      v9 = (int *)(v6 + 48);
      if ( *(_DWORD *)(v6 + 48) < 0xFFFFu )
        v7 = *v9;
      v25[0] = v7;
      if ( v5 == v4 )
      {
        std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>((const void **)&v26, v4, v25);
        v5 = v27;
        v10 = (_BYTE *)*((_QWORD *)&v26 + 1);
      }
      else
      {
        *v4 = v7;
        v10 = v4 + 1;
        *((_QWORD *)&v26 + 1) = v10;
      }
      v25[0] = BYTE1(v7);
      if ( v5 == v10 )
      {
        std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>((const void **)&v26, v10, v25);
        v5 = v27;
        v11 = (_BYTE *)*((_QWORD *)&v26 + 1);
      }
      else
      {
        *v10 = BYTE1(v7);
        v11 = v10 + 1;
        *((_QWORD *)&v26 + 1) = v11;
      }
      v12 = 0;
      v13 = v8;
      if ( *((_QWORD *)v8 + 3) >= 8uLL )
      {
        v13 = *(unsigned __int16 **)v8;
        v8 = *(unsigned __int16 **)v8;
      }
      v14 = &v8[*(_QWORD *)v9];
      while ( v13 != v14 )
      {
        v15 = *v13;
        v25[0] = *v13;
        if ( v5 == v11 )
        {
          std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>((const void **)&v26, v11, v25);
          v5 = v27;
          v16 = (_BYTE *)*((_QWORD *)&v26 + 1);
        }
        else
        {
          *v11 = v15;
          v16 = v11 + 1;
          *((_QWORD *)&v26 + 1) = v16;
        }
        v17 = HIBYTE(v15);
        v25[0] = v17;
        if ( v5 == v16 )
        {
          std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>((const void **)&v26, v16, v25);
          v5 = v27;
          v11 = (_BYTE *)*((_QWORD *)&v26 + 1);
        }
        else
        {
          *v16 = v17;
          v11 = v16 + 1;
          *((_QWORD *)&v26 + 1) = v11;
        }
        if ( ++v12 == v7 )
          break;
        ++v13;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::wstring>>,std::_Iterator_base0>::operator++(&v28);
      v6 = v28;
    }
    anonymous_namespace_::Compressor::Compress(&v33, a2, &v26);
    v18 = v33;
    v19 = v33;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v21 = (unsigned __int8 *)(v34 - (_QWORD)v33);
    LOBYTE(v35) = 0;
    if ( (unsigned __int64)v33 > v34 )
      v21 = 0LL;
    v30 = 0LL;
    v31 = 0;
    v2 = v32;
    v29 = &v35;
    v36 = si128;
    if ( v21 )
    {
      do
        Base853Encoder::AppendByte((Base853Encoder *)&v29, *v18++);
      while ( (unsigned __int8 *)(v18 - v19) != v21 );
    }
    Base853Encoder::EnsureZeroesAreSerialized((Base853Encoder *)&v29);
    if ( HIDWORD(v30) )
      Base853Encoder::EncodeBlock((Base853Encoder *)&v29);
    v22 = v35;
    LOBYTE(v35) = 0;
    v23 = v36;
    *v2 = v22;
    v36 = _mm_load_si128((const __m128i *)&_xmm);
    v2[1] = v23;
    std::string::_Tidy_deallocate(&v35);
    std::vector<unsigned char>::_Tidy(&v33);
    std::vector<unsigned char>::_Tidy(&v26);
  }
  else
  {
    std::string::string(a1, &word_1802CE406);
  }
  return v2;
}
