DXGAUTOPUSHLOCK *__fastcall DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(DXGAUTOPUSHLOCK *this, struct _KTHREAD **a2, char a3)
{
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = a2;
  if ( !a3 )
  {
    if ( a2 )
    {
      if ( a2[1] == KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 1453LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v6,
              v5,
              v7,
              0,
              2,
              -1,
              (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
              1453LL,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
    }
  }
  return this;
}
