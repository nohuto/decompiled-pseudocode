/*
 * XREFs of ?AddNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphNodePropertiesUpdatedCallback@234@@Z @ 0x180159880
 * Callers:
 *     ?AddNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphNodePropertiesUpdatedCallback@234@@Z @ 0x18004D490 (-AddNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAA.c)
 *     ?AddNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBI@EAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphNodePropertiesUpdatedCallback@234@@Z @ 0x18004D4A0 (-AddNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBI@EAA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::AddNodePropertiesUpdatedCallback(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct SPATIAL_NODE_ID *a2,
        struct Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback *a3)
{
  return Windows::Internal::Holographic::DynamicNodeSourceBase::AddNodePropertiesUpdatedCallback(
           (Windows::Internal::Holographic::SpatialGraphDriverClient *)((char *)this + 24),
           a2,
           a3);
}
