void __fastcall DXGPROCESS::SetCsStartRunningTime(DXGPROCESS *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  int v6; // edx
  int v7; // r8d

  v3 = a2;
  if ( a2 >= 6 )
  {
    WdLogSingleEntry1(1LL, 1101LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          0,
          v6,
          v7,
          0LL,
          2,
          -1,
          L"adapterOrdinal < DripsBlockerMaxAdapters",
          1101LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v3) = a3;
}
