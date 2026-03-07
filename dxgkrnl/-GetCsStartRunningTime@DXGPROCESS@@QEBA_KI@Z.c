unsigned __int64 __fastcall DXGPROCESS::GetCsStartRunningTime(DXGPROCESS *this, unsigned int a2)
{
  __int64 v2; // rbx
  int v4; // edx
  int v5; // r8d

  v2 = a2;
  if ( a2 >= 6 )
  {
    WdLogSingleEntry1(1LL, 1095LL);
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
          L"adapterOrdinal < DripsBlockerMaxAdapters",
          1095LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v2);
}
