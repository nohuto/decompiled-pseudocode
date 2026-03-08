/*
 * XREFs of ?clear@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18001DA20
 * Callers:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x18001D964 (--1CPreComputeContext@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  result = 0x823EE08FB823EE09uLL;
  if ( 0x823EE08FB823EE09uLL * ((__int64)(a1[1] - *a1) >> 3) )
    return detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             0LL);
  return result;
}
