void __fastcall CConversionSwapChain::SetAlphaMode(CConversionSwapChain *this, enum DXGI_ALPHA_MODE a2)
{
  __int64 v4; // rcx

  CLegacySwapChain::SetAlphaMode(this, a2);
  if ( *((_DWORD *)this + 97) != a2 )
  {
    v4 = *((_QWORD *)this + 47);
    *((_DWORD *)this + 97) = a2;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 8LL))(v4, (unsigned int)a2);
  }
}
