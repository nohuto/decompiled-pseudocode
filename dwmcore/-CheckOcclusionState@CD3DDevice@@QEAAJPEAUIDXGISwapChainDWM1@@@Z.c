/*
 * XREFs of ?CheckOcclusionState@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@@Z @ 0x1800FDCE4
 * Callers:
 *     ?CheckOcclusionState@CLegacySwapChain@@UEBAJXZ @ 0x1800FDC9C (-CheckOcclusionState@CLegacySwapChain@@UEBAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::CheckOcclusionState(CD3DDevice *this, struct IDXGISwapChainDWM1 *a2)
{
  int v2; // ebx
  int v4; // eax
  __int64 v5; // rcx

  v2 = *((_DWORD *)this + 272);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v2, 0x2E4u, 0LL);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, __int64, __int64))(*(_QWORD *)a2 + 128LL))(
           a2,
           1LL,
           1LL);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x2EEu, 0LL);
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v2, 1);
}
