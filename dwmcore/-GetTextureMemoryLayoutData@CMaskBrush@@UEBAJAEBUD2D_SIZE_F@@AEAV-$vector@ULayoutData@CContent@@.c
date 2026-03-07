__int64 __fastcall CMaskBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  _BYTE *v4; // rdi
  unsigned int v6; // r14d
  __int64 v8; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  _BYTE *v15; // r15
  unsigned __int64 v16; // rdx
  __int64 v17; // rbx
  _BYTE *v19; // [rsp+30h] [rbp-30h] BYREF
  _BYTE *v20; // [rsp+38h] [rbp-28h]
  __int64 v21; // [rsp+40h] [rbp-20h]
  __int128 v22; // [rsp+48h] [rbp-18h] BYREF
  __int64 v23; // [rsp+58h] [rbp-8h]
  __int64 v24; // [rsp+90h] [rbp+30h] BYREF

  v3 = *a3;
  v4 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v6 = 0;
  a3[1] = v3;
  v8 = *(_QWORD *)(a1 + 96);
  v19 = 0LL;
  if ( v8 )
  {
    v23 = 0LL;
    v22 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v8 + 272LL))(v8, a2, &v22);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x4Fu, 0LL);
      goto LABEL_19;
    }
    std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,0>(
      &v19,
      &v24,
      0LL,
      (const void *)v22,
      *((__int64 *)&v22 + 1));
    if ( (_QWORD)v22 )
      std::_Deallocate<16,0>((void *)v22, 8 * ((v23 - (__int64)v22) >> 3));
    v4 = v19;
  }
  v12 = *(_QWORD *)(a1 + 88);
  if ( !v12 )
  {
LABEL_11:
    if ( a3 != (__int64 *)&v19 )
    {
      v15 = (_BYTE *)(v20 - v4);
      v16 = 0xCCCCCCCCCCCCCCCDuLL * ((v20 - v4) >> 3);
      if ( v16 > 0xCCCCCCCCCCCCCCCDuLL * ((a3[2] - *a3) >> 3) )
        std::vector<CContent::LayoutData>::_Clear_and_reserve_geometric(a3, v16);
      v17 = *a3;
      memmove_0((void *)*a3, v4, (size_t)v15);
      a3[1] = (__int64)&v15[v17];
    }
    goto LABEL_15;
  }
  v23 = 0LL;
  v22 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v12 + 272LL))(v12, a2, &v22);
  v6 = v13;
  if ( v13 >= 0 )
  {
    std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,0>(
      &v19,
      &v24,
      v20,
      (const void *)v22,
      *((__int64 *)&v22 + 1));
    if ( (_QWORD)v22 )
      std::_Deallocate<16,0>((void *)v22, 8 * ((v23 - (__int64)v22) >> 3));
    v4 = v19;
    goto LABEL_11;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x56u, 0LL);
LABEL_19:
  if ( (_QWORD)v22 )
    std::_Deallocate<16,0>((void *)v22, 8 * ((v23 - (__int64)v22) >> 3));
LABEL_15:
  if ( v4 )
    std::_Deallocate<16,0>(v4, 8 * ((v21 - (__int64)v4) >> 3));
  return v6;
}
