/*
 * XREFs of ??$SetProperty@UD2DVector3@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector3@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801DEA44
 * Callers:
 *     ?SetVector3Value@DataSourceProxy@@MEAAJIMMM@Z @ 0x1801E0750 (-SetVector3Value@DataSourceProxy@@MEAAJIMMM@Z.c)
 * Callees:
 *     ??$AddProperty@UD2DVector3@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@PEAI@Z @ 0x1800DDB0C (--$AddProperty@UD2DVector3@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace@AEAIAEAI@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@AEAI0@Z @ 0x1801DF210 (--$emplace@AEAIAEAI@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@AEBI@Z @ 0x1801DF38C (--$find@X@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$a.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801DFDD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall DataSourcePropertySet::SetProperty<D2DVector3>(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r10
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r10
  int v16; // r11d
  __int64 v17; // rax
  __int64 v18; // rcx
  _BYTE v19[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v21; // [rsp+40h] [rbp+8h] BYREF
  int v22; // [rsp+48h] [rbp+10h] BYREF
  int v23; // [rsp+58h] [rbp+20h] BYREF

  v22 = a2;
  v23 = 0;
  std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::find<void>(
    a1,
    &v21,
    &v22);
  v5 = a1 + 64;
  if ( v21 == *(_QWORD *)(a1 + 8) )
  {
    v6 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DVector3>(
           v5,
           52,
           (__int64)a3,
           &v23);
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
      v19,
      &v22,
      &v23);
  }
  else
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v5) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( *(_DWORD *)(*v11 + 8 * v9) != 52 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\DataSourcePropertySet.h",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v10) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v12) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v17 = *(_QWORD *)(v15 + 32);
    v18 = *(_DWORD *)(v14 + 8 * v13 + 4) & 0x1FFFFFFF;
    *(_QWORD *)(v18 + v17) = *a3;
    *(_DWORD *)(v18 + v17 + 8) = v16;
  }
  return 0LL;
}
