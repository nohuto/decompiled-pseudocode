/*
 * XREFs of ?EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z @ 0x180289FD8
 * Callers:
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x18025254C (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ?Present@CDummyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z @ 0x180296410 (-Present@CDummyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1802A6068 (-Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::EnqueueSetEvent(CD3DDevice *this, void *a2)
{
  int v2; // ebx
  int v4; // eax
  __int64 v5; // rcx

  v2 = *((_DWORD *)this + 272);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v2, 0xC8Bu, 0LL);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 67) + 128LL))(*((_QWORD *)this + 67), a2);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xC8Du, 0LL);
    else
      *((_BYTE *)this + 1507) = 0;
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v2, 0);
}
