/*
 * XREFs of sub_18005C020 @ 0x18005C020
 * Callers:
 *     sub_180002F50 @ 0x180002F50 (sub_180002F50.c)
 *     sub_180003150 @ 0x180003150 (sub_180003150.c)
 *     sub_180003240 @ 0x180003240 (sub_180003240.c)
 *     sub_180003330 @ 0x180003330 (sub_180003330.c)
 *     sub_180003420 @ 0x180003420 (sub_180003420.c)
 *     sub_180003510 @ 0x180003510 (sub_180003510.c)
 *     sub_180003600 @ 0x180003600 (sub_180003600.c)
 *     sub_1800036F0 @ 0x1800036F0 (sub_1800036F0.c)
 *     sub_1800037E0 @ 0x1800037E0 (sub_1800037E0.c)
 *     sub_1800038D0 @ 0x1800038D0 (sub_1800038D0.c)
 *     sub_1800039C0 @ 0x1800039C0 (sub_1800039C0.c)
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180013618 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_180054FC4 @ 0x180054FC4 (sub_180054FC4.c)
 *     sub_180055290 @ 0x180055290 (sub_180055290.c)
 *     sub_1800CF2C8 @ 0x1800CF2C8 (sub_1800CF2C8.c)
 *     sub_1800CF3A0 @ 0x1800CF3A0 (sub_1800CF3A0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _Init_thread_footer @ 0x18011ED48 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18011EDA8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=6
__int64 sub_18005C020()
{
  __int64 v0; // rbx
  _QWORD *v2; // rax
  const void **v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  const void **v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int128 Src; // [rsp+28h] [rbp-39h] BYREF
  __m128i si128; // [rsp+38h] [rbp-29h]
  __int128 v14; // [rsp+48h] [rbp-19h] BYREF
  __int128 v15; // [rsp+58h] [rbp-9h]
  __int128 v16; // [rsp+68h] [rbp+7h] BYREF
  __int128 v17; // [rsp+78h] [rbp+17h]
  _QWORD v18[2]; // [rsp+88h] [rbp+27h] BYREF
  __int128 v19; // [rsp+98h] [rbp+37h]

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_1802191DC > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802191DC);
    if ( dword_1802191DC == -1 )
    {
      *(_QWORD *)&Src = &unk_18018BB00;
      *((_QWORD *)&Src + 1) = &unk_18018BD80;
      *(_QWORD *)&v15 = 0x100000005LL;
      v16 = Src;
      v17 = v15;
      sub_180055290();
      v2 = (_QWORD *)sub_1800CF2C8(v18);
      v3 = sub_180054FC4(v2, 0LL, "ImageProcessingFullscreen/ShaderModel40/", 0x28uLL);
      si128 = 0LL;
      Src = *(_OWORD *)v3;
      si128 = *((__m128i *)v3 + 1);
      v3[2] = 0LL;
      v3[3] = (const void *)15;
      *(_BYTE *)v3 = 0;
      v4 = std::string::append(&Src, "/Pixel", 6uLL);
      v15 = 0uLL;
      v14 = *(_OWORD *)v4;
      v15 = *((_OWORD *)v4 + 1);
      v4[2] = 0LL;
      v4[3] = 15LL;
      *(_BYTE *)v4 = 0;
      byte_1802191D8 = sub_1800CF3A0(&v14, &v16);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v5 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v5 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v5 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v5, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v5);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v19 + 1) >= 0x10uLL )
      {
        v6 = v18[0];
        if ( (unsigned __int64)(*((_QWORD *)&v19 + 1) + 1LL) >= 0x1000 )
        {
          v6 = *(_QWORD *)(v18[0] - 8LL);
          if ( (unsigned __int64)(v18[0] - v6 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v6, *((_QWORD *)&v19 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v6);
      }
      Init_thread_footer(&dword_1802191DC);
    }
  }
  if ( dword_1802191E4 > *(_DWORD *)(v0 + 44) )
  {
    Init_thread_header(&dword_1802191E4);
    if ( dword_1802191E4 == -1 )
    {
      *(_QWORD *)&Src = &unk_18018BD80;
      *((_QWORD *)&Src + 1) = &unk_18018C36C;
      *(_QWORD *)&v19 = 0x100000001LL;
      v16 = Src;
      v17 = v19;
      sub_180055290();
      v7 = (_QWORD *)sub_1800CF2C8(v18);
      v8 = sub_180054FC4(v7, 0LL, "ImageProcessingFullscreen/ShaderModel40/", 0x28uLL);
      si128 = 0LL;
      Src = *(_OWORD *)v8;
      si128 = *((__m128i *)v8 + 1);
      v8[2] = 0LL;
      v8[3] = (const void *)15;
      *(_BYTE *)v8 = 0;
      v9 = std::string::append(&Src, "/Vertex", 7uLL);
      v15 = 0uLL;
      v14 = *(_OWORD *)v9;
      v15 = *((_OWORD *)v9 + 1);
      v9[2] = 0LL;
      v9[3] = 15LL;
      *(_BYTE *)v9 = 0;
      byte_1802191E0 = sub_1800CF3A0(&v14, &v16);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v10 = Src;
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v10 = *(_QWORD *)(Src - 8);
          if ( (unsigned __int64)(Src - v10 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v10, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v10);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
      LOBYTE(Src) = 0;
      if ( *((_QWORD *)&v19 + 1) >= 0x10uLL )
      {
        v11 = v18[0];
        if ( (unsigned __int64)(*((_QWORD *)&v19 + 1) + 1LL) >= 0x1000 )
        {
          v11 = *(_QWORD *)(v18[0] - 8LL);
          if ( (unsigned __int64)(v18[0] - v11 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v11, *((_QWORD *)&v19 + 1) + 40LL);
            __debugbreak();
          }
        }
        j_j__o_free(v11);
      }
      Init_thread_footer(&dword_1802191E4);
    }
  }
  return 0LL;
}
