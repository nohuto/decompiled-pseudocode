/*
 * XREFs of ??$_Emplace_reallocate@AEBKAEAPEAUIRawInputProvider@@@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@QEAAPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@1@QEAU21@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x1800413B8
 * Callers:
 *     ??$emplace_back@AEBKAEAPEAUIRawInputProvider@@@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@QEAAAEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x180041594 (--$emplace_back@AEBKAEAPEAUIRawInputProvider@@@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@@2@@std@@CAXXZ @ 0x1800404EC (-_Xlength@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKU.c)
 *     ??$_Uninitialized_move@PEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@PEAU12@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@YAPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@0@@Z @ 0x18004152C (--$_Uninitialized_move@PEAU-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@PEAU12@V-.c)
 *     ?_Change_array@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@AEAAXQEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@2@_K1@Z @ 0x180041644 (-_Change_array@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$allocato.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::_Emplace_reallocate<unsigned long const &,IRawInputProvider * &>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4)
{
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  char *v13; // rax
  char *v14; // rsi
  unsigned __int64 v15; // r15
  char *v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rdx
  char *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 result; // rax
  __int64 v23; // rcx
  __int64 v24; // [rsp+20h] [rbp-48h]
  char *v25; // [rsp+28h] [rbp-40h]
  char *v26; // [rsp+70h] [rbp+8h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputInfoValidator::PointerState>>>>>::_Xlength();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  try
  {
    v14 = v13;
    v25 = v13;
    v15 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
    v16 = &v13[v15];
    v24 = (__int64)&v13[v15 + 16];
    *(_DWORD *)v16 = *a3;
    v17 = *a4;
    *((_QWORD *)v16 + 1) = *a4;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    v26 = v16;
    v18 = a1[1];
    v19 = v14;
    v20 = *a1;
    if ( a2 != v18 )
    {
      std::_Uninitialized_move<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>> *,std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>> *,std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>>(
        v20,
        a2,
        v14);
      v26 = v14;
      v19 = v16 + 16;
      v18 = a1[1];
      v20 = a2;
    }
    std::_Uninitialized_move<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>> *,std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>> *,std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>>(
      v20,
      v18,
      v19);
    std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::_Change_array(a1, v14, v8, v11);
    result = v15 + *a1;
  }
  catch ( ... )
  {
    std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::_Destroy(v21, v26, v24);
    std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::deallocate(v23, v25, v11);
    throw;
  }
  return result;
}
