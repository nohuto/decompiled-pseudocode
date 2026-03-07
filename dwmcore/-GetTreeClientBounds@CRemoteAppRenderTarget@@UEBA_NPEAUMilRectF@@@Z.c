bool __fastcall CRemoteAppRenderTarget::GetTreeClientBounds(CRemoteAppRenderTarget *this, struct MilRectF *a2)
{
  __int128 v3; // xmm0
  bool result; // al
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_OWORD *)CRemoteAppRenderTarget::GetTreeBounds((__int64)this - 72, (__int64)v5);
  result = 0;
  *(_OWORD *)a2 = v3;
  return result;
}
