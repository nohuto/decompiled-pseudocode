/*
 * XREFs of ??$RegisterNodeForVisit@VCContent@@@CDebugTreeDumper@@QEAAXPEAVCContent@@_N@Z @ 0x1801AC750
 * Callers:
 *     ??$AddLinkInternal@VCContent@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCContent@@_N@Z @ 0x1801AC490 (--$AddLinkInternal@VCContent@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$char_traits@D.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@?$vector@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@V?$allocator@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@2@@std@@QEAAPEAU?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@1@QEAU21@$$QEAU21@@Z @ 0x180196778 (--$_Emplace_reallocate@U-$pair@PEAXV-$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@-$.c)
 *     ??$_Insert_nohint@AEB_JU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_J@std@@@std@@@std@@_N@1@_NAEB_JU_Not_a_node_tag@1@@Z @ 0x180196CEC (--$_Insert_nohint@AEB_JU_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@_JU-$less@_J@std@@V-$alloc.c)
 *     ?_Reset_move@?$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAX$$QEAV12@@Z @ 0x180198118 (-_Reset_move@-$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAXXZ @ 0x180198170 (-_Tidy@-$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAXXZ.c)
 *     ??$?4V_lambda_ea5334e7435b0bbc38160b55b647b03d_@@X@?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@QEAAAEAV01@$$QEAV_lambda_ea5334e7435b0bbc38160b55b647b03d_@@@Z @ 0x1801AC398 (--$-4V_lambda_ea5334e7435b0bbc38160b55b647b03d_@@X@-$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z.c)
 */

__int64 __fastcall CDebugTreeDumper::RegisterNodeForVisit<CContent>(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v5; // r10
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 i; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // [rsp+38h] [rbp-71h] BYREF
  char v18[16]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v19; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v20[56]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v21; // [rsp+90h] [rbp-19h]
  _BYTE v22[56]; // [rsp+A0h] [rbp-9h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, _BYTE *); // [rsp+D8h] [rbp+2Fh]

  result = *(_QWORD *)(a1 + 24);
  v3 = a2;
  v17 = a2;
  v5 = result;
  v6 = *(_QWORD *)(result + 8);
  v7 = v6;
  while ( !*(_BYTE *)(v7 + 25) )
  {
    if ( *(_QWORD *)(v7 + 32) >= a2 )
    {
      if ( *(_BYTE *)(v5 + 25) && a2 < *(_QWORD *)(v7 + 32) )
        v5 = v7;
      result = v7;
      v7 = *(_QWORD *)v7;
    }
    else
    {
      v7 = *(_QWORD *)(v7 + 16);
    }
  }
  if ( !*(_BYTE *)(v5 + 25) )
    v6 = *(_QWORD *)v5;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    if ( a2 >= *(_QWORD *)(v6 + 32) )
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
    else
    {
      v5 = v6;
      v6 = *(_QWORD *)v6;
    }
  }
  v8 = 0LL;
  while ( result != v5 )
  {
    v9 = *(_QWORD *)(result + 16);
    ++v8;
    if ( *(_BYTE *)(v9 + 25) )
    {
      for ( i = *(_QWORD *)(result + 8); !*(_BYTE *)(i + 25) && result == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
        result = i;
      result = i;
    }
    else
    {
      v11 = *(_QWORD *)v9;
      for ( result = *(_QWORD *)(result + 16); !*(_BYTE *)(v11 + 25); v11 = *(_QWORD *)v11 )
        result = v11;
    }
  }
  if ( !v8 )
  {
    v23 = 0LL;
    std::function<void (void *,CDebugTreeDumper *)>::operator=<_lambda_ea5334e7435b0bbc38160b55b647b03d_,void>((__int64)v22);
    std::_Tree<std::_Tset_traits<__int64,std::less<__int64>,std::allocator<__int64>,0>>::_Insert_nohint<__int64 const &,std::_Not_a_node_tag>(
      (__int64 **)(a1 + 24),
      (__int64)v18,
      v12,
      &v17);
    v19 = v3;
    v21 = 0LL;
    if ( v23 )
    {
      v13 = (**v23)(v23, v20);
      v3 = v19;
      v21 = v13;
    }
    v14 = *(_QWORD **)(a1 + 48);
    if ( *(_QWORD **)(a1 + 56) == v14 )
    {
      std::vector<std::pair<void *,std::function<void (void *,CDebugTreeDumper *)>>>::_Emplace_reallocate<std::pair<void *,std::function<void (void *,CDebugTreeDumper *)>>>(
        (_QWORD *)(a1 + 40),
        v14,
        &v19);
    }
    else
    {
      *v14 = v3;
      v14[8] = 0LL;
      std::_Func_class<void,void *,CDebugTreeDumper *>::_Reset_move((__int64)(v14 + 1), (__int64)v20);
      *(_QWORD *)(a1 + 48) += 72LL;
    }
    std::_Func_class<void,void *,CDebugTreeDumper *>::_Tidy((__int64)v20, v15);
    return std::_Func_class<void,void *,CDebugTreeDumper *>::_Tidy((__int64)v22, v16);
  }
  return result;
}
