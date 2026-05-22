/*
 * XREFs of PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials @ 0x1801644CC
 * Callers:
 *     ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x180161F80 (-PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJ.c)
 *     ?PredictFromPoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1801625A0 (-PredictFromPoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPA.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??0PoseWithDifferentials@PosePredictionTools@@QEAA@XZ @ 0x180156B58 (--0PoseWithDifferentials@PosePredictionTools@@QEAA@XZ.c)
 *     ??$SE3_invert@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@@Z @ 0x1801A535C (--$SE3_invert@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@@Z.c)
 */

PosePredictionTools::PoseWithDifferentials *__fastcall PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials(
        PosePredictionTools::PoseWithDifferentials *a1)
{
  int *v2; // r8
  int v3; // xmm1_4
  int v4; // xmm2_4
  int v5; // xmm3_4
  int v6; // xmm0_4
  int v7; // xmm1_4
  __int128 v8; // xmm0
  int v9; // xmm1_4
  __int64 v10; // rcx
  _DWORD v12[8]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h]

  PosePredictionTools::PoseWithDifferentials::PoseWithDifferentials(a1);
  v3 = v2[1];
  v4 = *v2;
  v5 = v2[3];
  v12[2] = v2[6];
  v12[4] = v2[4];
  v6 = v2[2];
  v12[3] = v3;
  v7 = v2[7];
  v12[6] = v6;
  v8 = *((_OWORD *)v2 + 2);
  v12[5] = v7;
  v9 = v2[5];
  v13 = v8;
  v12[0] = v4;
  v12[1] = v5;
  v12[7] = v9;
  ST::SE3_invert<float>(v10, v12);
  return a1;
}
