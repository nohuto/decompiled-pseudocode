/*
 * XREFs of ??$destruct_range@VSubTreeContext@CPreComputeContext@@@detail@@YAXPEAVSubTreeContext@CPreComputeContext@@0@Z @ 0x1801B0840
 * Callers:
 *     ?reserve_region@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVSubTreeContext@CPreComputeContext@@_K0@Z @ 0x1800D856C (-reserve_region@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeConte.c)
 *     ?clear_region@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801B21B4 (-clear_region@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeContext.c)
 * Callees:
 *     ??1SubTreeContext@CPreComputeContext@@QEAA@XZ @ 0x1801B12D0 (--1SubTreeContext@CPreComputeContext@@QEAA@XZ.c)
 */

void __fastcall detail::destruct_range<CPreComputeContext::SubTreeContext>(
        CPreComputeContext::SubTreeContext *this,
        CPreComputeContext::SubTreeContext *a2)
{
  CPreComputeContext::SubTreeContext *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CPreComputeContext::SubTreeContext::~SubTreeContext(v3);
      v3 = (CPreComputeContext::SubTreeContext *)((char *)v3 + 456);
    }
    while ( v3 != a2 );
  }
}
