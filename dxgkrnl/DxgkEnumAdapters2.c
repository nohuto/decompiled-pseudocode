__int64 __fastcall DxgkEnumAdapters2(struct _D3DKMT_ENUMADAPTERS2 *a1)
{
  return DxgkEnumAdapters2Impl(a1, 1, 1u, UserRequest);
}
