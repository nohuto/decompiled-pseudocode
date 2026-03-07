bool __fastcall CRoundedRectangleGeometryData::TryClipWithRect(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // r8
  float *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  float v7; // xmm8_4
  float v8; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  float v12; // xmm11_4
  float v13; // xmm1_4
  float v14; // xmm10_4
  float v15; // xmm9_4
  float v16; // xmm3_4
  float v17; // xmm0_4
  float v18; // xmm7_4
  float v19; // xmm5_4
  float v20; // xmm8_4
  bool v21; // si
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // r10
  char v25; // r11
  float v26; // xmm4_4
  float v27; // xmm5_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // r10
  char v33; // r11
  float v34; // xmm4_4
  float *v35; // rax
  float v36; // xmm2_4
  float v37; // xmm1_4
  __int64 v38; // rcx
  __int64 v39; // r9
  __int64 v40; // r10
  float *v41; // rax
  float v42; // xmm0_4
  float v43; // xmm1_4
  __int64 v44; // r9
  __int64 v45; // r10
  float v46; // xmm5_4
  float *v47; // r10
  float v48; // xmm1_4
  float v49; // xmm0_4
  __int128 v51; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v52; // [rsp+30h] [rbp-98h] BYREF

  CRoundedRectangleGeometryData::GetBaseRect(a1, &v52, a2, a3);
  v51 = *v3;
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate((float *)&v51, 0.015625, 0.015625);
  if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain((float *)&v51, (float *)&v52) )
  {
    *(_OWORD *)v5 = *(_OWORD *)v6;
    *(_OWORD *)(v5 + 16) = *(_OWORD *)(v6 + 16);
    *(_OWORD *)(v5 + 32) = *(_OWORD *)(v6 + 32);
    *(_QWORD *)(v5 + 48) = *(_QWORD *)(v6 + 48);
    return 1;
  }
  v7 = *(float *)&v52;
  v8 = *v4;
  v51 = v52;
  if ( v8 <= *(float *)&v52 )
    v8 = *(float *)&v51;
  v9 = *((float *)&v51 + 1);
  v10 = *((float *)&v51 + 1);
  if ( v4[1] > *((float *)&v51 + 1) )
  {
    v9 = v4[1];
    v10 = v9;
  }
  v11 = *((float *)&v51 + 2);
  v12 = *((float *)&v51 + 2);
  v13 = *((float *)&v51 + 2);
  v14 = *((float *)&v51 + 2);
  if ( *((float *)&v51 + 2) > v4[2] )
  {
    v11 = v4[2];
    v12 = v11;
    v13 = v11;
    v14 = v11;
  }
  v15 = *((float *)&v51 + 3);
  v16 = *((float *)&v51 + 3);
  v17 = *((float *)&v51 + 3);
  if ( *((float *)&v51 + 3) > v4[3] )
  {
    v15 = v4[3];
    v16 = v15;
    v13 = v14;
    v17 = v15;
  }
  if ( v12 <= v8 || v16 <= v10 || (float)(v13 - 0.0000011920929) <= v8 || (float)(v17 - 0.0000011920929) <= v9 )
  {
    *(_DWORD *)v5 = 0;
    *(_DWORD *)(v5 + 4) = 0;
    *(_DWORD *)(v5 + 8) = 0;
    *(_DWORD *)(v5 + 12) = 0;
    *(_DWORD *)(v5 + 16) = 0;
    *(_DWORD *)(v5 + 20) = 0;
    *(_DWORD *)(v5 + 48) = 0;
    *(_BYTE *)(v5 + 52) = 1;
    return 1;
  }
  v18 = *((float *)&v52 + 3);
  *(float *)v5 = v8;
  *(float *)(v5 + 4) = v9;
  v19 = v8 - v7;
  v20 = *((float *)&v52 + 2);
  *(float *)(v5 + 8) = v11;
  *(float *)(v5 + 12) = v15;
  *(_BYTE *)(v5 + 52) = 0;
  *(_DWORD *)(v5 + 48) = *(_DWORD *)(v6 + 48);
  *(_OWORD *)(v5 + 16) = 0LL;
  *(_OWORD *)(v5 + 32) = 0LL;
  v21 = COERCE_FLOAT(LODWORD(v19) & _xmm) <= 0.0000011920929;
  if ( (unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(v6, 0LL) )
  {
    v28 = *(float *)(v24 + 16);
    v29 = *(float *)(v24 + 20);
    if ( v21 && v25 )
    {
      *(float *)(v23 + 16) = v28;
      *(float *)(v23 + 20) = v29;
    }
    else if ( (float)(v28 - v27) > 0.0000011920929 && (float)(v29 - v26) > 0.0000011920929 )
    {
      return 0;
    }
  }
  if ( (unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(v22, 1LL) )
  {
    v35 = (float *)(v32 + 16);
    if ( !*(_BYTE *)(v32 + 52) )
      v35 = (float *)(v32 + 24);
    v36 = *v35;
    v37 = v35[1];
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - v20) & _xmm) <= 0.0000011920929 && v33 )
    {
      *(float *)(v31 + 24) = v36;
      *(float *)(v31 + 28) = v37;
    }
    else if ( (float)(v36 - (float)(v20 - v11)) > 0.0000011920929 && (float)(v37 - v34) > 0.0000011920929 )
    {
      return 0;
    }
  }
  if ( (unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(v30, 2LL) )
  {
    v41 = (float *)(v40 + 16);
    if ( !*(_BYTE *)(v40 + 52) )
      v41 = (float *)(v40 + 32);
    v42 = *v41;
    v43 = v41[1];
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - v20) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - v18) & _xmm) > 0.0000011920929 )
    {
      if ( (float)(v42 - (float)(v20 - v11)) > 0.0000011920929 && (float)(v43 - (float)(v18 - v15)) > 0.0000011920929 )
        return 0;
    }
    else
    {
      *(float *)(v39 + 32) = v42;
      *(float *)(v39 + 36) = v43;
    }
  }
  if ( !(unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(v38, 3LL) )
    return 1;
  if ( *(_BYTE *)(v45 + 52) )
    v47 = (float *)(v45 + 16);
  else
    v47 = (float *)(v45 + 40);
  v48 = *v47;
  v49 = v47[1];
  if ( v21 && COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - v18) & _xmm) <= 0.0000011920929 )
  {
    *(float *)(v44 + 40) = v48;
    *(float *)(v44 + 44) = v49;
    return 1;
  }
  return (float)(v48 - v46) <= 0.0000011920929 || (float)(v49 - (float)(v18 - v15)) <= 0.0000011920929;
}
