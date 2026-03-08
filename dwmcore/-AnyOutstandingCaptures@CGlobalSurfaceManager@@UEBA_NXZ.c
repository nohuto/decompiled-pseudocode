/*
 * XREFs of ?AnyOutstandingCaptures@CGlobalSurfaceManager@@UEBA_NXZ @ 0x1801028B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalSurfaceManager::AnyOutstandingCaptures(CGlobalSurfaceManager *this)
{
  return CaptureBitsResponse::s_cOutstandingCaptures > 0;
}
