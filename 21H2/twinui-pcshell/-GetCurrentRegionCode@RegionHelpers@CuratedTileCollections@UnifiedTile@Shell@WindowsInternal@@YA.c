/*
 * XREFs of ?GetCurrentRegionCode@RegionHelpers@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@W4RegionLookupFallbackOptions@2345@@Z @ 0x1804D88F0
 * Callers:
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x180210F54 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x180296CA8 (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005E140 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@V?$ComPtr@UIGeographicRegion@Globalization@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIGeographicRegion@Globalization@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1804D8848 (--$ActivateInstance@V-$ComPtr@UIGeographicRegion@Globalization@Windows@@@WRL@Microsoft@@@Foundat.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::RegionHelpers::GetCurrentRegionCode(
        LPVOID *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, HSTRING *); // rdi
  int v6; // eax
  __int64 v7; // rdx
  const WCHAR *StringRawBuffer; // rax
  __int64 v9; // r9
  PCWSTR v10; // rax
  HSTRING string; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v13 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Globalization.GeographicRegion",
    0x27u,
    0x26u);
  v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Globalization::IGeographicRegion>>(
         v15,
         &v13);
  v3 = v2;
  if ( v2 >= 0 )
  {
    string = 0LL;
    v4 = v13;
    v5 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v13 + 56LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v6 = v5(v4, &string);
    v3 = v6;
    if ( v6 >= 0 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, -1, L"ZZ", -1, 0) == 2 )
      {
        v3 = -2147467259;
        v9 = 2147500037LL;
        v7 = 26LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\regionhelpers.cpp",
          (const char *)v9);
LABEL_12:
        WindowsDeleteString(string);
        string = 0LL;
        goto LABEL_13;
      }
      v10 = WindowsGetStringRawBuffer(string, 0LL);
      v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
             a1,
             (__int64)v10,
             0xFFFFFFFFFFFFFFFFuLL);
      v3 = v6;
      if ( v6 >= 0 )
      {
        v3 = 0;
        goto LABEL_12;
      }
      v7 = 33LL;
    }
    else
    {
      v7 = 22LL;
    }
    v9 = (unsigned int)v6;
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13,
    (__int64)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\regionhelpers.cpp",
    (const char *)(unsigned int)v2);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return v3;
}
