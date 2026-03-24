/*
 * XREFs of ?Set2DRotation@CMILMatrix@@QEAAXMMM@Z @ 0x18021157C
 * Callers:
 *     ?GetRealization@CRotateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801F4EA0 (-GetRealization@CRotateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18022D17C (_anonymous_namespace_--DecomposeMatrix.c)
 * Callees:
 *     ?make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@MAEBUfloat3@123@@Z @ 0x180211E00 (-make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@MAEBUfloat3@123@@Z.c)
 */

void __fastcall CMILMatrix::Set2DRotation(CMILMatrix *this, float a2, float a3, float a4)
{
  __int64 v4; // rdx
  _OWORD *float4x4_rotation_z; // rax
  __int128 v7; // xmm1
  _DWORD v8[3]; // [rsp+20h] [rbp-58h] BYREF
  int v9; // [rsp+2Ch] [rbp-4Ch] BYREF

  *(float *)v8 = a3;
  *(float *)&v8[1] = a4;
  v8[2] = 0;
  float4x4_rotation_z = (_OWORD *)Windows::Foundation::Numerics::make_float4x4_rotation_z(&v9, v4, v8);
  *(_OWORD *)this = *float4x4_rotation_z;
  *((_OWORD *)this + 1) = float4x4_rotation_z[1];
  *((_OWORD *)this + 2) = float4x4_rotation_z[2];
  v7 = float4x4_rotation_z[3];
  *((_WORD *)this + 32) = 0x4000;
  *((_OWORD *)this + 3) = v7;
}
