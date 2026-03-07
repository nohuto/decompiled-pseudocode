void __fastcall CMILMatrix::SetScale(CMILMatrix *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  __int64 float4x4_scale; // rax
  __int64 v8; // r9
  __int128 v9; // xmm1
  _DWORD v10[3]; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v11[3]; // [rsp+3Ch] [rbp-6Ch] BYREF
  _BYTE v12[72]; // [rsp+48h] [rbp-60h] BYREF

  if ( a4 == 1.0 && a5 == 0.0 && a6 == 0.0 && a7 == 0.0 )
  {
    CMILMatrix::Set2DScaleAndOffset(this, a2, a3, 0.0, 0.0);
  }
  else
  {
    *(float *)v10 = a5;
    *(float *)&v10[1] = a6;
    *(float *)&v10[2] = a7;
    *(float *)v11 = a2;
    *(float *)&v11[1] = a3;
    *(float *)&v11[2] = a4;
    float4x4_scale = Windows::Foundation::Numerics::make_float4x4_scale(v12, v11, v10, this);
    *(_OWORD *)v8 = *(_OWORD *)float4x4_scale;
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(float4x4_scale + 16);
    *(_OWORD *)(v8 + 32) = *(_OWORD *)(float4x4_scale + 32);
    v9 = *(_OWORD *)(float4x4_scale + 48);
    LOBYTE(float4x4_scale) = *(_BYTE *)(v8 + 65) & 0xD7;
    *(_BYTE *)(v8 + 64) = 68;
    *(_BYTE *)(v8 + 65) = float4x4_scale | 0x17;
    *(_OWORD *)(v8 + 48) = v9;
  }
}
