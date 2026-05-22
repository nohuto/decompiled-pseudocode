/*
 * XREFs of ?reset@?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXXZ @ 0x1800DD934
 * Callers:
 *     ?OnDeviceRemoved@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800DC030 (-OnDeviceRemoved@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEA.c)
 *     ?StopListeningToSpatialObjects@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800DCE60 (-StopListeningToSpatialObjects@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Interna.c)
 *     ??1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ @ 0x180157DF0 (--1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x180158110 (--1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     ?CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x18015A940 (-CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windo.c)
 *     _lambda_31ada6ebdd22db73722d2ce1394329de_::operator() @ 0x18019F8AC (_lambda_31ada6ebdd22db73722d2ce1394329de_--operator().c)
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x18019FB04 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801A0F90 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 *     ?UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z @ 0x1801A1E50 (-UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::reset(_QWORD *a1)
{
  std::_Ref_count_base *v1; // rax

  v1 = (std::_Ref_count_base *)a1[1];
  a1[1] = 0LL;
  *a1 = 0LL;
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
