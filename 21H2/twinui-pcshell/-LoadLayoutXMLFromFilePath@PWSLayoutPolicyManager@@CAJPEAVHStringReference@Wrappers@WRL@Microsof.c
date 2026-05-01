/*
 * XREFs of ?LoadLayoutXMLFromFilePath@PWSLayoutPolicyManager@@CAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x180295BF0
 * Callers:
 *     ?GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180295A24 (-GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18020B32C (--$GetActivationFactory@V-$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollection.c)
 *     ?XMLDocFromStream@PWSLayoutPolicyManager@@CAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x18029671C (-XMLDocFromStream@PWSLayoutPolicyManager@@CAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PE.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PWSLayoutPolicyManager::LoadLayoutXMLFromFilePath(
        struct Microsoft::WRL::Wrappers::HStringReference *a1,
        struct IXMLDOMDocument2 **a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  struct Windows::Storage::Streams::IRandomAccessStream *v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  *a2 = 0LL;
  v10 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"WindowsInternal.Shell.UnifiedTile.CuratedTileCollections.CuratedCollectionInitializationStatics",
    0x60u,
    0x5Fu);
  v4 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedCollectionInitializationStatics>>(
         v12,
         &v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v9 = 0LL;
    v6 = v10;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Storage::Streams::IRandomAccessStream **))(*(_QWORD *)v6 + 80LL))(
           v6,
           *((_QWORD *)a1 + 3),
           &v9);
    if ( v5 >= 0 )
    {
      v7 = PWSLayoutPolicyManager::XMLDocFromStream(v9, a2);
      v5 = v7;
      if ( v7 >= 0 )
        v5 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x102,
          (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
          (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFE,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return (unsigned int)v5;
}
