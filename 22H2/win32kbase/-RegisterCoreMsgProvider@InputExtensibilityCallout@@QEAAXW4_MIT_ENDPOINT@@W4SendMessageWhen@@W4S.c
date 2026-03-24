/*
 * XREFs of ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C008B98C
 * Callers:
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x1C008B810 (-Initialize@CCursorClip@@SAJXZ.c)
 *     ?Initialize@CDeviceIdentity@@SAJXZ @ 0x1C008B884 (-Initialize@CDeviceIdentity@@SAJXZ.c)
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1C008B8DC (-Initialize@CInputConfig@@SAJXZ.c)
 *     RegisterCoreMsgProviderPreferences @ 0x1C008B960 (RegisterCoreMsgProviderPreferences.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::RegisterCoreMsgProvider(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  InputExtensibilityCallout *v6; // rdi
  __int64 v9; // rsi
  __int128 v10; // [rsp+20h] [rbp-48h]

  v6 = gpInputExtensibilityCallout;
  v9 = 5LL * a2;
  if ( *((_QWORD *)gpInputExtensibilityCallout + 5 * a2 + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 318LL);
  RIMLockExclusive((__int64)v6 + 8);
  *((_DWORD *)v6 + 2 * v9 + 10) = a3;
  if ( (a4 != 0) != (a6 != 0) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 328LL);
  LODWORD(v10) = a4;
  *((_QWORD *)&v10 + 1) = a6;
  *(_OWORD *)((char *)v6 + 8 * v9 + 48) = v10;
  *((_QWORD *)v6 + v9 + 8) = a5;
  *((_QWORD *)v6 + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v6 + 8, 0LL);
  KeLeaveCriticalRegion();
}
