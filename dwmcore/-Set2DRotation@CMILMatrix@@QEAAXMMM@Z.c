/*
 * XREFs of ?Set2DRotation@CMILMatrix@@QEAAXMMM@Z @ 0x18026D20C
 * Callers:
 *     _anonymous_namespace_::DecomposeMatrix @ 0x1801AAFC0 (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?GetRealization@CRotateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18024AFE0 (-GetRealization@CRotateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@MAEBUfloat3@123@@Z @ 0x18026E280 (-make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@MAEBUfloat3@123@@Z.c)
 */

void __fastcall CMILMatrix::Set2DRotation(CMILMatrix *this, float a2, float a3, float a4)
{
  __int64 v4; // rdx
  __int64 float4x4_rotation_z; // rax
  __int128 v7; // xmm1
  _DWORD v8[3]; // [rsp+20h] [rbp-58h] BYREF
  int v9; // [rsp+2Ch] [rbp-4Ch] BYREF

  *(float *)v8 = a3;
  *(float *)&v8[1] = a4;
  v8[2] = 0;
  float4x4_rotation_z = Windows::Foundation::Numerics::make_float4x4_rotation_z(&v9, v4, v8);
  *(_OWORD *)this = *(_OWORD *)float4x4_rotation_z;
  *((_OWORD *)this + 1) = *(_OWORD *)(float4x4_rotation_z + 16);
  *((_OWORD *)this + 2) = *(_OWORD *)(float4x4_rotation_z + 32);
  v7 = *(_OWORD *)(float4x4_rotation_z + 48);
  LOBYTE(float4x4_rotation_z) = *((_BYTE *)this + 65) & 0xD4;
  *((_BYTE *)this + 64) = 4;
  *((_BYTE *)this + 65) = float4x4_rotation_z | 0x14;
  *((_OWORD *)this + 3) = v7;
}
