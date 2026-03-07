void __fastcall CCaptureRenderTarget::UpdateRenderTargetBitmapSDRBoosts(CCaptureRenderTarget *this)
{
  __int64 v2; // rsi
  __int64 i; // rdi

  IsDXGIColorSpaceHDR(*((_DWORD *)this + 30));
  v2 = *((_QWORD *)this + 240);
  for ( i = *((_QWORD *)this + 239); i != v2; i += 24LL )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(i + 8) + 40LL))(*(_QWORD *)(i + 8));
    if ( *((_BYTE *)this + 1898) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(i + 16) + 40LL))(*(_QWORD *)(i + 16));
  }
}
