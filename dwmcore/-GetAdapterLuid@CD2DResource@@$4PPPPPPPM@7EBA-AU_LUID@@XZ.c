struct _LUID __fastcall CD2DResource::GetAdapterLuid(__int64 a1, _QWORD *a2)
{
  return CD2DResource::GetAdapterLuid((CD2DResource *)(a1 - *(int *)(a1 - 4) - 8), a2);
}
