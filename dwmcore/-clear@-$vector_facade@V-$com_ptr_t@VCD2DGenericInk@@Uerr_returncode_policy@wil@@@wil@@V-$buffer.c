/*
 * XREFs of ?clear@?$vector_facade@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801C7DDC
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAA@XZ @ 0x1801BE6D4 (--1-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAA@XZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801C7ECC (-clear_region@-$vector_facade@V-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = (__int64)(a1[1] - *a1) >> 3;
  if ( v1 )
    return detail::vector_facade<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             0LL,
             v1);
  return result;
}
