/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@0@0V12@@Z @ 0x1801B2A74
 * Callers:
 *     ?reserve_region@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVSubTreeContext@CPreComputeContext@@_K0@Z @ 0x1800D856C (-reserve_region@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeConte.c)
 * Callees:
 *     ??4SubTreeContext@CPreComputeContext@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801B2FE8 (--4SubTreeContext@CPreComputeContext@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<CPreComputeContext::SubTreeContext *>,stdext::checked_array_iterator<CPreComputeContext::SubTreeContext *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v5; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v5 = a4 + 2;
  v7 = a3;
  v8 = 0x7DC11F7047DC11F7LL * ((a3 - a2) >> 3);
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
  v10 = *a4 + 456LL * *v5;
  while ( a2 != v7 )
  {
    v7 -= 456LL;
    CPreComputeContext::SubTreeContext::operator=(v10 - 456);
  }
  result = a1;
  *v5 = 0x823EE08FB823EE09uLL * ((v10 - *a4) >> 3);
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
