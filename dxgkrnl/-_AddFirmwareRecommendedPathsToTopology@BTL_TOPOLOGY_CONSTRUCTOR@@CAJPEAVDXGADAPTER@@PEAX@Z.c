/*
 * XREFs of ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C03BC8FC
 * Callers:
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_AddFirmwareRecommendedPathsToTopology_0_1_ @ 0x1C03BBBC0 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_AddFirmwareRecommendedPathsToTopology_0_1.c)
 * Callees:
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C03BC7A0 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddFirmwareRecommendedPathsToTopology(
        struct DXGADAPTER *a1,
        CCD_TOPOLOGY **this)
{
  if ( *((_QWORD *)a1 + 365) )
    return BTL_TOPOLOGY_CONSTRUCTOR::_AddFirmwareRecommendedPathsToTopology(this, a1);
  else
    return 0LL;
}
