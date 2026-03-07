__int64 __fastcall ShadowHelpers::GetLightToCameraMatrix(
        ShadowHelpers *this,
        const struct CVisualTree *a2,
        const struct CCompositionLight *a3,
        const struct Windows::Foundation::Numerics::float3 *a4)
{
  bool v8; // r15
  const struct CCompositionLight *v9; // rax
  int LightPosition; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  float v13; // xmm1_4
  float v14; // xmm2_4
  _OWORD *float4x4_look_at; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  float v20; // [rsp+38h] [rbp-19h] BYREF
  float v21; // [rsp+3Ch] [rbp-15h]
  float v22; // [rsp+40h] [rbp-11h]
  float v23; // [rsp+48h] [rbp-9h] BYREF
  float v24; // [rsp+4Ch] [rbp-5h]
  float v25; // [rsp+50h] [rbp-1h]
  _BYTE v26[64]; // [rsp+58h] [rbp+7h] BYREF

  v8 = (*(unsigned int (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 216LL))(a2) == 1;
  v9 = (const struct CCompositionLight *)(*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2);
  LightPosition = ShadowHelpers::GetLightPosition(this, a2, v9, &v23);
  v12 = LightPosition;
  if ( LightPosition < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, LightPosition, 0x9Au, 0LL);
  }
  else
  {
    v20 = v23;
    v21 = v24;
    v22 = v25;
    if ( v8 )
    {
      v13 = v24 + *((float *)a3 + 1);
      v14 = v25 + *((float *)a3 + 2);
      v20 = v23 + *(float *)a3;
      v21 = v13;
      v22 = v14;
    }
    v23 = 0.0;
    v25 = 0.0;
    v24 = *(float *)&FLOAT_1_0;
    float4x4_look_at = (_OWORD *)Windows::Foundation::Numerics::make_float4x4_look_at(v26, &v20, a3, &v23);
    v16 = float4x4_look_at[1];
    v17 = float4x4_look_at[2];
    v18 = float4x4_look_at[3];
    *(_OWORD *)a4 = *float4x4_look_at;
    *((_OWORD *)a4 + 1) = v16;
    *((_OWORD *)a4 + 2) = v17;
    *((_OWORD *)a4 + 3) = v18;
    *((_DWORD *)a4 + 16) = 0;
  }
  return v12;
}
