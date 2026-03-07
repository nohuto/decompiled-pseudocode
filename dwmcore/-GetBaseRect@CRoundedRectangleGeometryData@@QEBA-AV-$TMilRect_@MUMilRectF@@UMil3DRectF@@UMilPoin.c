__int64 __fastcall CRoundedRectangleGeometryData::GetBaseRect(__int64 a1, __int64 a2)
{
  float v3; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm1_4

  if ( *(_BYTE *)(a1 + 52) )
  {
    v3 = *(float *)(a1 + 4);
    v4 = *(float *)a1;
    *(_DWORD *)a2 = *(_DWORD *)a1;
    v5 = v4 + *(float *)(a1 + 8);
    *(float *)(a2 + 4) = v3;
    v6 = v3 + *(float *)(a1 + 12);
    *(float *)(a2 + 8) = v5;
    *(float *)(a2 + 12) = v6;
  }
  else
  {
    *(_DWORD *)a2 = *(_DWORD *)a1;
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
  }
  return a2;
}
