DXGGLOBALSHAREMUTEX *__fastcall DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX(DXGGLOBALSHAREMUTEX *this)
{
  struct DXGGLOBAL *Global; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  int v8; // ecx
  int v9; // r8d

  Global = DXGGLOBAL::GetGlobal();
  *((_BYTE *)this + 8) = 0;
  *(_QWORD *)this = (char *)Global + 288;
  if ( Global == (struct DXGGLOBAL *)-288LL )
  {
    WdLogSingleEntry1(1LL, 592LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v5,
          v4,
          v6,
          0,
          2,
          -1,
          (__int64)L"m_pMutex != NULL",
          592LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *(struct _KTHREAD **)(*(_QWORD *)this + 24LL) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 599LL);
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
          (__int64)L"!m_pMutex->IsOwner()",
          599LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return this;
}
