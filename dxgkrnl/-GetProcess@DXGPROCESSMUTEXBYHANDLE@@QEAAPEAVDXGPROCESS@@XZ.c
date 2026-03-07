struct DXGPROCESS *__fastcall DXGPROCESSMUTEXBYHANDLE::GetProcess(DXGPROCESSMUTEXBYHANDLE *this)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d

  if ( !*((_BYTE *)this + 28) )
  {
    WdLogSingleEntry1(1LL, 1676LL);
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
          (__int64)L"m_Acquired != FALSE",
          1676LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( !*((_QWORD *)this + 2) )
  {
    WdLogSingleEntry1(1LL, 1677LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v7,
          v6,
          v8,
          0,
          2,
          -1,
          (__int64)L"m_pProcess != NULL",
          1677LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return (struct DXGPROCESS *)*((_QWORD *)this + 2);
}
