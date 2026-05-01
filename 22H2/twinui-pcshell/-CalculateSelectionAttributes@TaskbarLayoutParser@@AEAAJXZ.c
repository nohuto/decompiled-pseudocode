/*
 * XREFs of ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x180210DA4
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180211A60 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UICuratedCollectionSelectionHelpers@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UICuratedCollectionSelectionHelpers@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18020FDF0 (--$GetActivationFactory@V-$ComPtr@UICuratedCollectionSelectionHelpers@CuratedTileCollections@Uni.c)
 *     ??$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAAPEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAW423456@AEBW423456@@Z @ 0x18021029C (--$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ?AddRegionCode@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAAXPEBG@Z @ 0x180210D40 (-AddRegionCode@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAAXPEBG.c)
 *     ?GetCurrentRegionCode@RegionHelpers@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@W4RegionLookupFallbackOptions@2345@@Z @ 0x1804D8560 (-GetCurrentRegionCode@RegionHelpers@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarLayoutParser::CalculateSelectionAttributes(TaskbarLayoutParser *this)
{
  const unsigned __int16 *v2; // rdx
  int CurrentRegionCode; // eax
  _BYTE *v4; // rdx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  _BYTE *v9; // rdx
  int v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+28h] [rbp-38h] BYREF
  int v12; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v2 = (const unsigned __int16 *)*((_QWORD *)this + 19);
  if ( v2 )
  {
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::AddRegionCode(
      (TaskbarLayoutParser *)((char *)this + 48),
      v2);
  }
  else
  {
    memset(&hstringHeader, 0, sizeof(hstringHeader));
    CurrentRegionCode = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::RegionHelpers::GetCurrentRegionCode(&hstringHeader);
    if ( CurrentRegionCode < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8B,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)CurrentRegionCode);
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::AddRegionCode(
      (TaskbarLayoutParser *)((char *)this + 48),
      (const unsigned __int16 *)hstringHeader.Reserved.Reserved1);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
  }
  if ( !IsPPIEdition() )
  {
    v11 = 0LL;
    v14 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"WindowsInternal.Shell.UnifiedTile.CuratedTileCollections.CuratedCollectionSelectionHelpers",
      0x5Bu,
      0x5Au);
    v5 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedCollectionSelectionHelpers>>(
           v14,
           &v11);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 56LL))(v11, &v10);
      v6 = v5;
      if ( v5 >= 0 )
      {
        if ( v10 )
        {
          v12 = v10;
          v9 = (_BYTE *)*((_QWORD *)this + 12);
          if ( *((_BYTE **)this + 13) == v9 )
          {
            std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::_Emplace_reallocate<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU const &>(
              (const void **)this + 11,
              v9,
              &v12);
          }
          else
          {
            *(_DWORD *)v9 = v10;
            *((_QWORD *)this + 12) += 4LL;
          }
          *((_BYTE *)this + 51) = 1;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
        return 0LL;
      }
      v7 = 158LL;
    }
    else
    {
      v7 = 156LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    return v6;
  }
  v10 = 9;
  v4 = (_BYTE *)*((_QWORD *)this + 12);
  if ( *((_BYTE **)this + 13) == v4 )
  {
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::_Emplace_reallocate<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU const &>(
      (const void **)this + 11,
      v4,
      &v10);
  }
  else
  {
    *(_DWORD *)v4 = 9;
    *((_QWORD *)this + 12) += 4LL;
  }
  *((_BYTE *)this + 51) = 1;
  return 0LL;
}
