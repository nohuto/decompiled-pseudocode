/*
 * XREFs of ?SetSuperWetInkClip@CTreeData@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D4408
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B3A0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_ptr@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$default_delete@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D447C (-reset@-$unique_ptr@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 */

void __fastcall CTreeData::SetSuperWetInkClip(__int64 a1, _OWORD *a2)
{
  char *v2; // rbx
  _OWORD *v4; // rax
  _OWORD *v5; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)(a1 + 280);
  v4 = *(_OWORD **)(a1 + 280);
  if ( v4 )
  {
    *v4 = *a2;
  }
  else
  {
    v5 = operator new(0x10uLL);
    if ( v5 )
      *v5 = *a2;
    if ( v2 == &v6 )
    {
      if ( v5 )
        operator delete(v5);
    }
    else
    {
      std::unique_ptr<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::reset(v2, v5);
    }
  }
}
