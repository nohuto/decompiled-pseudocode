__int64 __fastcall CRemoteAppRenderTarget::GetPresentStatistics(
        CRemoteAppRenderTarget *this,
        struct DXGI_FRAME_STATISTICS *a2)
{
  unsigned int v2; // ebx

  if ( *(_DWORD *)(*((_QWORD *)this - 17) + 1104LL) == 6
    && (this = (CRemoteAppRenderTarget *)*((_QWORD *)this + 2)) != 0LL )
  {
    return (*(unsigned int (__fastcall **)(CRemoteAppRenderTarget *, struct DXGI_FRAME_STATISTICS *))(*(_QWORD *)this + 32LL))(
             this,
             a2);
  }
  else
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467259, 0x13Fu, 0LL);
  }
  return v2;
}
