__int64 __fastcall CDDisplayRenderTarget::UpdateMPOCaps(CDirectFlipInfo **this)
{
  int updated; // eax
  __int64 v2; // rcx
  unsigned int v3; // ebx

  updated = COverlayContext::UpdateMPOCaps(this + 6);
  v3 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, updated, 0xC0u, 0LL);
  return v3;
}
