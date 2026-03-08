/*
 * XREFs of ?ApplyRenderState@CRenderingBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x1800903EC
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180084A90 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x18008F5E0 (-ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x18008F650 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 * Callees:
 *     ?GetPrimitive@CMegaRectBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ @ 0x180085C7C (-GetPrimitive@CMegaRectBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CRenderingBatchCommand::ApplyRenderState(CRenderingBatchCommand *this, struct IDrawListStateSink *a2)
{
  CRenderingBatchCommand *v3; // r8
  struct CDrawListPrimitive *Primitive; // rbx
  __int64 v5; // rdx

  v3 = this;
  if ( *((_BYTE *)this + 92) )
    return 1;
  if ( *(_DWORD *)this == 4 )
    Primitive = CMegaRectBatchCommand::GetPrimitive(this);
  else
    Primitive = *(struct CDrawListPrimitive **)(*((_QWORD *)this + 1) + 64LL);
  if ( *((float *)Primitive + 21) > *((float *)Primitive + 19)
    && *((float *)Primitive + 22) > *((float *)Primitive + 20) )
  {
    (*(void (__fastcall **)(struct IDrawListStateSink *, _QWORD))(*(_QWORD *)a2 + 8LL))(a2, *((unsigned int *)v3 + 21));
    LOBYTE(v5) = *((_BYTE *)Primitive + 72);
    (*(void (__fastcall **)(struct IDrawListStateSink *, __int64))(*(_QWORD *)a2 + 24LL))(a2, v5);
    return 1;
  }
  return 0;
}
