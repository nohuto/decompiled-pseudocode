/*
 * XREFs of ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x1801E1CF4
 * Callers:
 *     ?CopyInstanceFromIndex@CParticleEmitterVisual@@IEAAXII@Z @ 0x1801DF4EC (-CopyInstanceFromIndex@CParticleEmitterVisual@@IEAAXII@Z.c)
 *     ?GetRandomUnitDir@@YA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@AEBU1234@1_N@Z @ 0x1801E2070 (-GetRandomUnitDir@@YA-AUfloat3@Numerics@Foundation@Windows@@AEAV-$mersenne_twister_engine@I$0CA@.c)
 * Callees:
 *     cosf_0 @ 0x1800F3F93 (cosf_0.c)
 *     sinf_0 @ 0x1800F3FCF (sinf_0.c)
 */

float *__fastcall Windows::Foundation::Numerics::make_quaternion_from_axis_angle(float *a1, float *a2, float a3)
{
  float v5; // xmm6_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  float *result; // rax

  v5 = a3 * 0.5;
  v6 = sinf_0(a3 * 0.5);
  v7 = v6 * *a2;
  v8 = v6 * a2[1];
  a1[2] = v6 * a2[2];
  *a1 = v7;
  a1[1] = v8;
  v9 = cosf_0(v5);
  result = a1;
  a1[3] = v9;
  return result;
}
