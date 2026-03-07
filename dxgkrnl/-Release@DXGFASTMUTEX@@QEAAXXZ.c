void __fastcall DXGFASTMUTEX::Release(struct _KTHREAD **this)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d

  if ( this[3] != KeGetCurrentThread() )
    WdLogSingleEntry5(0LL, 275LL, 4LL, this, 0LL, 0LL);
  if ( *((int *)this + 8) <= 0 )
  {
    WdLogSingleEntry1(1LL, 535LL);
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
          (__int64)L"m_OwnerAcquireCount > 0",
          535LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( (*((_DWORD *)this + 8))-- == 1 )
  {
    this[3] = 0LL;
    ExReleasePushLockExclusiveEx(this + 1, 0LL);
  }
  KeLeaveCriticalRegion();
}
