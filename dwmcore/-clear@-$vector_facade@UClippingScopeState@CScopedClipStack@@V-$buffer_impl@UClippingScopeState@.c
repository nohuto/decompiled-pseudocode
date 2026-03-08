/*
 * XREFs of ?clear@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18003C89C
 * Callers:
 *     ??1CScopedClipStack@@QEAA@XZ @ 0x18003C724 (--1CScopedClipStack@@QEAA@XZ.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18003C7B0 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  result = 0xD37A6F4DE9BD37A7uLL;
  if ( 0xD37A6F4DE9BD37A7uLL * ((__int64)(a1[1] - *a1) >> 3) )
    return detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             0LL);
  return result;
}
