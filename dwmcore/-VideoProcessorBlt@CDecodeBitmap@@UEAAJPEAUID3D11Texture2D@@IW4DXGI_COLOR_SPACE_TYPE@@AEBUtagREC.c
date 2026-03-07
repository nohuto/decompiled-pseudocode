__int64 __fastcall CDecodeBitmap::VideoProcessorBlt(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // edi
  int v10; // eax
  __int64 v11; // rcx

  v8 = 0;
  if ( !*(_BYTE *)(a1 + 32) )
  {
    v10 = CRenderTargetBitmap::VideoProcessorBlt(a1, a2, a3, a4, a5, a6, a7, a8);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x31u, 0LL);
    }
    else
    {
      *(_BYTE *)(a1 + 32) = 1;
      CD2DBitmapCache::MarkFullInvalid((CD2DBitmapCache *)(a1 - 120));
    }
  }
  return v8;
}
