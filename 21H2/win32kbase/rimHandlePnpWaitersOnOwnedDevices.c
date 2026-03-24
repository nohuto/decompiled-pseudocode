/*
 * XREFs of rimHandlePnpWaitersOnOwnedDevices @ 0x1C005620C
 * Callers:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C0056124 (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0066C84 (WPP_RECORDER_SF_qqq.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimHandlePnpWaitersOnOwnedDevices(__int64 a1, int a2)
{
  __int64 *v4; // rbx
  int v5; // edx
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx

  RIMLockExclusive((__int64)&gObListLock);
  v4 = (__int64 *)gObRimDevList;
  if ( (__int64 *)gObRimDevList != &gObRimDevList )
  {
    v5 = 2;
    do
    {
      v6 = (__int64)(v4 + 15);
      if ( v4 == (__int64 *)16 )
        v6 = 48LL;
      v7 = *(unsigned __int8 *)v6;
      if ( v7 == a2 || (_BYTE)v7 == 3 && a2 == 2 )
      {
        v8 = (__int64)(v4 + 51);
        if ( v4 == (__int64 *)16 )
          v8 = 336LL;
        if ( *(_QWORD *)v8 == a1 )
        {
          v9 = (__int64)(v4 + 32);
          if ( v4 == (__int64 *)16 )
            v9 = 184LL;
          if ( (*(_DWORD *)v9 & 0x10) != 0 )
          {
            v10 = (__int64)(v4 + 48);
            if ( v4 == (__int64 *)16 )
              v10 = 312LL;
            if ( !*(_QWORD *)v10 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1799LL);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v11 = (__int64)(v4 + 13);
              LOBYTE(v5) = 4;
              if ( v4 == (__int64 *)16 )
                v11 = 32LL;
              WPP_RECORDER_SF_qqq(
                (_DWORD)gRimLog,
                v5,
                1,
                58,
                (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                a1,
                *(_QWORD *)v11,
                *(_QWORD *)v10);
            }
            *(_DWORD *)v9 &= ~0x10u;
            v12 = (__int64)(v4 + 53);
            if ( v4 == (__int64 *)16 )
              v12 = 352LL;
            KeSetEvent(*(PRKEVENT *)v12, 1, 0);
            v5 = 2;
          }
        }
      }
      v4 = (__int64 *)*v4;
    }
    while ( v4 != &gObRimDevList );
  }
  qword_1C0255428 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
