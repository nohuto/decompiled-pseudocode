/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@0@0V12@@Z @ 0x1801B2B54
 * Callers:
 *     ?reserve_region@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVSubTreeContext@CPreComputeContext@@_K0@Z @ 0x1800D856C (-reserve_region@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeConte.c)
 * Callees:
 *     ??0SubTreeContext@CPreComputeContext@@QEAA@$$QEAV01@@Z @ 0x1801B2C20 (--0SubTreeContext@CPreComputeContext@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CPreComputeContext::SubTreeContext *>,stdext::checked_array_iterator<CPreComputeContext::SubTreeContext *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v5; // rdi
  signed __int64 v7; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // xmm1_8

  v5 = a4 + 2;
  v7 = 0x823EE08FB823EE09uLL * ((a3 - a2) >> 3);
  if ( v7 < 0 )
  {
    if ( *v5 >= (unsigned __int64)-v7 )
      goto LABEL_3;
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v7 > 0 && a4[1] - *v5 < (unsigned __int64)v7 )
    goto LABEL_8;
LABEL_3:
  v9 = *a4 + 456LL * *v5;
  while ( a2 != a3 )
  {
    CPreComputeContext::SubTreeContext::SubTreeContext(v9, a2);
    v9 = v10 + 456;
    a2 = v11 + 456;
  }
  result = a1;
  *v5 = 0x823EE08FB823EE09uLL * ((v9 - *a4) >> 3);
  v13 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v13;
  return result;
}
