struct DXGDEVICE *__fastcall ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v3; // rbx
  int v4; // edx
  int v5; // r8d

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 6268LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          0,
          v4,
          v5,
          0LL,
          2,
          -1,
          L"VidPnSourceId < m_NumVidPnSources",
          6268LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return *(struct DXGDEVICE **)(4000 * v3 + *((_QWORD *)this + 16) + 744);
}
