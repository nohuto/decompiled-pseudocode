__int64 __fastcall CClipBrush::GetBounds(__int64 a1, __int64 a2, float *a3)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 (__fastcall ***v7)(_QWORD); // rcx
  int v8; // eax
  __int64 v9; // rcx
  float v10; // xmm0_4
  float v11; // xmm4_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm5_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4

  v4 = 0;
  v5 = *(_QWORD *)(a1 - 48);
  if ( v5 )
  {
    v7 = (__int64 (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(v5 + 64) + 8LL) + v5 + 64);
    v8 = (**v7)(v7);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x35u, 0LL);
    }
    else
    {
      v10 = *(float *)(a1 - 40);
      v11 = *a3;
      v12 = *(float *)(a1 - 36);
      v13 = *(float *)(a1 - 32);
      v14 = *(float *)(a1 - 28);
      if ( v10 > *a3 )
      {
        *a3 = v10;
        v11 = v10;
      }
      v15 = a3[1];
      if ( v12 > v15 )
      {
        a3[1] = v12;
        v15 = v12;
      }
      v16 = a3[2];
      if ( v16 > v13 )
      {
        a3[2] = v13;
        v16 = v13;
      }
      v17 = a3[3];
      if ( v17 > v14 )
      {
        a3[3] = v14;
        v17 = v14;
      }
      if ( v16 <= v11 || v17 <= v15 )
      {
        a3[3] = 0.0;
        a3[2] = 0.0;
        a3[1] = 0.0;
        *a3 = 0.0;
      }
    }
  }
  else
  {
    a3[3] = 0.0;
    a3[2] = 0.0;
    a3[1] = 0.0;
    *a3 = 0.0;
  }
  return v4;
}
