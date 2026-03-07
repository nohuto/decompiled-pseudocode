__int64 __fastcall CLegacyRenderTarget::GetClearMode(__int64 a1)
{
  unsigned int v2; // ebx
  _BYTE v4[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 1;
  if ( *(_BYTE *)(a1 + 140)
    || !*(_BYTE *)(a1 + 18421)
    || *(_DWORD *)(CLegacyRenderTarget::GetPixelFormatInfo(a1 + 18728, v4) + 4) == 1 )
  {
    v2 = 2;
  }
  if ( (int)COverlayContext::GetEffectiveDirectFlipMode(a1 + 200) >= 3 )
    return 0;
  return v2;
}
