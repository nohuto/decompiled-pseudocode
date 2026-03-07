__int64 __fastcall CClipBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, void **a3)
{
  char *v3; // rax
  void *v4; // rdi
  unsigned int v5; // r15d
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  size_t v10; // r14
  char *v11; // rbx
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h]
  void *v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+58h] [rbp-8h]
  __int64 v18; // [rsp+90h] [rbp+30h] BYREF

  v3 = (char *)*a3;
  v4 = 0LL;
  v16 = 0LL;
  v5 = 0;
  v17 = 0LL;
  a3[1] = v3;
  v7 = *(_QWORD *)(a1 + 88);
  v15 = 0LL;
  if ( !v7 )
  {
LABEL_6:
    if ( a3 != &v15 )
    {
      v10 = v16 - (_QWORD)v4;
      if ( 0xCCCCCCCCCCCCCCCDuLL * ((v16 - (__int64)v4) >> 3) > 0xCCCCCCCCCCCCCCCDuLL
                                                              * (((_BYTE *)a3[2] - (_BYTE *)*a3) >> 3) )
        std::vector<CContent::LayoutData>::_Clear_and_reserve_geometric(a3);
      v11 = (char *)*a3;
      memmove_0(*a3, v4, v10);
      a3[1] = &v11[v10];
    }
    goto LABEL_10;
  }
  v14 = 0LL;
  v13 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v7 + 272LL))(v7, a2, &v13);
  v5 = v8;
  if ( v8 >= 0 )
  {
    std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,0>(
      &v15,
      &v18,
      0LL,
      (const void *)v13,
      *((__int64 *)&v13 + 1));
    if ( (_QWORD)v13 )
      std::_Deallocate<16,0>((void *)v13, 8 * ((v14 - (__int64)v13) >> 3));
    v4 = v15;
    goto LABEL_6;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x4Eu, 0LL);
  if ( (_QWORD)v13 )
    std::_Deallocate<16,0>((void *)v13, 8 * ((v14 - (__int64)v13) >> 3));
LABEL_10:
  if ( v4 )
    std::_Deallocate<16,0>(v4, 8 * ((v17 - (__int64)v4) >> 3));
  return v5;
}
