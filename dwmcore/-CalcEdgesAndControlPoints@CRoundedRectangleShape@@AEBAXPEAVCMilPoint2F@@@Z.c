void __fastcall CRoundedRectangleShape::CalcEdgesAndControlPoints(CRoundedRectangleShape *this, struct CMilPoint2F *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  float v4; // xmm8_4
  float v5; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm5_4
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  float *v13; // rdx
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  float *v19; // rcx
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  float *v26; // rdx
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  _DWORD v30[4]; // [rsp+20h] [rbp-58h] BYREF

  CRoundedRectangleGeometryData::GetBaseRect(*((_QWORD *)this + 2) + 16LL, v30, a2, this);
  v4 = *(float *)v30;
  v5 = *(float *)&v30[1];
  v6 = *(float *)&v30[2];
  v7 = *(float *)&v30[3];
  *(_DWORD *)v2 = v30[0];
  *(float *)(v2 + 4) = v5;
  *(float *)(v2 + 24) = v6;
  *(float *)(v2 + 28) = v5;
  *(float *)(v2 + 64) = v4;
  *(float *)(v2 + 68) = v7;
  *(float *)(v2 + 88) = v6;
  *(float *)(v2 + 92) = v7;
  v8 = *(_QWORD *)(v3 + 16);
  if ( *(float *)(v8 + 32) > 0.0 && *(float *)(v8 + 36) > 0.0 )
  {
    *(float *)(v2 + 32) = v4;
    v23 = v5 + *(float *)(v8 + 36);
    *(float *)(v2 + 36) = v23;
    v24 = v4 + *(float *)(v8 + 32);
    *(float *)(v2 + 12) = v5;
    *(float *)(v2 + 96) = v4;
    *(float *)(v2 + 8) = v24;
    *(float *)(v2 + 100) = v23 - (float)(*(float *)(v8 + 36) * 0.55228478);
    v25 = *(float *)(v8 + 32) * 0.55228478;
    *(float *)(v2 + 108) = v5;
    *(float *)(v2 + 104) = v24 - v25;
  }
  v9 = *(_QWORD *)(v3 + 16);
  v10 = -(__int64)(*(_BYTE *)(v9 + 68) != 0) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( *(float *)(v10 + v9 + 40) > 0.0 && *(float *)(v10 + v9 + 44) > 0.0 )
  {
    if ( *(_BYTE *)(v9 + 68) )
      v26 = (float *)(v9 + 32);
    else
      v26 = (float *)(v9 + 40);
    v27 = v6 - *v26;
    *(float *)(v2 + 20) = v5;
    *(float *)(v2 + 40) = v6;
    *(float *)(v2 + 16) = v27;
    v28 = v5 + v26[1];
    *(float *)(v2 + 44) = v28;
    v29 = *v26 * 0.55228478;
    *(float *)(v2 + 116) = v5;
    *(float *)(v2 + 120) = v6;
    *(float *)(v2 + 112) = v29 + v27;
    *(float *)(v2 + 124) = v28 - (float)(v26[1] * 0.55228478);
  }
  v11 = *(_QWORD *)(v3 + 16);
  v12 = -(__int64)(*(_BYTE *)(v11 + 68) != 0) & 0xFFFFFFFFFFFFFFE8uLL;
  if ( *(float *)(v12 + v11 + 56) > 0.0 && *(float *)(v12 + v11 + 60) > 0.0 )
  {
    if ( *(_BYTE *)(v11 + 68) )
      v13 = (float *)(v11 + 32);
    else
      v13 = (float *)(v11 + 56);
    v14 = v4 + *v13;
    *(float *)(v2 + 76) = v7;
    *(float *)(v2 + 48) = v4;
    *(float *)(v2 + 72) = v14;
    v15 = v7 - v13[1];
    *(float *)(v2 + 52) = v15;
    v16 = *v13 * 0.55228478;
    *(float *)(v2 + 148) = v7;
    *(float *)(v2 + 128) = v4;
    *(float *)(v2 + 144) = v14 - v16;
    *(float *)(v2 + 132) = (float)(v13[1] * 0.55228478) + v15;
  }
  v17 = *(_QWORD *)(v3 + 16);
  v18 = -(__int64)(*(_BYTE *)(v17 + 68) != 0) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( *(float *)(v18 + v17 + 48) > 0.0 && *(float *)(v18 + v17 + 52) > 0.0 )
  {
    if ( *(_BYTE *)(v17 + 68) )
      v19 = (float *)(v17 + 32);
    else
      v19 = (float *)(v17 + 48);
    *(float *)(v2 + 56) = v6;
    v20 = v7 - v19[1];
    *(float *)(v2 + 60) = v20;
    v21 = v6 - *v19;
    *(float *)(v2 + 84) = v7;
    *(float *)(v2 + 136) = v6;
    *(float *)(v2 + 80) = v21;
    *(float *)(v2 + 140) = (float)(v19[1] * 0.55228478) + v20;
    v22 = *v19;
    *(float *)(v2 + 156) = v7;
    *(float *)(v2 + 152) = (float)(v22 * 0.55228478) + v21;
  }
}
