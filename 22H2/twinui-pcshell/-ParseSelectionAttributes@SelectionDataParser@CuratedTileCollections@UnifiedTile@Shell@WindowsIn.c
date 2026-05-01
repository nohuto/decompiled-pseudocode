/*
 * XREFs of ?ParseSelectionAttributes@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2345@@Z @ 0x1804D8FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIXMLDOMElement@@@?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIXMLDOMElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18020B07C (--$As@UIXMLDOMElement@@@-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIXML.c)
 *     ?GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z @ 0x1804D8090 (-GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 *     ?GetTokenizedStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEBV?$function@$$A6AXPEAG@Z@std@@@Z @ 0x1804D82D8 (-GetTokenizedStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJP.c)
 *     ?GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z @ 0x1804D83C4 (-GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::ParseSelectionAttributes(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  int v5; // eax
  unsigned int v6; // esi
  unsigned int *v7; // r9
  __int64 (__fastcall ***v8)(); // rdx
  bool *v9; // r9
  __int64 (__fastcall ***v10)(); // rdx
  bool *v11; // r9
  bool *v12; // r9
  bool *v13; // r9
  bool *v14; // r9
  __int64 (__fastcall ***v15)(); // rdx
  _BYTE v17[8]; // [rsp+20h] [rbp-39h] BYREF
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections *v18; // [rsp+28h] [rbp-31h] BYREF
  _DWORD v19[4]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v20; // [rsp+40h] [rbp-19h]
  __int64 (__fastcall **v21)(); // [rsp+50h] [rbp-9h] BYREF
  __int128 v22; // [rsp+58h] [rbp-1h]
  __int64 (__fastcall ***v23)(); // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v18 = 0LL;
  v5 = Microsoft::WRL::ComPtr<IXMLDOMNode>::As<IXMLDOMElement>(a2, (__int64 *)&v18);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *(_QWORD *)&v20 = a1;
    *((_QWORD *)&v20 + 1) = a3;
    v21 = off_18053FC38;
    v22 = v20;
    v23 = &v21;
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetTokenizedStringAttributeValue(
      (__int64)v18,
      (__int64 **)(a1 + 72),
      (__int64)&v21);
    if ( v23 )
    {
      v8 = &v21;
      LOBYTE(v8) = v23 != &v21;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v23)[4])(v23, v8);
    }
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetUintAttributeValue(
                v18,
                (struct IXMLDOMElement *)(a1 + 16),
                (const struct _bstr_t *)v19,
                v7) >= 0 )
    {
      *(_DWORD *)(a3 + 88) = v19[0];
      *(_BYTE *)(a3 + 1) = 1;
    }
    v21 = off_18053FC68;
    *(_QWORD *)&v22 = a3;
    v23 = &v21;
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetTokenizedStringAttributeValue(
      (__int64)v18,
      (__int64 **)(a1 + 56),
      (__int64)&v21);
    if ( v23 )
    {
      v10 = &v21;
      LOBYTE(v10) = v23 != &v21;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v23)[4])(v23, v10);
    }
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                v18,
                (struct IXMLDOMElement *)(a1 + 24),
                (const struct _bstr_t *)v17,
                v9) >= 0 )
    {
      *(_BYTE *)(a3 + 93) = v17[0];
      *(_BYTE *)(a3 + 5) = 1;
    }
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                v18,
                (struct IXMLDOMElement *)(a1 + 32),
                (const struct _bstr_t *)v17,
                v11) >= 0 )
    {
      *(_BYTE *)(a3 + 94) = v17[0];
      *(_BYTE *)(a3 + 6) = 1;
    }
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                v18,
                (struct IXMLDOMElement *)(a1 + 40),
                (const struct _bstr_t *)v17,
                v12) >= 0 )
    {
      *(_BYTE *)(a3 + 95) = v17[0];
      *(_BYTE *)(a3 + 7) = 1;
    }
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                v18,
                (struct IXMLDOMElement *)(a1 + 48),
                (const struct _bstr_t *)v17,
                v13) >= 0 )
    {
      *(_BYTE *)(a3 + 96) = v17[0];
      *(_BYTE *)(a3 + 8) = 1;
    }
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                v18,
                (struct IXMLDOMElement *)(a1 + 64),
                (const struct _bstr_t *)v17,
                v14) >= 0 )
    {
      *(_BYTE *)(a3 + 92) = v17[0];
      *(_BYTE *)(a3 + 2) = 1;
    }
    *(_QWORD *)&v20 = a1;
    *((_QWORD *)&v20 + 1) = a3;
    v21 = off_18053FC98;
    v22 = v20;
    v23 = &v21;
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetTokenizedStringAttributeValue(
      (__int64)v18,
      (__int64 **)(a1 + 80),
      (__int64)&v21);
    if ( v23 )
    {
      v15 = &v21;
      LOBYTE(v15) = v23 != &v21;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v23)[4])(v23, v15);
    }
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C,
      (__int64)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\selectiondataparser.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  return v6;
}
