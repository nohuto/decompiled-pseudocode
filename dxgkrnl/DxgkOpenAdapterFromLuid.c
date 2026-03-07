__int64 __fastcall DxgkOpenAdapterFromLuid(struct _D3DKMT_OPENADAPTERFROMLUID *a1, __int64 a2, __int64 a3)
{
  return DxgkOpenAdapterFromLuidImpl(a1, 1, a3);
}
