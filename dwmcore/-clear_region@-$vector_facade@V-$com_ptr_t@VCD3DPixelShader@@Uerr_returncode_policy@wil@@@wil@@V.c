/*
 * XREFs of ?clear_region@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EFFDC
 * Callers:
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800201E8 (-clear@-$vector_facade@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V-$buffe.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@EEAAXPEBVIDeviceResource@@@Z @ 0x1800EFF60 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@EEAAXPEBVIDevi.c)
 * Callees:
 *     ??$destruct_range@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1800F0120 (--$destruct_range@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXP.c)
 *     ??$move@V?$move_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x180202824 (--$move@V-$move_iterator@PEAV-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@st.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r11
  __int64 v7; // r10
  __int64 v8; // rcx
  unsigned __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 result; // rax
  _QWORD v13[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v14[40]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *a1;
  v7 = a1[1] - *a1;
  v8 = a2 + a3;
  v9 = v7 >> 3;
  v10 = a2;
  if ( a2 + a3 > v9 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v3 = v4 + 8 * v9;
    if ( a2 + a3 == v9 )
      goto LABEL_3;
  }
  if ( v10 && (!v4 || v10 < 0 || v9 < v10) )
    _invalid_parameter_noinfo_noreturn();
  v13[2] = v10;
  v13[0] = v4;
  v13[1] = v9;
  ((void (__fastcall *)(_BYTE *, __int64, __int64, _QWORD *))std::move<std::move_iterator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *>>)(
    v14,
    v4 + 8 * v8,
    v3,
    v13);
LABEL_3:
  v11 = 8 * a3;
  result = detail::destruct_range<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>>(v3 - v11, v3, a3, v10);
  a1[1] -= v11;
  return result;
}
