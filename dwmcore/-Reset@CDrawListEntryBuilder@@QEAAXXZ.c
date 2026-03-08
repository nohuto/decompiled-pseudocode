/*
 * XREFs of ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x180095B74
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18005A8DC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x1800958E0 (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18009598C (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D3A90 (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDrawListEntryBuilder::Reset(CDrawListEntryBuilder *this)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 11);
  v3 = (_QWORD *)*((_QWORD *)this + 12);
  while ( v1 != v3 )
  {
    if ( *v1 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 8LL))(*v1);
      *v1 = 0LL;
    }
    ++v1;
  }
  v4 = (__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3;
  if ( v4 )
    *((_QWORD *)this + 12) -= 8 * v4;
  *((_BYTE *)this + 4472) = 0;
  v5 = *((_QWORD *)this + 10);
  if ( v5 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
}
