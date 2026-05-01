/*
 * XREFs of ??1_variant_t@@QEAA@XZ @ 0x18020BAE8
 * Callers:
 *     _TaskbarLayoutPolicyManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18020ED01 (_TaskbarLayoutPolicyManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _PWSLayoutPolicyManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180296251 (_PWSLayoutPolicyManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::AddSchemaToCollection_::_1_::dtor$3 @ 0x1804D7AEE (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--AddSchemaToCollection_ea_1804D7AEE.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile_::_1_::dtor$4 @ 0x1804D7EA4 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--ValidateLayoutFile_--_1_--dtor$4.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue_::_1_::dtor$0 @ 0x1804D8183 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetBoolAttributeValue_--_1_--dtor$.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue_::_1_::dtor$1 @ 0x1804D82C3 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetStringAttributeValue_--_1_--dto.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetUintAttributeValue_::_1_::dtor$0 @ 0x1804D84A4 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetUintAttributeValue_--_1_--dtor$.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x1801AD0C4 (-_com_issue_error@@YAXJ@Z.c)
 */

void __fastcall _variant_t::~_variant_t(VARIANTARG *this)
{
  HRESULT v1; // eax

  v1 = VariantClear(this);
  if ( v1 < 0 )
    _com_issue_error((char *)(unsigned int)v1);
}
