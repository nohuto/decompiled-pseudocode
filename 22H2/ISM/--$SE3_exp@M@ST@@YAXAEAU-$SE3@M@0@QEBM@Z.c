/*
 * XREFs of ??$SE3_exp@M@ST@@YAXAEAU?$SE3@M@0@QEBM@Z @ 0x1801A512C
 * Callers:
 *     ??$SE3_interpolate@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1M@Z @ 0x1801A5284 (--$SE3_interpolate@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1M@Z.c)
 *     ??$SE3_left_update@M@ST@@YAXAEAU?$SE3@M@0@QEBM@Z @ 0x1801A53C0 (--$SE3_left_update@M@ST@@YAXAEAU-$SE3@M@0@QEBM@Z.c)
 * Callees:
 *     ??$SO3_build_exp_matrix@M@ST@@YAXQEAMQEBMMM@Z @ 0x1801A59D4 (--$SO3_build_exp_matrix@M@ST@@YAXQEAMQEBMMM@Z.c)
 *     ??$SO3_compute_exp_coefs@M@ST@@YAXMAEAM00@Z @ 0x1801A5B00 (--$SO3_compute_exp_coefs@M@ST@@YAXMAEAM00@Z.c)
 */

__int64 __fastcall ST::SE3_exp<float>(float *a1, float *a2)
{
  float *v2; // rdi
  float v5; // xmm8_4
  __int64 result; // rax
  float v7; // xmm2_4
  float v8; // xmm6_4
  float v9; // [rsp+60h] [rbp+8h] BYREF
  float v10; // [rsp+68h] [rbp+10h] BYREF
  float v11; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2 + 3;
  ST::SO3_compute_exp_coefs<float>(a1, &v10, &v9, &v11);
  v5 = v10;
  result = ST::SO3_build_exp_matrix<float>(a1, v2);
  v7 = v2[2];
  v8 = (float)((float)((float)(*a2 * *v2) + (float)(a2[1] * v2[1])) + (float)(a2[2] * v7)) * v11;
  a1[9] = (float)((float)((float)((float)(a2[2] * v2[1]) - (float)(v7 * a2[1])) * v9) + (float)(*a2 * v5))
        + (float)(*v2 * v8);
  a1[10] = (float)((float)((float)((float)(v2[2] * *a2) - (float)(a2[2] * *v2)) * v9) + (float)(v5 * a2[1]))
         + (float)(v8 * v2[1]);
  a1[11] = (float)((float)((float)((float)(a2[1] * *v2) - (float)(v2[1] * *a2)) * v9) + (float)(v5 * a2[2]))
         + (float)(v8 * v2[2]);
  return result;
}
