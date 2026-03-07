void __stdcall ExAcquireSpinLockSharedAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // rdx
  char v2; // dl
  signed __int32 v3; // [rsp+38h] [rbp+10h]
  signed __int32 v4; // [rsp+38h] [rbp+10h]
  signed __int32 v5; // [rsp+40h] [rbp+18h]

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v2 = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, v2);
  }
  else
  {
    _m_prefetchw((const void *)SpinLock);
    v3 = *SpinLock & 0x7FFFFFFF;
    v5 = _InterlockedCompareExchange(SpinLock, v3 + 1, v3);
    v1 = (unsigned int)v5;
    if ( v5 != v3 )
    {
      while ( v5 >= 0 )
      {
        v4 = v5;
        v5 = _InterlockedCompareExchange(SpinLock, v5 + 1, v5);
        v1 = (unsigned int)v5;
        if ( v5 == v4 )
          return;
      }
      LOBYTE(v1) = -1;
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, v1);
    }
  }
}
