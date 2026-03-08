/*
 * XREFs of ??1SubTreeContext@CPreComputeContext@@QEAA@XZ @ 0x1801B12D0
 * Callers:
 *     ?reserve_region@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVSubTreeContext@CPreComputeContext@@_K0@Z @ 0x1800D856C (-reserve_region@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeConte.c)
 *     ??$destruct_range@VSubTreeContext@CPreComputeContext@@@detail@@YAXPEAVSubTreeContext@CPreComputeContext@@0@Z @ 0x1801B0840 (--$destruct_range@VSubTreeContext@CPreComputeContext@@@detail@@YAXPEAVSubTreeContext@CPreCompute.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 */

void __fastcall CPreComputeContext::SubTreeContext::~SubTreeContext(void **this)
{
  operator delete(this[51]);
  operator delete(this[47]);
  CBspPreComputeHelper::~CBspPreComputeHelper((CBspPreComputeHelper *)this);
}
