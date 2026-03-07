void __fastcall CD2DResource::RemoveResourceNotifier(__int64 a1, const struct IDeviceResourceNotify *a2)
{
  CD2DResource::RemoveResourceNotifier((CD2DResource *)(a1 - *(int *)(a1 - 4) - 208), a2);
}
