/*
 * XREFs of ?ContainsOfficeSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_NW4CollectionOfficeSKU@2345@@Z @ 0x1802111C8
 * Callers:
 *     ?GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAHAEBU12345@@Z @ 0x180211680 (-GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAH.c)
 * Callees:
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x18008EF18 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     ??$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAAPEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAW423456@AEBW423456@@Z @ 0x18021044C (--$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ??0?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1802109F0 (--0-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V-$a.c)
 *     ??1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x180210CB4 (--1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::ContainsOfficeSKU(
        __int64 a1,
        int a2)
{
  int v3; // edi
  _QWORD *v4; // rsi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _DWORD *v7; // rcx
  _DWORD *v8; // rax
  __int64 v10; // [rsp+20h] [rbp-69h] BYREF
  char v11; // [rsp+28h] [rbp-61h]
  __int128 v12; // [rsp+30h] [rbp-59h]
  __int128 v13; // [rsp+40h] [rbp-49h]
  __int128 v14; // [rsp+50h] [rbp-39h]
  __int128 v15; // [rsp+60h] [rbp-29h] BYREF
  __int64 v16; // [rsp+70h] [rbp-19h]
  __int64 v17; // [rsp+78h] [rbp-11h]
  char v18; // [rsp+80h] [rbp-9h]
  _QWORD v19[3]; // [rsp+90h] [rbp+7h] BYREF
  _QWORD v20[7]; // [rsp+A8h] [rbp+1Fh] BYREF
  int v21; // [rsp+F8h] [rbp+6Fh] BYREF

  v3 = 0;
  v10 = 0x100000000LL;
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v21 = a2;
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::_Emplace_reallocate<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU const &>(
    (const void **)&v15,
    0LL,
    &v21);
  v4 = std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>(
         v19,
         (__int64)&v15);
  v5 = std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>(
         v20,
         a1 + 64);
  v6 = (__int64)v5;
  if ( *(_BYTE *)(a1 + 4) )
  {
    v7 = (_DWORD *)*v5;
    if ( *v5 == v5[1] )
    {
LABEL_7:
      v3 = -1;
    }
    else
    {
      while ( 1 )
      {
        v8 = (_DWORD *)*v4;
        if ( *v4 != v4[1] )
          break;
LABEL_6:
        if ( ++v7 == *(_DWORD **)(v6 + 8) )
          goto LABEL_7;
      }
      while ( *v7 != *v8 )
      {
        if ( ++v8 == (_DWORD *)v4[1] )
          goto LABEL_6;
      }
      v3 = 1;
    }
  }
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(v6);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)v4);
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v10);
  return v3 > 0;
}
