/*
 * XREFs of ?reserve_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@_K0@Z @ 0x1800448AC
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064860 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@AEBVCBackdropVisualImageKey@@_N@Z @ 0x1800E8D7C (-GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@AEBVCBackdropVisualImageKey@@_N@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@std@@V?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@0@0V12@@Z @ 0x180044BAC (--$uninitialized_move@V-$move_iterator@PEAV-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcc.c)
 *     ??R?$default_delete@VCOcclusionInfo@@@std@@QEBAXPEAVCOcclusionInfo@@@Z @ 0x180044C30 (--R-$default_delete@VCOcclusionInfo@@@std@@QEBAXPEAVCOcclusionInfo@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@std@@V?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@0@0V12@@Z @ 0x1801D4238 (--$move_backward@V-$move_iterator@PEAV-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusio.c)
 *     ??_G?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@QEAAPEAXI@Z @ 0x1801D43B4 (--_G-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@std@@QEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  __int64 *v2; // rbx
  _QWORD *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // r9
  unsigned __int64 v13; // rsi
  _QWORD *v14; // r14
  _QWORD *v15; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r13
  void *v19; // rax
  void *v20; // r15
  __int64 v21; // r8
  _QWORD *v22; // rdx
  _QWORD *v23; // r14
  _QWORD *i; // rsi
  _QWORD *v25; // rcx
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // r10
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r11
  __int64 v31; // rax
  __int128 v32; // [rsp+20h] [rbp-40h] BYREF
  __int64 v33; // [rsp+30h] [rbp-30h]
  __int128 v34; // [rsp+40h] [rbp-20h] BYREF
  __int64 v35; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+88h] [rbp+28h]

  v2 = (__int64 *)*((_QWORD *)a1 + 1);
  if ( (__int64)(*((_QWORD *)a1 + 2) - (_QWORD)v2) >> 3 )
    goto LABEL_2;
  v17 = ((__int64)v2 - *(_QWORD *)a1) >> 3;
  if ( v17 + 1 < v17 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_22:
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  v18 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3, v17 + 1);
  v19 = DefaultHeap::Alloc(saturated_mul(v18, 8uLL));
  v20 = v19;
  if ( !v19 )
    goto LABEL_22;
  v21 = *((_QWORD *)a1 + 1);
  v22 = *(_QWORD **)a1;
  *(_QWORD *)&v32 = v19;
  *((_QWORD *)&v32 + 1) = v17;
  v33 = 0LL;
  v34 = v32;
  v35 = 0LL;
  ((void (__fastcall *)(__int128 *, _QWORD *, __int64, __int128 *))std::uninitialized_move<std::move_iterator<std::unique_ptr<COcclusionInfo> *>,stdext::checked_array_iterator<std::unique_ptr<COcclusionInfo> *>>)(
    &v32,
    v22,
    v21,
    &v34);
  v23 = (_QWORD *)*((_QWORD *)a1 + 1);
  for ( i = *(_QWORD **)a1; i != v23; ++i )
  {
    if ( *i )
      std::default_delete<COcclusionInfo>::operator()();
  }
  v25 = *(_QWORD **)a1;
  v26 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
  *(_QWORD *)a1 = v20;
  if ( v26 )
    v25 = 0LL;
  operator delete(v25);
  v2 = (__int64 *)(*(_QWORD *)a1 + 8 * v17);
  v27 = *(_QWORD *)a1 + 8 * v18;
  *((_QWORD *)a1 + 1) = v2;
  *((_QWORD *)a1 + 2) = v27;
LABEL_2:
  v5 = *(_QWORD **)a1;
  v6 = (__int64)v2 - *(_QWORD *)a1;
  v33 = 0LL;
  v7 = v6 >> 3;
  *((_QWORD *)&v32 + 1) = 1LL;
  v8 = v7 - a2;
  v35 = 0LL;
  v9 = (unsigned __int64)&v5[v7];
  *(_QWORD *)&v32 = v9;
  if ( !v9 )
    goto LABEL_35;
  v35 = 1LL;
  v10 = v7 - a2;
  if ( v8 > 1 )
    v10 = 1LL;
  v11 = 8 * v10;
  v12 = &v2[v11 / 0xFFFFFFFFFFFFFFF8uLL];
  v33 = 1LL;
  if ( v2 != &v2[v11 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v28 = v32;
    v29 = 1LL;
    v30 = v33;
    do
    {
      --v2;
      if ( !v28 )
        goto LABEL_35;
      if ( !v29 )
        goto LABEL_35;
      v29 = v30 - 1;
      v30 = v29;
      if ( v29 >= *((_QWORD *)&v32 + 1) )
        goto LABEL_35;
      v31 = *v2;
      *v2 = 0LL;
      *(_QWORD *)(v28 + 8 * v29) = v31;
    }
    while ( v2 != v12 );
  }
  if ( v8 <= 1 )
    goto LABEL_7;
  if ( v7 && (!v5 || v7 < 0) )
LABEL_35:
    _invalid_parameter_noinfo_noreturn();
  *((_QWORD *)&v32 + 1) = v7;
  v33 = v7;
  *(_QWORD *)&v32 = v5;
  ((void (__fastcall *)(__int128 *, _QWORD *, _QWORD *, __int128 *))std::move_backward<std::move_iterator<std::unique_ptr<COcclusionInfo> *>,stdext::checked_array_iterator<std::unique_ptr<COcclusionInfo> *>>)(
    &v34,
    &v5[a2],
    &v5[v7 - 1],
    &v32);
LABEL_7:
  v13 = (unsigned __int64)&v5[a2 + 1];
  v14 = &v5[a2];
  v15 = v14;
  if ( v9 < v13 )
    v13 = v9;
  if ( v14 != (_QWORD *)v13 )
  {
    do
      std::unique_ptr<COcclusionInfo>::`scalar deleting destructor'(v15++);
    while ( v15 != (_QWORD *)v13 );
  }
  *((_QWORD *)a1 + 1) += 8LL;
  return v14;
}
