/*
 * XREFs of ??$_Insert_range@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@1@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x1804C642C
 * Callers:
 *     ?GetActiveApps@AppUsageTracker@@UEAA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@XZ @ 0x1804C6DF0 (-GetActiveApps@AppUsageTracker@@UEAA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@std@@@2@@std@@CAXXZ @ 0x1800EE4B8 (-_Xlength@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIU.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1802098F0 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ??$_Uninitialized_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18025AC2C (--$_Uninitialized_move@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAV12@V.c)
 *     ?_Calculate_growth@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEBA_K_K@Z @ 0x18025CDFC (-_Calculate_growth@-$vector@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C.c)
 *     ?_Change_array@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K1@Z @ 0x18025CE34 (-_Change_array@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocat.c)
 *     ??$_Move_backward_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00@Z @ 0x1804C689C (--$_Move_backward_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEA.c)
 */

void __fastcall std::vector<std::wstring>::_Insert_range<std::move_iterator<std::wstring *>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v6; // r14
  unsigned __int64 v8; // rsi
  _QWORD *v9; // r12
  __int64 v10; // r12
  size_t v11; // rcx
  unsigned __int64 v12; // r9
  _QWORD *v13; // r12
  char *v14; // r8
  _OWORD *v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rsi
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _OWORD *v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _OWORD *v29; // rcx
  __int64 v30; // [rsp+20h] [rbp-58h]
  __int64 v31; // [rsp+28h] [rbp-50h]
  _QWORD *v32; // [rsp+88h] [rbp+10h]
  char v33; // [rsp+90h] [rbp+18h]
  _QWORD *v34; // [rsp+90h] [rbp+18h]
  unsigned __int64 v35; // [rsp+98h] [rbp+20h]

  v6 = a2;
  v8 = ((__int64)a4 - a3) >> 5;
  v30 = (a2 - *a1) >> 5;
  v33 = 1;
  if ( v8 == 1 && a2 == a1[1] || (v33 = 0, v8) )
  {
    v9 = (_QWORD *)a1[1];
    if ( v8 <= (__int64)(a1[2] - (_QWORD)v9) >> 5 )
    {
      v20 = ((__int64)v9 - a2) >> 5;
      v21 = 32 * v8;
      v22 = 32 * v8 + a2;
      v34 = (_QWORD *)v22;
      if ( v8 >= v20 )
      {
        a1[1] = std::_Uninitialized_move<std::wstring *,std::wstring *,std::allocator<std::wstring>>(
                  (_QWORD *)v6,
                  v9,
                  v22);
        std::_Destroy_range<std::allocator<std::wstring>>((_QWORD *)v6, v9);
        v27 = (_QWORD *)(a3 + 24);
        v28 = v6 - a3;
        while ( 1 )
        {
          v29 = v27 - 3;
          if ( v27 - 3 == a4 )
            break;
          *(_QWORD *)((char *)v27 + v28 - 8) = 0LL;
          *(_QWORD *)((char *)v27 + v28) = 0LL;
          *(_OWORD *)v6 = *v29;
          *(_OWORD *)(v6 + 16) = v29[1];
          *(v27 - 1) = 0LL;
          *v27 = 7LL;
          *(_WORD *)v29 = 0;
          v6 += 32LL;
          v27 += 4;
        }
      }
      else
      {
        v23 = &v9[v21 / 0xFFFFFFFFFFFFFFF8uLL];
        a1[1] = std::_Uninitialized_move<std::wstring *,std::wstring *,std::allocator<std::wstring>>(
                  &v9[v21 / 0xFFFFFFFFFFFFFFF8uLL],
                  v9,
                  (__int64)v9);
        std::_Move_backward_unchecked<std::wstring *,std::wstring *>(v6, v23, v9);
        std::_Destroy_range<std::allocator<std::wstring>>((_QWORD *)v6, v34);
        v24 = (_QWORD *)(a3 + 24);
        v25 = v6 - a3;
        while ( 1 )
        {
          v26 = v24 - 3;
          if ( v24 - 3 == a4 )
            break;
          *(_QWORD *)((char *)v24 + v25 - 8) = 0LL;
          *(_QWORD *)((char *)v24 + v25) = 0LL;
          *(_OWORD *)v6 = *v26;
          *(_OWORD *)(v6 + 16) = v26[1];
          *(v24 - 1) = 0LL;
          *v24 = 7LL;
          *(_WORD *)v26 = 0;
          v6 += 32LL;
          v24 += 4;
        }
      }
      std::_Destroy_range<std::allocator<std::wstring>>((_QWORD *)v6, (_QWORD *)v6);
    }
    else
    {
      v10 = ((__int64)v9 - *a1) >> 5;
      if ( v8 > 0x7FFFFFFFFFFFFFFLL - v10 )
        std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,KeyboardHosting::ViewState>>>>>::_Xlength();
      v31 = v10 + v8;
      v35 = std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Calculate_growth(
              a1,
              v10 + v8);
      v11 = 32 * v35;
      if ( v35 > v12 )
        v11 = -1LL;
      v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
      try
      {
        v16 = &v13[4 * v30];
        v17 = (_QWORD *)(a3 + 24);
        v14 = (char *)v16 - a3;
        while ( 1 )
        {
          v15 = v17 - 3;
          if ( v17 - 3 == a4 )
            break;
          *(_QWORD *)((char *)v17 + (_QWORD)v14 - 8) = 0LL;
          *(_QWORD *)((char *)v17 + (_QWORD)v14) = 0LL;
          *(_OWORD *)v16 = *v15;
          *((_OWORD *)v16 + 1) = v15[1];
          *(v17 - 1) = 0LL;
          *v17 = 7LL;
          *(_WORD *)v15 = 0;
          v16 += 4;
          v17 += 4;
        }
        std::_Destroy_range<std::allocator<std::wstring>>(v16, v16);
        v32 = &v13[4 * v30];
        v18 = (__int64)v13;
        v19 = (_QWORD *)*a1;
        if ( !v33 )
        {
          std::_Uninitialized_move<std::wstring *,std::wstring *,std::allocator<std::wstring>>(
            v19,
            (_QWORD *)v6,
            (__int64)v13);
          v32 = v13;
          v18 = (__int64)&v13[4 * v30 + 4 * v8];
          v19 = (_QWORD *)v6;
        }
        std::_Uninitialized_move<std::wstring *,std::wstring *,std::allocator<std::wstring>>(v19, (_QWORD *)a1[1], v18);
        std::vector<std::wstring>::_Change_array((__int64)a1, (__int64)v13, v31, v35);
      }
      catch ( ... )
      {
        std::_Destroy_range<std::allocator<std::wstring>>(v32, &v13[4 * v30 + 4 * v8]);
        std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(32 * v35));
        throw;
      }
    }
  }
}
