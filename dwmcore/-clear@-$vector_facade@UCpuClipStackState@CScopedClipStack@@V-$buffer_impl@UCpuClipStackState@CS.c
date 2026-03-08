/*
 * XREFs of ?clear@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18003C8C8
 * Callers:
 *     ??1CScopedClipStack@@QEAA@XZ @ 0x18003C724 (--1CScopedClipStack@@QEAA@XZ.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18003C7B0 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // r8

  result = 0xCCCCCCCCCCCCCCCDuLL;
  v2 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  if ( v2 )
    return detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             0LL,
             v2);
  return result;
}
