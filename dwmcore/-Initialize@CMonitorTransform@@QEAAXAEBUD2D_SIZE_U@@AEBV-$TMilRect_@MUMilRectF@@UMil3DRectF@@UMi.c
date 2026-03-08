/*
 * XREFs of ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C9D98
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x1800C84D0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800C8A5C (-ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDER.c)
 *     ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x18010A5AC (-ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDER.c)
 *     ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1801E55A8 (-ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRE.c)
 *     ?HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ @ 0x1801EDC30 (-HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1801F687C (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180090CB0 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800B4BA4 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800CA0D4 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo_ea_1800CA0D4.c)
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x1800CA19C (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800DAF28 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800E83F4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x18026CFE4 (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18026D01C (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CMonitorTransform::Initialize(__int64 a1, int *a2, struct MilRectF *a3, float a4, int a5, int *a6)
{
  char v6; // bl
  char v10; // r13
  __int64 v11; // rsi
  int v12; // r9d
  float *v13; // r8
  float v14; // xmm0_4
  int v15; // ecx
  int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // eax
  CMILMatrix *v19; // rcx
  int v20; // eax
  __int128 v21; // xmm1
  __int64 v22; // r10
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  int v25; // r9d
  int v26; // r9d
  int v27; // r9d
  int v28; // eax
  float v29; // xmm0_4
  int v30; // eax
  float v31; // xmm0_4
  float v32; // xmm1_4
  int v33; // eax
  bool v34; // al
  float v35; // xmm2_4
  float v36; // xmm1_4
  int v37; // ecx
  float v38; // [rsp+28h] [rbp-89h] BYREF
  float v39[3]; // [rsp+2Ch] [rbp-85h] BYREF
  _BYTE v40[64]; // [rsp+38h] [rbp-79h] BYREF
  int v41; // [rsp+78h] [rbp-39h]
  float v42; // [rsp+88h] [rbp-29h] BYREF
  float v43; // [rsp+8Ch] [rbp-25h]
  float v44; // [rsp+90h] [rbp-21h]
  float v45; // [rsp+94h] [rbp-1Dh]
  __int128 v46; // [rsp+98h] [rbp-19h] BYREF

  v42 = 0.0;
  v6 = 0;
  v43 = 0.0;
  if ( !*a2 || (v10 = 1, !a2[1]) )
    v10 = 0;
  *(float *)a1 = a4;
  *(_OWORD *)(a1 + 4) = *(_OWORD *)a3;
  if ( a6 )
  {
    *(_OWORD *)(a1 + 20) = *(_OWORD *)a6;
  }
  else
  {
    *(_QWORD *)(a1 + 28) = 0LL;
    *(_QWORD *)(a1 + 20) = 0LL;
  }
  v11 = a1 + 48;
  *(_DWORD *)(a1 + 44) = a5;
  CMILMatrix::SetToIdentity((CMILMatrix *)(a1 + 48));
  CMILMatrix::SetToIdentity((CMILMatrix *)(a1 + 184));
  v14 = (float)((float)(v13[2] - *v13) * a4) + 6291456.25;
  v38 = v14;
  v15 = (int)(LODWORD(v14) << 10) >> 11;
  *(_DWORD *)(a1 + 36) = v15;
  v38 = (float)((float)(v13[3] - v13[1]) * a4) + 6291456.25;
  v16 = (int)(LODWORD(v38) << 10) >> 11;
  *(_DWORD *)(a1 + 40) = v16;
  if ( v10 )
  {
    v17 = (int)(LODWORD(v14) << 10) >> 11;
    if ( ((v12 - 2) & 0xFFFFFFFD) != 0 )
    {
      v15 = *a2;
      if ( v17 < *a2 )
        v15 = (int)(LODWORD(v14) << 10) >> 11;
      v18 = v16;
      *(_DWORD *)(a1 + 36) = v15;
      v16 = a2[1];
    }
    else
    {
      v15 = a2[1];
      if ( v17 < v15 )
        v15 = (int)(LODWORD(v14) << 10) >> 11;
      v18 = v16;
      *(_DWORD *)(a1 + 36) = v15;
      v16 = *a2;
    }
    if ( v18 < v16 )
      v16 = v18;
    *(_DWORD *)(a1 + 40) = v16;
  }
  v44 = (float)v15;
  v45 = (float)v16;
  CMILMatrix::InferAffineMatrix(v11, a3, &v42);
  v20 = *(_DWORD *)(v11 + 64);
  v21 = *(_OWORD *)(v11 + 16);
  *(_OWORD *)v22 = *(_OWORD *)v11;
  v23 = *(_OWORD *)(v11 + 32);
  *(_OWORD *)(v22 + 16) = v21;
  v24 = *(_OWORD *)(v11 + 48);
  *(_OWORD *)(v22 + 32) = v23;
  *(_OWORD *)(v22 + 48) = v24;
  *(_DWORD *)(v22 + 64) = v20;
  v26 = v25 - 2;
  if ( !v26 )
  {
    CMILMatrix::Rotate270(v19);
    v37 = *(_DWORD *)(a1 + 36);
    v36 = 0.0;
    goto LABEL_37;
  }
  v27 = v26 - 1;
  if ( !v27 )
  {
    CMILMatrix::Scale(v19, -1.0, -1.0, 1.0);
    v37 = *(_DWORD *)(a1 + 40);
    v36 = (float)*(int *)(a1 + 36);
LABEL_37:
    v35 = (float)v37;
    goto LABEL_38;
  }
  if ( v27 != 1 )
    goto LABEL_16;
  CMILMatrix::Rotate90(v19);
  v35 = 0.0;
  v36 = (float)*(int *)(a1 + 40);
LABEL_38:
  CMILMatrix::Translate((CMILMatrix *)v11, v36, v35);
LABEL_16:
  if ( a6 )
  {
    v46 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v11, a3, (float *)&v46);
    v28 = *a6;
    v41 = 0;
    v29 = (float)v28;
    v30 = a6[1];
    v42 = v29;
    v31 = (float)v30;
    v32 = (float)a6[2];
    v33 = a6[3];
    v43 = v31;
    v44 = v32;
    v45 = (float)v33;
    CMILMatrix::InferAffineMatrix(v40, &v46, &v42);
    CMILMatrix::Multiply((CMILMatrix *)v11, (const struct CMILMatrix *)v40);
  }
  *(_OWORD *)(a1 + 116) = *(_OWORD *)v11;
  *(_OWORD *)(a1 + 132) = *(_OWORD *)(v11 + 16);
  *(_OWORD *)(a1 + 148) = *(_OWORD *)(v11 + 32);
  *(_OWORD *)(a1 + 164) = *(_OWORD *)(v11 + 48);
  *(_DWORD *)(a1 + 180) = *(_DWORD *)(v11 + 64);
  CMILMatrix::Invert((CMILMatrix *)(a1 + 116));
  v34 = a6 && v10 && (*a6 || a6[1] || a6[2] != *a2 || a6[3] != a2[1]);
  *(_BYTE *)(a1 + 252) = v34;
  v46 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v11, (struct MilRectF *)(a1 + 4), (float *)&v46);
  *(_BYTE *)(a1 + 253) = IsPixelAligned((const struct MilRectF *)&v46);
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v11, &v38, v39);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v38 - a4) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v39[0] - a4) & _xmm) > 0.0000011920929 )
  {
    v6 = 1;
  }
  *(_BYTE *)(a1 + 254) = v6;
}
