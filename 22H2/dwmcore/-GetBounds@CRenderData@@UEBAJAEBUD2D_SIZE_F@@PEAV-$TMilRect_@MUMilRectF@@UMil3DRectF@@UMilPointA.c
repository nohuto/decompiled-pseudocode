/*
 * XREFs of ?GetBounds@CRenderData@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006B838
 * Callers:
 *     ?GetBounds@CRenderData@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F6220 (-GetBounds@CRenderData@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180058560 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800692C0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 */

__int64 __fastcall CRenderData::GetBounds(__int64 a1, __int64 a2, _OWORD *a3)
{
  int v3; // ebx
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rcx

  v3 = 0;
  if ( !*(_BYTE *)(a1 - 32) )
    goto LABEL_2;
  v7 = a1 - 296;
  *(_DWORD *)(v7 + 180) = 0;
  *(_DWORD *)(v7 + 176) = 0;
  *(_DWORD *)(v7 + 172) = 0;
  *(_DWORD *)(v7 + 168) = 0;
  *(_DWORD *)(v7 + 252) = 0;
  *(_BYTE *)(v7 + 256) = 0;
  v8 = CRenderData::Draw((__int64 *)(a1 - 296), a1 - 296 + 160, 1);
  v3 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x16Eu, 0LL);
  *(_BYTE *)(v7 + 264) = 0;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v3, 0x98u, 0LL);
  }
  else
  {
LABEL_2:
    *a3 = *(_OWORD *)(a1 - 128);
    *(_BYTE *)(a1 - 30) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)(a1 - 128));
  }
  return (unsigned int)v3;
}
