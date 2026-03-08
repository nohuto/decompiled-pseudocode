/*
 * XREFs of ?GetPresentStatistics@CRemoteAppRenderTarget@@UEBAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x1801E7AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::GetPresentStatistics(
        CRemoteAppRenderTarget *this,
        struct DXGI_FRAME_STATISTICS *a2)
{
  unsigned int v2; // ebx

  if ( *(_DWORD *)(*((_QWORD *)this - 17) + 1104LL) == 6
    && (this = (CRemoteAppRenderTarget *)*((_QWORD *)this + 2)) != 0LL )
  {
    return (*(unsigned int (__fastcall **)(CRemoteAppRenderTarget *, struct DXGI_FRAME_STATISTICS *))(*(_QWORD *)this + 32LL))(
             this,
             a2);
  }
  else
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467259, 0x13Fu, 0LL);
  }
  return v2;
}
