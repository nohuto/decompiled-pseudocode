/*
 * XREFs of rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C01B1008
 * Callers:
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01ADA80 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01B198C (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C018F340 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C01A6D30 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1C01ACA2C (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 *     rimSetContactKeepAliveState @ 0x1C01B2848 (rimSetContactKeepAliveState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimInsertSimulatedContactKeepAliveStateInFrame(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // rbp
  int v10; // eax
  __int64 v11; // r9
  int v12; // edx
  __int16 v13; // r8
  __int64 v14; // rcx
  int v15; // eax
  int v16; // edx
  int v17; // r8d
  char *v18; // rbx
  __int64 v19; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v20; // [rsp+88h] [rbp+10h] BYREF
  void *v21; // [rsp+90h] [rbp+18h] BYREF

  v5 = *(_QWORD *)(a2 + 472);
  v21 = 0LL;
  v20 = 0;
  if ( !*(_QWORD *)(v5 + 784) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v10 = *(_DWORD *)(a3 + 32);
  if ( (v10 & 2) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v10 = *(_DWORD *)(a3 + 32);
  }
  if ( (v10 & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v11 = a5;
  *(_DWORD *)(a3 + 2340) |= 1u;
  rimSetContactKeepAliveState(v5, a3, a4, v11);
  v12 = *(_DWORD *)(v5 + 24);
  v13 = *(_WORD *)(a3 + 2400);
  v19 = 0LL;
  InputTraceLogging::RIM::PopulateContact(a2, v12, v13, (__int64)&v19, a3 + 2400, 1);
  v15 = RIMAddSimulatedPointerDeviceData(v14, v5, a3, (int)a3 + 2400, (__int64 *)&v21, &v20);
  v18 = (char *)v21;
  if ( v15 < 0 )
  {
    LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        v17,
        (_DWORD)gRimLog,
        4,
        1,
        47,
        (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids,
        v15);
    }
  }
  else
  {
    RIMStoreRawDataInPointerDeviceFrame(a1, a2, (__int64)v21, v20, (_DWORD *)(a3 + 2392));
  }
  if ( v18 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v18);
}
