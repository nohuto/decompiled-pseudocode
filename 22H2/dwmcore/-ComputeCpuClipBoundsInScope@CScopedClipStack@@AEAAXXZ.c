/*
 * XREFs of ?ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ @ 0x18018E5A8
 * Callers:
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18006BDEC (-GetClipBoundsWorld@CScopedClipStack@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x180076964 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18007BE10 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x18008D184 (-GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180041938 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180067E94 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800C5554 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800F3F87 (ceilf_0.c)
 *     floorf_0 @ 0x1800F3F9F (floorf_0.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CScopedClipStack::ComputeCpuClipBoundsInScope(CScopedClipStack *this)
{
  unsigned int v2; // edx
  float v3; // xmm6_4
  float v4; // xmm7_4
  float v5; // xmm8_4
  float v6; // xmm9_4
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rbx
  __int128 *v10; // r14
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  int v16; // eax
  int TightBounds; // eax
  float v18; // xmm13_4
  float v19; // xmm12_4
  float v20; // xmm10_4
  float v21; // xmm11_4
  _BYTE v22[64]; // [rsp+28h] [rbp-E0h] BYREF
  int v23; // [rsp+68h] [rbp-A0h]
  __int128 v24; // [rsp+78h] [rbp-90h]
  __int128 v25; // [rsp+88h] [rbp-80h]
  void *retaddr; // [rsp+150h] [rbp+48h]

  v2 = *((_DWORD *)this + 224);
  v3 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v4 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
  v5 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
  v6 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
  v7 = 84LL * (unsigned int)(*((_DWORD *)this + 6) - 1);
  v24 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v8 = v2 - *(_DWORD *)(v7 + *(_QWORD *)this + 4);
  if ( v8 < v2 )
  {
    do
    {
      v9 = *((_QWORD *)this + 109) + 136LL * v8;
      v10 = (__int128 *)(v9 + 112);
      if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)(v9 + 112)) )
      {
        if ( *(_BYTE *)(v9 + 128) )
        {
          v11 = *(float *)(v9 + 96);
          if ( v11 > v3 )
          {
            LODWORD(v24) = *(_DWORD *)(v9 + 96);
            v3 = v11;
          }
          v12 = *(float *)(v9 + 100);
          v13 = v4;
          if ( v12 > v4 )
          {
            DWORD1(v24) = *(_DWORD *)(v9 + 100);
            v4 = v12;
            v13 = v12;
          }
          v14 = v5;
          if ( v5 > *(float *)(v9 + 104) )
          {
            DWORD2(v24) = *(_DWORD *)(v9 + 104);
            v5 = *((float *)&v24 + 2);
            v14 = *((float *)&v24 + 2);
          }
          v15 = v6;
          if ( v6 > *(float *)(v9 + 108) )
          {
            HIDWORD(v24) = *(_DWORD *)(v9 + 108);
            v6 = *((float *)&v24 + 3);
            v15 = *((float *)&v24 + 3);
          }
        }
        else
        {
          v16 = *((_DWORD *)this + 6);
          v23 = 0;
          v25 = 0LL;
          CMILMatrix::Multiply(
            (const struct CMILMatrix *)(v9 + 16),
            (const struct CMILMatrix *)(*(_QWORD *)this + 12LL + 84LL * (unsigned int)(v16 - 1)),
            (struct CMILMatrix *)v22);
          TightBounds = CShapePtr::GetTightBounds((__int64 *)v9);
          if ( TightBounds >= 0 )
          {
            v18 = *((float *)&v25 + 3);
            v19 = *((float *)&v25 + 2);
            v20 = *((float *)&v25 + 1);
            v21 = *(float *)&v25;
          }
          else
          {
            if ( TightBounds != -2003304438 )
              ModuleFailFastForHRESULT((unsigned int)TightBounds, retaddr);
            v18 = 0.0;
            v19 = 0.0;
            v20 = 0.0;
            v21 = 0.0;
          }
          if ( COERCE_FLOAT(LODWORD(v21) & _xmm) < 8388608.0 )
            v21 = (float)(int)floorf_0(v21);
          *(float *)&v25 = v21;
          if ( COERCE_FLOAT(LODWORD(v20) & _xmm) < 8388608.0 )
            v20 = (float)(int)floorf_0(v20);
          *((float *)&v25 + 1) = v20;
          if ( COERCE_FLOAT(LODWORD(v19) & _xmm) < 8388608.0 )
            v19 = (float)(int)ceilf_0(v19);
          *((float *)&v25 + 2) = v19;
          if ( COERCE_FLOAT(LODWORD(v18) & _xmm) < 8388608.0 )
            v18 = (float)(int)ceilf_0(v18);
          *((float *)&v25 + 3) = v18;
          if ( v21 > v3 )
          {
            v3 = v21;
            *(float *)&v24 = v21;
          }
          v13 = v4;
          if ( v20 > v4 )
          {
            v4 = v20;
            v13 = v20;
            *((float *)&v24 + 1) = v20;
          }
          v14 = v5;
          if ( v5 > v19 )
          {
            *((float *)&v24 + 2) = v19;
            v5 = v19;
            v14 = v19;
          }
          v15 = v6;
          if ( v6 > v18 )
          {
            *((float *)&v24 + 3) = v18;
            v6 = v18;
            v15 = v18;
          }
        }
        if ( v14 <= v3 || v15 <= v13 )
        {
          v3 = 0.0;
          v4 = 0.0;
          v5 = 0.0;
          v24 = 0uLL;
          v6 = 0.0;
        }
        *v10 = v24;
      }
      else
      {
        v24 = *v10;
        v6 = *((float *)&v24 + 3);
        v5 = *((float *)&v24 + 2);
        v4 = *((float *)&v24 + 1);
        v3 = *(float *)&v24;
      }
      ++v8;
    }
    while ( v8 < *((_DWORD *)this + 224) );
  }
}
