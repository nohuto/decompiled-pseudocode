/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x1801D81E0
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801DB9D4 (-ensure_extra_capacity@-$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansi.c)
 * Callees:
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x18012B118 (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // r10
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v4 = a3;
  v6 = 0x6DB6DB6DB6DB6DB7LL * ((a3 - a2) >> 5);
  if ( v6 < 0 )
  {
    if ( a4[2] >= (unsigned __int64)-v6 )
      goto LABEL_3;
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v6 > 0 && a4[1] - a4[2] < (unsigned __int64)v6 )
    goto LABEL_8;
LABEL_3:
  v7 = *a4 + 224LL * a4[2];
  while ( a2 != v4 )
  {
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v7, a2);
    v7 = v8 + 224;
    a2 = v9 + 224;
  }
  result = a1;
  a4[2] = 0x6DB6DB6DB6DB6DB7LL * ((v7 - *a4) >> 5);
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
