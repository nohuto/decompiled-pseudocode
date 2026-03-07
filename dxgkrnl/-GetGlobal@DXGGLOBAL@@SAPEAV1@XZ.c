struct DXGGLOBAL *DXGGLOBAL::GetGlobal(void)
{
  struct DXGGLOBAL *result; // rax
  int v1; // edx
  int v2; // ecx
  int v3; // r8d

  result = *(struct DXGGLOBAL **)&DXGGLOBAL::m_pGlobal;
  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry1(1LL, 2406LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v2,
          v1,
          v3,
          0,
          2,
          -1,
          (__int64)L"m_pGlobal != NULL",
          2406LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
    return *(struct DXGGLOBAL **)&DXGGLOBAL::m_pGlobal;
  }
  return result;
}
