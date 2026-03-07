struct _LUID __fastcall CRenderTargetBitmap::GetAdapterLuid(__int64 a1, struct _LUID *a2)
{
  return CRenderTargetBitmap::GetAdapterLuid((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 32), a2);
}
