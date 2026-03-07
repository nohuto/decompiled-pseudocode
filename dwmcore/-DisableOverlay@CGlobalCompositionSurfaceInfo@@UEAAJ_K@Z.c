__int64 __fastcall CGlobalCompositionSurfaceInfo::DisableOverlay(CGlobalCompositionSurfaceInfo *this, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 == *((_QWORD *)this + 16) && *((_BYTE *)this + 302) )
  {
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableOverlay((CGlobalCompositionSurfaceInfo *)((char *)this + 104));
  }
  else
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x173u, 0LL);
  }
  return v2;
}
