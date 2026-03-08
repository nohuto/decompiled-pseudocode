/*
 * XREFs of ?UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@K_NPEAU2@@Z @ 0x1802B7C98
 * Callers:
 *     ?GetGlobalMotion@CInteractionContextWrapper@@UEAA?AUInteractionMotion@@XZ @ 0x1802810A0 (-GetGlobalMotion@CInteractionContextWrapper@@UEAA-AUInteractionMotion@@XZ.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18008048C (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     TransformTranslateDelta @ 0x1802B7C10 (TransformTranslateDelta.c)
 */

void __fastcall CInteractionContextTransformHelper::UnTransformOutput(
        CInteractionContextTransformHelper *this,
        const struct InteractionOutput *a2,
        __int64 a3,
        __int64 a4,
        struct InteractionOutput *a5)
{
  __int64 v5; // rdx
  __m128 *v6; // r8
  __int64 v7; // r10
  float *v8; // rdx
  __m128 *v9; // r8
  float *v10; // r10
  int v11; // r11d
  float v12; // xmm3_4

  *(_OWORD *)a5 = *(_OWORD *)a2;
  *((_OWORD *)a5 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a5 + 2) = *((_OWORD *)a2 + 2);
  *((_QWORD *)a5 + 6) = *((_QWORD *)a2 + 6);
  *((_DWORD *)a5 + 14) = *((_DWORD *)a2 + 14);
  if ( !D2D1::Matrix3x2F::IsIdentity(this) )
  {
    TransformTranslateDelta(*(float *)(v5 + 8), *(float *)(v5 + 12), v6, (float *)(v7 + 8), (float *)(v7 + 12));
    if ( v11 != 5 )
    {
      v12 = (float)((float)(v8[11] * v9->m128_f32[3]) + (float)(v8[10] * v9->m128_f32[1])) + v9[1].m128_f32[1];
      v10[10] = (float)((float)(v8[11] * v9->m128_f32[2]) + (float)(v8[10] * v9->m128_f32[0])) + v9[1].m128_f32[0];
      v10[11] = v12;
    }
    TransformTranslateDelta(v8[6], v8[7], v9, v10 + 7, v10 + 7);
  }
}
