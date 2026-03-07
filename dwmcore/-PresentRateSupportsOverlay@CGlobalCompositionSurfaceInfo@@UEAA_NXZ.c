bool __fastcall CGlobalCompositionSurfaceInfo::PresentRateSupportsOverlay(CGlobalCompositionSurfaceInfo *this)
{
  __int64 v1; // rcx
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  if ( !CCommonRegistryData::OverlayMinFPS )
    return 1;
  v1 = *((_QWORD *)this + 4);
  v3 = 0;
  NtQueryCompositionSurfaceFrameRate(v1, &v3);
  return v3 >= CCommonRegistryData::OverlayMinFPS;
}
