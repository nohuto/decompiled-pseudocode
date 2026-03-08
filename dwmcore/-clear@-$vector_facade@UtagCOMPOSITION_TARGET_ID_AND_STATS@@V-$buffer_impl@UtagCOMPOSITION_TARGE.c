/*
 * XREFs of ?clear@?$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V?$buffer_impl@UtagCOMPOSITION_TARGET_ID_AND_STATS@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801B20F0
 * Callers:
 *     ??1CRenderTargetManager@@IEAA@XZ @ 0x1801B1104 (--1CRenderTargetManager@@IEAA@XZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V?$buffer_impl@UtagCOMPOSITION_TARGET_ID_AND_STATS@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801B2124 (-clear_region@-$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V-$buffer_impl@UtagCOMPOSITIO.c)
 */

__int64 __fastcall detail::vector_facade<tagCOMPOSITION_TARGET_ID_AND_STATS,detail::buffer_impl<tagCOMPOSITION_TARGET_ID_AND_STATS,4,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  result = 0x4EC4EC4EC4EC4EC5LL;
  if ( 0x4EC4EC4EC4EC4EC5LL * ((__int64)(a1[1] - *a1) >> 3) )
    return detail::vector_facade<tagCOMPOSITION_TARGET_ID_AND_STATS,detail::buffer_impl<tagCOMPOSITION_TARGET_ID_AND_STATS,4,1,detail::liberal_expansion_policy>>::clear_region();
  return result;
}
