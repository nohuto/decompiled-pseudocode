/*
 * XREFs of RIMReleasePointerDeviceInfo @ 0x1C015F418
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C00BBA6C (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimDestroyDeadzone @ 0x1C015B5FC (rimDestroyDeadzone.c)
 *     RIMAssignPreparsedData @ 0x1C015BAEC (RIMAssignPreparsedData.c)
 *     RIMFreePointerDevice @ 0x1C015D6F4 (RIMFreePointerDevice.c)
 */

void __fastcall RIMReleasePointerDeviceInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v5; // eax
  int v6; // edx
  __int64 v7; // rcx

  v2 = *(_QWORD *)(a2 + 480);
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2756);
  v5 = RIMAssignPreparsedData(*(_QWORD *)(a2 + 464), a2, v2);
  if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 3;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v6, 1, 38, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids, v5);
  }
  if ( *(_DWORD *)(v2 + 24) == 5 )
  {
    v7 = *(_QWORD *)(a1 + 856);
    if ( v7 )
    {
      Win32FreePool(v7);
      *(_QWORD *)(a1 + 856) = 0LL;
    }
    rimDestroyDeadzone();
  }
  RIMFreePointerDevice(a1, v2);
  *(_QWORD *)(a2 + 480) = 0LL;
}
