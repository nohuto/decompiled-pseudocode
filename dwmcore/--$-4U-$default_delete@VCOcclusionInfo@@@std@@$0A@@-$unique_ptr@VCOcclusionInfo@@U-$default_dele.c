/*
 * XREFs of ??$?4U?$default_delete@VCOcclusionInfo@@@std@@$0A@@?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800438E0
 * Callers:
 *     ??$move@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@std@@V?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@0@0V12@@Z @ 0x180043824 (--$move@V-$move_iterator@PEAV-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@s.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@std@@V?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@0@0V12@@Z @ 0x1801D4238 (--$move_backward@V-$move_iterator@PEAV-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusio.c)
 * Callees:
 *     ??R?$default_delete@VCOcclusionInfo@@@std@@QEBAXPEAVCOcclusionInfo@@@Z @ 0x180044C30 (--R-$default_delete@VCOcclusionInfo@@@std@@QEBAXPEAVCOcclusionInfo@@@Z.c)
 */

__int64 *__fastcall std::unique_ptr<COcclusionInfo>::operator=<std::default_delete<COcclusionInfo>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      std::default_delete<COcclusionInfo>::operator()();
  }
  return a1;
}
