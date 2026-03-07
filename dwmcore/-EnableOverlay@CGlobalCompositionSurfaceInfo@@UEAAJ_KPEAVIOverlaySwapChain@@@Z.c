__int64 __fastcall CGlobalCompositionSurfaceInfo::EnableOverlay(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2,
        struct IOverlaySwapChain *a3)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  if ( a2 != *((_QWORD *)this + 16) || *((_BYTE *)this + 301) )
  {
    v5 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x15Fu, 0LL);
  }
  else
  {
    v3 = CGlobalCompositionSurfaceInfo::CBindInfo::EnableOverlay(
           (CGlobalCompositionSurfaceInfo *)((char *)this + 104),
           a3);
    v5 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x15Bu, 0LL);
  }
  return v5;
}
