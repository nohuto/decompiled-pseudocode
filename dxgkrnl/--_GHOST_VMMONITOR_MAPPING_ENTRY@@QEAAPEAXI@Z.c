DXGADAPTER **__fastcall HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(DXGADAPTER **this)
{
  DXGADAPTER_REFERENCE::Assign(this + 9, 0LL);
  operator delete(this);
  return this;
}
