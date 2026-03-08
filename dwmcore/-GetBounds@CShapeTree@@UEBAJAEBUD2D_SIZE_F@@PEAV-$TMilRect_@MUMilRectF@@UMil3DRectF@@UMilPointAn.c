/*
 * XREFs of ?GetBounds@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E3F58
 * Callers:
 *     ?GetBounds@CShapeTree@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011A190 (-GetBounds@CShapeTree@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 *     ?HitTest@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180268B68 (-HitTest@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x1800D89A0 (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 */

__int64 __fastcall CShapeTree::GetBounds(__int64 a1, float *a2, float *a3)
{
  unsigned int v6; // esi
  __int64 v7; // xmm0_8
  int v8; // eax
  __int64 v9; // rcx
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm0_4
  _BYTE v17[4]; // [rsp+30h] [rbp-50h] BYREF
  int v18; // [rsp+34h] [rbp-4Ch]
  __int64 v19; // [rsp+38h] [rbp-48h]
  __int64 v20; // [rsp+40h] [rbp-40h]
  __int64 v21; // [rsp+4Ch] [rbp-34h]
  __int64 v22; // [rsp+54h] [rbp-2Ch]
  void *lpMem; // [rsp+60h] [rbp-20h]
  int v24; // [rsp+68h] [rbp-18h]
  __int64 v25; // [rsp+70h] [rbp-10h]

  v6 = 0;
  if ( *(_BYTE *)(a1 - 56) )
  {
    v7 = *(_QWORD *)a2;
    v22 = 0LL;
    lpMem = 0LL;
    v24 = 0;
    v21 = 1LL;
    v18 = 0;
    v19 = 0LL;
    v20 = 0LL;
    v25 = v7;
    v8 = CShapeTreeIterator::Walk<CShapeBoundingContext>((__int64)v17, a1 - 152, (__int64)v17);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2Fu, 0LL);
      operator delete(lpMem);
      return v6;
    }
    operator delete(lpMem);
  }
  if ( a3 )
    *(_OWORD *)a3 = *(_OWORD *)(a1 - 72);
  if ( !*(_BYTE *)(a1 - 55) )
    goto LABEL_18;
  v10 = *a3;
  v11 = *a2;
  v12 = a2[1];
  if ( *a3 < 0.0 )
  {
    *a3 = 0.0;
    v10 = 0.0;
  }
  v13 = a3[1];
  if ( v13 < 0.0 )
  {
    a3[1] = 0.0;
    v13 = 0.0;
  }
  v14 = a3[2];
  if ( v14 > v11 )
  {
    a3[2] = v11;
    v14 = v11;
  }
  v15 = a3[3];
  if ( v15 > v12 )
  {
    a3[3] = v12;
    v15 = v12;
  }
  if ( v14 <= v10 || v15 <= v13 )
  {
LABEL_18:
    *(_QWORD *)a3 = 0LL;
    *((_QWORD *)a3 + 1) = 0LL;
  }
  return v6;
}
