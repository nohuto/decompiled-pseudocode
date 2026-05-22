/*
 * XREFs of ?OnRemoved@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAXXZ @ 0x18016D710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::OnRemoved(
        LARGE_INTEGER *this)
{
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  this[122] = PerformanceCount;
}
