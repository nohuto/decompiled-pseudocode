void __fastcall PopPowerAggregatorForceSessionSwitch(unsigned int a1)
{
  __int64 v2; // rcx
  int v3; // [rsp+38h] [rbp+10h] BYREF

  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  v3 = 0;
  if ( (_DWORD)xmmword_140C3A710 == 1 )
  {
    v2 = 3LL;
    if ( a1 != 4 && BYTE8(xmmword_140C3A720) )
      v2 = 2LL;
    goto LABEL_12;
  }
  if ( (_DWORD)xmmword_140C3A710 == 4 && BYTE8(xmmword_140C3A720) && ((a1 - 43) & 0xFFFFFFFC) == 0 && a1 != 44 )
  {
    v2 = 10LL;
LABEL_12:
    PopPowerAggregatorHandleIntentUnsafe((_QWORD *)v2, (__int64)&v3, 0, a1);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
