_OWORD *__fastcall EncodeStringsList(_OWORD *a1, __int64 a2)
{
  __int64 *v3; // rax
  _BYTE *v4; // r11
  _BYTE *v5; // r10
  __int64 v6; // rax
  int v7; // r14d
  unsigned __int16 *v8; // rbx
  int *v9; // r12
  _BYTE *v10; // r10
  _BYTE *v11; // r10
  int v12; // r15d
  unsigned __int16 *v13; // rcx
  unsigned __int16 *v14; // rsi
  unsigned __int16 *v15; // r12
  unsigned __int16 v16; // bx
  _BYTE *v17; // r10
  __int16 v18; // bx
  unsigned __int8 *v19; // rbx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  char v23[8]; // [rsp+20h] [rbp-49h] BYREF
  __int128 v24; // [rsp+28h] [rbp-41h] BYREF
  _BYTE *v25; // [rsp+38h] [rbp-31h]
  __int64 v26; // [rsp+40h] [rbp-29h] BYREF
  __int128 *v27; // [rsp+48h] [rbp-21h] BYREF
  int v28; // [rsp+50h] [rbp-19h]
  int v29; // [rsp+54h] [rbp-15h]
  int v30; // [rsp+58h] [rbp-11h]
  _QWORD v31[3]; // [rsp+60h] [rbp-9h] BYREF
  __int128 v32; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v33; // [rsp+88h] [rbp+1Fh]

  if ( *(_QWORD *)(a2 + 8) )
  {
    v3 = *(__int64 **)a2;
    v4 = 0LL;
    v24 = 0LL;
    v5 = 0LL;
    v6 = *v3;
    v26 = v6;
    v25 = 0LL;
    while ( !*(_BYTE *)(v6 + 25) )
    {
      v7 = 0xFFFF;
      v8 = (unsigned __int16 *)(v6 + 32);
      v9 = (int *)(v6 + 48);
      if ( *(_DWORD *)(v6 + 48) < 0xFFFFu )
        v7 = *v9;
      v23[0] = v7;
      if ( v5 == v4 )
      {
        std::vector<unsigned char>::_Emplace_reallocate<unsigned char>(&v24, v5, v23);
        v4 = v25;
        v10 = (_BYTE *)*((_QWORD *)&v24 + 1);
      }
      else
      {
        *v5 = v7;
        v10 = v5 + 1;
        *((_QWORD *)&v24 + 1) = v10;
      }
      v23[0] = BYTE1(v7);
      if ( v10 == v4 )
      {
        std::vector<unsigned char>::_Emplace_reallocate<unsigned char>(&v24, v10, v23);
        v4 = v25;
        v11 = (_BYTE *)*((_QWORD *)&v24 + 1);
      }
      else
      {
        *v10 = BYTE1(v7);
        v11 = v10 + 1;
        *((_QWORD *)&v24 + 1) = v11;
      }
      v12 = 0;
      v13 = v8;
      if ( *((_QWORD *)v8 + 3) < 8uLL )
      {
        v14 = v8;
      }
      else
      {
        v13 = *(unsigned __int16 **)v8;
        v14 = *(unsigned __int16 **)v8;
        v8 = *(unsigned __int16 **)v8;
      }
      v15 = &v8[*(_QWORD *)v9];
      if ( v13 != v15 )
      {
        do
        {
          v16 = *v14;
          v23[0] = *v14;
          if ( v11 == v4 )
          {
            std::vector<unsigned char>::_Emplace_reallocate<unsigned char>(&v24, v11, v23);
            v4 = v25;
            v17 = (_BYTE *)*((_QWORD *)&v24 + 1);
          }
          else
          {
            *v11 = v16;
            v17 = v11 + 1;
            *((_QWORD *)&v24 + 1) = v17;
          }
          v18 = HIBYTE(v16);
          v23[0] = v18;
          if ( v17 == v4 )
          {
            std::vector<unsigned char>::_Emplace_reallocate<unsigned char>(&v24, v17, v23);
            v4 = v25;
            v11 = (_BYTE *)*((_QWORD *)&v24 + 1);
          }
          else
          {
            *v17 = v18;
            v11 = v17 + 1;
            *((_QWORD *)&v24 + 1) = v11;
          }
          if ( ++v12 == v7 )
            break;
          ++v14;
        }
        while ( v14 != v15 );
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::wstring>>,std::_Iterator_base0>::operator++(&v26);
      v6 = v26;
    }
    anonymous_namespace_::Compressor::Compress(v31, a2, &v24);
    *(_QWORD *)&v32 = 0LL;
    *(_QWORD *)&v33 = 0LL;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v19 = (unsigned __int8 *)v31[0];
    v27 = &v32;
    *((_QWORD *)&v33 + 1) = 15LL;
    while ( v19 != (unsigned __int8 *)v31[1] )
      Base853Encoder::AppendByte((Base853Encoder *)&v27, *v19++);
    Base853Encoder::EnsureZeroesAreSerialized((Base853Encoder *)&v27);
    if ( v29 )
      Base853Encoder::EncodeBlock((Base853Encoder *)&v27);
    v20 = v33;
    *(_QWORD *)&v33 = 0LL;
    v21 = v32;
    *((_QWORD *)&v33 + 1) = 15LL;
    LOBYTE(v32) = 0;
    *a1 = v21;
    a1[1] = v20;
    std::vector<unsigned char>::_Tidy((__int64)v31);
    std::vector<unsigned char>::_Tidy((__int64)&v24);
  }
  else
  {
    std::string::string(a1, word_180338FC0);
  }
  return a1;
}
