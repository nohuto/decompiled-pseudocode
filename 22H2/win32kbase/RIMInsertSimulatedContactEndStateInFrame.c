/*
 * XREFs of RIMInsertSimulatedContactEndStateInFrame @ 0x1C01A6DA4
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C017C440 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C017C960 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x1C018C2BC (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x1C018E494 (rimEndAllActiveContactsWorker.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01A894C (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01AB398 (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00665BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C0185FD0 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C01A034C (RIMStoreRawDataInPointerDeviceFrame.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1C01A5F60 (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 *     RIMSetContactEndState @ 0x1C01A7444 (RIMSetContactEndState.c)
 */

void __fastcall RIMInsertSimulatedContactEndStateInFrame(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rdi
  int v11; // eax
  int v12; // r9d
  int v13; // edx
  __int16 v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  int v17; // edx
  int v18; // r8d
  char *v19; // rdi
  void *v20; // [rsp+50h] [rbp-38h] BYREF
  __int64 v21; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+18h] BYREF

  v6 = *(_QWORD *)(a2 + 472);
  v20 = 0LL;
  v22 = 0;
  if ( !*(_QWORD *)(v6 + 784) )
  {
    LODWORD(v21) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1978);
  }
  if ( (*(_DWORD *)(a3 + 32) & 2) == 0 )
  {
    LODWORD(v21) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1980);
  }
  v11 = a6;
  v12 = a5;
  *(_DWORD *)(a3 + 2364) |= 1u;
  RIMSetContactEndState(v6, a3, a4, v12, v11);
  v13 = *(_DWORD *)(v6 + 24);
  v14 = *(_WORD *)(a3 + 2424);
  v21 = 0LL;
  InputTraceLogging::RIM::PopulateContact(a2, v13, v14, (__int64)&v21, a3 + 2424, 2);
  if ( (*(_DWORD *)(a3 + 32) & 4) == 0 )
  {
    v16 = RIMAddSimulatedPointerDeviceData(v15, v6, a3, (int)a3 + 2424, (__int64 *)&v20, (int *)&v22);
    v19 = (char *)v20;
    if ( v16 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v17) = 0;
      }
      if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v17,
          v18,
          (_DWORD)gRimLog,
          4,
          1,
          48,
          (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids,
          v16);
      }
    }
    else
    {
      RIMStoreRawDataInPointerDeviceFrame(a1, a2, (__int64)v20, v22, (_DWORD *)(a3 + 2416));
    }
    if ( v19 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v19);
  }
}
