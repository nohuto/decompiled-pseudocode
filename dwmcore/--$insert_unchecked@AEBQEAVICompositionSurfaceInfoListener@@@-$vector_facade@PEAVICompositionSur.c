/*
 * XREFs of ??$insert_unchecked@AEBQEAVICompositionSurfaceInfoListener@@@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVICompositionSurfaceInfoListener@@@1@V?$basic_iterator@QEAVICompositionSurfaceInfoListener@@@1@AEBQEAVICompositionSurfaceInfoListener@@@Z @ 0x1800BA72C
 * Callers:
 *     ?SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x1800BAC20 (-SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800BA540 (-ensure_extra_capacity@-$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x1801B026C (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

_QWORD *__fastcall detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::insert_unchecked<ICompositionSurfaceInfoListener * const &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v5; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // r8
  __int64 v10; // rcx
  unsigned __int64 v11; // r10
  _QWORD *v12; // r11
  __int64 v13; // rax
  _QWORD *v14; // r9
  _QWORD *result; // rax
  _QWORD *v16; // r8
  _QWORD v17[4]; // [rsp+20h] [rbp-58h] BYREF
  char v18[32]; // [rsp+40h] [rbp-38h] BYREF

  v5 = (__int64)(*a3 - *(_QWORD *)a1) >> 3;
  detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    (const void **)a1,
    1uLL);
  v8 = *(_QWORD **)a1;
  v9 = *(_QWORD **)(a1 + 8);
  v10 = ((__int64)v9 - *(_QWORD *)a1) >> 3;
  v11 = v10 - v5;
  v12 = (_QWORD *)(*(_QWORD *)a1 + 8 * v10);
  if ( !v12 )
    goto LABEL_8;
  v13 = ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3) - v5;
  if ( v11 > 1 )
    v13 = 1LL;
  v14 = &v9[-v13];
  if ( v9 != v14 )
  {
    v16 = v9 - 1;
    *v12 = *v16;
    if ( v16 != v14 )
LABEL_8:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v11 > 1 )
  {
    if ( v10 && (!v8 || v10 < 0) )
      goto LABEL_8;
    v17[1] = v10;
    v17[2] = v10;
    v17[0] = v8;
    ((void (__fastcall *)(char *, _QWORD *, _QWORD *, _QWORD *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
      v18,
      &v8[v5],
      &v8[v10 - 1],
      v17);
  }
  *(_QWORD *)(a1 + 8) += 8LL;
  v8[v5] = *a4;
  result = a2;
  *a2 = *(_QWORD *)a1 + 8 * v5;
  return result;
}
