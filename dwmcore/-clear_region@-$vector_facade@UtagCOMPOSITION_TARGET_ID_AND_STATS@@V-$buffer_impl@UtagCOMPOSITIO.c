/*
 * XREFs of ?clear_region@?$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V?$buffer_impl@UtagCOMPOSITION_TARGET_ID_AND_STATS@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801B2124
 * Callers:
 *     ?clear@?$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V?$buffer_impl@UtagCOMPOSITION_TARGET_ID_AND_STATS@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801B20F0 (-clear@-$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V-$buffer_impl@UtagCOMPOSITION_TARGE.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@std@@V?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@V?$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@0@0V12@@Z @ 0x1801B087C (--$move@V-$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@std@@V-$checked_array_iterator.c)
 */

void __fastcall detail::vector_facade<tagCOMPOSITION_TARGET_ID_AND_STATS,detail::buffer_impl<tagCOMPOSITION_TARGET_ID_AND_STATS,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD v8[4]; // [rsp+20h] [rbp-48h] BYREF
  char v9[40]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *a1;
  v5 = a3;
  v6 = 0x4EC4EC4EC4EC4EC5LL * ((a1[1] - v4) >> 3);
  if ( a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v7 = 104 * v5;
  if ( v5 != v6 )
  {
    v8[2] = 0LL;
    v8[0] = v4;
    v8[1] = v6;
    std::move<std::move_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>,stdext::checked_array_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>>(
      (__int64)v9,
      (const void *)(v7 + v4),
      v4 + 104 * v6,
      v8);
  }
  a1[1] -= v7;
}
