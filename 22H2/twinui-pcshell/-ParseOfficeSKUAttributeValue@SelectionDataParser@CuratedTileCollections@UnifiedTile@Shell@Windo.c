/*
 * XREFs of ?ParseOfficeSKUAttributeValue@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEBGAEAUSelectionData@2345@@Z @ 0x1804D8AB0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_e00053c439215dfaf200e67d8fa41959__void_unsigned_short___::_Do_call @ 0x1804D9380 (std--_Func_impl_no_alloc__lambda_e00053c439215dfaf200e67d8fa41959__void_unsigned_short___--_Do_c.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAAPEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAW423456@AEBW423456@@Z @ 0x18021029C (--$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 */

__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::ParseOfficeSKUAttributeValue(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *this,
        const unsigned __int16 *a2,
        struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *a3)
{
  char *v5; // rcx
  _BYTE *v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *v10; // [rsp+50h] [rbp+20h] BYREF

  v10 = this;
  if ( CompareStringOrdinal(a2, -1, L"None", -1, 1) == 2 )
  {
    LODWORD(v10) = 0;
    v5 = (char *)a3 + 64;
    v6 = (_BYTE *)*((_QWORD *)a3 + 9);
    if ( *((_BYTE **)a3 + 10) != v6 )
    {
      *(_DWORD *)v6 = 0;
LABEL_21:
      *((_QWORD *)v5 + 1) += 4LL;
LABEL_23:
      *((_BYTE *)a3 + 4) = 1;
      return 0LL;
    }
    goto LABEL_22;
  }
  if ( CompareStringOrdinal(a2, -1, L"DownloadOffice", -1, 1) == 2 )
  {
    v5 = (char *)a3 + 64;
    LODWORD(v10) = 1;
    v6 = (_BYTE *)*((_QWORD *)a3 + 9);
    if ( *((_BYTE **)a3 + 10) != v6 )
    {
      *(_DWORD *)v6 = 1;
      goto LABEL_21;
    }
LABEL_22:
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::_Emplace_reallocate<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU const &>(
      (const void **)v5,
      v6,
      &v10);
    goto LABEL_23;
  }
  if ( CompareStringOrdinal(a2, -1, L"Mobile", -1, 1) == 2 )
  {
    v5 = (char *)a3 + 64;
    LODWORD(v10) = 2;
    v6 = (_BYTE *)*((_QWORD *)a3 + 9);
    if ( *((_BYTE **)a3 + 10) != v6 )
    {
      *(_DWORD *)v6 = 2;
      goto LABEL_21;
    }
    goto LABEL_22;
  }
  if ( CompareStringOrdinal(a2, -1, L"Desktop", -1, 1) == 2 )
  {
    v7 = 3;
    goto LABEL_19;
  }
  if ( CompareStringOrdinal(a2, -1, L"Desktop2016", -1, 1) == 2 )
  {
    v5 = (char *)a3 + 64;
    LODWORD(v10) = 4;
    v6 = (_BYTE *)*((_QWORD *)a3 + 9);
    if ( *((_BYTE **)a3 + 10) != v6 )
    {
      *(_DWORD *)v6 = 4;
      goto LABEL_21;
    }
    goto LABEL_22;
  }
  if ( CompareStringOrdinal(a2, -1, L"DesktopBridge", -1, 1) == 2 )
  {
    v7 = 5;
    goto LABEL_19;
  }
  if ( CompareStringOrdinal(a2, -1, L"DesktopBridgeSubscription", -1, 1) == 2 )
  {
    v7 = 6;
LABEL_19:
    v5 = (char *)a3 + 64;
    LODWORD(v10) = v7;
    v6 = (_BYTE *)*((_QWORD *)a3 + 9);
    if ( *((_BYTE **)a3 + 10) != v6 )
    {
      *(_DWORD *)v6 = v7;
      goto LABEL_21;
    }
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD8,
    (__int64)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\selectiondataparser.cpp",
    (const char *)0xC00CE225LL);
  return 3222069797LL;
}
