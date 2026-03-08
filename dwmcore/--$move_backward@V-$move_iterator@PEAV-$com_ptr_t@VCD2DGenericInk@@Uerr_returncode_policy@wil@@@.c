/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x18022957C
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x18022AEC4 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F164 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy> *>>(
        __int64 a1,
        volatile signed __int32 **a2,
        volatile signed __int32 **a3,
        __int64 *a4)
{
  __int64 *v5; // r14
  volatile signed __int32 **v7; // rbx
  __int64 v8; // rax
  __int64 v10; // r12
  volatile signed __int32 **v11; // rsi
  volatile signed __int32 *v12; // rax
  volatile signed __int32 *v13; // rcx
  __int64 result; // rax
  __int64 v15; // xmm1_8

  v5 = a4 + 2;
  v7 = a3;
  v8 = a3 - a2;
  if ( v8 > 0 )
  {
    if ( *v5 >= (unsigned __int64)v8 )
      goto LABEL_3;
LABEL_9:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 < 0 && a4[1] - *v5 < (unsigned __int64)-v8 )
    goto LABEL_9;
LABEL_3:
  v10 = *a4;
  v11 = (volatile signed __int32 **)(*a4 + 8 * *v5);
  while ( a2 != v7 )
  {
    --v7;
    --v11;
    v12 = *v7;
    *v7 = 0LL;
    v13 = *v11;
    *v11 = v12;
    if ( v13 )
      CMILRefCountBaseT<IUnknown>::InternalRelease(v13);
  }
  result = a1;
  *v5 = ((__int64)v11 - v10) >> 3;
  v15 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v15;
  return result;
}
