/*
 * XREFs of ?CanProcessReports@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@UEBA_NXZ @ 0x1800D6FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::CanProcessReports(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_BYTE *)this + 106) )
    return *((_BYTE *)this + 104) == 0;
  return v1;
}
