/*
 * XREFs of ?CopyInstanceFromIndex@CParticleEmitterVisual@@IEAAXII@Z @ 0x180241464
 * Callers:
 *     ?CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z @ 0x1802415C4 (-CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z @ 0x18007E818 (-ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x180243C5C (-make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA-AUquaternion@123@AEBUfloat3@123.c)
 */

void __fastcall CParticleEmitterVisual::CopyInstanceFromIndex(
        CParticleEmitterVisual *this,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r9
  float v8; // xmm0_4
  float v9; // xmm1_4
  __int64 v10; // rax
  float v11; // xmm0_4
  __int64 v12; // rax
  __int64 v13; // xmm0_8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r10
  int v17; // xmm1_4
  __int64 v18; // [rsp+20h] [rbp-20h] BYREF
  int v19; // [rsp+28h] [rbp-18h]
  struct _D3DCOLORVALUE v20; // [rsp+30h] [rbp-10h] BYREF

  v4 = 6LL * a3;
  *(struct _D3DCOLORVALUE *)&v20.r = (struct _D3DCOLORVALUE)_mm_max_ps(
                                                              _mm_min_ps(
                                                                *(__m128 *)(*((_QWORD *)this + 124) + 16LL * a2),
                                                                (__m128)_xmm),
                                                              (__m128)0LL);
  *(_DWORD *)(*((_QWORD *)this + 167) + 8 * v4 + 32) = ColorDWFromStraightColorF(&v20);
  v5 = *((_QWORD *)this + 127);
  v6 = *((_QWORD *)this + 130);
  v8 = *((float *)this + 1604) * *(float *)(v5 + 8 * v7 + 4);
  v9 = *((float *)this + 1603) * *(float *)(v5 + 8 * v7);
  v10 = *((_QWORD *)this + 167);
  v11 = v8 * *(float *)(v6 + 8 * v7 + 4);
  *(float *)(v10 + 8 * v4 + 36) = v9 * *(float *)(v6 + 8 * v7);
  *(float *)(v10 + 8 * v4 + 40) = v11;
  v12 = *((_QWORD *)this + 109);
  v13 = *(_QWORD *)(v12 + 12 * v7);
  LODWORD(v12) = *(_DWORD *)(v12 + 12 * v7 + 8);
  v18 = v13;
  *(_QWORD *)&v20.r = v13;
  LODWORD(v20.a) = (_DWORD)FLOAT_1_0;
  v19 = v12;
  LODWORD(v13) = v12;
  v14 = *((_QWORD *)this + 167);
  LODWORD(v20.b) = v13;
  *(struct _D3DCOLORVALUE *)(v14 + 8 * v4) = *(struct _D3DCOLORVALUE *)&v20.r;
  v15 = *((_QWORD *)this + 112);
  v17 = *(_DWORD *)(v15 + 8 * v16 + 4);
  LODWORD(v18) = *(_DWORD *)(v15 + 8 * v16);
  v19 = *(_DWORD *)(v15 + 8 * v16 + 8);
  HIDWORD(v18) = v17;
  *(_OWORD *)(*((_QWORD *)this + 167) + 8 * v4 + 16) = *(_OWORD *)Windows::Foundation::Numerics::make_quaternion_from_axis_angle(
                                                                    &v20,
                                                                    &v18);
}
