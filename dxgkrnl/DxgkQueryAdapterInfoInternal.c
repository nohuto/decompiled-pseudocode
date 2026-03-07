__int64 __fastcall DxgkQueryAdapterInfoInternal(const struct _D3DKMT_QUERYADAPTERINFO *a1)
{
  return DxgkQueryAdapterInfoImpl(a1, 0, 0LL);
}
