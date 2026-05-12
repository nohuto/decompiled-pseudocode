/*
 * XREFs of RaCallMiniportUnitControl @ 0x1C001903C
 * Callers:
 *     RaidIsUnitControlSupported @ 0x1C00063A0 (RaidIsUnitControlSupported.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C0013BAC (RaidUnitSendPowerToMiniport.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0014D94 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C00173A4 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C001A740 (RaidBusEnumeratorProcessNewUnit.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C001AAB8 (RaUnitDeregisterFromIdleDetection.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C001D2B8 (RaUnitDeleteDeviceIrp.c)
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C003FD8C (RaidUnitSendPoFxActiveToMiniport.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C003FE18 (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C003FEA4 (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C003FF80 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     RaUnitAdapterRemove @ 0x1C0046CE0 (RaUnitAdapterRemove.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0074290 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C007479C (RaUnitStartDeviceIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0075884 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020190 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaCallMiniportUnitControl(__int64 a1)
{
  unsigned int (__fastcall *v1)(__int64); // rax

  v1 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 200LL);
  if ( v1 )
    return v1(*(_QWORD *)(a1 + 240) + 16LL) != 0 ? 0xC0000001 : 0;
  else
    return 3221225659LL;
}
