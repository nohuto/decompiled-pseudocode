/*
 * XREFs of ?AnimateSingle@ForceAnimator@Particles@@UEBAXMAEAV?$span@M$0?0@gsl@@0@Z @ 0x18023CFC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

float *__fastcall Particles::ForceAnimator::AnimateSingle(__int64 a1, float a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  float *result; // rax
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // [rsp+30h] [rbp-38h] BYREF
  float v11; // [rsp+34h] [rbp-34h]
  float v12; // [rsp+38h] [rbp-30h]
  _QWORD v13[2]; // [rsp+40h] [rbp-28h] BYREF

  v10 = 0.0;
  v11 = 0.0;
  v12 = 0.0;
  v5 = *(_QWORD *)(a1 + 8);
  v13[0] = 3LL;
  v13[1] = &v10;
  (*(void (__fastcall **)(__int64, __int64, _QWORD *, _QWORD *))(*(_QWORD *)v5 + 8LL))(v5, a3, v13, v13);
  result = *(float **)(a4 + 8);
  v8 = (float)(v11 * a2) + result[1];
  v9 = (float)(v12 * a2) + result[2];
  *result = (float)(v10 * a2) + *result;
  result[1] = v8;
  result[2] = v9;
  return result;
}
