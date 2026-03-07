bool __fastcall ADAPTER_DISPLAY::IsVidPnSourceOwner(DXGADAPTER **this, const struct DXGDEVICE *a2, unsigned int a3)
{
  __int64 v4; // rdi
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d

  v4 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 6189LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v8,
          v7,
          v9,
          0,
          2,
          -1,
          (__int64)L"IsCoreResourceSharedOwner()",
          6189LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( (unsigned int)v4 < *((_DWORD *)this + 24) )
    return a2 == *((const struct DXGDEVICE **)this[16] + 500 * v4 + 91);
  WdLogSingleEntry1(1LL, 6190LL);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v11,
        v10,
        v12,
        0,
        2,
        -1,
        (__int64)L"VidPnSourceId < m_NumVidPnSources",
        6190LL,
        0LL,
        0LL,
        0LL,
        0LL);
  }
  return (unsigned int)v4 < *((_DWORD *)this + 24) && a2 == *((const struct DXGDEVICE **)this[16] + 500 * v4 + 91);
}
