char __fastcall CRoundedRectangleGeometryData::FillContainsRect(__int64 a1, struct MilRectF *a2, CMILMatrix *a3)
{
  float v7; // xmm9_4
  float v8; // xmm10_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm4_4
  float v14; // xmm1_4
  bool v15; // zf
  float v16; // xmm5_4
  float v17; // xmm11_4
  float v18; // xmm14_4
  float v19; // xmm12_4
  float v20; // xmm15_4
  float v21; // xmm13_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  bool v24; // cf
  float v25; // xmm9_4
  float v26; // xmm7_4
  float v27; // xmm6_4
  int v28; // xmm2_4
  int v29; // xmm1_4
  __int64 v30; // r10
  __int64 v31; // r9
  float *v32; // rax
  float v33; // xmm1_4
  float v34; // xmm0_4
  __int64 v35; // r11
  const struct D2D_VECTOR_2F *v36; // r8
  const struct CMilPoint2F *v37; // rdx
  int v38; // r11d
  float v39; // [rsp+28h] [rbp-E0h]
  float v40; // [rsp+28h] [rbp-E0h]
  float v41; // [rsp+2Ch] [rbp-DCh]
  float v42; // [rsp+30h] [rbp-D8h]
  __int128 v43; // [rsp+48h] [rbp-C0h] BYREF
  int v44; // [rsp+58h] [rbp-B0h]
  int v45; // [rsp+5Ch] [rbp-ACh]
  int v46; // [rsp+60h] [rbp-A8h]
  int v47; // [rsp+64h] [rbp-A4h]
  int v48; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v49[7]; // [rsp+6Ch] [rbp-9Ch]
  float v50; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v51[7]; // [rsp+8Ch] [rbp-7Ch]

  if ( a3
    && (CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)a3)
     || (unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a3)) )
  {
    v43 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>(a3, a2);
    return CRoundedRectangleGeometryData::FillContainsRect(a1, &v43, 0LL);
  }
  else
  {
    v7 = *(float *)(a1 + 4);
    v8 = *(float *)a1;
    if ( *(_BYTE *)(a1 + 52) )
    {
      v9 = v8 + *(float *)(a1 + 8);
      v10 = v7 + *(float *)(a1 + 12);
    }
    else
    {
      v9 = *(float *)(a1 + 8);
      v10 = *(float *)(a1 + 12);
    }
    v43 = 0LL;
    if ( a3 )
    {
      CMILMatrix::Transform2DBoundsHelper<0>(a3, a2);
    }
    else
    {
      v43 = *(_OWORD *)a2;
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(&v43);
      if ( v9 <= v8
        || v10 <= v7
        || v8 >= *(float *)&v43
        && v7 >= *((float *)&v43 + 1)
        && *((float *)&v43 + 2) >= v9
        && *((float *)&v43 + 3) >= v10 )
      {
        return 0;
      }
      v43 = *(_OWORD *)a2;
    }
    v11 = *(float *)&v43 + 0.015625;
    v12 = *((float *)&v43 + 2) + -0.015625;
    v13 = *((float *)&v43 + 1) + 0.015625;
    v14 = *((float *)&v43 + 3) - 0.015625;
    if ( (float)(*((float *)&v43 + 2) + -0.015625) <= (float)(*(float *)&v43 + 0.015625) || v14 <= v13 )
    {
      v14 = 0.0;
      v12 = 0.0;
      v13 = 0.0;
      v11 = 0.0;
    }
    if ( v12 > v11 && v14 > v13 && (v11 < v8 || v13 < v7 || v9 < v12 || v10 < v14) )
    {
      return 0;
    }
    else
    {
      v15 = *(_BYTE *)(a1 + 52) == 0;
      v16 = *(float *)(a1 + 16);
      v17 = *(float *)(a1 + 20);
      *(_QWORD *)&v43 = __PAIR64__(LODWORD(v17), LODWORD(v16));
      if ( v15 )
      {
        v18 = *(float *)(a1 + 24);
        v19 = *(float *)(a1 + 28);
        v20 = *(float *)(a1 + 36);
        v21 = *(float *)(a1 + 40);
        v39 = *(float *)(a1 + 32);
        v22 = *(float *)(a1 + 44);
      }
      else
      {
        v19 = *((float *)&v43 + 1);
        v18 = *(float *)&v43;
        v20 = *((float *)&v43 + 1);
        v21 = *(float *)&v43;
        v39 = *(float *)&v43;
        v22 = *((float *)&v43 + 1);
      }
      v41 = v22;
      *(float *)&v43 = v9 - v18;
      *(float *)&v51[1] = v9 - v18;
      v50 = v8 + v16;
      v23 = v7 + v17;
      v42 = v19 + v7;
      *(float *)&v51[2] = v19 + v7;
      v24 = v13 < (float)(v7 + v17);
      v25 = v39;
      v26 = v9 - v39;
      *(float *)v51 = v23;
      v40 = v10 - v20;
      *(float *)&v51[4] = v10 - v20;
      *(float *)&v51[3] = v26;
      v27 = v10 - v41;
      *(float *)&v51[5] = v21 + v8;
      *(float *)&v51[6] = v27;
      if ( (v24 || v13 < v42 || v27 < v14 || v40 < v14)
        && (v11 < (float)(v8 + v16) || v11 < (float)(v21 + v8) || *(float *)&v43 < v12 || v26 < v12) )
      {
        v28 = *(_DWORD *)a2;
        DWORD1(v43) = *((_DWORD *)a2 + 1);
        HIDWORD(v43) = DWORD1(v43);
        v29 = *((_DWORD *)a2 + 3);
        DWORD2(v43) = *((_DWORD *)a2 + 2);
        v44 = DWORD2(v43);
        v45 = v29;
        v47 = v29;
        v48 = LODWORD(v16) ^ _xmm;
        v49[0] = LODWORD(v17) ^ _xmm;
        *(float *)&v49[1] = v18;
        v49[2] = LODWORD(v19) ^ _xmm;
        *(float *)&v49[3] = v25;
        *(float *)&v49[4] = v20;
        v49[5] = LODWORD(v21) ^ _xmm;
        *(float *)&v49[6] = v41;
        LODWORD(v43) = v28;
        v46 = v28;
        if ( a3 )
          CMILMatrix::Transform(a3, (const struct MilPoint2F *)&v43, (struct MilPoint2F *)&v43, 4u);
        v30 = 0LL;
        v31 = 0LL;
        do
        {
          if ( *(_BYTE *)(a1 + 52) )
            v32 = (float *)(a1 + 16);
          else
            v32 = (float *)(a1 + 8 * ((unsigned int)v30 + 2LL));
          if ( *v32 > 0.0 && v32[1] > 0.0 )
          {
            if ( a3 )
            {
              v35 = 0LL;
              v36 = (const struct D2D_VECTOR_2F *)&v49[2 * v30 - 1];
              v37 = (const struct CMilPoint2F *)&v51[2 * v30 - 1];
              while ( !CRoundedRectangleGeometryData::IsPointOutsideCorner(
                         (const struct CMilPoint2F *)((char *)&v43 + 8 * v35),
                         v37,
                         v36) )
              {
                v35 = (unsigned int)(v38 + 1);
                if ( (unsigned int)v35 >= 4 )
                  goto LABEL_38;
              }
              return 0;
            }
            v33 = (float)(*(float *)((char *)&v43 + v31 * 4) - *(float *)&v51[v31 - 1]) / *(float *)&v49[v31 - 1];
            if ( v33 > 0.0 )
            {
              v34 = (float)(*(float *)((char *)&v43 + v31 * 4 + 4) - *(float *)&v51[v31]) / *(float *)&v49[v31];
              if ( v34 > 0.0 && (float)((float)(v34 * v34) + (float)(v33 * v33)) > 1.0 )
                return 0;
            }
          }
LABEL_38:
          v30 = (unsigned int)(v30 + 1);
          v31 += 2LL;
        }
        while ( (unsigned int)v30 < 4 );
      }
      return 1;
    }
  }
}
