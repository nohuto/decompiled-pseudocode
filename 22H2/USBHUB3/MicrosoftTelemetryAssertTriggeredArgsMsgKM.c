/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1C0041B74
 * Callers:
 *     HUBSM_LogUnhandledEvent @ 0x1C000A75C (HUBSM_LogUnhandledEvent.c)
 *     HUBFDO_EvtDeviceD0Entry @ 0x1C000D220 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBPSM20_CheckingIfPortErrorShouldBeTreatedAsConnect @ 0x1C0012B40 (HUBPSM20_CheckingIfPortErrorShouldBeTreatedAsConnect.c)
 *     TUNNEL_EvtInterfaceChange @ 0x1C008CD30 (TUNNEL_EvtInterfaceChange.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0041514 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredArgsMsgKM(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const char *a4)
{
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  MicrosoftTelemetryAssertTriggeredWorker(retaddr, 1LL, (__int64)"usbhub3.sys", a2, a3, a4);
}
