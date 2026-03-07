__int64 __fastcall CBrush::AddOcclusionInformation(
        CBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v4; // r9
  __int128 v6; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(char *, const struct D2D_SIZE_F *, __int128 *))(*((_QWORD *)this - 14) + 296LL))(
         (char *)this - 112,
         a3,
         &v6) )
  {
    v7 = v6;
    COcclusionContext::CollectRectangleForOcclusion((__int64)a2, (__int64)&v7, 0, v4, 0LL);
  }
  return 0LL;
}
