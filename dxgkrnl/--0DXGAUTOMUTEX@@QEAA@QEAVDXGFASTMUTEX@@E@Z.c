DXGAUTOMUTEX *__fastcall DXGAUTOMUTEX::DXGAUTOMUTEX(DXGAUTOMUTEX *this, struct DXGFASTMUTEX *const a2, char a3)
{
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d

  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 592LL);
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
          (__int64)L"m_pMutex != NULL",
          592LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( !a3 && *(struct _KTHREAD **)(*(_QWORD *)this + 24LL) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 599LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v10,
          v9,
          v11,
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
