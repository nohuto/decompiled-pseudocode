/*
 * XREFs of ??$move@V?$move_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1801BCF4C
 * Callers:
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801C7ECC (-clear_region@-$vector_facade@V-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F164 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 */

__int64 __fastcall std::move<std::move_iterator<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy> *>>(
        __int64 a1,
        volatile signed __int32 **a2,
        volatile signed __int32 **a3,
        __int64 *a4)
{
  volatile signed __int32 **v4; // rbx
  __int64 *v5; // r14
  __int64 v8; // rdx
  __int64 v10; // r12
  volatile signed __int32 **v11; // rsi
  volatile signed __int32 *v12; // rax
  volatile signed __int32 *v13; // rcx
  __int64 result; // rax
  __int64 v15; // xmm1_8

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
  v11 = (volatile signed __int32 **)(*a4 + 8 * *v5);
  while ( v4 != a3 )
  {
    v12 = *v4;
    *v4 = 0LL;
    v13 = *v11;
    *v11 = v12;
    if ( v13 )
      CMILRefCountBaseT<IUnknown>::InternalRelease(v13);
    ++v11;
    ++v4;
  }
  result = a1;
  *v5 = ((__int64)v11 - v10) >> 3;
  v15 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v15;
  return result;
}
