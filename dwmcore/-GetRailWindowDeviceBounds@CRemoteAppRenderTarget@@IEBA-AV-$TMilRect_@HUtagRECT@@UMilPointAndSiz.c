int *__fastcall CRemoteAppRenderTarget::GetRailWindowDeviceBounds(__int64 a1, int *a2, CMILMatrix *a3)
{
  __int64 i; // rdx
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  float v7[4]; // [rsp+30h] [rbp-28h] BYREF

  for ( i = 0LL; i < 4; ++i )
    v7[i] = (float)*(int *)(a1 + 4 * i + 264);
  v6 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>(a3, (struct MilRectF *)v7, (float *)&v6);
  PixelAlign(a2, (float *)&v6);
  return a2;
}
