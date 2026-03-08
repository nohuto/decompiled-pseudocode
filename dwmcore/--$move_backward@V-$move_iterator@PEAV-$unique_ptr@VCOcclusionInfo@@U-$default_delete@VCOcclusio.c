/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@std@@V?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@0@0V12@@Z @ 0x1801D4238
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@_K0@Z @ 0x1800448AC (-reserve_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo.c)
 * Callees:
 *     ??$?4U?$default_delete@VCOcclusionInfo@@@std@@$0A@@?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800438E0 (--$-4U-$default_delete@VCOcclusionInfo@@@std@@$0A@@-$unique_ptr@VCOcclusionInfo@@U-$default_dele.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<std::unique_ptr<COcclusionInfo> *>,stdext::checked_array_iterator<std::unique_ptr<COcclusionInfo> *>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v5; // r14
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v10; // r12
  __int64 *v11; // rsi
  __int64 result; // rax
  __int64 v13; // xmm1_8

  v5 = a4 + 2;
  v7 = a3;
  v8 = a3 - a2;
  if ( v8 > 0 )
  {
    if ( *v5 >= (unsigned __int64)v8 )
      goto LABEL_3;
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 < 0 && a4[1] - *v5 < (unsigned __int64)-v8 )
    goto LABEL_8;
LABEL_3:
  v10 = *a4;
  v11 = (__int64 *)(*a4 + 8 * *v5);
  while ( a2 != v7 )
    std::unique_ptr<COcclusionInfo>::operator=<std::default_delete<COcclusionInfo>,0>(--v11, --v7);
  result = a1;
  *v5 = ((__int64)v11 - v10) >> 3;
  v13 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v13;
  return result;
}
