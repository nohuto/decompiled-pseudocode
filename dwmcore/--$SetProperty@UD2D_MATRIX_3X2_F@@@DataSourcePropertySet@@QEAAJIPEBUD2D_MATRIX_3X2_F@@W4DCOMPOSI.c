__int64 __fastcall DataSourcePropertySet::SetProperty<D2D_MATRIX_3X2_F>(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r10
  __int128 v12; // xmm0
  __int64 v13; // xmm1_8
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // rcx
  _BYTE v20[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v22; // [rsp+40h] [rbp+8h] BYREF
  int v23; // [rsp+48h] [rbp+10h] BYREF
  int v24; // [rsp+58h] [rbp+20h] BYREF

  v23 = a2;
  v24 = 0;
  std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::find<void>(
    a1,
    &v22,
    &v23);
  v5 = a1 + 64;
  if ( v22 == *(_QWORD *)(a1 + 8) )
  {
    v6 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2D_MATRIX_3X2_F>(
           v5,
           104,
           a3,
           &v24);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\DataSourcePropertySet.h",
        (const char *)(unsigned int)v6);
      return v7;
    }
    std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::emplace<unsigned int &,unsigned int &>(
      a1,
      v20,
      &v23,
      &v24);
  }
  else
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v5) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( *(_DWORD *)(*v11 + 8 * v9) != 104 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\DataSourcePropertySet.h",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    v12 = *(_OWORD *)a3;
    v13 = *(_QWORD *)(a3 + 16);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v10) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v14) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v18 = *(_QWORD *)(v17 + 32);
    v19 = *(_DWORD *)(v16 + 8 * v15 + 4) & 0x1FFFFFFF;
    *(_OWORD *)(v19 + v18) = v12;
    *(_QWORD *)(v19 + v18 + 16) = v13;
  }
  return 0LL;
}
