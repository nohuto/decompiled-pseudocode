/*
 * XREFs of ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C000DAA0
 * Callers:
 *     NtUnBindCompositionSurface @ 0x1C000B8D0 (NtUnBindCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x1C000C000 (NtBindCompositionSurface.c)
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z @ 0x1C000C3B4 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z.c)
 *     ?PairedUnBind@CCompositionSurface@@UEAAJ_N@Z @ 0x1C007B810 (-PairedUnBind@CCompositionSurface@@UEAAJ_N@Z.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x1C00877EC (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C000DB08 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C00143AC (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::UnBind(CCompositionSurface *this, char a2)
{
  __int64 v4; // rcx
  struct CCompositionBuffer *ActiveBuffer; // rax

  v4 = *((_QWORD *)this + 13);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  if ( a2 )
  {
    ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
    if ( ActiveBuffer )
      (*(void (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)ActiveBuffer + 16LL))(ActiveBuffer);
  }
  else
  {
    CCompositionSurface::ReleaseAllBuffers(this);
  }
  return 0LL;
}
