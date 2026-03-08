/*
 * XREFs of ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1800F06B8
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x1800B7008 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$destruct_range@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1800F08FC (--$destruct_range@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV-$c.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1801D4304 (--$uninitialized_move@V-$move_iterator@PEAV-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x180217E70 (--$move_backward@V-$move_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@.c)
 */

char *__fastcall detail::vector_facade<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdx
  char *v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  char *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // r9
  char *v13; // rdx
  char *v14; // rbx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdi
  LPVOID v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  LPVOID v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  void *v25; // rcx
  bool v26; // zf
  __int64 v27; // rax
  __int64 *v28; // rsi
  __int64 v29; // rax
  LPVOID v30; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-50h]
  __int64 v32; // [rsp+30h] [rbp-48h]
  _BYTE v33[32]; // [rsp+40h] [rbp-38h] BYREF

  v2 = *((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( !((v5 - v2) >> 3) )
  {
    v16 = (v2 - *(_QWORD *)a1) >> 3;
    v17 = v16 + 1;
    if ( v16 + 1 < v16 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v18 = detail::liberal_expansion_policy::expand(a1, (v5 - *(_QWORD *)a1) >> 3, v17);
    v19 = operator new(saturated_mul(v18, 8uLL));
    v20 = *((_QWORD *)a1 + 1);
    v21 = *(_QWORD *)a1;
    v22 = v19;
    v30 = v19;
    v31 = v16;
    v32 = 0LL;
    ((void (__fastcall *)(_BYTE *, __int64, __int64, LPVOID *))std::uninitialized_move<std::move_iterator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *>>)(
      v33,
      v21,
      v20,
      &v30);
    detail::destruct_range<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>>(
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 1),
      v23,
      v24);
    v25 = *(void **)a1;
    v26 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v22;
    if ( v26 )
      v25 = 0LL;
    operator delete(v25);
    v2 = *(_QWORD *)a1 + 8 * v16;
    v27 = *(_QWORD *)a1 + 8 * v18;
    *((_QWORD *)a1 + 1) = v2;
    *((_QWORD *)a1 + 2) = v27;
  }
  v6 = *(char **)a1;
  v7 = (v2 - *(_QWORD *)a1) >> 3;
  v8 = v7 - a2;
  v9 = (char *)(*(_QWORD *)a1 + 8 * v7);
  if ( !v9 )
    goto LABEL_16;
  v10 = ((v2 - *(_QWORD *)a1) >> 3) - a2;
  if ( v8 > 1 )
    v10 = 1LL;
  v11 = 8 * v10;
  v12 = (__int64 *)(v2 - v11);
  if ( v2 != v2 - v11 )
  {
    v28 = (__int64 *)(v2 - 8);
    v29 = *v28;
    *v28 = 0LL;
    *(_QWORD *)v9 = v29;
    if ( v28 != v12 )
LABEL_16:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 1 )
  {
    if ( v7 && (!v6 || v7 < 0) )
      goto LABEL_16;
    v31 = v7;
    v32 = v7;
    v30 = v6;
    ((void (__fastcall *)(_BYTE *, char *, char *, LPVOID *))std::move_backward<std::move_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>>)(
      v33,
      &v6[8 * a2],
      &v6[8 * v7 - 8],
      &v30);
  }
  v13 = &v6[8 * a2 + 8];
  v14 = &v6[8 * a2];
  if ( v9 < v13 )
    v13 = v9;
  detail::destruct_range<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>>(v14, v13, v8, v12);
  *((_QWORD *)a1 + 1) += 8LL;
  return v14;
}
