bool __fastcall Matrix3x3::TryInvert(const struct Matrix3x3 *a1, struct Matrix3x3 *a2)
{
  float v2; // xmm5_4
  float v3; // xmm6_4
  float v4; // xmm10_4
  float v5; // xmm11_4
  float v6; // xmm12_4
  float v7; // xmm15_4
  float v8; // xmm0_4
  float v9; // xmm9_4
  float v10; // xmm4_4
  bool result; // al
  float v12; // [rsp+B0h] [rbp+8h]
  float v13; // [rsp+C0h] [rbp+18h]

  v2 = *((float *)a1 + 8);
  v3 = *((float *)a1 + 2);
  v12 = *((float *)a1 + 7);
  v4 = *((float *)a1 + 5);
  v5 = *(float *)a1;
  v6 = *((float *)a1 + 6);
  v13 = *((float *)a1 + 1);
  v7 = *((float *)a1 + 3);
  v8 = *((float *)a1 + 4);
  v9 = *(float *)a1 * v8;
  v10 = (float)((float)((float)((float)((float)(v9 * v2) + (float)((float)(v7 * v12) * v3))
                              + (float)((float)(v13 * v6) * v4))
                      - (float)((float)(v6 * *(float *)a1) * v4))
              - (float)((float)(v6 * v8) * v3))
      - (float)((float)(v13 * v7) * v2);
  if ( COERCE_FLOAT(LODWORD(v10) & _xmm) < 0.0000011920929 )
    return 0;
  result = 1;
  *((float *)a2 + 6) = (float)((float)(v7 * v12) - (float)(v6 * v8)) * (float)(1.0 / v10);
  *((float *)a2 + 8) = (float)(v9 - (float)(v13 * v7)) * (float)(1.0 / v10);
  *(float *)a2 = (float)((float)(v2 * v8) - (float)(v4 * v12)) * (float)(1.0 / v10);
  *((float *)a2 + 1) = (float)((float)(v3 * v12) - (float)(v2 * v13)) * (float)(1.0 / v10);
  *((float *)a2 + 2) = (float)((float)(v4 * v13) - (float)(v3 * v8)) * (float)(1.0 / v10);
  *((float *)a2 + 3) = (float)((float)(v4 * v6) - (float)(v2 * v7)) * (float)(1.0 / v10);
  *((float *)a2 + 5) = (float)((float)(v3 * v7) - (float)(v4 * v5)) * (float)(1.0 / v10);
  *((float *)a2 + 4) = (float)((float)(v2 * v5) - (float)(v3 * v6)) * (float)(1.0 / v10);
  *((float *)a2 + 7) = (float)((float)(v13 * v6) - (float)(v5 * v12)) * (float)(1.0 / v10);
  return result;
}
