__int64 __fastcall ADAPTER_DISPLAY::GetDriverIgnoreCCDDatabase(ADAPTER_DISPLAY *this)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d

  if ( !*(_QWORD *)(*((_QWORD *)this + 2) + 2920LL) )
  {
    WdLogSingleEntry1(1LL, 6851LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v4,
          v3,
          v5,
          0,
          2,
          -1,
          (__int64)L"GetAdapter()->IsDisplayAdapter()",
          6851LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return *((unsigned int *)this + 110);
}
