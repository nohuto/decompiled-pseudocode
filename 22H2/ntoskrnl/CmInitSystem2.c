/*
 * XREFs of CmInitSystem2 @ 0x140B3CD68
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B532AC (Phase1InitializationIoReady.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     MmLockRegistryRecoverySections @ 0x14061A8F8 (MmLockRegistryRecoverySections.c)
 *     CmpMachineHiveListInitialize @ 0x1408108F8 (CmpMachineHiveListInitialize.c)
 *     CmpRegisterTraceLoggingProvider @ 0x140812368 (CmpRegisterTraceLoggingProvider.c)
 *     IoCreateDriver @ 0x140812780 (IoCreateDriver.c)
 *     CmFcInitSystem3 @ 0x140B38984 (CmFcInitSystem3.c)
 */

char CmInitSystem2()
{
  int v0; // eax
  __int128 v2; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&v2 = 2097182LL;
  *((_QWORD *)&v2 + 1) = L"\\Driver\\WscVReg";
  CmpRegisterTraceLoggingProvider();
  CmFcInitSystem3();
  v0 = IoCreateDriver(&v2, (__int64 (__fastcall *)(void **, _QWORD))VRegSetup);
  if ( v0 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v0, 0LL, 0LL);
  if ( CmBugcheckRecoveryEnabled )
    MmLockRegistryRecoverySections();
  return CmpMachineHiveListInitialize();
}
