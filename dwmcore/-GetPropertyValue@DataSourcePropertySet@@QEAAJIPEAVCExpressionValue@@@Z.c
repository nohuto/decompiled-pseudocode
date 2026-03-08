/*
 * XREFs of ?GetPropertyValue@DataSourcePropertySet@@QEAAJIPEAVCExpressionValue@@@Z @ 0x1801DF800
 * Callers:
 *     ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z @ 0x1801DFC50 (-GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@AEBI@Z @ 0x1801DF38C (--$find@X@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$a.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801DFDD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall DataSourcePropertySet::GetPropertyValue(
        DataSourcePropertySet *this,
        int a2,
        struct CExpressionValue *a3)
{
  __int64 v6; // rdx
  _QWORD *v7; // r8
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r10
  _OWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r10
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r10
  _OWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r10
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r10
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r10
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r10
  _QWORD *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r10
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r10
  int v58; // r11d
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v60; // [rsp+30h] [rbp+8h] BYREF
  int v61; // [rsp+38h] [rbp+10h] BYREF

  v61 = a2;
  std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::find<void>(
    this,
    &v60,
    (const unsigned __int8 *)&v61);
  if ( v60 == *((_QWORD *)this + 1) )
    return 2147483659LL;
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)this + 64) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  v8 = *(_DWORD *)(*v7 + 8 * v6);
  if ( !v8 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\DataSourcePropertySet.h",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v9 = v8 - 17;
  if ( !v9 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v54) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    *(_BYTE *)a3 = *(_BYTE *)((*(_DWORD *)(v57 + 8 * v55 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v56 + 32));
    *((_DWORD *)a3 + 18) = v58;
    goto LABEL_44;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v50) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    *(_DWORD *)a3 = *(_DWORD *)((*(_DWORD *)(v53 + 8 * v51 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v52 + 32));
    *((_DWORD *)a3 + 18) = 18;
    goto LABEL_44;
  }
  v11 = v10 - 17;
  if ( !v11 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v45) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v49 = (_QWORD *)(*(_QWORD *)(v47 + 32) + (*(_DWORD *)(v48 + 8 * v46 + 4) & 0x1FFFFFFF));
    *((_DWORD *)a3 + 18) = 35;
    *(_QWORD *)a3 = *v49;
    goto LABEL_44;
  }
  v12 = v11 - 17;
  if ( !v12 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v40) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v44 = *(_QWORD *)(v42 + 32) + (*(_DWORD *)(v43 + 8 * v41 + 4) & 0x1FFFFFFF);
    *((_DWORD *)a3 + 18) = 52;
    *(_QWORD *)a3 = *(_QWORD *)v44;
    *((_DWORD *)a3 + 2) = *(_DWORD *)(v44 + 8);
    goto LABEL_44;
  }
  v13 = v12 - 17;
  if ( !v13 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v36) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v31 = (_OWORD *)(*(_QWORD *)(v38 + 32) + (*(_DWORD *)(v39 + 8 * v37 + 4) & 0x1FFFFFFF));
    *((_DWORD *)a3 + 18) = 69;
    goto LABEL_25;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v32) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v31 = (_OWORD *)(*(_QWORD *)(v34 + 32) + (*(_DWORD *)(v35 + 8 * v33 + 4) & 0x1FFFFFFF));
    *((_DWORD *)a3 + 18) = 70;
    goto LABEL_25;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v27) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v31 = (_OWORD *)(*(_QWORD *)(v29 + 32) + (*(_DWORD *)(v30 + 8 * v28 + 4) & 0x1FFFFFFF));
    *((_DWORD *)a3 + 18) = 71;
LABEL_25:
    *(_OWORD *)a3 = *v31;
    goto LABEL_44;
  }
  v16 = v15 - 33;
  if ( v16 )
  {
    if ( v16 != 161 )
      return 2147500037LL;
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v17) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v21 = (_OWORD *)(*(_QWORD *)(v19 + 32) + (*(_DWORD *)(v20 + 8 * v18 + 4) & 0x1FFFFFFF));
    *((_DWORD *)a3 + 18) = 265;
    *(_OWORD *)a3 = *v21;
    *((_OWORD *)a3 + 1) = v21[1];
    *((_OWORD *)a3 + 2) = v21[2];
    *((_OWORD *)a3 + 3) = v21[3];
  }
  else
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v22) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v26 = *(_QWORD *)(v24 + 32) + (*(_DWORD *)(v25 + 8 * v23 + 4) & 0x1FFFFFFF);
    *((_DWORD *)a3 + 18) = 104;
    *(_OWORD *)a3 = *(_OWORD *)v26;
    *((_QWORD *)a3 + 2) = *(_QWORD *)(v26 + 16);
  }
LABEL_44:
  *((_BYTE *)a3 + 76) = 1;
  return 0LL;
}
