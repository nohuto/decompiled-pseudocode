bool __fastcall CGlobalSurfaceManager::AnyOutstandingCaptures(CGlobalSurfaceManager *this)
{
  return CaptureBitsResponse::s_cOutstandingCaptures > 0;
}
