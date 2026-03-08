/*
 * XREFs of ??_G?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@QEAAPEAXI@Z @ 0x1801D43B4
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@_K0@Z @ 0x1800448AC (-reserve_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo.c)
 * Callees:
 *     ??R?$default_delete@VCOcclusionInfo@@@std@@QEBAXPEAVCOcclusionInfo@@@Z @ 0x180044C30 (--R-$default_delete@VCOcclusionInfo@@@std@@QEBAXPEAVCOcclusionInfo@@@Z.c)
 */

__int64 (__fastcall ****__fastcall std::unique_ptr<COcclusionInfo>::`scalar deleting destructor'(
        __int64 (__fastcall ****a1)(_QWORD, __int64)))(_QWORD, __int64)
{
  if ( *a1 )
    std::default_delete<COcclusionInfo>::operator()((__int64)a1, *a1);
  return a1;
}
