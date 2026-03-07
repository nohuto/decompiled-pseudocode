__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnableDirectFlip(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        unsigned __int8 a2,
        struct IOverlaySwapChain *a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx

  v5 = NtSetCompositionSurfaceDirectFlipState(*(_QWORD *)(*(_QWORD *)this + 32LL), (char *)this + 24, 1LL, a2);
  if ( v5 >= 0 )
  {
    v8 = CGlobalCompositionSurfaceInfo::CBindInfo::PinResources(this);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v10 = CGlobalCompositionSurfaceInfo::CBindInfo::EnsureOverlaySwapChainWeakRef(this, a3);
      v7 = v10;
      if ( v10 >= 0 )
      {
        *((_BYTE *)this + 197) = 1;
        return v7;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x36Au, 0LL);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x366u, 0LL);
    }
    NtSetCompositionSurfaceDirectFlipState(*(_QWORD *)(*(_QWORD *)this + 32LL), (char *)this + 24, 0LL, 0LL);
  }
  else
  {
    v7 = v5 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5 | 0x10000000, 0x365u, 0LL);
  }
  return v7;
}
