__int64 __fastcall CSnapshot::AddOcclusionInformation(
        CSnapshot *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v4; // r9
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_BYTE *)this - 32) )
  {
    v6 = 0LL;
    CSnapshot::GetBounds(this);
    COcclusionContext::CollectRectangleForOcclusion((__int64)a2, (__int64)&v6, 0, v4, 0LL);
  }
  return 0LL;
}
