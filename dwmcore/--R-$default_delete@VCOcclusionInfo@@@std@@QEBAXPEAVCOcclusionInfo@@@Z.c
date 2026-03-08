/*
 * XREFs of ??R?$default_delete@VCOcclusionInfo@@@std@@QEBAXPEAVCOcclusionInfo@@@Z @ 0x180044C30
 * Callers:
 *     ??$?4U?$default_delete@VCOcclusionInfo@@@std@@$0A@@?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800438E0 (--$-4U-$default_delete@VCOcclusionInfo@@@std@@$0A@@-$unique_ptr@VCOcclusionInfo@@U-$default_dele.c)
 *     ?reserve_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@_K0@Z @ 0x1800448AC (-reserve_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064860 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@AEBVCBackdropVisualImageKey@@_N@Z @ 0x1800E8D7C (-GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@AEBVCBackdropVisualImageKey@@_N@Z.c)
 *     ??_G?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@QEAAPEAXI@Z @ 0x1801D43B4 (--_G-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@std@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<COcclusionInfo>::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
