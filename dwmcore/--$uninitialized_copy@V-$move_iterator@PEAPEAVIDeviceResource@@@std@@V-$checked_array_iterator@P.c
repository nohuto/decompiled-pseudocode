/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAPEAVIDeviceResource@@@std@@V?$checked_array_iterator@PEAPEAVIDeviceResource@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVIDeviceResource@@@stdext@@V?$move_iterator@PEAPEAVIDeviceResource@@@0@0V12@@Z @ 0x180012054
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800664C0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x180088C20 (-UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0CA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCVisual@@_K0@Z @ 0x180089430 (-reserve_region@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0CA@$00Vliberal_expans.c)
 *     ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x180089670 (-CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEAAX_K@Z @ 0x1800A98CC (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEAAX_K@Z.c)
 *     ?clear_region@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800BA294 (-clear_region@-$vector_facade@PEAVICompositionSurfaceInfoListener@@V-$buffer_impl@PEAVICompositi.c)
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800BA540 (-ensure_extra_capacity@-$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@.c)
 *     ?clear_region@?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800C74A0 (-clear_region@-$vector_facade@PEAVCVisualTree@@V-$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_.c)
 *     ?reserve_region@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCVisual@@_K0@Z @ 0x1800DB7B8 (-reserve_region@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0BA@$00Vliberal_expans.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<IDeviceResource * *>,stdext::checked_array_iterator<IDeviceResource * *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 *v4; // rsi
  __int64 v5; // rbp
  __int64 v8; // r10
  __int64 v9; // rbx
  void *v10; // rdi
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a4 + 2;
  v5 = a3 - (_QWORD)a2;
  v8 = (a3 - (__int64)a2) >> 3;
  if ( v8 < 0 )
  {
    if ( *v4 >= (unsigned __int64)-v8 )
      goto LABEL_4;
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 0 && a4[1] - *v4 < (unsigned __int64)v8 )
    goto LABEL_6;
LABEL_4:
  v9 = *a4;
  v10 = (void *)(*a4 + 8 * *v4);
  memmove_0(v10, a2, a3 - (_QWORD)a2);
  result = a1;
  *v4 = ((__int64)v10 + v5 - v9) >> 3;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
