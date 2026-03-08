/*
 * XREFs of ??4?$com_ptr_t@VCCompSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompSwapChain@@@Z @ 0x18029A9A0
 * Callers:
 *     ?Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVICompositionSwapChain@@@Z @ 0x18029AC58 (-Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV-$unique_any_t@V-$unique_.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall wil::com_ptr_t<CCompSwapChain,wil::err_returncode_policy>::operator=(
        volatile signed __int32 **a1,
        volatile signed __int32 *a2)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v4; // rdi

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 4));
  if ( v2 )
  {
    v4 = v2 + 4;
    if ( _InterlockedExchangeAdd(v2 + 4, 0xFFFFFFFF) == 1 )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v2 + 4));
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 88LL))(v2);
      if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 )
      {
        --*v4;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 80LL))(v2, 1LL);
      }
    }
  }
  return a1;
}
