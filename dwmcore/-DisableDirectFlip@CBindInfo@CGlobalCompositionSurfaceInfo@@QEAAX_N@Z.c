void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::DisableDirectFlip(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        bool a2)
{
  CGlobalCompositionSurfaceInfo::CBindInfo::UnpinResources(this, a2);
  CGlobalCompositionSurfaceInfo::CBindInfo::ResetCustomDuration(this);
  if ( *((_BYTE *)this + 192) )
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableIndependentFlip(this);
  NtSetCompositionSurfaceDirectFlipState(*(_QWORD *)(*(_QWORD *)this + 32LL), (char *)this + 24, 0LL, 0LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 25);
  *((_BYTE *)this + 197) = 0;
}
