__int64 __fastcall CGlobalCompositionSurfaceInfo::DisableDirectFlip(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2,
        bool a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a2 == *((_QWORD *)this + 16) && *((_BYTE *)this + 301) )
  {
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableDirectFlip(
      (CGlobalCompositionSurfaceInfo *)((char *)this + 104),
      a3);
  }
  else
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x14Bu, 0LL);
  }
  return v3;
}
