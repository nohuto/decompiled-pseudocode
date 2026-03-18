/*
 * XREFs of sinf_0 @ 0x18011B944
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDA50 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x18024733C (-make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA-AUquaternion@123@AEBUfloat3@123.c)
 *     ?GetRandomUnitDir@@YA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@AEBU1234@1_N@Z @ 0x180247718 (-GetRandomUnitDir@@YA-AUfloat3@Numerics@Foundation@Windows@@AEAV-$mersenne_twister_engine@I$0CA@.c)
 *     ?GetRandomPoint@CEllipseSpawner@EmitterShapes@@UEBA?AUfloat2@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@M@Z @ 0x18026A160 (-GetRandomPoint@CEllipseSpawner@EmitterShapes@@UEBA-AUfloat2@Numerics@Foundation@Windows@@AEAV-$.c)
 *     ?make_float4x4_from_axis_angle@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@M@Z @ 0x1802716AC (-make_float4x4_from_axis_angle@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUfloat3@123@M@Z.c)
 *     ?make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@MAEBUfloat3@123@@Z @ 0x1802719B0 (-make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@MAEBUfloat3@123@@Z.c)
 *     ?D2DMatrixRotationNormalizedAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18027DB9C (-D2DMatrixRotationNormalizedAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x18027DE34 (-D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x18027DEB4 (-D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z.c)
 *     ?D2DMatrixRotationY@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x18027DF7C (-D2DMatrixRotationY@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?D2DMatrixRotationY@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x18027E000 (-D2DMatrixRotationY@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x18027E0CC (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x18027E14C (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18027E6D4 (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x18027E758 (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 *     ?D3DXQuaternionSlerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z @ 0x18027E89C (-D3DXQuaternionSlerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl sinf_0(float X)
{
  return sinf(X);
}
