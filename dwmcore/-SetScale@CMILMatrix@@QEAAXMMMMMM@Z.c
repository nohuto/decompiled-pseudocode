/*
 * XREFs of ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800B0D18
 * Callers:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000D094 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GetRealization@CScaleTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800B0CC0 (-GetRealization@CScaleTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800B12AC (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ?GetRealization@CScaleTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18024B300 (-GetRealization@CScaleTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180260464 (-Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Get3DBounds@CSceneWorld@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180260558 (-Get3DBounds@CSceneWorld@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3D.c)
 * Callees:
 *     ?Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z @ 0x1800B0DAC (-Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z.c)
 *     ?make_float4x4_scale@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@0@Z @ 0x18026E34C (-make_float4x4_scale@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUfloat3@123@0@Z.c)
 */

void __fastcall CMILMatrix::SetScale(CMILMatrix *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  __int64 float4x4_scale; // rax
  __int64 v8; // r9
  __int128 v9; // xmm1
  _DWORD v10[3]; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v11[3]; // [rsp+3Ch] [rbp-6Ch] BYREF
  _BYTE v12[72]; // [rsp+48h] [rbp-60h] BYREF

  if ( a4 == 1.0 && a5 == 0.0 && a6 == 0.0 && a7 == 0.0 )
  {
    CMILMatrix::Set2DScaleAndOffset(this, a2, a3, 0.0, 0.0);
  }
  else
  {
    *(float *)v10 = a5;
    *(float *)&v10[1] = a6;
    *(float *)&v10[2] = a7;
    *(float *)v11 = a2;
    *(float *)&v11[1] = a3;
    *(float *)&v11[2] = a4;
    float4x4_scale = Windows::Foundation::Numerics::make_float4x4_scale(v12, v11, v10, this);
    *(_OWORD *)v8 = *(_OWORD *)float4x4_scale;
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(float4x4_scale + 16);
    *(_OWORD *)(v8 + 32) = *(_OWORD *)(float4x4_scale + 32);
    v9 = *(_OWORD *)(float4x4_scale + 48);
    LOBYTE(float4x4_scale) = *(_BYTE *)(v8 + 65) & 0xD7;
    *(_BYTE *)(v8 + 64) = 68;
    *(_BYTE *)(v8 + 65) = float4x4_scale | 0x17;
    *(_OWORD *)(v8 + 48) = v9;
  }
}
