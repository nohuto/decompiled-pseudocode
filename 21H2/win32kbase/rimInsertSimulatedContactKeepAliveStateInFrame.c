/*
 * XREFs of rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C017B8E4
 * Callers:
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01784C8 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C017C1D8 (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C015B6FC (RIMAddSimulatedPointerDeviceData.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C0171FC0 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1C01772B4 (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 *     rimSetContactKeepAliveState @ 0x1C017CD74 (rimSetContactKeepAliveState.c)
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
  __int64 v17; // rbx
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v20; // [rsp+80h] [rbp+18h] BYREF

  v5 = *(_QWORD *)(a2 + 480);
  v18 = 0LL;
  v20 = 0;
  if ( !*(_QWORD *)(v5 + 736) )
  {
    LODWORD(v19) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1821);
  }
  v10 = *(_DWORD *)(a3 + 32);
  if ( (v10 & 2) == 0 )
  {
    LODWORD(v19) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1822);
    v10 = *(_DWORD *)(a3 + 32);
  }
  if ( (v10 & 4) != 0 )
  {
    LODWORD(v19) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1823);
  }
  v11 = a5;
  *(_DWORD *)(a3 + 2340) |= 1u;
  rimSetContactKeepAliveState(v5, a3, a4, v11);
  v12 = *(_DWORD *)(v5 + 24);
  v13 = *(_WORD *)(a3 + 2400);
  v19 = 0LL;
  InputTraceLogging::RIM::PopulateContact(a2, v12, v13, (__int64)&v19, a3 + 2400, 1);
  v15 = RIMAddSimulatedPointerDeviceData(v14, v5, a3, (int)a3 + 2400, &v18, &v20);
  v17 = v18;
  if ( v15 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v16, 1, 47, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids, v15);
    }
  }
  else
  {
    RIMStoreRawDataInPointerDeviceFrame(a1, a2, v18, v20, (_DWORD *)(a3 + 2392));
  }
  if ( v17 )
    Win32FreePool(v17);
}
