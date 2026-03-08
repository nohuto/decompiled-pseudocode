/*
 * XREFs of ??4?$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDDASwapChain@@@Z @ 0x18029F960
 * Callers:
 *     ?Create@CDDASwapChain@@SAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDDASwapChain@@@Z @ 0x18029FA80 (-Create@CDDASwapChain@@SAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRende.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall wil::com_ptr_t<CDDASwapChain,wil::err_returncode_policy>::operator=(
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
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 64LL))(v2);
      if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 )
      {
        --*v4;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 56LL))(v2, 1LL);
      }
    }
  }
  return a1;
}
