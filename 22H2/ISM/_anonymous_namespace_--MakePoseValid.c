/*
 * XREFs of _anonymous_namespace_::MakePoseValid @ 0x1800C660C
 * Callers:
 *     ?GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPoseData@1@PEA_N@Z @ 0x1800C61DC (-GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPose.c)
 * Callees:
 *     XMQuaternionNormalizeIfNeeded @ 0x1800C6F60 (XMQuaternionNormalizeIfNeeded.c)
 */

void __fastcall anonymous_namespace_::MakePoseValid(__int64 a1)
{
  __int128 v1; // xmm0
  __int64 v2; // rdx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( !*(_BYTE *)(a1 + 28) )
  {
    *(_QWORD *)a1 = qword_180209848;
    *(_DWORD *)(a1 + 8) = dword_180209850;
    *(_BYTE *)(a1 + 28) = 1;
  }
  if ( *(_BYTE *)(a1 + 29) )
  {
    v3 = *(_OWORD *)(a1 + 12);
    *((_QWORD *)&v1 + 1) = *((_QWORD *)&v3 + 1);
    *(double *)&v1 = XMQuaternionNormalizeIfNeeded(&v3, a1);
    *(_OWORD *)(v2 + 12) = v1;
  }
  else
  {
    *(_BYTE *)(a1 + 29) = 1;
    *(_OWORD *)(a1 + 12) = xmmword_1801C7430;
  }
}
