__int64 __fastcall DxgkOpenAdapterFromLuidInternal(struct _D3DKMT_OPENADAPTERFROMLUID *a1, __int64 a2, __int64 a3)
{
  return DxgkOpenAdapterFromLuidImpl(a1, 0, a3);
}
