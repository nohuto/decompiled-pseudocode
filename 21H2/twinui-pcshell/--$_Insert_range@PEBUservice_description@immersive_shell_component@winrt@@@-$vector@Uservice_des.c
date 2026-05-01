/*
 * XREFs of ??$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@@1@PEBUservice_description@immersive_shell_component@winrt@@1Uforward_iterator_tag@1@@Z @ 0x1804D0614
 * Callers:
 *     ?register_service_information@immersive_shell_component@winrt@@IEAAXU?$array_view@$$CBUservice_description@immersive_shell_component@winrt@@@2@@Z @ 0x1804D6330 (-register_service_information@immersive_shell_component@winrt@@IEAAXU-$array_view@$$CBUservice_d.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@0AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1804D05D0 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 *     ??$_Move_backward_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEAU123@00@Z @ 0x1804D0A38 (--$_Move_backward_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@st.c)
 *     ??$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@QEAU123@0PEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1804D0AFC (--$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@V-$alloc.c)
 *     ?_Change_array@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXQEAUservice_description@immersive_shell_component@winrt@@_K1@Z @ 0x1804D4E80 (-_Change_array@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Userv.c)
 *     ?add_ref@?$com_ptr@UIUnknown@@@winrt@@AEBAXXZ @ 0x1804D50A4 (-add_ref@-$com_ptr@UIUnknown@@@winrt@@AEBAXXZ.c)
 */

void __fastcall std::vector<winrt::immersive_shell_component::service_description>::_Insert_range<winrt::immersive_shell_component::service_description const *>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v6; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 *v11; // r14
  __int64 v12; // r14
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r14
  size_t v17; // rcx
  __int64 *v18; // rax
  __int64 *v19; // r13
  __int64 *v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 *v23; // r8
  __int64 v24; // rcx
  __int64 *v25; // r13
  __int64 *v26; // rbx
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // [rsp+20h] [rbp-48h]
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]
  __int64 *v31; // [rsp+70h] [rbp+8h]
  __int64 *v32; // [rsp+78h] [rbp+10h]
  char v33; // [rsp+80h] [rbp+18h]
  __int64 *v34; // [rsp+88h] [rbp+20h]

  v6 = a2;
  v8 = ((char *)a4 - (char *)a3) >> 5;
  v9 = (a2 - *a1) >> 5;
  v33 = 1;
  if ( v8 == 1 && a2 == a1[1] || (v33 = 0, v8) )
  {
    v10 = a1[2];
    v11 = (__int64 *)a1[1];
    if ( v8 <= (v10 - (__int64)v11) >> 5 )
    {
      v24 = 32 * v8;
      v25 = (__int64 *)(a2 + 32 * v8);
      if ( v8 >= ((__int64)v11 - a2) >> 5 )
      {
        a1[1] = std::_Uninitialized_move<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *,std::allocator<winrt::immersive_shell_component::service_description>>(
                  a2,
                  v11,
                  a2 + 32 * v8);
        std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>((__int64 *)v6, v11);
        if ( a3 != a4 )
        {
          v28 = (__int64)a3 - v6;
          do
          {
            *(_OWORD *)v6 = *(_OWORD *)(v6 + v28);
            *(_QWORD *)(v6 + 16) = *(_QWORD *)(v28 + v6 + 16);
            winrt::com_ptr<IUnknown>::add_ref(v6 + 16);
            *(_DWORD *)(v6 + 24) = *(_DWORD *)(v6 + v28 + 24);
            v6 += 32LL;
          }
          while ( (__int64 *)(v6 + v28) != a4 );
        }
      }
      else
      {
        v26 = &v11[v24 / 0xFFFFFFFFFFFFFFF8uLL];
        a1[1] = std::_Uninitialized_move<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *,std::allocator<winrt::immersive_shell_component::service_description>>(
                  &v11[v24 / 0xFFFFFFFFFFFFFFF8uLL],
                  v11,
                  v11);
        std::_Move_backward_unchecked<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *>(
          v6,
          v26,
          v11);
        std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>((__int64 *)v6, v25);
        if ( a3 != a4 )
        {
          v27 = (__int64)a3 - v6;
          do
          {
            *(_OWORD *)v6 = *(_OWORD *)(v6 + v27);
            *(_QWORD *)(v6 + 16) = *(_QWORD *)(v6 + v27 + 16);
            winrt::com_ptr<IUnknown>::add_ref(v6 + 16);
            *(_DWORD *)(v6 + 24) = *(_DWORD *)(v6 + v27 + 24);
            v6 += 32LL;
          }
          while ( (__int64 *)(v6 + v27) != a4 );
        }
      }
      std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(
        (__int64 *)v6,
        (__int64 *)v6);
    }
    else
    {
      v12 = ((__int64)v11 - *a1) >> 5;
      if ( v8 > 0x7FFFFFFFFFFFFFFLL - v12 )
        std::_Xlength_error("vector<T> too long");
      v13 = v12 + v8;
      v30 = v12 + v8;
      v14 = (v10 - *a1) >> 5;
      v15 = v14 >> 1;
      if ( v14 <= 0x7FFFFFFFFFFFFFFLL - (v14 >> 1) )
      {
        v16 = v15 + v14;
        if ( v15 + v14 < v13 )
          v16 = v13;
      }
      else
      {
        v16 = v12 + v8;
      }
      v17 = 32 * v16;
      if ( v16 > 0x7FFFFFFFFFFFFFFLL )
        v17 = -1LL;
      v18 = std::_Allocate<16,std::_Default_allocate_traits,0>(v17);
      v31 = v18;
      v32 = &v18[4 * v8 + 4 * v9];
      try
      {
        v19 = &v18[4 * v9];
        v20 = v19;
        if ( a3 != a4 )
        {
          v21 = (char *)a3 - (char *)v19;
          do
          {
            *(_OWORD *)v20 = *(_OWORD *)((char *)v20 + v21);
            v20[2] = *(__int64 *)((char *)v20 + v21 + 16);
            winrt::com_ptr<IUnknown>::add_ref(v20 + 2);
            *((_DWORD *)v20 + 6) = *(_DWORD *)((char *)v20 + v21 + 24);
            v20 += 4;
          }
          while ( (__int64 *)((char *)v20 + v21) != a4 );
        }
        std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(v20, v20);
        v34 = v19;
        v22 = *a1;
        v23 = v31;
        if ( !v33 )
        {
          std::_Uninitialized_move<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *,std::allocator<winrt::immersive_shell_component::service_description>>(
            v22,
            v6,
            v31);
          v34 = v31;
          v23 = v32;
          v22 = v6;
        }
        std::_Uninitialized_move<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *,std::allocator<winrt::immersive_shell_component::service_description>>(
          v22,
          a1[1],
          v23);
        std::vector<winrt::immersive_shell_component::service_description>::_Change_array(a1, v31, v30, v16, v16);
      }
      catch ( ... )
      {
        std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(v34, v32);
        std::_Deallocate<16,0>(v31, (const struct std::nothrow_t *)(32 * v29));
        throw;
      }
    }
  }
}
