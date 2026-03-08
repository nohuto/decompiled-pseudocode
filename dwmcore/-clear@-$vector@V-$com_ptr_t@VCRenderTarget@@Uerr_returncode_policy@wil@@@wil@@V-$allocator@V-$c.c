/*
 * XREFs of ?clear@?$vector@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800F8924
 * Callers:
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x1800F88D0 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1801B1A44 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<CRenderTarget,wil::err_returncode_policy>>::clear(__int64 **a1)
{
  __int64 *v1; // rsi
  __int64 *i; // rbx
  __int64 *result; // rax

  v1 = a1[1];
  for ( i = *a1; i != v1; ++i )
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(i);
  result = *a1;
  a1[1] = *a1;
  return result;
}
