/*
 * XREFs of ?IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C00B3C90
 * Callers:
 *     RIMCreateDev @ 0x1C0055530 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C014FC98 (RIMVirtCreateDev.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0058C60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CDeviceIdentity::IssueIdentityOnDeviceArrival(
        CDeviceIdentity *this,
        struct RawInputManagerDeviceObject *a2)
{
  struct CDeviceIdentity *v2; // rsi
  int v4; // ebx
  char *v5; // rcx
  PVOID v6; // rcx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  Object = this;
  v2 = gpDeviceIdentity;
  if ( *((_DWORD *)a2 + 18) )
  {
    LODWORD(Object) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 88LL);
  }
  if ( *((_DWORD *)a2 + 19) )
  {
    LODWORD(Object) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 89LL);
  }
  RIMLockExclusive((__int64)v2);
  v4 = *((_DWORD *)v2 + 4);
  *((_DWORD *)v2 + 4) = v4 + 1;
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  *((_DWORD *)a2 + 18) = v4;
  if ( !v4 )
  {
    LODWORD(Object) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 93LL);
  }
  v5 = (char *)*((_QWORD *)a2 + 178);
  if ( v5 )
  {
    Object = 0LL;
    if ( (int)RawInputManagerDeviceObjectResolveHandle(v5, 3u, 1, &Object) >= 0 )
    {
      v6 = Object;
      *((_DWORD *)a2 + 19) = *((_DWORD *)Object + 18);
      ObfDereferenceObject(v6);
    }
  }
  *((_QWORD *)a2 + 10) = lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_::_lambda_invoker_cdecl_;
}
