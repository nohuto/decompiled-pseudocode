/*
 * XREFs of ?AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x1804D78BC
 * Callers:
 *     ?LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAPEAUIXMLDOMSchemaCollection@@@Z @ 0x1804D7B0C (-LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pair@PEBGP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x1801AD0C4 (-_com_issue_error@@YAXJ@Z.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x18020B82C (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x18020F9BC (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ??0_variant_t@@QEAA@PEAUIDispatch@@_N@Z @ 0x1804D7880 (--0_variant_t@@QEAA@PEAUIDispatch@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::AddSchemaToCollection(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        struct IXMLDOMSchemaCollection *a4)
{
  HRESULT v7; // eax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  const struct std::nothrow_t *v11; // rdx
  LPVOID v12; // rbx
  __int64 (__fastcall *v13)(LPVOID, struct IDispatch **); // rdi
  int v14; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(const unsigned __int16 *, _QWORD *, __int128 *); // rbx
  _variant_t *v18; // rax
  _QWORD *v19; // rdx
  const struct std::nothrow_t *v20; // rdx
  HRESULT v21; // eax
  LPVOID ppv; // [rsp+30h] [rbp-19h] BYREF
  struct IDispatch *v24; // [rsp+38h] [rbp-11h] BYREF
  _bstr_t::Data_t *v25; // [rsp+40h] [rbp-9h] BYREF
  _bstr_t::Data_t *v26; // [rsp+48h] [rbp-1h] BYREF
  __int128 v27; // [rsp+50h] [rbp+7h] BYREF
  __int64 v28; // [rsp+60h] [rbp+17h]
  VARIANTARG pvarg; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  __int16 v31; // [rsp+C8h] [rbp+7Fh] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v7 = CoCreateInstance(
         &GUID_88d96a05_f192_11d4_a65f_0040963251e5,
         0LL,
         1u,
         &GUID_2933bf81_7b36_11d2_b20e_00c04f983e60,
         &ppv);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 504LL))(ppv, 0LL);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 26LL;
      goto LABEL_5;
    }
    _bstr_t::_bstr_t((_bstr_t *)&v25, a2);
    if ( v25 )
      v10 = *(_QWORD *)v25;
    else
      v10 = 0LL;
    (*(void (__fastcall **)(LPVOID, __int64, __int16 *))(*(_QWORD *)ppv + 520LL))(ppv, v10, &v31);
    if ( v31 != -1 )
    {
      v8 = -2147467259;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F,
        (__int64)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
        (const char *)0x80004005LL);
LABEL_22:
      _bstr_t::_Free(&v25, v11);
      goto LABEL_23;
    }
    v24 = 0LL;
    v12 = ppv;
    v13 = *(__int64 (__fastcall **)(LPVOID, struct IDispatch **))(*(_QWORD *)ppv + 360LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    v14 = v13(v12, &v24);
    v8 = v14;
    if ( v14 >= 0 )
    {
      v17 = *(__int64 (__fastcall **)(const unsigned __int16 *, _QWORD *, __int128 *))(*(_QWORD *)a3 + 56LL);
      v18 = _variant_t::_variant_t((_variant_t *)&pvarg, v24);
      v27 = *(_OWORD *)v18;
      v28 = *((_QWORD *)v18 + 2);
      v19 = *(_QWORD **)_bstr_t::_bstr_t((_bstr_t *)&v26, (const unsigned __int16 *)this);
      if ( v19 )
        v19 = (_QWORD *)*v19;
      v8 = v17(a3, v19, &v27);
      _bstr_t::_Free(&v26, v20);
      v21 = VariantClear(&pvarg);
      if ( v21 < 0 )
        _com_issue_error((char *)(unsigned int)v21);
      if ( v8 >= 0 )
      {
        v8 = 0;
        goto LABEL_21;
      }
      v15 = (unsigned int)v8;
      v16 = 35LL;
    }
    else
    {
      v15 = (unsigned int)v14;
      v16 = 34LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)v15);
LABEL_21:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    goto LABEL_22;
  }
  v9 = 25LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
    (const char *)(unsigned int)v7);
LABEL_23:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)v8;
}
