/*
 * XREFs of ??0_bstr_t@@QEAA@PEBG@Z @ 0x18020B82C
 * Callers:
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x18020D880 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x180211760 (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 *     ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1802974B4 (-ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z.c)
 *     ?AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x1804D78BC (-AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXM.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x1801AD0C4 (-_com_issue_error@@YAXJ@Z.c)
 *     ??0Data_t@_bstr_t@@QEAA@PEBG@Z @ 0x18020B5EC (--0Data_t@_bstr_t@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
_bstr_t *__fastcall _bstr_t::_bstr_t(_bstr_t *this, const unsigned __int16 *a2)
{
  _bstr_t::Data_t *v4; // rax
  _bstr_t::Data_t *v6; // [rsp+30h] [rbp+8h]

  v6 = (_bstr_t::Data_t *)operator new(0x18uLL);
  v4 = _bstr_t::Data_t::Data_t(v6, a2);
  *(_QWORD *)this = v4;
  if ( !v4 )
    _com_issue_error((char *)0x8007000ELL);
  return this;
}
