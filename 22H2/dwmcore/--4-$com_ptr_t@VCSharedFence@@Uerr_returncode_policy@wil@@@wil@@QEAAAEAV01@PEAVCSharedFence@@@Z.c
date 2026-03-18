/*
 * XREFs of ??4?$com_ptr_t@VCSharedFence@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCSharedFence@@@Z @ 0x18028C730
 * Callers:
 *     ?CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z @ 0x18028D4A4 (-CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<CSharedFence,wil::err_returncode_policy>::operator=(
        __int64 *a1,
        void (__fastcall ***a2)(_QWORD))
{
  __int64 v2; // rdi

  v2 = *a1;
  *a1 = (__int64)a2;
  if ( a2 )
    (**a2)(a2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a1;
}
