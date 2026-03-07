struct tagRECT *__fastcall InverseTransformRect(
        struct tagRECT *__return_ptr retstr,
        const struct tagRECT *a2,
        const struct tagINPUT_TRANSFORM *a3)
{
  LONG left; // edi
  LONG top; // ebx
  float *v5; // r12
  LONG right; // r14d
  LONG bottom; // r15d
  __int64 v8; // kr00_8
  float *v9; // rax
  int v10; // edx
  __m128 v11; // xmm6
  float *v12; // rax
  __m128 v13; // xmm7
  int v14; // esi
  int v15; // r13d
  float *v16; // rax
  __m128 v17; // xmm6
  int v18; // edi
  float *v19; // rax
  int v20; // ebx
  int v21; // r14d
  float *v22; // rax
  int v23; // r8d
  int v24; // r10d
  LONG v25; // r11d
  struct tagRECT *result; // rax
  unsigned __int64 v27; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v28[8]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v30; // [rsp+A8h] [rbp+50h] BYREF
  float *v31; // [rsp+B0h] [rbp+58h]
  int v32; // [rsp+B8h] [rbp+60h] BYREF

  v31 = (float *)a3;
  left = a2->left;
  top = a2->top;
  v5 = (float *)a3;
  right = a2->right;
  bottom = a2->bottom;
  v8 = right - a2->left;
  *retstr = 0LL;
  v30 = _mm_unpacklo_ps(
          (__m128)COERCE_UNSIGNED_INT((float)(int)(left + v8 / 2)),
          (__m128)COERCE_UNSIGNED_INT((float)(top + (bottom - top) / 2))).m128_u64[0];
  v9 = (float *)InverseTransformPoint((__int64)&v32, (float *)&v30, (float *)a3);
  v10 = (int)v9[1];
  LODWORD(v30) = (int)*v9;
  v32 = v10;
  v11 = (__m128)COERCE_UNSIGNED_INT((float)top);
  v27 = _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)left), v11).m128_u64[0];
  v12 = (float *)InverseTransformPoint((__int64)v28, (float *)&v27, v5);
  v13 = (__m128)COERCE_UNSIGNED_INT((float)right);
  v14 = (int)*v12;
  v15 = (int)v12[1];
  v27 = _mm_unpacklo_ps(v13, v11).m128_u64[0];
  v16 = (float *)InverseTransformPoint((__int64)v28, (float *)&v27, v5);
  v17 = (__m128)COERCE_UNSIGNED_INT((float)bottom);
  v18 = (int)*v16;
  LODWORD(v5) = (int)v16[1];
  v27 = _mm_unpacklo_ps(v13, v17).m128_u64[0];
  v19 = (float *)InverseTransformPoint((__int64)v28, (float *)&v27, v31);
  v20 = (int)*v19;
  v21 = (int)v19[1];
  v27 = _mm_unpacklo_ps(v13, v17).m128_u64[0];
  v22 = (float *)InverseTransformPoint((__int64)v28, (float *)&v27, v31);
  v23 = (int)(abs32(v30 - v20) + abs32(v30 - v18) + abs32(v30 - v14) + abs32(v30 - (int)*v22)) / 4;
  v24 = v30 - v23;
  LODWORD(v22) = (int)(abs32(v32 - v21) + abs32(v32 - (_DWORD)v5) + abs32(v32 - v15) + abs32(v32 - (int)v22[1])) / 4;
  v25 = v32 - (_DWORD)v22;
  retstr->left = v30 - v23;
  retstr->top = v25;
  retstr->bottom = v25 + 2 * (_DWORD)v22;
  result = retstr;
  retstr->right = v24 + 2 * v23;
  return result;
}
