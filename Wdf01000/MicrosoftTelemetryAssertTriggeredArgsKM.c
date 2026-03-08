/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0086CA0
 * Callers:
 *     ?LogRequestDIrpReason@FxDevicePowerIrpTracker@@QEAAXW4RequestDIrpReason@@E@Z @ 0x1C000A9A8 (-LogRequestDIrpReason@FxDevicePowerIrpTracker@@QEAAXW4RequestDIrpReason@@E@Z.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C007D880 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?StartTrackingDevicePowerIrp@FxDevicePowerIrpTracker@@QEAAXW4RequestDIrpReason@@@Z @ 0x1C008213C (-StartTrackingDevicePowerIrp@FxDevicePowerIrpTracker@@QEAAXW4RequestDIrpReason@@@Z.c)
 *     ?ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00849F0 (-ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0086CD4 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredArgsKM(
        const char *BucketArg1,
        unsigned int BucketArg2,
        unsigned int OriginatingBinary)
{
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  MicrosoftTelemetryAssertTriggeredWorker(retaddr, 1u, "wdf01000.sys", BucketArg2, OriginatingBinary, 0LL);
}
