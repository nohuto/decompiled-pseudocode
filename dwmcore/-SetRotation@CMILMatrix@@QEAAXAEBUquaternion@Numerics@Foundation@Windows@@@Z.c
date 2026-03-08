/*
 * XREFs of ?SetRotation@CMILMatrix@@QEAAXAEBUquaternion@Numerics@Foundation@Windows@@@Z @ 0x18026D300
 * Callers:
 *     ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800DA170 (-GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z @ 0x18021F064 (-GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUquaternion@123@@Z @ 0x18026E11C (-make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUquaternion@123.c)
 */

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
