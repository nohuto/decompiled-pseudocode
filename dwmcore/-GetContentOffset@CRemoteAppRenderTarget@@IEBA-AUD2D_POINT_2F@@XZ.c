/*
 * XREFs of ?GetContentOffset@CRemoteAppRenderTarget@@IEBA?AUD2D_POINT_2F@@XZ @ 0x1801E7984
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E8350 (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800E7548 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800E83F4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 */

struct D2D_POINT_2F __fastcall CRemoteAppRenderTarget::GetContentOffset(CRemoteAppRenderTarget *this, float *a2)
{
  float v3; // xmm6_4
  float v4; // xmm7_4
  __int64 v5; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v6; // r8
  struct D2D_POINT_2F result; // rax
  float v8; // xmm1_4
  float v9[20]; // [rsp+20h] [rbp-78h] BYREF

  v9[16] = 0.0;
  v3 = (float)*((int *)this + 66);
  v4 = (float)*((int *)this + 67);
  CVisual::GetRootTransform(*(CVisual **)(*((_QWORD *)this + 12) + 64LL), (struct CMILMatrix *)v9, 0);
  CMILMatrix::Invert((CMILMatrix *)v9, v5, v6);
  result = (struct D2D_POINT_2F)a2;
  v8 = (float)((float)(v3 * v9[0]) + (float)(v4 * v9[4])) + v9[12];
  a2[1] = (float)((float)(v4 * v9[5]) + (float)(v3 * v9[1])) + v9[13];
  *a2 = v8;
  return result;
}
