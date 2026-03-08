/*
 * XREFs of PipInitializeCoreDriversAndElam @ 0x140B57734
 * Callers:
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeCheckedKernelInitialize @ 0x140B14B50 (KeCheckedKernelInitialize.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140B57190 (PipInitializeEarlyLaunchDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140B5780C (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeDriverDependentDLLs @ 0x140B579BC (PipInitializeDriverDependentDLLs.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140B594E8 (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     VslConnectSwInterrupt @ 0x140B6F5B0 (VslConnectSwInterrupt.c)
 *     KeInitAmd64SpecificState @ 0x140B6F644 (KeInitAmd64SpecificState.c)
 *     VslRegisterBootDrivers @ 0x140B6F694 (VslRegisterBootDrivers.c)
 */

__int64 __fastcall PipInitializeCoreDriversAndElam(UNICODE_STRING *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  PipInitializeDriverDependentDLLs(0LL, a1);
  PipInitializeCoreDriversByGroup(0LL, a1);
  PspPicoRegistrationDisabled = 1;
  qword_140C02590 = (__int64)off_140C020E8;
  qword_140C02598 = 8LL;
  KeInitAmd64SpecificState();
  if ( KeHotpatchTestMode )
    KeCheckedKernelInitialize();
  PspPicoProviderRanges = 0LL;
  memset(&PsKernelRangeList, 0, 0x130uLL);
  *(_OWORD *)&PspKernelRanges = 0LL;
  VslRegisterBootDrivers();
  VslConnectSwInterrupt(0LL, 0LL);
  PipInitializeEarlyLaunchDrivers(a1, v2);
  PnpBootDriverCallbackRegistrationClosed = 1;
  PnpNotifyEarlyLaunchStatusUpdate(0LL);
  PipInitializeDriverDependentDLLs(1LL, a1);
  PipInitializeCoreDriversByGroup(1LL, a1);
  result = PipInitializeCoreDriversByGroup(2LL, a1);
  PnpCoreDriverGroupLoadPhase = 3;
  return result;
}
