/*
 * XREFs of ?SetColorSpace@CLegacyRemotingSwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802A0870
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CLegacyRemotingSwapChain::SetColorSpace(CLegacyRemotingSwapChain *this, unsigned int a2)
{
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 16LL))(*((_QWORD *)this + 10));
  v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 11);
  if ( v4 )
  {
    v5 = 0LL;
    if ( (**v4)(v4, &GUID_11bb5fd3_c76d_405e_a8d7_7fe7375f478a, &v5) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, a2);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v5);
  }
}
