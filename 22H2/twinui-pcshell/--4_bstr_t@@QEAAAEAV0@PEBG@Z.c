/*
 * XREFs of ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x1804D8980
 * Callers:
 *     ??0SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x1804D8708 (--0SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x1801AD0C4 (-_com_issue_error@@YAXJ@Z.c)
 *     ??0Data_t@_bstr_t@@QEAA@PEBG@Z @ 0x18020B5EC (--0Data_t@_bstr_t@@QEAA@PEBG@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x18020F9BC (-_Free@_bstr_t@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
_bstr_t::Data_t **__fastcall _bstr_t::operator=(_bstr_t::Data_t **this, const struct std::nothrow_t *a2)
{
  unsigned __int16 *v4; // rcx
  _bstr_t::Data_t *v5; // rax

  if ( !a2 || (!*this ? (v4 = 0LL) : (v4 = *(unsigned __int16 **)*this), v4 != (unsigned __int16 *)a2) )
  {
    _bstr_t::_Free(this, a2);
    v5 = (_bstr_t::Data_t *)operator new(0x18uLL);
    if ( v5 )
      v5 = _bstr_t::Data_t::Data_t(v5, (const unsigned __int16 *)a2);
    *this = v5;
    if ( !v5 )
      _com_issue_error((char *)0x8007000ELL);
  }
  return this;
}
