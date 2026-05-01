/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1801B5424
 * Callers:
 *     ?SetOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1801C13AC (-SetOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAJPEAUIImmersiveApplicationInter.c)
 *     ?AddObject@ObjectArray@Discover@PenWorkspace@@QEAAXPEAUIUnknown@@@Z @ 0x18028AAF8 (-AddObject@ObjectArray@Discover@PenWorkspace@@QEAAXPEAUIUnknown@@@Z.c)
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1802CDC80 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@0@@Z @ 0x1801B58D8 (--$_Uninitialized_move@PEAV-$ComPtr@UIApplicationView@@@WRL@Microsoft@@PEAV123@V-$allocator@V-$C.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@_K1@Z @ 0x1801C4970 (-_Change_array@-$vector@V-$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V-$allocator@V-$ComP.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IApplicationView>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IApplicationView>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  __int64 *v13; // rax
  __int64 *v14; // rsi
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 *v17; // r8
  __int64 v18; // rcx
  __int64 result; // rax
  __int64 *v20; // [rsp+20h] [rbp-48h]
  void *v21; // [rsp+20h] [rbp-48h]
  __int64 *v22; // [rsp+70h] [rbp+8h]
  __int64 *v23; // [rsp+78h] [rbp+10h]

  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v13;
  v20 = v13;
  v15 = &v13[v6];
  v22 = v15 + 1;
  try
  {
    *v15 = 0LL;
    if ( v15 != a3 )
    {
      *v15 = *a3;
      *a3 = 0LL;
    }
    v23 = &v13[v6];
    v16 = a1[1];
    v17 = v13;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<Microsoft::WRL::ComPtr<IApplicationView> *,Microsoft::WRL::ComPtr<IApplicationView> *,std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>(
        v18,
        a2,
        v13);
      v23 = v14;
      v17 = v22;
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<IApplicationView> *,Microsoft::WRL::ComPtr<IApplicationView> *,std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>(
      v18,
      v16,
      v17);
    std::vector<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>::_Change_array(a1, v14, v8, v11, v20);
    result = *a1 + 8 * v6;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>(v23, v22);
    std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(8 * v11));
    throw;
  }
  return result;
}
