bool __fastcall CGlobalCompositionSurfaceInfo::HasApprovedCustomDuration(CGlobalCompositionSurfaceInfo *this)
{
  return *((_DWORD *)this + 82) != 0;
}
