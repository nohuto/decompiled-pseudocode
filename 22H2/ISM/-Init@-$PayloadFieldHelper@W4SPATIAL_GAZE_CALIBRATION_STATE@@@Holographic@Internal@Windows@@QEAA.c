/*
 * XREFs of ?Init@?$PayloadFieldHelper@W4SPATIAL_GAZE_CALIBRATION_STATE@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800DBCB0
 * Callers:
 *     ?InitializeStreamReaderHelpers@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800DBD20 (-InitializeStreamReaderHelpers@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Interna.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::PayloadFieldHelper<enum SPATIAL_GAZE_CALIBRATION_STATE>::Init(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)a2 + 56LL))(a2, &SPATIALFIELD_CalibrationState);
  if ( !v3 )
    return 2147943568LL;
  if ( *(_DWORD *)(v3 + 20) == 4 )
  {
    *a1 = v3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x267,
      (__int64)"onecoreuap\\internal\\analog\\inc\\SpatialObjectDDIClient.h",
      (const char *)0x8007000DLL);
    return 2147942413LL;
  }
}
