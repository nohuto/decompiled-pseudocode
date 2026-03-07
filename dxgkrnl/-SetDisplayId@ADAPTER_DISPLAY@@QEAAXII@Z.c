void __fastcall ADAPTER_DISPLAY::SetDisplayId(ADAPTER_DISPLAY *this, unsigned int a2, int a3)
{
  __int64 v4; // rbx
  int v6; // edx
  int v7; // r8d

  v4 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 6001LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          0,
          v6,
          v7,
          0,
          2,
          -1,
          (__int64)L"VidPnSourceId < m_NumVidPnSources",
          113,
          0,
          0,
          0,
          0);
    }
  }
  *(_DWORD *)(4000 * v4 + *((_QWORD *)this + 16) + 624) = a3;
}
