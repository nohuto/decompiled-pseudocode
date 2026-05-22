/*
 * XREFs of ?RegisterKeyboardDockClient@KeyboardDockServer@@UEAAJPEAVBamoKeyboardDockServerStub@@PEAVBamoKeyboardDockClientProxy@@@Z @ 0x1801276E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800694A8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180125058 (--$_Emplace_reallocate@V-$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardDockServer::RegisterKeyboardDockClient(
        KeyboardDockServer *this,
        struct BamoKeyboardDockServerStub *a2,
        struct BamoKeyboardDockClientProxy *a3,
        const char *a4)
{
  struct BamoKeyboardDockClientProxy **i; // rax
  __int64 *v7; // rdx
  __int64 *v8; // rbx
  __int64 v9; // rdx
  int v10; // eax
  __int64 *v11; // rbx
  __int64 v12; // rdx
  int v13; // eax
  __int64 *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct BamoKeyboardDockClientProxy *j; // [rsp+40h] [rbp+20h] BYREF
  struct BamoKeyboardDockClientProxy *v22; // [rsp+50h] [rbp+30h]

  v22 = a3;
  for ( i = (struct BamoKeyboardDockClientProxy **)*((_QWORD *)this + 7);
        i != *((struct BamoKeyboardDockClientProxy ***)this + 8) && *i != a3;
        ++i )
  {
    ;
  }
  if ( i != *((struct BamoKeyboardDockClientProxy ***)this + 8) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      26LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\keyboardapi\\server\\keyboarddockserver.cpp",
      a4);
    __debugbreak();
  }
  j = a3;
  if ( a3 )
    (**(void (__fastcall ***)(struct BamoKeyboardDockClientProxy *, struct BamoKeyboardDockServerStub *))a3)(a3, a2);
  v7 = (__int64 *)*((_QWORD *)this + 8);
  if ( *((__int64 **)this + 9) == v7 )
  {
    std::vector<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>(
      (__int64 **)this + 7,
      v7,
      (__int64 *)&j);
  }
  else
  {
    j = 0LL;
    *v7 = (__int64)a3;
    *((_QWORD *)this + 8) += 8LL;
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&j);
  v8 = (__int64 *)*((_QWORD *)this + 10);
  v9 = *v8;
  j = (struct BamoKeyboardDockClientProxy *)*v8;
  while ( (__int64 *)v9 != v8 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*((_QWORD *)v22 + 1) + 48LL))(
            (__int64)v22 + 8,
            *(unsigned int *)(v9 + 32),
            *(_QWORD *)(v9 + 40));
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        35LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\keyboardapi\\server\\keyboarddockserver.cpp",
        (const char *)(unsigned int)v10);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&j);
    v9 = (__int64)j;
  }
  v11 = (__int64 *)*((_QWORD *)this + 12);
  v12 = *v11;
  j = (struct BamoKeyboardDockClientProxy *)*v11;
  while ( (__int64 *)v12 != v11 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*((_QWORD *)v22 + 1) + 24LL))(
            (__int64)v22 + 8,
            *(unsigned int *)(v12 + 32),
            *(_QWORD *)(v12 + 40));
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        39LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\keyboardapi\\server\\keyboarddockserver.cpp",
        (const char *)(unsigned int)v13);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&j);
    v12 = (__int64)j;
  }
  v14 = (__int64 *)*((_QWORD *)this + 14);
  v15 = *v14;
  for ( j = (struct BamoKeyboardDockClientProxy *)*v14; ; v15 = (__int64)j )
  {
    v16 = *((_QWORD *)v22 + 1);
    if ( (__int64 *)v15 == v14 )
      break;
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v16 + 40))(
            (__int64)v22 + 8,
            *(unsigned int *)(v15 + 32),
            v15 + 56);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        43LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\keyboardapi\\server\\keyboarddockserver.cpp",
        (const char *)(unsigned int)v17);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&j);
  }
  v18 = (*(__int64 (**)(void))(v16 + 64))();
  if ( v18 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      45LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\keyboardapi\\server\\keyboarddockserver.cpp",
      (const char *)(unsigned int)v18);
  return 0LL;
}
