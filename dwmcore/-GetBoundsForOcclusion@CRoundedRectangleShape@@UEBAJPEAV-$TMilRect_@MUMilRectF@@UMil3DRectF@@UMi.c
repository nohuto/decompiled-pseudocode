__int64 __fastcall CRoundedRectangleShape::GetBoundsForOcclusion(_QWORD *a1, _OWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  bool v7; // zf
  float v8; // xmm8_4
  float v9; // xmm4_4
  float v10; // xmm5_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  __int128 v14; // xmm0
  __int128 v16; // [rsp+20h] [rbp-60h] BYREF
  __int128 v17; // [rsp+30h] [rbp-50h] BYREF

  if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(a1[2] + 16LL))
    && (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1) )
  {
    CRoundedRectangleGeometryData::GetBaseRect(a1[2] + 16LL, &v16, a1[2], v5);
    v7 = *(_BYTE *)(v6 + 68) == 0;
    v8 = *(float *)&v16;
    v9 = *(float *)(v6 + 36);
    v10 = *((float *)&v16 + 2);
    LODWORD(v17) = v16;
    DWORD2(v17) = DWORD2(v16);
    if ( v7 )
    {
      v9 = fmaxf(v9, *(float *)(v6 + 44));
      v11 = *(float *)&v16 + fmaxf(*(float *)(v6 + 32), *(float *)(v6 + 56));
      v12 = *((float *)&v16 + 2) - fmaxf(*(float *)(v6 + 40), *(float *)(v6 + 48));
      v13 = *((float *)&v16 + 3) - fmaxf(*(float *)(v6 + 60), *(float *)(v6 + 52));
    }
    else
    {
      v11 = *(float *)&v16 + *(float *)(v6 + 32);
      v12 = *((float *)&v16 + 2) - *(float *)(v6 + 32);
      v13 = *((float *)&v16 + 3) - *(float *)(v6 + 36);
    }
    *((float *)&v16 + 2) = v12;
    *((float *)&v17 + 3) = v13;
    *(float *)&v16 = v11;
    *((float *)&v17 + 1) = v9 + *((float *)&v16 + 1);
    if ( (float)((float)(v10 - v8) * (float)(v13 - (float)(v9 + *((float *)&v16 + 1)))) >= (float)((float)(v12 - v11)
                                                                                                 * (float)(*((float *)&v16 + 3) - *((float *)&v16 + 1))) )
      v14 = v17;
    else
      v14 = v16;
  }
  else
  {
    v14 = *(_OWORD *)CRoundedRectangleGeometryData::GetBaseRect(a1[2] + 16LL, &v17, v4, v5);
  }
  *a2 = v14;
  return 0LL;
}
