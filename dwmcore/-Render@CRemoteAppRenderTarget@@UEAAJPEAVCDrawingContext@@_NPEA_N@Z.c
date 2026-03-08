/*
 * XREFs of ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E8350
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180119630 (-Render@CRemoteAppRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800C1C30 (-CalcOcclusion@CDirtyRegion@@QEBAJXZ.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x1800C1DCC (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1801C9388 (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV-$TMilRec.c)
 *     ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x1801CAAF4 (-ForceFullDirty@CDirtyRegion@@QEBAXXZ.c)
 *     ?CalcVailAlphaMode@CRemoteAppRenderTarget@@IEBA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1801E769C (-CalcVailAlphaMode@CRemoteAppRenderTarget@@IEBA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetContentOffset@CRemoteAppRenderTarget@@IEBA?AUD2D_POINT_2F@@XZ @ 0x1801E7984 (-GetContentOffset@CRemoteAppRenderTarget@@IEBA-AUD2D_POINT_2F@@XZ.c)
 *     ?GetTreeBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1801E7B98 (-GetTreeBounds@CRemoteAppRenderTarget@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@@Z @ 0x1801E7FA8 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyRegion@@PEAW4ProtectionMode@1@@Z @ 0x1801E8770 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyR.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::Render(
        CRemoteAppRenderTarget *this,
        struct CDrawingContext *a2,
        __int64 a3,
        bool *a4)
{
  __int64 v4; // r11
  __int64 v6; // r14
  unsigned int v9; // ebx
  char v10; // r15
  char *v11; // rsi
  CDirtyRegion *v12; // r14
  __m128 v13; // xmm4
  __m128 v14; // xmm3
  int v15; // xmm2_4
  int v16; // xmm1_4
  char v17; // al
  unsigned int v18; // ebx
  __int64 (__fastcall ***v19)(_QWORD, float *); // rcx
  int v20; // xmm0_4
  char *v21; // rax
  struct CDrawingContext *v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  bool v27; // zf
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  char *v32; // rdx
  int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  char v37; // al
  _BYTE v39[8]; // [rsp+30h] [rbp-30h] BYREF
  float v40; // [rsp+38h] [rbp-28h] BYREF
  float v41; // [rsp+3Ch] [rbp-24h]
  int v42; // [rsp+40h] [rbp-20h]
  int v43; // [rsp+44h] [rbp-1Ch]
  struct CDrawingContext *v44; // [rsp+48h] [rbp-18h] BYREF
  float v45; // [rsp+50h] [rbp-10h]
  float v46; // [rsp+54h] [rbp-Ch]

  v4 = 0LL;
  v44 = a2;
  *a4 = 0;
  v6 = *((_QWORD *)this - 31);
  v9 = 0;
  v10 = 0;
  if ( v6 )
  {
    v11 = (char *)this - 328;
    if ( *(int *)(*((_QWORD *)this - 41) + 1104LL) >= 5 )
    {
      v12 = (CDirtyRegion *)(v6 + 104);
      if ( !CDirtyRegion::IsEmpty(v12) )
      {
        CDirtyRegion::CalcOcclusion(v12);
        if ( *(_DWORD *)(*(_QWORD *)v11 + 1104LL) == 5 )
        {
          v33 = CRemoteAppRenderTarget::RailMultimonRenderAndPresent(
                  (CRemoteAppRenderTarget *)((char *)this - 344),
                  a2,
                  v12);
          v4 = 0LL;
          v9 = v33;
          if ( v33 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x9Fu, 0LL);
            return v9;
          }
        }
        else
        {
          v4 = 0LL;
          if ( *(_DWORD *)(*(_QWORD *)v11 + 1104LL) == 6 && *((_QWORD *)this - 22) )
          {
            CRemoteAppRenderTarget::GetContentOffset((CRemoteAppRenderTarget *)((char *)this - 344), &v40);
            v13 = (__m128)LODWORD(v40);
            v14 = (__m128)LODWORD(v41);
            if ( v40 != *((float *)this - 16) || v41 != *((float *)this - 15) )
            {
              v15 = LODWORD(v40) ^ _xmm;
              v16 = LODWORD(v41) ^ _xmm;
              *((_QWORD *)this - 20) = 1065353216LL;
              *((_QWORD *)this - 19) = 0LL;
              *((_DWORD *)this - 36) = 0;
              *(_QWORD *)((char *)this - 140) = 1065353216LL;
              *(_QWORD *)((char *)this - 132) = 0LL;
              *((_DWORD *)this - 31) = 0;
              *((_QWORD *)this - 15) = 1065353216LL;
              *((_DWORD *)this - 28) = v15;
              *((_DWORD *)this - 27) = v16;
              *((_DWORD *)this - 26) = 0;
              *((_DWORD *)this - 25) = 1065353216;
              v17 = *((_BYTE *)this - 95) & 0xC0 | 0x17;
              *((_BYTE *)this - 96) = 84;
              *((_BYTE *)this - 95) = v17;
              *((_QWORD *)this - 8) = _mm_unpacklo_ps(v13, v14).m128_u64[0];
              CDirtyRegion::ForceFullDirty(v12);
            }
            v18 = CRemoteAppRenderTarget::CalcVailAlphaMode((CRemoteAppRenderTarget *)((char *)this - 344));
            v19 = (__int64 (__fastcall ***)(_QWORD, float *))(*(int *)(*(_QWORD *)(*((_QWORD *)this - 22) + 8LL) + 8LL)
                                                            + *((_QWORD *)this - 22)
                                                            + 8LL);
            if ( v18 != *(_DWORD *)((**v19)(v19, &v40) + 4) )
            {
              if ( v18 == 3 )
                v20 = (int)FLOAT_1_0;
              else
                v20 = 0;
              *((_DWORD *)this - 52) = v20;
              (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this - 22) + 56LL))(*((_QWORD *)this - 22), v18);
              CDirtyRegion::ForceFullDirty(v12);
            }
            v21 = (char *)this - 192;
            if ( this == (CRemoteAppRenderTarget *)344 )
              v21 = 0LL;
            v22 = v44;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 256LL) + 88LL) = v21;
            v10 = 1;
            v23 = CRemoteAppRenderTarget::RenderDirtyRegion(
                    (CRemoteAppRenderTarget *)((char *)this - 344),
                    v22,
                    *((struct ISwapChain **)this - 22),
                    v12,
                    (enum CRemoteAppRenderTarget::ProtectionMode *)&v40);
            v4 = 0LL;
            v9 = v23;
            if ( v23 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xD1u, 0LL);
              goto LABEL_39;
            }
            if ( v40 != 0.0 && LODWORD(v40) != *((_DWORD *)this - 14) )
            {
              v25 = *((_QWORD *)this - 22);
              v26 = 32LL;
              v27 = LODWORD(v40) == 2;
              *((float *)this - 14) = v40;
              if ( !v27 )
                v26 = 0LL;
              v28 = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v25 + 48LL))(
                      v25,
                      (char *)this - 240,
                      v26);
              v9 = v28;
              if ( v28 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xDEu, 0LL);
                goto LABEL_39;
              }
              CDirtyRegion::ForceFullDirty(v12);
              v30 = CRemoteAppRenderTarget::RenderDirtyRegion(
                      (CRemoteAppRenderTarget *)((char *)this - 344),
                      v44,
                      *((struct ISwapChain **)this - 22),
                      v12,
                      (enum CRemoteAppRenderTarget::ProtectionMode *)&v40);
              v4 = 0LL;
              v9 = v30;
              if ( v30 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0xE5u, 0LL);
LABEL_39:
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 256LL) + 88LL) = 0LL;
                return v9;
              }
            }
            *((_BYTE *)this - 50) = 1;
            *a4 = 1;
          }
        }
      }
    }
  }
  v11 = (char *)this - 328;
  if ( *(_DWORD *)(*((_QWORD *)this - 41) + 1104LL) == 6 && *((_QWORD *)this - 31) != v4 )
  {
    CRemoteAppRenderTarget::GetTreeBounds((__int64)this - 344, (__int64)&v44);
    v40 = 0.0;
    v41 = 0.0;
    v42 = (int)(float)(v45 - *(float *)&v44);
    v43 = (int)(float)(v46 - *((float *)&v44 + 1));
    if ( this == (CRemoteAppRenderTarget *)344 )
      v32 = 0LL;
    else
      v32 = (char *)this - 192;
    v35 = CSuperWetInkManager::ScheduleScribblesForRenderTarget(
            *(struct ID3D12Device **)(*(_QWORD *)v11 + 256LL),
            (__int64)v32,
            (__int64)&v40,
            v39);
    v9 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x102u, 0LL);
    }
    else
    {
      v37 = v39[0];
      *((_BYTE *)this - 50) |= v39[0];
      *a4 |= v37;
    }
  }
  if ( v10 )
    goto LABEL_39;
  return v9;
}
