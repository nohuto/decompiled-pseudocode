/*
 * XREFs of _lambda_d5bddfc2fe24e4274cd124852b066150_::operator() @ 0x1C0223D88
 * Callers:
 *     ?FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPointerInfoNode@@PEAPEAVVPTPTouchpad@@PEAPEAVVPTPContact@@@Z @ 0x1C022463C (-FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPoi.c)
 * Callees:
 *     ?InverseTransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0158220 (-InverseTransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall lambda_d5bddfc2fe24e4274cd124852b066150_::operator()(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        float *a5)
{
  int v6; // ecx
  int v7; // eax
  __m128i v8; // xmm1
  float v9; // xmm0_4
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = a1;
  v6 = a3[41];
  v7 = a3[43] - v6;
  v8 = _mm_cvtsi32_si128(a3[47]);
  v9 = (float)*(int *)(a4 + 44);
  *(float *)&v11 = (float)((float)((float)(a3[42] - a3[40]) * (float)*(int *)(a4 + 40)) / (float)(int)a3[46])
                 + (float)(int)a3[40];
  *((float *)&v11 + 1) = (float)((float)((float)v7 * v9) / _mm_cvtepi32_ps(v8).m128_f32[0]) + (float)v6;
  InverseTransformPoint(a2, (float *)&v11, a5);
  return a2;
}
