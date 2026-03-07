__int64 __fastcall DxgkDestroyDevice(const struct _D3DKMT_DESTROYDEVICE *a1)
{
  return DxgkDestroyDeviceImpl(a1, 1u);
}
