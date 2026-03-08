/*
 * XREFs of ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180078B10
 * Callers:
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180078480 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D3A90 (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 * Callees:
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x180078C48 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x180079590 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800799D0 (-Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18007B614 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800B2368 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B4B20 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::Render(CDrawListEntryBuilder *this, struct CDrawingContext *a2)
{
  struct CDrawListCache **v2; // rbx
  struct CDrawListCache *v5; // rdi
  unsigned __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edi
  struct CDrawListCache *v10; // rbx
  int v12; // eax
  unsigned int v13; // ecx
  _BYTE v14[64]; // [rsp+30h] [rbp-58h] BYREF
  int v15; // [rsp+70h] [rbp-18h]

  v2 = (struct CDrawListCache **)((char *)this + 4464);
  if ( *((_QWORD *)this + 558)
    || (*v2 = 0LL, v12 = CDrawListCache::InternalCreate(1, (struct CDrawListCache **)this + 558), v9 = v12, v12 >= 0) )
  {
    v5 = *v2;
    if ( *(_QWORD *)(*((_QWORD *)a2 + 5) + 568LL) )
      *((_BYTE *)v5 + 101) = 1;
    if ( *((_BYTE *)a2 + 8048) )
      v6 = *(_QWORD *)(*((_QWORD *)a2 + 1007) + 4704LL);
    else
      v6 = 0LL;
    CDrawListCache::Update(
      v5,
      v6,
      *((struct CDrawListEntry ***)this + 11),
      (__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3,
      (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)a2 + 84) != 0),
      *((_BYTE *)this + 4472));
    if ( (*((_BYTE *)v5 + 88) & 0x40) != 0 )
    {
      v15 = 0;
      CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 400), (struct CMILMatrix *)v14);
      if ( !(unsigned __int8)CMILMatrix::Get2DScaleDimensionsWithPerspective(
                               (CMILMatrix *)v14,
                               (float *)v5 + 20,
                               (float *)v5 + 21) )
        *((_DWORD *)v5 + 22) |= 0x100u;
    }
    v7 = CDrawingContext::EmitDrawListCache(a2, *v2);
    v9 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x701u, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x6FDu, 0LL);
  }
  v10 = *v2;
  if ( v10 && *((_QWORD *)v10 + 4) )
  {
    if ( *((_BYTE *)v10 + 102) )
      ++dword_1803E2AFC;
    else
      ++dword_1803E2AF0;
    *((_QWORD *)v10 + 4) = 0LL;
    CDrawListCache::ReleaseDrawListEntries(v10);
    *((_WORD *)v10 + 50) = 0;
    *((_BYTE *)v10 + 102) = 0;
  }
  return v9;
}
