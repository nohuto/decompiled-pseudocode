/*
 * XREFs of ?clear_region@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801B21B4
 * Callers:
 *     ?clear@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18001DA20 (-clear@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeContext@CPreCo.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x1800C4598 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 *     ?pop_back@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801B3220 (-pop_back@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeContext@CPr.c)
 * Callees:
 *     ??$destruct_range@VSubTreeContext@CPreComputeContext@@@detail@@YAXPEAVSubTreeContext@CPreComputeContext@@0@Z @ 0x1801B0840 (--$destruct_range@VSubTreeContext@CPreComputeContext@@@detail@@YAXPEAVSubTreeContext@CPreCompute.c)
 *     ??$move@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@0@0V12@@Z @ 0x1801B093C (--$move@V-$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V-$checked_array_iterator@.c)
 */

void __fastcall detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r11
  __int64 v5; // r10
  __int64 v6; // rcx
  unsigned __int64 v8; // r10
  __int64 v9; // r9
  CPreComputeContext::SubTreeContext *v10; // rdi
  __int64 v11; // rbx
  _QWORD v12[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v13[40]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a1;
  v5 = a1[1] - *a1;
  v6 = a2 + a3;
  v8 = 0x823EE08FB823EE09uLL * (v5 >> 3);
  v9 = a2;
  if ( a2 + a3 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v10 = (CPreComputeContext::SubTreeContext *)(v3 + 456 * v8);
  if ( v6 != v8 )
  {
    if ( v9 && (!v3 || v9 < 0 || v8 < v9) )
      _invalid_parameter_noinfo_noreturn();
    v12[2] = v9;
    v12[0] = v3;
    v12[1] = v8;
    std::move<std::move_iterator<CPreComputeContext::SubTreeContext *>,stdext::checked_array_iterator<CPreComputeContext::SubTreeContext *>>(
      (__int64)v13,
      v3 + 456 * v6,
      v3 + 456 * v8,
      v12);
  }
  v11 = 456 * a3;
  detail::destruct_range<CPreComputeContext::SubTreeContext>(
    (CPreComputeContext::SubTreeContext *)((char *)v10 - v11),
    v10);
  a1[1] -= v11;
}
