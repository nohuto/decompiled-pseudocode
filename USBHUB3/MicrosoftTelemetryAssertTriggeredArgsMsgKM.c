void __fastcall MicrosoftTelemetryAssertTriggeredArgsMsgKM(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const char *a4)
{
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  MicrosoftTelemetryAssertTriggeredWorker(retaddr, 1LL, (__int64)"usbhub3.sys", a2, a3, a4);
}
