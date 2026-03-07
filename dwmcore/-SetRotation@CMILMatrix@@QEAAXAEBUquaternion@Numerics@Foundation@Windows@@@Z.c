void __fastcall CMILMatrix::SetRotation(CMILMatrix *this, const struct Windows::Foundation::Numerics::quaternion *a2)
{
  _OWORD *float4x4_from_quaternion; // rax
  __int64 v3; // r8
  __int128 v4; // xmm1
  _BYTE v5[72]; // [rsp+20h] [rbp-48h] BYREF

  float4x4_from_quaternion = (_OWORD *)Windows::Foundation::Numerics::make_float4x4_from_quaternion(v5, a2, this);
  *(_OWORD *)v3 = *float4x4_from_quaternion;
  *(_OWORD *)(v3 + 16) = float4x4_from_quaternion[1];
  *(_OWORD *)(v3 + 32) = float4x4_from_quaternion[2];
  v4 = float4x4_from_quaternion[3];
  *(_DWORD *)(v3 + 64) = 0;
  *(_OWORD *)(v3 + 48) = v4;
}
