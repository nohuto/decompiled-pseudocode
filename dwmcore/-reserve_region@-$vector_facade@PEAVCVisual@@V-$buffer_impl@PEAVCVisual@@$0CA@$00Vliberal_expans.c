/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0CA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCVisual@@_K0@Z @ 0x180089430
 * Callers:
 *     ?UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x180088C20 (-UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x180089670 (-CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z.c)
 * Callees:
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVIDeviceResource@@@std@@V?$checked_array_iterator@PEAPEAVIDeviceResource@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVIDeviceResource@@@stdext@@V?$move_iterator@PEAPEAVIDeviceResource@@@0@0V12@@Z @ 0x180012054 (--$uninitialized_copy@V-$move_iterator@PEAPEAVIDeviceResource@@@std@@V-$checked_array_iterator@P.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x1801B026C (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

__int64 __fastcall detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,32,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  _QWORD *v8; // r10
  __int64 v9; // rax
  _QWORD *v10; // r9
  unsigned __int64 v12; // rdi
  LPVOID v13; // rax
  __int64 v14; // r8
  const void *v15; // rdx
  LPVOID v16; // rbx
  void *v17; // rcx
  bool v18; // zf
  __int64 v19; // rax
  _QWORD *v20; // rsi
  __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  _BYTE v24[32]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *((_QWORD *)a1 + 1);
  if ( (__int64)(*((_QWORD *)a1 + 2) - v3) >> 3 )
    goto LABEL_2;
  v3 = (__int64)(v3 - *(_QWORD *)a1) >> 3;
  if ( v3 + 1 >= v3 )
  {
    v12 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3, v3 + 1);
    v13 = operator new(saturated_mul(v12, 8uLL));
    v14 = *((_QWORD *)a1 + 1);
    v15 = *(const void **)a1;
    v16 = v13;
    v21 = (__int64)v13;
    v22 = v3;
    v23 = 0LL;
    std::uninitialized_copy<std::move_iterator<IDeviceResource * *>,stdext::checked_array_iterator<IDeviceResource * *>>(
      (__int64)v24,
      v15,
      v14,
      &v21);
    v17 = *(void **)a1;
    v18 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v16;
    if ( v18 )
      v17 = 0LL;
    operator delete(v17);
    v3 = *(_QWORD *)a1 + 8 * v3;
    v19 = *(_QWORD *)a1 + 8 * v12;
    *((_QWORD *)a1 + 1) = v3;
    *((_QWORD *)a1 + 2) = v19;
LABEL_2:
    v2 = *(_QWORD *)a1;
    v6 = (__int64)(v3 - *(_QWORD *)a1) >> 3;
    v7 = v6 - a2;
    v8 = (_QWORD *)(*(_QWORD *)a1 + 8 * v6);
    if ( !v8 )
      goto LABEL_14;
    v9 = ((__int64)(v3 - *(_QWORD *)a1) >> 3) - a2;
    if ( v7 > 1 )
      v9 = 1LL;
    v10 = (_QWORD *)(v3 - 8 * v9);
    if ( (_QWORD *)v3 == v10 )
      goto LABEL_6;
    goto LABEL_13;
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
LABEL_13:
  v20 = (_QWORD *)(v3 - 8);
  *v8 = *v20;
  if ( v20 != v10 )
    goto LABEL_14;
LABEL_6:
  if ( v7 > 1 )
  {
    if ( !v6 || v2 && v6 >= 0 )
    {
      v22 = v6;
      v23 = v6;
      v21 = v2;
      ((void (__fastcall *)(_BYTE *, __int64, __int64, __int64 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
        v24,
        v2 + 8 * a2,
        v2 + 8 * (v6 - 1),
        &v21);
      goto LABEL_7;
    }
LABEL_14:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_7:
  *((_QWORD *)a1 + 1) += 8LL;
  return v2 + 8 * a2;
}
