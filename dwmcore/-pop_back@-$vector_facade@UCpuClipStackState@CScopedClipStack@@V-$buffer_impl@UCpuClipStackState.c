/*
 * XREFs of ?pop_back@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801D7A4C
 * Callers:
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180073A60 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1801D7918 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::pop_back(
        __int64 *a1)
{
  return detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::clear_region(
           a1,
           0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - 40 - *a1) >> 3),
           1LL);
}
