/*
 * XREFs of ?clear_region@?$vector_facade@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801C7ECC
 * Callers:
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@EEAAXPEBVIDeviceResource@@@Z @ 0x1801C2820 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@EEAAXPEBVIDeviceR.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801C7DDC (-clear@-$vector_facade@V-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V-$buffer.c)
 * Callees:
 *     ??$destruct_range@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1801BCB9C (--$destruct_range@V-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPE.c)
 *     ??$move@V?$move_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1801BCF4C (--$move@V-$move_iterator@PEAV-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@std.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r11
  __int64 v6; // r10
  __int64 v7; // rcx
  unsigned __int64 v8; // r10
  __int64 v9; // r9
  bool v10; // zf
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 result; // rax
  __int64 v14[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v15[40]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a1;
  v6 = a1[1] - *a1;
  v7 = a2 + a3;
  v8 = v6 >> 3;
  v9 = a2;
  v10 = a2 + a3 == v8;
  if ( a2 + a3 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v11 = v3 + 8 * v8;
  if ( !v10 )
  {
    if ( v9 && (!v3 || v9 < 0 || v8 < v9) )
      _invalid_parameter_noinfo_noreturn();
    v14[2] = v9;
    v14[0] = v3;
    v14[1] = v8;
    std::move<std::move_iterator<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy> *>>(
      (__int64)v15,
      (volatile signed __int32 **)(v3 + 8 * v7),
      (volatile signed __int32 **)(v3 + 8 * v8),
      v14);
  }
  v12 = 8 * a3;
  result = detail::destruct_range<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>>(v11 - v12, v11);
  a1[1] -= v12;
  return result;
}
