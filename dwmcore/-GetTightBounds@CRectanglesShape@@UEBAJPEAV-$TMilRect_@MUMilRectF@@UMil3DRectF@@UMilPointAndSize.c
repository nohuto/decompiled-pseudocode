__int64 __fastcall CRectanglesShape::GetTightBounds(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  int v5; // r8d
  __int64 v6; // r11
  __int64 result; // rax
  char v8; // cl
  float v9; // xmm4_4
  float v10; // xmm5_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  char v15; // al
  float v16; // xmm0_4
  char v17; // al

  v3 = a3;
  v5 = *(_DWORD *)(a1 + 40);
  v6 = a1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      if ( !v3 )
      {
LABEL_4:
        result = 0LL;
        *(_OWORD *)a2 = *(_OWORD *)*(_QWORD *)(v6 + 16);
        return result;
      }
      if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v3 + 28) & _xmm) * 61440.0)
                         + (float)(COERCE_FLOAT(*(_DWORD *)(v3 + 12) & _xmm) * 61440.0))
                 + COERCE_FLOAT(*(_DWORD *)(v3 + 60) & _xmm)) == 1.0 )
      {
        v8 = 1;
        *(_BYTE *)(v3 + 65) = *(_BYTE *)(v3 + 65) & 0xCF | 0x10;
      }
      else
      {
        v8 = 0;
      }
      if ( ((unsigned __int8)v8 & ((float)(COERCE_FLOAT(*(_DWORD *)(v3 + 44) & _xmm) * 61440.0) == 0.0)) != 0
        && *(float *)(v3 + 32) == 0.0
        && *(float *)(v3 + 36) == 0.0 )
      {
        *(_BYTE *)(v3 + 65) = *(_BYTE *)(v3 + 65) & 0xF3 | 4;
        if ( CMILMatrix::IsAffine<0>(v3, 1) )
        {
          if ( *(float *)(v3 + 8) == v9 && *(float *)(v3 + 24) == v9 )
          {
            LODWORD(v11) = *(_DWORD *)(v3 + 12) & _xmm;
            v12 = COERCE_FLOAT(*(_DWORD *)(v3 + 28) & _xmm) * 61440.0;
            *(_BYTE *)(v3 + 64) = *(_BYTE *)(v3 + 64) & 0xF3 | 4;
            if ( (float)((float)((float)(v11 * 61440.0) + v12) + COERCE_FLOAT(*(_DWORD *)(v3 + 60) & _xmm)) == v10 )
            {
              v13 = *(float *)(v3 + 4);
              *(_BYTE *)(v3 + 65) = *(_BYTE *)(v3 + 65) & 0xCF | 0x10;
              if ( v13 == v9 && *(float *)(v3 + 16) == v9 )
              {
                v14 = *(float *)v3;
                v15 = *(_BYTE *)(v3 + 64) & 0x3F | 0x40;
                *(_BYTE *)(v3 + 64) = v15;
                if ( v14 == v10 && *(float *)(v3 + 20) == v10 )
                {
                  v16 = *(float *)(v3 + 40);
                  v17 = v15 & 0xCF | 0x10;
                  *(_BYTE *)(v3 + 64) = v17;
                  if ( v16 == v10 && *(float *)(v3 + 48) == v9 && *(float *)(v3 + 52) == v9 && *(float *)(v3 + 56) == v9 )
                  {
                    *(_BYTE *)(v3 + 64) = v17 & 0xFC | 1;
                    goto LABEL_4;
                  }
                }
              }
            }
          }
        }
      }
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v3, *(struct MilRectF **)(v6 + 16));
      return 0LL;
    }
    else
    {
      return CShape::GetTightBounds(a1, a2, (CMILMatrix *)v3);
    }
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    result = 0LL;
    *(_QWORD *)a2 = 0LL;
  }
  return result;
}
