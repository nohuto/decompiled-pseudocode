/*
 * XREFs of ATL::_dynamic_initializer_for__g_strmgr__ @ 0x1400011E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z @ 0x14001C740 (--0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z.c)
 */

int __fastcall ATL::_dynamic_initializer_for__g_strmgr__(ATL::CAtlStringMgr *a1, struct ATL::IAtlMemMgr *a2)
{
  ATL::CAtlStringMgr::CAtlStringMgr(a1, a2);
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for__g_strmgr__);
}
