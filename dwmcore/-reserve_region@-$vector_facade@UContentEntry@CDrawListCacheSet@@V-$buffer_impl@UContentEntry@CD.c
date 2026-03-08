/*
 * XREFs of ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x18003F088
 * Callers:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18003EE00 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ??$emplace@IIW4DXGI_COLOR_SPACE_TYPE@@V?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@1@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@1@IIW4DXGI_COLOR_SPACE_TYPE@@V?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801FAEB8 (--$emplace@IIW4DXGI_COLOR_SPACE_TYPE@@V-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18003F168 (-ensure_extra_capacity@-$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_p.c)
 *     ??_GContentEntry@CDrawListCacheSet@@QEAAPEAXI@Z @ 0x1800FBBB8 (--_GContentEntry@CDrawListCacheSet@@QEAAPEAXI@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1801FAF5C (--$move_backward@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_array_ite.c)
 */

CDrawListCacheSet::ContentEntry *__fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  unsigned int v4; // edx
  __int64 v5; // rsi
  __int64 v6; // rcx
  signed __int64 v7; // r8
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // rbx
  CDrawListCacheSet::ContentEntry *v13; // rdi
  CDrawListCacheSet::ContentEntry *v14; // rsi
  CDrawListCacheSet::ContentEntry *i; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD v19[4]; // [rsp+20h] [rbp-48h] BYREF
  char v20[32]; // [rsp+40h] [rbp-28h] BYREF

  detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v5 = *a1;
  v6 = a1[1];
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((v6 - *a1) >> 3);
  v8 = v7 - a2;
  v9 = *a1 + 8 * ((v6 - *a1) >> 3);
  if ( !v9 )
    goto LABEL_12;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3) - a2;
  if ( v8 > 1 )
    v10 = 1LL;
  v11 = v6 - 24 * v10;
  if ( v6 != v11 )
  {
    v17 = v6 - 24;
    v4 = v9 + 8;
    *(_DWORD *)v9 = *(_DWORD *)v17;
    *(_DWORD *)(v9 + 4) = *(_DWORD *)(v17 + 4);
    *(_DWORD *)(v9 + 8) = *(_DWORD *)(v17 + 8);
    v18 = *(_QWORD *)(v17 + 16);
    *(_QWORD *)(v17 + 16) = 0LL;
    *(_QWORD *)(v9 + 16) = v18;
    if ( v17 != v11 )
LABEL_12:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 1 )
  {
    if ( v7 && (!v5 || v7 < 0) )
      goto LABEL_12;
    v19[1] = v7;
    v19[2] = v7;
    v12 = 24 * a2;
    v19[0] = v5;
    ((void (__fastcall *)(char *, __int64, __int64, _QWORD *))std::move_backward<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>)(
      v20,
      24 * a2 + v5,
      v5 + 24 * (v7 - 1),
      v19);
  }
  else
  {
    v12 = 24 * a2;
  }
  v13 = (CDrawListCacheSet::ContentEntry *)(v5 + 24 * (a2 + 1));
  if ( v9 < (unsigned __int64)v13 )
    v13 = (CDrawListCacheSet::ContentEntry *)v9;
  v14 = (CDrawListCacheSet::ContentEntry *)(v12 + v5);
  for ( i = v14; i != v13; i = (CDrawListCacheSet::ContentEntry *)((char *)i + 24) )
    CDrawListCacheSet::ContentEntry::`scalar deleting destructor'(i, v4);
  a1[1] += 24LL;
  return v14;
}
