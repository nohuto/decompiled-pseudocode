__int64 __fastcall DataSourcePropertySet::SetProperty<D2DMatrix>(__int64 a1, int a2, __int128 *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r10
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // rcx
  _BYTE v22[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v24; // [rsp+40h] [rbp+8h] BYREF
  int v25; // [rsp+48h] [rbp+10h] BYREF
  int v26; // [rsp+58h] [rbp+20h] BYREF

  v25 = a2;
  v26 = 0;
  std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::find<void>(
    a1,
    &v24,
    &v25);
  v5 = a1 + 64;
  if ( v24 == *(_QWORD *)(a1 + 8) )
  {
    v6 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DMatrix>(v5, 265, a3, &v26);
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
      v22,
      &v25,
      &v26);
  }
  else
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v5) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( *(_DWORD *)(*v11 + 8 * v9) != 265 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\DataSourcePropertySet.h",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    v12 = *a3;
    v13 = a3[1];
    v14 = a3[2];
    v15 = a3[3];
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v10) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v16) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v20 = *(_QWORD *)(v19 + 32);
    v21 = *(_DWORD *)(v18 + 8 * v17 + 4) & 0x1FFFFFFF;
    *(_OWORD *)(v21 + v20) = v12;
    *(_OWORD *)(v21 + v20 + 16) = v13;
    *(_OWORD *)(v21 + v20 + 32) = v14;
    *(_OWORD *)(v21 + v20 + 48) = v15;
  }
  return 0LL;
}
