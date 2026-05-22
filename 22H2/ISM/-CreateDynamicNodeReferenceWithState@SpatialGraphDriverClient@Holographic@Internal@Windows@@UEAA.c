/*
 * XREFs of ?CreateDynamicNodeReferenceWithState@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x18015A8E0
 * Callers:
 *     ?CreateDynamicNodeReferenceWithState@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x18004D550 (-CreateDynamicNodeReferenceWithState@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@.c)
 *     ?CreateDynamicNodeReferenceWithState@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBI@EAAJAEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x18004D560 (-CreateDynamicNodeReferenceWithState@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBI@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VSpatialGraphNodeReference@Holographic@Internal@Windows@@UISpatialGraphNodeReference@234@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@AEAW4SPATIAL_TRACKING_STATE@@AEAUSpatialGraphSettings@234@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@456@AEAW4SPATIAL_TRACKING_STATE@@AEAUSpatialGraphSettings@456@@Z @ 0x18014F874 (--$MakeAndInitialize@VSpatialGraphNodeReference@Holographic@Internal@Windows@@UISpatialGraphNode.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::CreateDynamicNodeReferenceWithState(
        __int64 a1,
        int a2,
        int a3,
        _QWORD *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v4 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Holographic::SpatialGraphNodeReference,Windows::Internal::Holographic::ISpatialGraphNodeReference,std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper> &,Windows::Internal::Holographic::DynamicNodeInfo const &,enum SPATIAL_TRACKING_STATE &,Windows::Internal::Holographic::SpatialGraphSettings &>(
         a4,
         (int)a1 + 88,
         a2,
         &v8,
         (char *)(a1 + 152));
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x471,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
