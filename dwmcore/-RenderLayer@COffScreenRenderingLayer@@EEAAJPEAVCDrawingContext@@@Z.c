/*
 * XREFs of ?RenderLayer@COffScreenRenderingLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800F1580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall COffScreenRenderingLayer::RenderLayer(COffScreenRenderingLayer *this, struct CDrawingContext *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  if ( g_LockAndReadLayer )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
    v5 = *(int *)(*(_QWORD *)(v4 + 8) + 16LL) + v4 + 8;
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v5 + 24LL))(
      v5,
      ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  }
  return 0LL;
}
