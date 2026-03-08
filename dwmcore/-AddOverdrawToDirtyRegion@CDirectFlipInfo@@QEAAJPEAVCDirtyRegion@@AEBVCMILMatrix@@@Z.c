/*
 * XREFs of ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z @ 0x1801F3994
 * Callers:
 *     ?AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180049550 (-AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180042574 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004C680 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800DBF94 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800E83F4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x18012D42C (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 */

__int64 __fastcall CDirectFlipInfo::AddOverdrawToDirtyRegion(
        FastRegion::Internal::CRgnData ***this,
        struct CDirtyRegion *a2,
        const struct CMILMatrix *a3)
{
  unsigned int v3; // ebx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rdx
  __int64 i; // rax
  int v13; // eax
  FastRegion::Internal::CRgnData *v14; // rcx
  _DWORD v16[4]; // [rsp+30h] [rbp-89h]
  _BYTE v17[8]; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-71h]
  _DWORD *v19; // [rsp+50h] [rbp-69h]
  __int64 v20; // [rsp+58h] [rbp-61h]
  int v21; // [rsp+60h] [rbp-59h]
  _OWORD v22[4]; // [rsp+70h] [rbp-49h] BYREF
  int v23; // [rsp+B0h] [rbp-9h]
  __int128 v24; // [rsp+C0h] [rbp+7h] BYREF
  _DWORD v25[4]; // [rsp+D0h] [rbp+17h] BYREF

  v3 = 0;
  if ( (*((_DWORD *)this + 13) == 3
     || *((_DWORD *)this + 13) == 4 && CDirectFlipInfo::RenderingRealizationChanged((CDirectFlipInfo *)this))
    && this[4] )
  {
    v7 = *(_OWORD *)a3;
    v8 = *((_OWORD *)a3 + 1);
    v23 = *((_DWORD *)a3 + 16);
    v22[0] = v7;
    v9 = *((_OWORD *)a3 + 2);
    v22[1] = v8;
    v10 = *((_OWORD *)a3 + 3);
    v22[2] = v9;
    v22[3] = v10;
    CMILMatrix::Invert((CMILMatrix *)v22, (__int64)a2, a3);
    FastRegion::Internal::CRgnData::BeginIterator(*this[4], (struct FastRegion::CRegion::Iterator *)v17);
    while ( (unsigned __int64)v19 < v18 )
    {
      v16[1] = *v19;
      v16[3] = v19[2];
      v11 = 2 * v21;
      v16[0] = *(_DWORD *)(v20 + 4 * v11);
      v16[2] = *(_DWORD *)(v20 + 4 * v11 + 4);
      for ( i = 0LL; i < 4; ++i )
        *(float *)&v25[i] = (float)(int)v16[i];
      v24 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v22, (struct MilRectF *)v25, (float *)&v24);
      v13 = CDirtyRegion::Add((__int64)a2, 0LL, 0LL, (__int64)&v24);
      v3 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v14, 0LL, 0, v13, 0x1C5u, 0LL);
        return v3;
      }
      FastRegion::Internal::CRgnData::StepIterator(v14, (struct FastRegion::CRegion::Iterator *)v17);
    }
  }
  return v3;
}
