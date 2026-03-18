/*
 * XREFs of ?ApplyRenderState@CStateSettingBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x180014F88
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180084C60 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CStateSettingBatchCommand::ApplyRenderState(
        CStateSettingBatchCommand *this,
        struct IDrawListStateSink *a2)
{
  (**(void (__fastcall ***)(struct IDrawListStateSink *, _QWORD))a2)(a2, *((_QWORD *)this + 1));
  return 0;
}
