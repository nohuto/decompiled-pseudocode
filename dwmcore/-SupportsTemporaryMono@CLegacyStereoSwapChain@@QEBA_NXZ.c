/*
 * XREFs of ?SupportsTemporaryMono@CLegacyStereoSwapChain@@QEBA_NXZ @ 0x1801EE5C8
 * Callers:
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z @ 0x1801EE000 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CLegacyStereoSwapChain::SupportsTemporaryMono(CLegacyStereoSwapChain *this)
{
  bool v1; // bl
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 28) )
  {
    v4 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v4);
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 28))(
           *((_QWORD *)this + 28),
           &GUID_790a45f7_0d42_4876_983a_0a55cfe6f4aa,
           &v4) >= 0 )
      v1 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 184LL))(v4) != 0;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v4);
  }
  return v1;
}
