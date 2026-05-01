/*
 * XREFs of ??0_variant_t@@QEAA@PEAUIDispatch@@_N@Z @ 0x1804D7C10
 * Callers:
 *     ?AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x1804D7C4C (-AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXM.c)
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1804D7FB8 (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

_variant_t *__fastcall _variant_t::_variant_t(_variant_t *this, struct IDispatch *a2)
{
  *((_QWORD *)this + 1) = a2;
  *(_WORD *)this = 9;
  if ( a2 )
    ((void (__fastcall *)(struct IDispatch *))a2->lpVtbl->AddRef)(a2);
  return this;
}
