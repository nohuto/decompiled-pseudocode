/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1800F131C
 * Callers:
 *     ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x180016EB0 (-GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@VInputSite@@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180012E00 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@@2@@std@@CAXXZ @ 0x1800404EC (-_Xlength@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKU.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UICursor@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@0@@Z @ 0x1800D5828 (--$_Uninitialized_move@PEAV-$ComPtr@UICursor@@@WRL@Microsoft@@PEAV123@V-$allocator@V-$ComPtr@UIC.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@_K1@Z @ 0x1800DA974 (-_Change_array@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@.c)
 *     ?_Calculate_growth@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBA_K_K@Z @ 0x1800F16F8 (-_Calculate_growth@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputS.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSite>>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r12
  size_t size_of; // rax
  __int64 *v11; // rax
  __int64 v12; // rsi
  __int64 *v13; // rcx
  __int64 *v14; // rdx
  __int64 *v15; // r8
  __int64 *v16; // rcx
  __int64 result; // rax
  __int64 *v18; // [rsp+20h] [rbp-48h]
  __int64 *v19; // [rsp+70h] [rbp+8h]
  __int64 *v20; // [rsp+78h] [rbp+10h]

  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputInfoValidator::PointerState>>>>>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = (__int64)v11;
  v18 = v11;
  v13 = &v11[v6];
  v19 = v13 + 1;
  try
  {
    *v13 = 0LL;
    if ( v13 != a3 )
    {
      *v13 = *a3;
      *a3 = 0LL;
    }
    v20 = &v11[v6];
    v14 = a1[1];
    v15 = v11;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<Microsoft::WRL::ComPtr<ICursor> *,Microsoft::WRL::ComPtr<ICursor> *,std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(
        v16,
        a2,
        v11);
      v20 = (__int64 *)v12;
      v15 = v19;
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<ICursor> *,Microsoft::WRL::ComPtr<ICursor> *,std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(
      v16,
      v14,
      v15);
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Change_array((__int64)a1, v12, v8, v9);
    result = (__int64)&(*a1)[v6];
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>>(
      v20,
      v19);
    std::_Deallocate<16,0>(v18, (const struct std::nothrow_t *)(8 * v9));
    throw;
  }
  return result;
}
