/*
 * XREFs of ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@AEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@2@AEAUevent_token@2@AEAU82@@2@@?$list@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@AEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@2@AEAUevent_token@2@AEAU82@@1@@Z @ 0x1800E4ADC
 * Callers:
 *     ??$_Try_emplace@AEB_KAEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@2@AEAUevent_token@2@AEAU82@@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@_N@1@AEB_KAEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@4@AEAUevent_token@4@3@Z @ 0x1800E5950 (--$_Try_emplace@AEB_KAEAU-$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@5@AEBUWindowTabDataModel@2UI@345@Uevent_token@5@2@Z @ 0x1800F1C00 (--0WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBU-$com_ptr@UTabProxyWindowFac.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::list<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>::_Insert<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory> &,winrt::Windows::Internal::UI::Shell::WindowTabDataModel &,winrt::event_token &,winrt::event_token &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD **a4,
        __int64 a5)
{
  _QWORD *v8; // rsi
  __int64 *v9; // r10
  _QWORD *v10; // r11
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 result; // rax
  _QWORD *v14; // [rsp+38h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 8) == 0x11A7B9611A7B961LL )
    std::_Xlength_error("list<T> too long");
  v8 = *(_QWORD **)(a2 + 8);
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(0xE8uLL);
  v9 = *(__int64 **)a5;
  v10 = *(_QWORD **)(a5 + 8);
  v11 = *(_QWORD *)(a5 + 16);
  v12 = *(_QWORD *)(a5 + 24);
  v14[2] = **a4;
  result = winrt::Windows::Internal::Shell::implementation::WindowData::WindowData((int)v14 + 24, v12, v11, *v10, *v9);
  *v14 = a2;
  v14[1] = v8;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v14;
  *v8 = v14;
  return result;
}
