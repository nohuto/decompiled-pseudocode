/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x1801D8100
 * Callers:
 *     ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x1801DBB38 (-reserve_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneI.c)
 * Callees:
 *     ??4OverlayPlaneInfo@COverlayContext@@QEAAAEAV01@$$QEAV01@@Z @ 0x18012B40E (--4OverlayPlaneInfo@COverlayContext@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v5; // r14
  __int64 v7; // rbx
  signed __int64 v8; // rdx
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v5 = a4 + 2;
  v7 = a3;
  v8 = 0x9249249249249249uLL * ((a3 - a2) >> 5);
  if ( v8 < 0 )
  {
    if ( *v5 >= (unsigned __int64)-v8 )
      goto LABEL_3;
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 0 && a4[1] - *v5 < (unsigned __int64)v8 )
    goto LABEL_8;
LABEL_3:
  v10 = *a4 + 224LL * *v5;
  while ( a2 != v7 )
  {
    v10 -= 224LL;
    v7 -= 224LL;
    COverlayContext::OverlayPlaneInfo::operator=(v10, v7);
  }
  result = a1;
  *v5 = 0x6DB6DB6DB6DB6DB7LL * ((v10 - *a4) >> 5);
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
