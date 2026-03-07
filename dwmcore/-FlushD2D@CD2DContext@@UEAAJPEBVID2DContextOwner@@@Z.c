__int64 __fastcall CD2DContext::FlushD2D(CD2DContext *this, const struct ID2DContextOwner *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // edi

  CD2DContext::FlushDrawList(this);
  v3 = CD2DContext::FlushD2DInternal(this);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x320u, 0LL);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(((unsigned __int64)this - 16) & -(__int64)(this != 0LL), v5, 0LL);
}
