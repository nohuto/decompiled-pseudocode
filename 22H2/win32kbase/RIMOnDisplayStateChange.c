/*
 * XREFs of RIMOnDisplayStateChange @ 0x1C0056ECC
 * Callers:
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C006E09C (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     RIMFreeQDCActivePathsData @ 0x1C006E774 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C006EBA0 (RIMGetQDCActivePathsData.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0164B4C (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0165580 (rimFindMonitorForDigitizerWithQDCData.c)
 */

__int64 RIMOnDisplayStateChange()
{
  __int64 v0; // rdi
  unsigned int v1; // ebx
  __int64 v2; // r12
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *v5; // r8
  __int64 v6; // rax
  __int64 *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 j; // rbx
  __int64 result; // rax
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF

  v0 = 0LL;
  v1 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 70, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  v14 = 0LL;
  v2 = RIMGetQDCActivePathsData(&v14);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  if ( gObRimList.Flink != &gObRimList )
  {
    do
    {
      if ( !BYTE1(Flink[4].Flink) && !LOBYTE(Flink[4].Flink) )
        ++v1;
      Flink = Flink->Flink;
    }
    while ( Flink != &gObRimList );
    if ( v1 )
    {
      v0 = Win32AllocPool(8LL * v1, 0x6D707352u);
      v1 = 0;
      if ( v0 )
      {
        for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
        {
          v5 = i - 1;
          if ( !BYTE1(i[4].Flink) && !LOBYTE(v5[5].Flink) )
          {
            v6 = v1++;
            *(_QWORD *)(v0 + 8 * v6) = v5;
          }
        }
      }
    }
  }
  qword_1C0254458 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  if ( v1 )
  {
    v7 = (__int64 *)v0;
    v8 = v1;
    do
    {
      if ( !v0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2316LL);
      v9 = *v7;
      v10 = *v7 + 104;
      RIMLockExclusive(v10);
      if ( *(_BYTE *)(v9 + 81) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 71, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
      else
      {
        v11 = v9 + 568;
        RIMLockExclusive(v9 + 568);
        for ( j = *(_QWORD *)(v9 + 424); j; j = *(_QWORD *)(j + 40) )
        {
          if ( *(_BYTE *)(j + 48) == 2 )
          {
            if ( *(_DWORD *)(j + 1344) )
              rimFindMonitorForDigitizerWithQDCData(j, v2, 0LL);
            if ( (*(_DWORD *)(j + 200) & 0x80u) != 0 || *(_DWORD *)(j + 1344) )
              RIMSetDeviceOutputConfig((struct RIMDEV *)j, *(struct tagHID_POINTER_DEVICE_INFO **)(j + 480));
          }
        }
        *(_QWORD *)(v11 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v11, 0LL);
        KeLeaveCriticalRegion();
      }
      *(_QWORD *)(v10 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v10, 0LL);
      KeLeaveCriticalRegion();
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  if ( v0 )
    Win32FreePool(v0);
  result = RIMFreeQDCActivePathsData(v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 72, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  return result;
}
