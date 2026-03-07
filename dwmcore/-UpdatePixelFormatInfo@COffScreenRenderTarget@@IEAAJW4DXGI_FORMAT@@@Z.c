__int64 __fastcall COffScreenRenderTarget::UpdatePixelFormatInfo(COffScreenRenderTarget *this, int a2)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // edx
  __int64 v8; // r8

  if ( IsValidPixelFormat(a2) )
  {
    *(_DWORD *)(v4 + 112) = v2;
    v6 = HasAlphaChannel(v2);
    *(_DWORD *)(v8 + 116) = v6 != 0 ? 1 : 3;
    v5 = 0;
    *(_DWORD *)(v8 + 120) = v7 == 10;
  }
  else
  {
    v5 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2003292288, 0x9Eu, 0LL);
  }
  return v5;
}
