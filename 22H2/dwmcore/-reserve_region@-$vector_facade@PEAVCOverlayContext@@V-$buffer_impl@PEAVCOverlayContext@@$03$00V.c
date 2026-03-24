/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x1800C6234
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18006D330 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?EnsureClientInfo@CDesktopTree@@MEAAXXZ @ 0x1800C5F40 (-EnsureClientInfo@CDesktopTree@@MEAAXXZ.c)
 * Callees:
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180061AA4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062AA8 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@PEAVCOverlayContext@@@detail@@V?$checked_array_iterator@PEAPEAVCOverlayContext@@@stdext@@@detail@@YAXV?$basic_iterator@PEAVCOverlayContext@@@0@0V?$checked_array_iterator@PEAPEAVCOverlayContext@@@stdext@@@Z @ 0x1800C6314 (--$move_backward_uninitialized@V-$basic_iterator@PEAVCOverlayContext@@@detail@@V-$checked_array_.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAUIDXGIResource@@@std@@V?$checked_array_iterator@PEAPEAUIDXGIResource@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAUIDXGIResource@@@stdext@@V?$move_iterator@PEAPEAUIDXGIResource@@@0@0V12@@Z @ 0x180154A98 (--$uninitialized_copy@V-$move_iterator@PEAPEAUIDXGIResource@@@std@@V-$checked_array_iterator@PEA.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180154B50 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

char *__fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::reserve_region(
        void **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  _BYTE *v6; // rdx
  __int64 v7; // rcx
  char *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbx
  unsigned __int64 v11; // r15
  char *v12; // r13
  __int64 v13; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdi
  LPVOID v18; // rax
  void *v19; // r8
  void *v20; // rdx
  LPVOID v21; // rbx
  void *v22; // rcx
  bool v23; // zf
  __int64 v24; // rax
  bool v25; // sf
  __int128 v26; // [rsp+20h] [rbp-40h] BYREF
  __int64 v27; // [rsp+30h] [rbp-30h]
  __int128 v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h]
  __int64 v30; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+50h] BYREF

  v31 = a3;
  v3 = (__int64)a1[1];
  v6 = a1[2];
  v7 = 1LL;
  if ( !((__int64)&v6[-v3] >> 3) )
  {
    v15 = (v3 - (__int64)*a1) >> 3;
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v17 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)v7,
            (v6 - (_BYTE *)*a1) >> 3,
            v16);
    v18 = operator new(saturated_mul(v17, 8uLL));
    v19 = a1[1];
    v20 = *a1;
    *(_QWORD *)&v26 = v18;
    v21 = v18;
    *((_QWORD *)&v26 + 1) = v15;
    v27 = 0LL;
    v28 = v26;
    v29 = 0LL;
    std::uninitialized_copy<std::move_iterator<IDXGIResource * *>,stdext::checked_array_iterator<IDXGIResource * *>>(
      &v26,
      v20,
      v19,
      &v28);
    v22 = *a1;
    v23 = *a1 == a1 + 3;
    *a1 = v21;
    if ( v23 )
      v22 = 0LL;
    operator delete(v22);
    v7 = 1LL;
    v3 = (__int64)*a1 + 8 * v15;
    v24 = (__int64)*a1 + 8 * v17;
    a1[1] = (void *)v3;
    a1[2] = (void *)v24;
  }
  v8 = (char *)*a1;
  v9 = v3 - (_QWORD)*a1;
  *((_QWORD *)&v26 + 1) = 1LL;
  v10 = v9 >> 3;
  v11 = v10 - a2;
  v12 = &v8[8 * v10];
  *(_QWORD *)&v26 = v12;
  if ( !v12 )
    goto LABEL_18;
  v27 = 1LL;
  v31 = v3;
  v13 = v10 - a2;
  v28 = v26;
  if ( v11 > 1 )
    v13 = 1LL;
  v29 = 1LL;
  v30 = v3 - 8 * v13;
  detail::move_backward_uninitialized<detail::basic_iterator<COverlayContext *>,stdext::checked_array_iterator<COverlayContext * *>>(
    &v30,
    &v31,
    &v28);
  if ( v11 > 1 )
  {
    *(_QWORD *)&v26 = v8;
    *((_QWORD *)&v26 + 1) = v10;
    v25 = v10 < 0;
    if ( v10 )
    {
      if ( !v8 )
        goto LABEL_18;
      v25 = v10 < 0;
    }
    if ( !v25 || !v10 )
    {
      v27 = v10;
      v28 = v26;
      v29 = v10;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
        &v26,
        &v8[8 * a2],
        v12 - 8,
        &v28);
      goto LABEL_6;
    }
LABEL_18:
    _o__invalid_parameter_noinfo_noreturn(v7, v6);
    __debugbreak();
    JUMPOUT(0x180144903LL);
  }
LABEL_6:
  a1[1] = (char *)a1[1] + 8;
  return &v8[8 * a2];
}
