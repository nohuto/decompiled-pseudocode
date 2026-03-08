/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@std@@V?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@0@0V12@@Z @ 0x180044BAC
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@_K0@Z @ 0x1800448AC (-reserve_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<std::unique_ptr<COcclusionInfo> *>,stdext::checked_array_iterator<std::unique_ptr<COcclusionInfo> *>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v4; // r11
  __int64 v6; // r10
  __int64 v7; // r10
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v4 = a4 + 2;
  v6 = a3 - a2;
  if ( v6 < 0 )
  {
    if ( *v4 >= (unsigned __int64)-v6 )
      goto LABEL_4;
LABEL_9:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v6 > 0 && a4[1] - *v4 < (unsigned __int64)v6 )
    goto LABEL_9;
LABEL_4:
  v7 = *a4;
  v8 = (_QWORD *)(*a4 + 8 * *v4);
  while ( a2 != a3 )
  {
    v9 = *a2;
    *a2 = 0LL;
    *v8++ = v9;
    ++a2;
  }
  result = a1;
  *v4 = ((__int64)v8 - v7) >> 3;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
