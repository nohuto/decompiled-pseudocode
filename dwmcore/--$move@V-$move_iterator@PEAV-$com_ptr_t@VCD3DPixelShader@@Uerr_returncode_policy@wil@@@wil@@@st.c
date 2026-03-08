/*
 * XREFs of ??$move@V?$move_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x180202824
 * Callers:
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EFFDC (-clear_region@-$vector_facade@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::move<std::move_iterator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v4; // rbx
  __int64 *v5; // r14
  __int64 v8; // rdx
  __int64 v10; // r12
  __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // xmm1_8

  v4 = a2;
  v5 = a4 + 2;
  v8 = a3 - a2;
  if ( v8 >= 0 )
  {
    if ( v8 <= 0 || a4[1] - *v5 >= (unsigned __int64)v8 )
      goto LABEL_3;
LABEL_10:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( *v5 < (unsigned __int64)-v8 )
    goto LABEL_10;
LABEL_3:
  v10 = *a4;
  v11 = (__int64 *)(*a4 + 8 * *v5);
  while ( v4 != a3 )
  {
    v12 = *v4;
    *v4 = 0LL;
    v13 = *v11;
    *v11 = v12;
    if ( v13 )
    {
      v14 = v13 + 8 + *(int *)(*(_QWORD *)(v13 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    ++v11;
    ++v4;
  }
  result = a1;
  *v5 = ((__int64)v11 - v10) >> 3;
  v16 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v16;
  return result;
}
