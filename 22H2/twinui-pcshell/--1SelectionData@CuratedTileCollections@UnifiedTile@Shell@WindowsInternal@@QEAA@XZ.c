/*
 * XREFs of ??1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x180210B04
 * Callers:
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedTaskbarLayout@@@Z@5@PEAUParsedTaskbarLayout@@@Z @ 0x18020FE34 (--$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem_ParsedTaskbarLayout__::_1_::dtor$1 @ 0x18020FF61 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetSelectedItem_Parse_ea_18020FF61.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem_ParsedTaskbarLayout__::_1_::dtor$2 @ 0x18020FF6D (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetSelectedItem_Parse_ea_18020FF6D.c)
 *     ??$_Destroy_range@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@0AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x18021010C (--$_Destroy_range@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@0AE.c)
 *     ??1ParsedTaskbarLayout@@QEAA@XZ @ 0x180210ADC (--1ParsedTaskbarLayout@@QEAA@XZ.c)
 *     ??_GTaskbarLayoutParser@@UEAAPEAXI@Z @ 0x180210C90 (--_GTaskbarLayoutParser@@UEAAPEAXI@Z.c)
 *     ?ContainsOfficeSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_NW4CollectionOfficeSKU@2345@@Z @ 0x180211018 (-ContainsOfficeSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::ContainsOfficeSKU_::_1_::dtor$0 @ 0x180211115 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionData--ContainsOfficeSKU_-.c)
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180211A60 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedPenWorkspaceLayout@@@Z@5@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1802966F8 (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsI.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem_ParsedPenWorkspaceLayout__::_1_::dtor$1 @ 0x180296825 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetSelectedItem_Parse_ea_180296825.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem_ParsedPenWorkspaceLayout__::_1_::dtor$2 @ 0x180296831 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetSelectedItem_Parse_ea_180296831.c)
 *     ??_EPWSLayoutParser@@UEAAPEAXI@Z @ 0x180296A60 (--_EPWSLayoutParser@@UEAAPEAXI@Z.c)
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180296D50 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x18008EEF8 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 */

void __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *this)
{
  LPVOID *v1; // rdi
  __int64 v2; // rbx
  unsigned __int64 v4; // rsi

  v1 = (LPVOID *)*((_QWORD *)this + 2);
  v2 = 0LL;
  v4 = (unsigned __int64)(*((_QWORD *)this + 3) - (_QWORD)v1 + 7LL) >> 3;
  if ( (unsigned __int64)v1 > *((_QWORD *)this + 3) )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      CoTaskMemFree(*v1);
      ++v2;
      ++v1;
    }
    while ( v2 != v4 );
  }
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)this + 64);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)this + 40);
  std::vector<void *>::_Tidy((__int64)this + 16);
}
