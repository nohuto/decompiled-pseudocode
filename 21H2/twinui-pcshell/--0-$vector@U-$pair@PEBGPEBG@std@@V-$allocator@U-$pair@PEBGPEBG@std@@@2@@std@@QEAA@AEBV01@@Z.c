/*
 * XREFs of ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x18020B730
 * Callers:
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18020F658 (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18020F7B8 (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1804D7FB8 (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 * Callees:
 *     ?_Buy_raw@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAX_K@Z @ 0x18020FAEC (-_Buy_raw@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAAX_K@Z.c)
 */

_QWORD *__fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rdx
  _OWORD *v5; // rdx
  _OWORD *v6; // rcx
  _OWORD *i; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = a2[1];
  if ( *a2 != v4 )
  {
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Buy_raw(a1, (v4 - *a2) >> 4);
    v5 = (_OWORD *)a2[1];
    v6 = (_OWORD *)*a1;
    for ( i = (_OWORD *)*a2; i != v5; ++i )
      *v6++ = *i;
    a1[1] = v6;
  }
  return a1;
}
