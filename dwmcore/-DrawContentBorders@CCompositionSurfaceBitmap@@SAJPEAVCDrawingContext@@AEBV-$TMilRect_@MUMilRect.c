/*
 * XREFs of ?DrawContentBorders@CCompositionSurfaceBitmap@@SAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1AEBU_D3DCOLORVALUE@@@Z @ 0x1802237F8
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000CC70 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?DrawLetterboxingMarginsInternal@CCompositionSurfaceBitmap@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18000D468 (-DrawLetterboxingMarginsInternal@CCompositionSurfaceBitmap@@AEAAJPEAVCDrawingContext@@AEBV-$TMil.c)
 *     ?Draw@CBitmapRenderStrategy@@UEAAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D8670 (-Draw@CBitmapRenderStrategy@@UEAAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCD.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::DrawContentBorders(__int64 a1, float *a2, float *a3, __int64 a4)
{
  unsigned int v4; // ebx
  float v5; // xmm1_4
  __int64 *v10; // rcx
  float v11; // xmm0_4
  float v12; // xmm1_4
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  float v16; // xmm0_4
  __int64 *v17; // r14
  __int64 v18; // rax
  float v19; // xmm1_4
  int v20; // eax
  __int64 v21; // rcx
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  float v28; // xmm2_4
  float v29; // xmm3_4
  float v30; // xmm1_4
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  float v35; // [rsp+30h] [rbp-28h] BYREF
  int v36; // [rsp+34h] [rbp-24h]
  float v37; // [rsp+38h] [rbp-20h]
  float v38; // [rsp+3Ch] [rbp-1Ch]

  v4 = 0;
  v5 = a3[1];
  if ( v5 <= a2[1] )
    goto LABEL_4;
  v10 = (__int64 *)(a1 + 16);
  v36 = *((_DWORD *)a2 + 1);
  v11 = *a2;
  v38 = v5;
  v12 = a2[2];
  v13 = *v10;
  v35 = v11;
  v37 = v12;
  v14 = (*(__int64 (__fastcall **)(__int64 *, float *, __int64))(v13 + 16))(v10, &v35, a4);
  v4 = v14;
  if ( v14 >= 0 )
  {
LABEL_4:
    v16 = a2[3];
    v17 = (__int64 *)(a1 + 16);
    if ( v16 <= a3[3] )
      goto LABEL_7;
    v18 = *v17;
    v36 = *((_DWORD *)a3 + 3);
    v19 = a2[2];
    v38 = v16;
    v35 = *a2;
    v37 = v19;
    v20 = (*(__int64 (__fastcall **)(__int64 *, float *, __int64))(v18 + 16))(v17, &v35, a4);
    v4 = v20;
    if ( v20 >= 0 )
    {
LABEL_7:
      v22 = *a2;
      v23 = *a3;
      if ( *a3 <= *a2 )
        goto LABEL_11;
      v24 = a3[3];
      if ( v24 <= a3[1]
        || (v25 = *v17,
            v36 = *((_DWORD *)a3 + 1),
            v38 = v24,
            v35 = v22,
            v37 = v23,
            v26 = (*(__int64 (__fastcall **)(__int64 *, float *, __int64))(v25 + 16))(v17, &v35, a4),
            v4 = v26,
            v26 >= 0) )
      {
LABEL_11:
        v28 = a2[2];
        v29 = a3[2];
        if ( v28 > v29 )
        {
          v30 = a3[3];
          if ( v30 > a3[1] )
          {
            v31 = *v17;
            v36 = *((_DWORD *)a3 + 1);
            v38 = v30;
            v35 = v29;
            v37 = v28;
            v32 = (*(__int64 (__fastcall **)(__int64 *, float *, __int64))(v31 + 16))(v17, &v35, a4);
            v4 = v32;
            if ( v32 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x2D4u, 0LL);
          }
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x2C8u, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x2BCu, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x2B1u, 0LL);
  }
  return v4;
}
