/*
 * XREFs of EtwRegister @ 0x1407622D0
 * Callers:
 *     KiIntSteerConnect @ 0x140377694 (KiIntSteerConnect.c)
 *     BapdRegisterEtwProvider @ 0x14039AD14 (BapdRegisterEtwProvider.c)
 *     McGenEventRegister_EtwRegister @ 0x1403B6D08 (McGenEventRegister_EtwRegister.c)
 *     IoInitializeLiveDump @ 0x1403CF37C (IoInitializeLiveDump.c)
 *     HvlpEtwRegister @ 0x1404F96A0 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x140582C34 (PsDispatchIumService.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14078CF94 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PopDiagSleepStudyInitialize @ 0x140791A20 (PopDiagSleepStudyInitialize.c)
 *     SSHSupportEtwRegister @ 0x140791A70 (SSHSupportEtwRegister.c)
 *     WdipSemEnableSemProvider @ 0x1407941C8 (WdipSemEnableSemProvider.c)
 *     HalpMiscInitializeTelemetry @ 0x1407C8B90 (HalpMiscInitializeTelemetry.c)
 *     DbgkpStartSystemErrorHandler @ 0x1408878A0 (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x140887D6C (DbgkCaptureLiveDump.c)
 *     PfSnBeginBootPhase @ 0x14099B274 (PfSnBeginBootPhase.c)
 *     KseInitialize @ 0x140A3BCCC (KseInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140A3DF90 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 *     PopDiagInitialize @ 0x140A40148 (PopDiagInitialize.c)
 *     EtwpInitialize @ 0x140A41844 (EtwpInitialize.c)
 *     PerfDiagInitialize @ 0x140A41FEC (PerfDiagInitialize.c)
 *     SmInitSystem @ 0x140A4B43C (SmInitSystem.c)
 *     PnpDiagInitialize @ 0x140A53304 (PnpDiagInitialize.c)
 *     WheapInitializeEventing @ 0x140A62F24 (WheapInitializeEventing.c)
 *     PopBatteryInitPhaseTwo @ 0x140A6F604 (PopBatteryInitPhaseTwo.c)
 *     KitInitialize @ 0x140A71764 (KitInitialize.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterProvider @ 0x140762340 (EtwpRegisterProvider.c)
 */

NTSTATUS __stdcall EtwRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  int v6; // esi
  int v7; // ebp
  __int64 v8; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v6 = (int)EnableCallback;
  v7 = (int)ProviderId;
  v8 = *((_QWORD *)PsGetCurrentServerSiloGlobals((__int64)ProviderId, (__int64)EnableCallback) + 108);
  return EtwpRegisterProvider(v8, v7, 3, v6, (__int64)CallbackContext, retaddr, (__int64)RegHandle);
}
