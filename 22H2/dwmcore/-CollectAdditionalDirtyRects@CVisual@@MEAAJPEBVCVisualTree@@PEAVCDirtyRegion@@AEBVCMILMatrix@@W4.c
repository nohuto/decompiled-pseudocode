/*
 * XREFs of ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A04E0
 * Callers:
 *     ?CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A0470 (-CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18006AEEC (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180082E50 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     ?GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedDirtyRect@@XZ @ 0x1800A07E0 (-GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedDirtyRect@@XZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A7F30 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800D5D10 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::CollectAdditionalDirtyRects(
        CVisual *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v9; // ebx
  struct CMergedDirtyRect *AdditionalDirtyRects; // rax
  struct CMergedDirtyRect *v11; // rdi
  unsigned int v12; // edi
  float v13; // xmm10_4
  float v14; // xmm7_4
  float v15; // xmm8_4
  float v16; // xmm6_4
  float v17; // xmm9_4
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  unsigned int v27; // [rsp+38h] [rbp-79h] BYREF
  __int64 v28; // [rsp+40h] [rbp-71h] BYREF
  __int128 v29; // [rsp+48h] [rbp-69h] BYREF
  __int128 v30; // [rsp+58h] [rbp-59h] BYREF

  v9 = 0;
  AdditionalDirtyRects = CVisual::GetAdditionalDirtyRects(a1);
  v11 = AdditionalDirtyRects;
  if ( AdditionalDirtyRects )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct CMergedDirtyRect *))(*(_QWORD *)AdditionalDirtyRects + 32LL))(AdditionalDirtyRects) )
    {
      (*(void (__fastcall **)(struct CMergedDirtyRect *, unsigned int *, __int64 *))(*(_QWORD *)v11 + 24LL))(
        v11,
        &v27,
        &v28);
      v12 = 0;
      if ( v27 )
      {
        while ( 1 )
        {
          v29 = 0LL;
          v30 = *(_OWORD *)(v28 + 16LL * v12);
          CMILMatrix::Transform2DBoundsHelper<1>(a4, &v30, &v29);
          v13 = *((float *)&v29 + 2);
          v14 = *(float *)&v29;
          if ( *((float *)&v29 + 2) > *(float *)&v29 )
          {
            v15 = *((float *)&v29 + 3);
            v16 = *((float *)&v29 + 1);
            if ( *((float *)&v29 + 3) > *((float *)&v29 + 1) )
            {
              if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)a1 + 352LL))(a1) )
                v17 = FLOAT_0_5;
              else
                v17 = 0.0;
              v18 = *((_QWORD *)a1 + 31);
              if ( v18
                && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 56LL))(v18, 14LL)
                && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 31) + 312LL))(*((_QWORD *)a1 + 31)) )
              {
                v17 = v17 + 0.5;
              }
              if ( v17 != 0.0 )
              {
                TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate((float *)&v29, v17, v17);
                v15 = *((float *)&v29 + 3);
                v13 = *((float *)&v29 + 2);
                v16 = *((float *)&v29 + 1);
                v14 = *(float *)&v29;
              }
              if ( a6 )
              {
                v22 = *(float *)a6;
                if ( *(float *)a6 > v14 )
                {
                  LODWORD(v29) = *(_DWORD *)a6;
                  v14 = v22;
                }
                v23 = *(float *)(a6 + 4);
                v24 = v16;
                if ( v23 > v16 )
                {
                  DWORD1(v29) = *(_DWORD *)(a6 + 4);
                  v16 = v23;
                  v24 = v23;
                }
                v25 = v13;
                if ( v13 > *(float *)(a6 + 8) )
                {
                  DWORD2(v29) = *(_DWORD *)(a6 + 8);
                  v13 = *((float *)&v29 + 2);
                  v25 = *((float *)&v29 + 2);
                }
                v26 = v15;
                if ( v15 > *(float *)(a6 + 12) )
                {
                  HIDWORD(v29) = *(_DWORD *)(a6 + 12);
                  v15 = *((float *)&v29 + 3);
                  v26 = *((float *)&v29 + 3);
                }
                if ( v25 <= v14 || v26 <= v24 )
                {
                  v15 = 0.0;
                  v13 = 0.0;
                  v16 = 0.0;
                  v14 = 0.0;
                  v29 = 0uLL;
                }
              }
              if ( v13 > v14 && v15 > v16 )
              {
                v9 = 0;
                if ( !*(_BYTE *)(a3 + 4456) && !*(_DWORD *)(a3 + 4432) )
                {
                  if ( (TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < v14
                     || v13 < *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2))
                    && (*(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < v16
                     || v15 < *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3)) )
                  {
                    v19 = CDirtyRegion::_Add((CDirtyRegion *)a3, (__int64)a1, 1, (float *)&v29);
                    v9 = v19;
                    if ( v19 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x161u, 0LL);
                  }
                  else
                  {
                    CDirtyRegion::SetFullDirty((CDirtyRegion *)a3);
                  }
                  if ( v9 < 0 )
                    break;
                }
              }
            }
          }
          if ( ++v12 >= v27 )
            return (unsigned int)v9;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v9, 0xE98u, 0LL);
      }
    }
  }
  return (unsigned int)v9;
}
