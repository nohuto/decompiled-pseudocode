/*
 * XREFs of ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x18027000C
 * Callers:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180058648 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x180058A10 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180063690 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x18006DF00 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800707C0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071B00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180073C30 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x180270788 (-Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x18027159C (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 */

_OWORD *__fastcall Windows::Foundation::Numerics::operator*(__int64 a1, __int128 *a2, _OWORD *a3)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int128 v5; // xmm3
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  _OWORD *v10; // rcx
  _OWORD *result; // rax
  _OWORD v12[4]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a3[1];
  v4 = a2[2];
  v5 = a2[3];
  v12[0] = *a3;
  v6 = a3[2];
  v12[1] = v3;
  v7 = a3[3];
  v12[2] = v6;
  v8 = *a2;
  v12[3] = v7;
  v9 = a2[1];
  *(double *)&v8 = DirectX::XMMatrixMultiply(a1, v12);
  *v10 = v8;
  result = v10;
  v10[1] = v9;
  v10[2] = v4;
  v10[3] = v5;
  return result;
}
