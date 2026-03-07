__int64 __fastcall CDropShadow::GetBounds(__int64 a1, float *a2, __int64 a3)
{
  CDropShadow *v6; // rsi
  float v7; // xmm4_4
  float v8; // xmm5_4
  float v9; // xmm0_4
  float v10; // xmm5_4
  float v11; // xmm1_4
  float Radius; // xmm0_4

  if ( *a2 <= 0.0
    || a2[1] <= 0.0
    || (v6 = (CDropShadow *)(a1 - 296),
        (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 296) + 192LL))(a1 - 296)) )
  {
    *(_DWORD *)(a3 + 12) = 0;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)(a3 + 4) = 0;
    *(_DWORD *)a3 = 0;
  }
  else
  {
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = 0;
    v7 = *a2;
    *(float *)(a3 + 8) = *a2;
    v8 = a2[1];
    *(float *)(a3 + 12) = v8;
    v9 = *(float *)(a1 - 200);
    v10 = v8 + *(float *)(a1 - 196);
    v11 = *(float *)(a1 - 196) + 0.0;
    *(float *)(a3 + 8) = v7 + v9;
    *(float *)(a3 + 12) = v10;
    *(float *)a3 = v9 + 0.0;
    *(float *)(a3 + 4) = v11;
    Radius = CDropShadow::GetRadius(v6);
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate((float *)a3, Radius, Radius);
  }
  return 0LL;
}
