/*
 * XREFs of ?OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1803D88EC
 * Callers:
 *     ?OnInputAppPropertiesChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreTextPropertyBag@Core@Text@Internal@UI@Windows@@PEAUICoreTextPropertyBagPropertyValueChangedEventArgs@45678@@Z @ 0x1803CE700 (-OnInputAppPropertiesChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreTextPropertyBag@Core@T.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800618B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x18009BA0C (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x1803C64F4 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 *     ?stoul@std@@YAKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x1803C66FC (-stoul@std@@YAKAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1803D6DDC (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_T_ea_1803D6DDC.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::OnInputAppPropertyChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        HSTRING a2,
        HSTRING a3)
{
  WCHAR *StringRawBuffer; // rax
  WCHAR *v6; // rax
  wchar_t *v7; // rax
  wchar_t *v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // eax
  _QWORD *v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  wchar_t *v15; // rax
  wchar_t *v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // eax
  _QWORD *v19; // r9
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  unsigned int v24; // [rsp+30h] [rbp-39h] BYREF
  unsigned int *v25; // [rsp+38h] [rbp-31h] BYREF
  __int64 v26; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v27[2]; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-11h]
  unsigned __int64 v29; // [rsp+60h] [rbp-9h]
  __int64 *v30[4]; // [rsp+68h] [rbp-1h] BYREF
  _QWORD v31[4]; // [rsp+88h] [rbp+1Fh] BYREF

  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
  std::wstring::wstring((__int64)v30, StringRawBuffer);
  v6 = (WCHAR *)WindowsGetStringRawBuffer(a3, 0LL);
  std::wstring::wstring((__int64)v27, v6);
  if ( std::wstring::find(v30, L"RegistryKeyNameForLastPositionX:") != -1 )
  {
    v7 = (wchar_t *)std::wstring::substr(v30, (__int64)v31, 0x20uLL, 0xFFFFFFFFFFFFFFFFuLL);
    std::stoul(v7, v8, v9);
    v24 = v10;
    std::wstring::_Tidy_deallocate(v31);
    v11 = (_QWORD *)((char *)this + 72);
    v12 = *((_QWORD *)this + 9);
    v13 = *(_QWORD *)(v12 + 8);
    if ( *(_BYTE *)(v13 + 25) )
      goto LABEL_9;
    do
    {
      if ( *(_DWORD *)(v13 + 32) >= v24 )
      {
        v12 = v13;
        v13 = *(_QWORD *)v13;
      }
      else
      {
        v13 = *(_QWORD *)(v13 + 16);
      }
    }
    while ( !*(_BYTE *)(v13 + 25) );
    if ( v12 == *v11 || v24 < *(_DWORD *)(v12 + 32) )
    {
LABEL_9:
      v25 = &v24;
      v12 = *std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
               (__int64 *)this + 9,
               &v26,
               (__int64 *)v12,
               (__int64)v11,
               &v25);
    }
    if ( (_QWORD *)(v12 + 40) != v27 )
    {
      v14 = v27;
      if ( v29 >= 8 )
        v14 = (_QWORD *)v27[0];
      std::wstring::assign((char *)(v12 + 40), v14, v28);
    }
  }
  if ( std::wstring::find(v30, L"RegistryKeyNameForLastPositionY:") != -1 )
  {
    v15 = (wchar_t *)std::wstring::substr(v30, (__int64)v31, 0x20uLL, 0xFFFFFFFFFFFFFFFFuLL);
    std::stoul(v15, v16, v17);
    v24 = v18;
    std::wstring::_Tidy_deallocate(v31);
    v19 = (_QWORD *)((char *)this + 88);
    v20 = *((_QWORD *)this + 11);
    v21 = *(_QWORD *)(v20 + 8);
    if ( *(_BYTE *)(v21 + 25) )
      goto LABEL_22;
    do
    {
      if ( *(_DWORD *)(v21 + 32) >= v24 )
      {
        v20 = v21;
        v21 = *(_QWORD *)v21;
      }
      else
      {
        v21 = *(_QWORD *)(v21 + 16);
      }
    }
    while ( !*(_BYTE *)(v21 + 25) );
    if ( v20 == *v19 || v24 < *(_DWORD *)(v20 + 32) )
    {
LABEL_22:
      v25 = &v24;
      v20 = *std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
               (__int64 *)this + 11,
               &v26,
               (__int64 *)v20,
               (__int64)v19,
               &v25);
    }
    if ( (_QWORD *)(v20 + 40) != v27 )
    {
      v22 = v27;
      if ( v29 >= 8 )
        v22 = (_QWORD *)v27[0];
      std::wstring::assign((char *)(v20 + 40), v22, v28);
    }
  }
  std::wstring::_Tidy_deallocate(v27);
  std::wstring::_Tidy_deallocate(v30);
  return 0LL;
}
