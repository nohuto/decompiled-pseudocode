/*
 * XREFs of EtwRegister @ 0x140690D20
 * Callers:
 *     KiIntSteerConnect @ 0x14028FF2C (KiIntSteerConnect.c)
 *     BapdRegisterEtwProvider @ 0x14038069C (BapdRegisterEtwProvider.c)
 *     McGenEventRegister_EtwRegister @ 0x1403895F8 (McGenEventRegister_EtwRegister.c)
 *     IoInitializeLiveDump @ 0x1403A9880 (IoInitializeLiveDump.c)
 *     HvlpEtwRegister @ 0x1405461A4 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 *     DifEtwRegisterWrapper @ 0x1405D4840 (DifEtwRegisterWrapper.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14080F6BC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PopDiagSleepStudyInitialize @ 0x140810194 (PopDiagSleepStudyInitialize.c)
 *     SSHSupportEtwRegister @ 0x1408101DC (SSHSupportEtwRegister.c)
 *     WdipSemEnableSemProvider @ 0x1408320C4 (WdipSemEnableSemProvider.c)
 *     HalpMiscInitializeTelemetry @ 0x140851B78 (HalpMiscInitializeTelemetry.c)
 *     DbgkpStartSystemErrorHandler @ 0x1409377EC (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x1409378F8 (DbgkCaptureLiveDump.c)
 *     FsRtlpDedupChangeRegisterVolume @ 0x14093B9A0 (FsRtlpDedupChangeRegisterVolume.c)
 *     FsRtlpHeatRegisterVolume @ 0x14093CBA8 (FsRtlpHeatRegisterVolume.c)
 *     PfSnBeginBootPhase @ 0x140A859AC (PfSnBeginBootPhase.c)
 *     EtwpInitialize @ 0x140B3CA40 (EtwpInitialize.c)
 *     KseInitialize @ 0x140B3E688 (KseInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 *     SmInitSystem @ 0x140B427B4 (SmInitSystem.c)
 *     PopDiagInitialize @ 0x140B442C4 (PopDiagInitialize.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 *     PopBatteryInitPhaseTwo @ 0x140B4735C (PopBatteryInitPhaseTwo.c)
 *     PnpDiagInitialize @ 0x140B5A9D4 (PnpDiagInitialize.c)
 *     WheapInitializeEventing @ 0x140B63B48 (WheapInitializeEventing.c)
 *     PerfDiagInitialize @ 0x140B6C6B4 (PerfDiagInitialize.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterKMProvider @ 0x140690D64 (EtwpRegisterKMProvider.c)
 */

NTSTATUS __stdcall EtwRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  struct _LIST_ENTRY *Flink; // rcx
  int v5; // edx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r10d
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  Flink = PsGetCurrentServerSiloGlobals()[54].Flink;
  return EtwpRegisterKMProvider((_DWORD)Flink, v8, 3, v5, v6, retaddr, v7);
}
