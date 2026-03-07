void __fastcall InputExtensibilityCallout::RegisterCoreMsgProvider(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // rsi
  __int128 v10; // [rsp+20h] [rbp-48h]

  v9 = 5LL * a2;
  if ( *(_QWORD *)(a1 + 40LL * a2 + 32) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 289LL);
  RIMLockExclusive(a1 + 8);
  *(_DWORD *)(a1 + 8 * v9 + 40) = a3;
  if ( (a4 != 0) != (a6 != 0) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 299LL);
  *(_QWORD *)&v10 = a4;
  *((_QWORD *)&v10 + 1) = a6;
  *(_OWORD *)(a1 + 8 * v9 + 48) = v10;
  *(_QWORD *)(a1 + 8 * v9 + 64) = a5;
  *(_QWORD *)(a1 + 16) = 0LL;
  ExReleasePushLockExclusiveEx(a1 + 8, 0LL);
  KeLeaveCriticalRegion();
}
