unsigned __int8 __fastcall ADAPTER_DISPLAY::GetPostCompositionStretching(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // rdi
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  int v8; // ecx
  int v9; // r8d

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 6476LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v5,
          v4,
          v6,
          0LL,
          2,
          -1,
          L"IsCoreResourceSharedOwner()",
          6476LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( (unsigned int)v3 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 6477LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v8,
          v7,
          v9,
          0LL,
          2,
          -1,
          L"VidPnSourceId < m_NumVidPnSources",
          6477LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return *((_BYTE *)this[16] + 4000 * v3 + 1141);
}
