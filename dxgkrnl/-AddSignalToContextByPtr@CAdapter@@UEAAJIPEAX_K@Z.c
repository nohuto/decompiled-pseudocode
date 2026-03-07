__int64 __fastcall CAdapter::AddSignalToContextByPtr(CAdapter *this, unsigned int a2, void *a3, __int64 a4)
{
  return DxgkSignalSynchronizationObjectFromGpuByReference(a3, a4, a2);
}
