/*
 * XREFs of ?GetTokenizedStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEBV?$function@$$A6AXPEAG@Z@std@@@Z @ 0x1804D8668
 * Callers:
 *     ?ParseSelectionAttributes@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2345@@Z @ 0x1804D9360 (-ParseSelectionAttributes@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsIn.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005E140 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x1804D8528 (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetTokenizedStringAttributeValue(
        __int64 a1,
        __int64 **a2,
        __int64 a3)
{
  std::_Ref_count_base *v4; // rdx
  wchar_t *i; // rcx
  __int64 v6; // rcx
  wchar_t *v7; // rax
  wchar_t *v9; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v10[2]; // [rsp+28h] [rbp-28h] BYREF
  LPVOID v11[3]; // [rsp+38h] [rbp-18h] BYREF
  wchar_t *Context; // [rsp+78h] [rbp+28h] BYREF

  *(_OWORD *)v10 = 0LL;
  if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(a1, a2, v10) >= 0 )
  {
    memset(v11, 0, sizeof(v11));
    v4 = v10[0];
    if ( *((_QWORD *)v10[0] + 3) >= 8uLL )
      v4 = *(std::_Ref_count_base **)v10[0];
    if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                v11,
                (__int64)v4,
                0xFFFFFFFFFFFFFFFFuLL) >= 0 )
    {
      Context = 0LL;
      for ( i = (wchar_t *)v11[0]; ; i = 0LL )
      {
        v7 = wcstok_s(i, L"|", &Context);
        if ( !v7 )
          break;
        v9 = v7;
        v6 = *(_QWORD *)(a3 + 56);
        if ( !v6 )
        {
          std::_Xbad_function_call();
          return WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetTokenizedStringAttributeValue_::_1_::dtor_0();
        }
        (*(void (__fastcall **)(__int64, wchar_t **))(*(_QWORD *)v6 + 16LL))(v6, &v9);
      }
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v11);
  }
  if ( v10[1] )
    std::_Ref_count_base::_Decref(v10[1]);
  return 0LL;
}
