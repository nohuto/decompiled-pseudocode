void __fastcall DXGAUTOMUTEX::Acquire(DXGAUTOMUTEX *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d

  if ( *((_BYTE *)this + 8) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, this, 0LL, 0LL);
  v2 = *(_QWORD *)this;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v2 + 24) == KeGetCurrentThread() )
  {
    if ( *(int *)(v2 + 32) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
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
            (__int64)L"m_OwnerAcquireCount > 0",
            491LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    ++*(_DWORD *)(v2 + 32);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v2 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v5 = *(unsigned int *)(v2 + 36);
        if ( (_DWORD)v5 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v3, "g", v4, v5);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v2 + 16));
      ExAcquirePushLockExclusiveEx(v2 + 8, 0LL);
    }
    if ( *(_QWORD *)(v2 + 24) )
    {
      WdLogSingleEntry1(1LL, 515LL);
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
            (__int64)L"NULL == m_OwningThread",
            515LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *(_DWORD *)(v2 + 32) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v13,
            v12,
            v14,
            0,
            2,
            -1,
            (__int64)L"0 == m_OwnerAcquireCount",
            516LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    *(_QWORD *)(v2 + 24) = KeGetCurrentThread();
    *(_DWORD *)(v2 + 32) = 1;
  }
  *((_BYTE *)this + 8) = 1;
}
