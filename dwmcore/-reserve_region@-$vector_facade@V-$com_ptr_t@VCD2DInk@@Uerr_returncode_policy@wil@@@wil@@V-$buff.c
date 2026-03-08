/*
 * XREFs of ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x18021A088
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x180218EBC (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDe.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x18022C0AC (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEA.c)
 * Callees:
 *     ??$destruct_range@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1801BCB64 (--$destruct_range@V-$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV-$.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x180217E70 (--$move_backward@V-$move_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180219F7C (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@.c)
 */

__int64 *__fastcall detail::vector_facade<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 *v10; // r9
  __int64 *v11; // rdx
  __int64 v12; // rax
  __int64 *v13; // rdx
  __int64 *v14; // rbx
  __int64 v16[4]; // [rsp+20h] [rbp-48h] BYREF
  char v17[32]; // [rsp+40h] [rbp-28h] BYREF

  detail::buffer_impl<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    (__int64)a1,
    1uLL);
  v4 = *a1;
  v5 = (__int64 *)a1[1];
  v6 = ((__int64)v5 - *a1) >> 3;
  v7 = v6 - a2;
  v8 = (__int64 *)(*a1 + 8 * v6);
  if ( !v8 )
    goto LABEL_6;
  v9 = ((a1[1] - *a1) >> 3) - a2;
  if ( v7 > 1 )
    v9 = 1LL;
  v10 = &v5[-v9];
  if ( v5 != v10 )
  {
    v11 = v5 - 1;
    v12 = *v11;
    *v11 = 0LL;
    *v8 = v12;
    if ( v11 != v10 )
LABEL_6:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v7 > 1 )
  {
    if ( v6 && (!v4 || v6 < 0) )
      goto LABEL_6;
    v16[1] = v6;
    v16[2] = v6;
    v16[0] = v4;
    std::move_backward<std::move_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>>(
      (__int64)v17,
      (__int64 *)(v4 + 8 * a2),
      (__int64 *)(v4 + 8 * (v6 - 1)),
      v16);
  }
  v13 = (__int64 *)(v4 + 8 * (a2 + 1));
  v14 = (__int64 *)(v4 + 8 * a2);
  if ( v8 < v13 )
    v13 = v8;
  detail::destruct_range<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>>(v14, v13);
  a1[1] += 8LL;
  return v14;
}
