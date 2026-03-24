/*
 * XREFs of ?CalcDeviceTransformDelta@CResampleLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180191D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180041E0C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18004226C (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 */

__int64 __fastcall CResampleLayer::CalcDeviceTransformDelta(
        CResampleLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  int v3; // eax
  __m128i v4; // xmm2
  int v5; // eax
  __int64 v6; // rdx
  __int128 v7; // xmm1
  int v8; // eax
  __int64 v9; // r9
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v13; // [rsp+20h] [rbp-50h] BYREF
  __int128 v14; // [rsp+30h] [rbp-40h]
  __int128 v15; // [rsp+40h] [rbp-30h]
  __int128 v16; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+60h] [rbp-10h]

  v3 = *((_DWORD *)this + 5);
  v14 = _xmm;
  v16 = _xmm;
  v13 = _xmm;
  v4 = _mm_cvtsi32_si128(-v3);
  v5 = *((_DWORD *)this + 4);
  v15 = _xmm;
  LOWORD(v17) = 32085;
  CMILMatrix::Translate((CMILMatrix *)&v13, (float)-v5, _mm_cvtepi32_ps(v4).m128_f32[0]);
  CMILMatrix::Scale((CMILMatrix *)&v13, 1.0 / *(float *)(v6 + 136), 1.0 / *(float *)(v6 + 140), 1.0);
  v7 = v14;
  v8 = v17;
  *(_OWORD *)v9 = v13;
  v10 = v15;
  *(_OWORD *)(v9 + 16) = v7;
  v11 = v16;
  *(_OWORD *)(v9 + 32) = v10;
  *(_OWORD *)(v9 + 48) = v11;
  *(_DWORD *)(v9 + 64) = v8;
  return 0LL;
}
