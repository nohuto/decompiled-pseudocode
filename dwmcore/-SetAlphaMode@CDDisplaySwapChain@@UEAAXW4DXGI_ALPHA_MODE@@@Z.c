/*
 * XREFs of ?SetAlphaMode@CDDisplaySwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x180288560
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDDisplaySwapChain::SetAlphaMode(CDDisplaySwapChain *this, enum DXGI_ALPHA_MODE a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx

  if ( *((_DWORD *)this + 109) != a2 )
  {
    v2 = *((_QWORD *)this + 16);
    *((_DWORD *)this + 109) = a2;
    if ( v2 )
    {
      v3 = v2 + 8 + *(int *)(*(_QWORD *)(v2 + 8) + 24LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
}
