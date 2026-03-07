struct VIDMM_MONITORED_FENCE_STORAGE *__fastcall DXGSYNCOBJECT::GetMonitoredFenceStorage(DXGSYNCOBJECT *this)
{
  int v3; // edx
  int v4; // r8d

  if ( (unsigned int)(*((_DWORD *)this + 50) - 5) > 1 )
  {
    WdLogSingleEntry1(1LL, 358LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          0,
          v3,
          v4,
          0,
          2,
          -1,
          (__int64)L"GetSyncObjectType() == D3DDDI_MONITORED_FENCE || GetSyncObjectType() == D3DDDI_PERIODIC_MONITORED_FENCE",
          358LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return (DXGSYNCOBJECT *)((char *)this + 128);
}
