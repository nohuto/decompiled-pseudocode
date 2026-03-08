/*
 * XREFs of ??0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800814F8
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180090F1C (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Clear@CMatrixStack2D@@QEAAXXZ @ 0x1800816B0 (-Clear@CMatrixStack2D@@QEAAXXZ.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800B4BA4 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 */

__int64 __fastcall CShapeDrawingContext::CShapeDrawingContext(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _OWORD *a4,
        __int64 a5)
{
  CMatrixStack2D *v5; // r14
  __int64 result; // rax

  v5 = (CMatrixStack2D *)(a1 + 64);
  *(_QWORD *)(a1 + 28) = 1LL;
  *(_QWORD *)(a1 + 36) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 64) = a1 + 88;
  *(_QWORD *)(a1 + 72) = a1 + 88;
  *(_QWORD *)(a1 + 80) = a1 + 328;
  CMatrixStack2D::Clear((CMatrixStack2D *)(a1 + 64));
  *(_QWORD *)(a1 + 328) = a2;
  *(_QWORD *)(a1 + 336) = *a3;
  *(_OWORD *)(a1 + 344) = *a4;
  *(_OWORD *)(a1 + 360) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 376) = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 392) = *(_OWORD *)(a5 + 32);
  *(_OWORD *)(a1 + 408) = *(_OWORD *)(a5 + 48);
  *(_DWORD *)(a1 + 424) = *(_DWORD *)(a5 + 64);
  *(_OWORD *)(a1 + 428) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 444) = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 460) = *(_OWORD *)(a5 + 32);
  *(_OWORD *)(a1 + 476) = *(_OWORD *)(a5 + 48);
  *(_DWORD *)(a1 + 492) = *(_DWORD *)(a5 + 64);
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)(a1 + 360), (float *)(a1 + 496), (float *)(a1 + 500));
  CMatrixStack2D::Clear(v5);
  *(_QWORD *)(a1 + 512) = *(_QWORD *)(a1 + 504);
  result = a1;
  *(_WORD *)(a1 + 528) = 0;
  return result;
}
