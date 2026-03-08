/*
 * XREFs of ?ReleaseD3D12Resources@CLegacySwapChain@@IEAAXXZ @ 0x180298110
 * Callers:
 *     ?PostPresent@CLegacySwapChain@@MEAAJ_N0@Z @ 0x1800C6AC0 (-PostPresent@CLegacySwapChain@@MEAAJ_N0@Z.c)
 *     ?NotifyInvalidResource@CLegacySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x180297FC0 (-NotifyInvalidResource@CLegacySwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F164 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180298634 (-reset@-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CLegacySwapChain::ReleaseD3D12Resources(CLegacySwapChain *this)
{
  volatile signed __int32 *v2; // rcx
  _QWORD *v3; // rdi
  _QWORD *i; // rbx

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 44);
  *((_QWORD *)this + 44) = 0LL;
  if ( v2 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v2);
  v3 = (_QWORD *)*((_QWORD *)this + 32);
  for ( i = (_QWORD *)*((_QWORD *)this + 31); i != v3; ++i )
    wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::reset(*i + 96LL);
}
