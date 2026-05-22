/*
 * XREFs of ?GetGestureHandlerForWorkspace@MPCGestureHandlerManager@@AEAA?AV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@K@Z @ 0x18006B6C8
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B454 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18006AF98 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_T_ea_18006AF98.c)
 *     ?MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z @ 0x18006BC54 (-MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x18006C744 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil.c)
 */

unsigned int *__fastcall MPCGestureHandlerManager::GetGestureHandlerForWorkspace(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3)
{
  __int64 *v3; // rdi
  _QWORD *v5; // rax
  __int64 v6; // r9
  unsigned int v7; // r10d
  MPCGestureHandlerManager *v8; // r11
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  unsigned int *v15; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v16; // [rsp+50h] [rbp+18h] BYREF

  v16 = a3;
  v15 = a2;
  v3 = (__int64 *)(a1 + 8);
  v5 = (_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>>,0>>::find(
                   a1 + 8,
                   &v15,
                   &v16);
  v9 = *v3;
  if ( *v5 == *v3 )
  {
    MPCGestureHandlerManager::MapGestureHandlerToWorkspace(v8, v7);
    v9 = *v3;
    v7 = v16;
  }
  v10 = *(_QWORD *)(v9 + 8);
  v11 = v9;
  if ( *(_BYTE *)(v10 + 25) )
    goto LABEL_10;
  do
  {
    if ( *(_DWORD *)(v10 + 32) >= v7 )
    {
      v11 = v10;
      v10 = *(_QWORD *)v10;
    }
    else
    {
      v10 = *(_QWORD *)(v10 + 16);
    }
  }
  while ( !*(_BYTE *)(v10 + 25) );
  if ( v11 == v9 || v7 < *(_DWORD *)(v11 + 32) )
  {
LABEL_10:
    v15 = &v16;
    v11 = *std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
             v3,
             &v14,
             (__int64 *)v11,
             v6,
             &v15);
  }
  v12 = *(_QWORD *)(v11 + 40);
  *(_QWORD *)a2 = v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  return a2;
}
