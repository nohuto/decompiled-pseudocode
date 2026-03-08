/*
 * XREFs of ?ApplyRenderState@CGroupBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x180207514
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180084A90 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x18008F5E0 (-ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CGroupBatchCommand::ApplyRenderState(CGroupBatchCommand *this, struct IDrawListStateSink *a2)
{
  if ( *((_DWORD *)this + 4) != 24 )
    (*(void (__fastcall **)(struct IDrawListStateSink *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( *((_BYTE *)this + 20) != 3 )
    (*(void (__fastcall **)(struct IDrawListStateSink *))(*(_QWORD *)a2 + 24LL))(a2);
  (*(void (__fastcall **)(struct IDrawListStateSink *, CGroupBatchCommand *))(*(_QWORD *)a2 + 16LL))(a2, this);
  return 1;
}
