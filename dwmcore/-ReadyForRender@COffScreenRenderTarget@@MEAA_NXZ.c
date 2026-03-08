/*
 * XREFs of ?ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ @ 0x18012CD90
 * Callers:
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801EC648 (-Render@CIndirectSwapchainRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800F1BF8 (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsRenderTime@COffScreenRenderTarget@@IEAA_NPEAI@Z @ 0x18012CD1A (-IsRenderTime@COffScreenRenderTarget@@IEAA_NPEAI@Z.c)
 */

char __fastcall COffScreenRenderTarget::ReadyForRender(COffScreenRenderTarget *this)
{
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 1756) )
    return 0;
  if ( !COffScreenRenderTarget::IsRenderTime(this, &v3) )
  {
    (*(void (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)this + 224LL))(this);
    ScheduleCompositionPass(v3, 1u);
    return 0;
  }
  return 1;
}
