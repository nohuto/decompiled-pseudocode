/*
 * XREFs of ?reserve_region@?$vector_facade@VPlaneInfo@CCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVPlaneInfo@CCheckMPOCache@@_K0@Z @ 0x18011727C
 * Callers:
 *     ??0CCheckMPOCache@@QEAA@PEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x180116B94 (--0CCheckMPOCache@@QEAA@PEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@std@@V?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@V?$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@0@0V12@@Z @ 0x180116930 (--$move_backward@V-$move_iterator@PEAVPlaneInfo@CCheckMPOCache@@@std@@V-$checked_array_iterator@.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@VPlaneInfo@CCheckMPOCache@@@detail@@V?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@@detail@@YAXV?$basic_iterator@VPlaneInfo@CCheckMPOCache@@@0@0V?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@@Z @ 0x1801169CC (--$move_backward_uninitialized@V-$basic_iterator@VPlaneInfo@CCheckMPOCache@@@detail@@V-$checked_.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180117154 (-ensure_extra_capacity@-$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@.c)
 */

char *__fastcall detail::vector_facade<CCheckMPOCache::PlaneInfo,detail::buffer_impl<CCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  signed __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+90h] [rbp+30h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+40h] BYREF

  v18 = a3;
  detail::buffer_impl<CCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    (char **)a1,
    1uLL);
  v14 = 0LL;
  v5 = *(char **)a1;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = v6 - *(_QWORD *)a1;
  *((_QWORD *)&v13 + 1) = 1LL;
  v8 = 0xCCCCCCCCCCCCCCCDuLL * (v7 >> 5);
  v14 = 0LL;
  v9 = v8 - a2;
  *(_QWORD *)&v13 = &v5[160 * v8];
  if ( !(_QWORD)v13 )
    goto LABEL_11;
  v18 = v6;
  v14 = 1LL;
  v10 = v8 - a2;
  v15 = v13;
  if ( v9 > 1 )
    v10 = 1LL;
  v16 = 1LL;
  v17 = v6 - 160 * v10;
  detail::move_backward_uninitialized<detail::basic_iterator<CCheckMPOCache::PlaneInfo>,stdext::checked_array_iterator<CCheckMPOCache::PlaneInfo *>>(
    &v17,
    &v18,
    (__int64 *)&v15);
  if ( v9 <= 1 )
  {
    v11 = 160 * a2;
    goto LABEL_10;
  }
  *(_QWORD *)&v13 = v5;
  *((_QWORD *)&v13 + 1) = v8;
  if ( v8 )
  {
    if ( !v5 || v8 < 0 )
LABEL_11:
      _invalid_parameter_noinfo_noreturn();
  }
  v14 = v8;
  v11 = 160 * a2;
  v15 = v13;
  v16 = v8;
  std::move_backward<std::move_iterator<CCheckMPOCache::PlaneInfo *>,stdext::checked_array_iterator<CCheckMPOCache::PlaneInfo *>>(
    (__int64)&v13,
    &v5[v11],
    (__int64)&v5[160 * v8 - 160],
    &v15);
LABEL_10:
  *(_QWORD *)(a1 + 8) += 160LL;
  return &v5[v11];
}
