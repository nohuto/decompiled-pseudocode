__int64 __fastcall CAtlasBitmapResource::Update(__int64 a1, __int128 *a2, char a3)
{
  __int64 v5; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v10; // ecx
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v5 = a1 + 40;
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 )
  {
    v11 = *a2;
    CAtlasTexture::UpdateGradientStrip(v7, v5, &v11);
    *(_BYTE *)(a1 + 64) = a3;
    *(_BYTE *)(a1 + 65) = 1;
    return 0;
  }
  else
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2003304307, 0x2Cu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003304307, 0xB3u, 0LL);
  }
  return v8;
}
