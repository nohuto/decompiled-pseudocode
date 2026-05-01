/*
 * XREFs of ?ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x1800F20A0
 * Callers:
 *     ?ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z @ 0x1800E8B14 (-ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z.c)
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800F2BA0 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@AEBUguid@winrt@@@Z @ 0x1800EF3F8 (-lower_bound@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid.c)
 *     ?erase@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@@Z @ 0x1800F39D4 (-erase@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAA-AV-$_Deque_i_ea_1800F39D4.c)
 *     ?front@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@XZ @ 0x1800F3AF8 (-front@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@XZ.c)
 *     ?push_front@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAX$$QEAUguid@winrt@@@Z @ 0x1800F3B24 (-push_front@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAAX$$QEAUguid@winrt@@@Z.c)
 *     ?HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x1800F6250 (-HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::ActivateTabUnderLock(
        _QWORD *a1,
        __int128 *a2)
{
  __int128 v2; // xmm0
  _QWORD *v3; // rbx
  __int64 v5; // r8
  _QWORD ****v6; // rdx
  __int64 v8; // r11
  _QWORD ***v9; // r9
  _QWORD **v10; // rcx
  __int64 result; // rax
  winrt::impl *v12; // rax
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]
  __int64 v16; // [rsp+70h] [rbp+10h] BYREF

  v2 = *a2;
  v3 = a1 + 19;
  v5 = a1[22];
  v6 = 0LL;
  v8 = v5 + a1[23];
  v13 = v2;
  if ( a1 != (_QWORD *)-152LL )
    v6 = (_QWORD ****)*v3;
  if ( v6 )
    v9 = *v6;
  else
    v9 = 0LL;
  while ( v5 != v8 )
  {
    v14 = *(_OWORD *)v9[1][v5 & ((unsigned __int64)v9[2] - 1)];
    if ( v14 == v13 )
      break;
    ++v5;
  }
  v10 = 0LL;
  if ( v6 && *v6 )
    v10 = **v6;
  result = v3[3] + v3[4];
  if ( v5 != result )
  {
    v14 = 0LL;
    if ( v10 && *v10 )
      *(_QWORD *)&v14 = **v10;
    v15 = v5;
    std::deque<winrt::guid>::erase(v3, &v13, &v14, v9);
    v12 = (winrt::impl *)std::deque<winrt::guid>::front(v3);
    std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::lower_bound(
      (__int64)(a1 + 3),
      (__int64)&v16,
      v12);
    if ( v16 != a1[4] )
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(
        *(winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)(v16 + 32),
        0);
    return std::deque<winrt::guid>::push_front(v3, a2);
  }
  return result;
}
