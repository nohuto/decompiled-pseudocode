void __fastcall std::vector<CContent::LayoutData>::_Insert_range<CContent::LayoutData *>(
        __int64 a1,
        _BYTE *a2,
        const void *a3,
        __int64 a4)
{
  _BYTE *v4; // r13
  _BYTE *v5; // rsi
  size_t v6; // r12
  unsigned __int64 v8; // rdi
  unsigned __int64 v11; // rcx
  SIZE_T size_of; // rax
  char *v13; // r14
  size_t v14; // r8
  const void *v15; // rdx
  char *v16; // rcx
  __int64 v17; // r13
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // [rsp+20h] [rbp-58h]
  unsigned __int64 v21; // [rsp+98h] [rbp+20h]

  v4 = *(_BYTE **)a1;
  v5 = *(_BYTE **)(a1 + 8);
  v6 = a4 - (_QWORD)a3;
  v8 = 0xCCCCCCCCCCCCCCCDuLL * ((a4 - (__int64)a3) >> 3);
  if ( v8 )
  {
    if ( v8 <= (*(_QWORD *)(a1 + 16) - (_QWORD)v5) / 40LL )
    {
      v17 = 8 * ((a4 - (__int64)a3) >> 3);
      v18 = 0xCCCCCCCCCCCCCCCDuLL * ((v5 - a2) >> 3);
      if ( v8 >= v18 )
      {
        memmove_0(&a2[v17], a2, v5 - a2);
        *(_QWORD *)(a1 + 8) = &a2[40 * v18 + v17];
      }
      else
      {
        memmove_0(v5, &v5[-v17], 8 * ((a4 - (__int64)a3) >> 3));
        *(_QWORD *)(a1 + 8) = &v5[40 * (v17 / 40)];
        memmove_0(&a2[40 * v8], a2, (size_t)&v5[-40LL * v8 - (_QWORD)a2]);
      }
      memmove_0(a2, a3, v6);
    }
    else
    {
      v11 = 0xCCCCCCCCCCCCCCCDuLL * ((v5 - v4) >> 3);
      if ( v8 > 0x666666666666666LL - v11 )
        std::vector<std::unique_ptr<ICheckMPOCache>>::_Xlength();
      v19 = v11 - 0x3333333333333333LL * ((a4 - (__int64)a3) >> 3);
      v21 = std::vector<CContent::LayoutData>::_Calculate_growth(a1, v19);
      size_of = std::_Get_size_of_n<40>(v21);
      v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      memmove_0(&v13[8 * ((a2 - v4) >> 3)], a3, v6);
      if ( v8 == 1 && a2 == v5 )
      {
        v14 = v5 - v4;
        v15 = v4;
        v16 = v13;
      }
      else
      {
        memmove_0(v13, v4, a2 - v4);
        v14 = v5 - a2;
        v15 = a2;
        v16 = &v13[40 * (v8 - 0x3333333333333333LL * ((a2 - v4) >> 3))];
      }
      memmove_0(v16, v15, v14);
      std::vector<CContent::LayoutData>::_Change_array(a1, v13, v19, v21);
    }
  }
}
