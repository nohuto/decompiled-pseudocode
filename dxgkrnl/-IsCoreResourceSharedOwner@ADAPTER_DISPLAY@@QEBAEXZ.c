bool __fastcall ADAPTER_DISPLAY::IsCoreResourceSharedOwner(DXGADAPTER **this)
{
  return DXGADAPTER::IsCoreResourceSharedOwner(this[2]);
}
